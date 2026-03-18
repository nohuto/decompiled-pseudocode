/*
 * XREFs of MiReleaseSessionVa @ 0x14025A408
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x14026E218 (MiMakeSystemRangeAvailable.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseSessionVa(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  struct _KTHREAD *v7; // rsi
  unsigned int SessionId; // ecx
  char *p_Process; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r9d
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64)(a1 - qword_140C4F608) >> 21;
  v5 = CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[25];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 752, 0LL);
  RtlClearBitsEx(v5 + 760, v3, a2);
  if ( v3 < *(_QWORD *)(v5 + 776) )
    *(_QWORD *)(v5 + 776) = v3;
  *(_DWORD *)(v5 + 800) -= a2;
  v6 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 752;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  v7 = KeGetCurrentThread();
  if ( v6 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v7->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (char *)&v7[1].Process;
  v10 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  v11 = 0LL;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v10
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != SessionId )
  {
    v11 = (unsigned int)(v11 + 1);
    p_Process += 96;
    if ( (unsigned int)v11 >= 6 )
      goto LABEL_21;
  }
  p_Process[18] = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process, v11, v10);
      _disable();
    }
    v12 = *((_DWORD *)p_Process + 22);
    *((_DWORD *)p_Process + 22) = 0;
    p_Process[17] = 0;
    *(_QWORD *)p_Process = 0LL;
    result = (unsigned __int8)p_Process[16];
    v7->AbEntrySummary |= 1 << result;
    _enable();
    if ( v12 )
      result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v7, v6, v12);
    goto LABEL_17;
  }
LABEL_21:
  result = *((unsigned int *)&v7->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, SessionId, 0LL);
  _enable();
LABEL_17:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
