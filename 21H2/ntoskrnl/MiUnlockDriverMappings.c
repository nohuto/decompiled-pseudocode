/*
 * XREFs of MiUnlockDriverMappings @ 0x1402DC188
 * Callers:
 *     MiReleaseDriverPtes @ 0x14076200C (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x1407621C0 (MiReserveDriverPtes.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockDriverMappings(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // r9d
  __int64 result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F4E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F4E0);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4F4E0 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&CurrentThread[1].Process;
  v5 = (unsigned __int64)&qword_140C4F4E0 & 0x7FFFFFFFFFFFFFFCLL;
  v6 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v5
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v6 = (unsigned int)(v6 + 1);
    p_Process += 96;
    if ( (unsigned int)v6 >= 6 )
      goto LABEL_19;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v6, v5);
      _disable();
    }
    v7 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    result = (unsigned __int8)p_Process[16];
    CurrentThread->AbEntrySummary |= 1 << result;
    _enable();
    if ( v7 )
      result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&qword_140C4F4E0, v7);
    goto LABEL_15;
  }
LABEL_19:
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C4F4E0, SessionId, 0LL);
  _enable();
LABEL_15:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
