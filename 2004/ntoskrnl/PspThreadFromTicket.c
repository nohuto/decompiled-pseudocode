/*
 * XREFs of PspThreadFromTicket @ 0x140666420
 * Callers:
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     PsIsThreadInSilo @ 0x14027D7A8 (PsIsThreadInSilo.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x140666510 (PspReferenceCidTableEntry.c)
 */

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v7; // rsi
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp+8h]

  v2 = a2;
  CurrentThread = KeGetCurrentThread();
  v11 = PspWorkOnBehalfEncodingKey ^ *a1;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(a2) = 6;
  v5 = PspReferenceCidTableEntry((int)v11, a2);
  if ( v5 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v7 = CurrentServerSilo;
    if ( (*(_DWORD *)(v5 + 1296) & 2) != 0 )
    {
      if ( PsIsThreadInSilo(v5, CurrentServerSilo) )
        goto LABEL_4;
LABEL_16:
      HalPutDmaAdapter((PADAPTER_OBJECT)v5);
      v5 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v5 + 1280) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v5 + 1280));
    if ( (*(_DWORD *)(v5 + 1296) & 2) == 0 || !PsIsThreadInSilo(v5, v7) )
      goto LABEL_16;
  }
LABEL_4:
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( !v5 )
    return 3221225483LL;
  *v2 = v5;
  if ( *(_DWORD *)(v5 + 1072) == HIDWORD(v11) )
    return 0LL;
  HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  return 3221226021LL;
}
