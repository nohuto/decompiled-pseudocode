/*
 * XREFs of PspThreadFromTicket @ 0x14063B1E0
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14023F168 (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1403217D4 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x14063B300 (PspReferenceCidTableEntry.c)
 */

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rsi
  bool v7; // zf
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp+8h]

  v2 = a2;
  CurrentThread = KeGetCurrentThread();
  v10 = PspWorkOnBehalfEncodingKey ^ *a1;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(a2) = 6;
  v5 = PspReferenceCidTableEntry((int)v10, a2);
  if ( v5 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*(_DWORD *)(v5 + 1296) & 2) == 0 )
    {
      _InterlockedOr(v9, 0);
      if ( (*(_QWORD *)(v5 + 1280) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v5 + 1280));
      if ( (*(_DWORD *)(v5 + 1296) & 2) == 0 )
        goto LABEL_7;
    }
    if ( !PsIsProcessInSilo(*(struct _KPROCESS **)(v5 + 544), CurrentServerSilo) )
    {
LABEL_7:
      HalPutDmaAdapter((PADAPTER_OBJECT)v5);
      v5 = 0LL;
    }
  }
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return 3221225483LL;
  *v2 = v5;
  if ( *(_DWORD *)(v5 + 1072) == HIDWORD(v10) )
    return 0LL;
  HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  return 3221226021LL;
}
