/*
 * XREFs of MiCommitPageTableRangesForVad @ 0x1405A44FC
 * Callers:
 *     MiInsertChildVads @ 0x140980DD8 (MiInsertChildVads.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiCommitPageTablesForVad @ 0x1407BDB60 (MiCommitPageTablesForVad.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCommitPageTableRangesForVad(__int64 a1)
{
  _QWORD *v1; // rdi
  int v3; // r14d
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // rsi
  ULONG_PTR v7; // rsi
  _QWORD *v8; // r12
  unsigned __int64 v9; // r14
  _QWORD *v10; // r15
  int v11; // eax
  struct _KTHREAD *v12; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v15; // edx
  int v16; // r9d
  int v18; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD **)(a1 + 8);
  v18 = 0;
  v3 = 0;
  if ( !v1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)(a1 + 16) = 1LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  do
  {
    v8 = (_QWORD *)*v1;
    if ( v3 >= 0 )
    {
      v9 = 0LL;
      if ( v1[1] )
      {
        v10 = v1 + 2;
        do
        {
          v11 = MiCommitPageTablesForVad(a1, *v10 & 0xFFFFFFFFFFE00000uLL);
          v18 = v11;
          if ( v11 < 0 )
            break;
          ++v9;
          ++v10;
        }
        while ( v9 < v1[1] );
        v3 = v11;
      }
      else
      {
        v3 = v18;
      }
    }
    ExFreePoolWithTag(v1, 0);
    v1 = v8;
  }
  while ( v8 );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  v12 = KeGetCurrentThread();
  if ( v7 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
  _disable();
  p_Process = (__int64)&v12[1].Process;
  v15 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v7 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v15;
    p_Process += 96LL;
    if ( v15 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_23:
    if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v12, v7, SessionId, 0LL);
    _enable();
    goto LABEL_31;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v16 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v12->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v16 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v12, v7, v16);
LABEL_31:
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  *(_QWORD *)(a1 + 16) = -2LL;
  return (unsigned int)v3;
}
