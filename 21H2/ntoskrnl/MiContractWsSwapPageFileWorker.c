/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x1405B7340
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MiWsSwapPageFileNumber @ 0x14025FF00 (MiWsSwapPageFileNumber.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiQueuePageFileExtension @ 0x14059CE7C (MiQueuePageFileExtension.c)
 */

void __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // r14
  struct _KTHREAD *v8; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v11; // edx
  int v12; // r9d
  bool v13; // zf
  _QWORD v14[12]; // [rsp+38h] [rbp-29h] BYREF

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 16736);
  memset(v14, 0, 0x58uLL);
  v14[3] = a1;
  v14[4] = -1LL;
  v6 = *(_BYTE *)(v5 + 204);
  v14[5] = 0x10000LL;
  BYTE4(v14[9]) = v6 & 0xF;
  v14[8] = &v14[7];
  v14[7] = &v14[7];
  LOWORD(v14[6]) = 0;
  BYTE2(v14[6]) = 6;
  HIDWORD(v14[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  v7 = a1 + 1152;
  ExAcquirePushLockExclusiveEx(a1 + 1152, 0LL);
  MiQueuePageFileExtension((__int64)v14, 1, 0x11u);
  KeWaitForSingleObject(&v14[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1152), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1152);
  v8 = KeGetCurrentThread();
  if ( (unsigned __int64)(v7 - qword_140C50630) >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
  _disable();
  p_Process = (__int64)&v8[1].Process;
  v11 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v7 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v11;
    p_Process += 96LL;
    if ( v11 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_12:
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, a1 + 1152, SessionId, 0LL);
    _enable();
    goto LABEL_20;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v12 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v8->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v12 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v8, a1 + 1152, v12);
LABEL_20:
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  _InterlockedExchange((volatile __int32 *)(a1 + 1144), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 176));
}
