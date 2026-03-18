/*
 * XREFs of PspThreadFromTicket @ 0x1405E0120
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x140204498 (PsIsThreadInSilo.c)
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x1405E0210 (PspReferenceCidTableEntry.c)
 */

__int64 __fastcall PspThreadFromTicket(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  _DWORD *v8; // r9
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  __int64 v10; // rsi
  bool v11; // zf
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp+8h]

  v2 = a2;
  CurrentThread = KeGetCurrentThread();
  v14 = PspWorkOnBehalfEncodingKey ^ *a1;
  --CurrentThread->SpecialApcDisable;
  LOBYTE(a2) = 6;
  v6 = PspReferenceCidTableEntry((int)v14, a2);
  if ( v6 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v10 = (__int64)CurrentServerSilo;
    if ( (*(_DWORD *)(v6 + 1296) & 2) != 0 )
    {
      if ( PsIsThreadInSilo(v6, (__int64)CurrentServerSilo) )
        goto LABEL_4;
LABEL_16:
      HalPutDmaAdapter((PADAPTER_OBJECT)v6);
      v6 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v13, 0);
    if ( (*(_QWORD *)(v6 + 1280) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(v6 + 1280);
    if ( (*(_DWORD *)(v6 + 1296) & 2) == 0 || !PsIsThreadInSilo(v6, v10) )
      goto LABEL_16;
  }
LABEL_4:
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5, v4, v7, v8);
  if ( !v6 )
    return 3221225483LL;
  *v2 = v6;
  if ( *(_DWORD *)(v6 + 1072) == HIDWORD(v14) )
    return 0LL;
  HalPutDmaAdapter((PADAPTER_OBJECT)v6);
  return 3221226021LL;
}
