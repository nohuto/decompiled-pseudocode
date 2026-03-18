/*
 * XREFs of MiDereferenceExtendInfo @ 0x1402583CC
 * Callers:
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  void *v3; // rbp
  unsigned int SessionId; // r15d
  struct _KTHREAD *v7; // rdi
  char *p_Process; // rbx
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // r9d
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  SessionId = -1;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v3 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&BugCheckParameter2);
  v7 = KeGetCurrentThread();
  if ( (unsigned __int64)&BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v7->ApcState.Process);
  _disable();
  p_Process = (char *)&v7[1].Process;
  v9 = (unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  v10 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v9
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    ++v10;
    p_Process += 96;
    if ( v10 >= 6 )
      goto LABEL_24;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v9, 0x7FFFFFFFFFFFFFFCLL);
      _disable();
    }
    v11 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    v7->AbEntrySummary |= 1 << p_Process[16];
    _enable();
    if ( v11 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v7, (__int64)&BugCheckParameter2, v11);
    goto LABEL_17;
  }
LABEL_24:
  if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
  _enable();
LABEL_17:
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
