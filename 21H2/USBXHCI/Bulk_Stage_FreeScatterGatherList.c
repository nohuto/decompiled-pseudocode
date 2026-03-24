/*
 * XREFs of Bulk_Stage_FreeScatterGatherList @ 0x1C000DBA8
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_CompleteTransfers @ 0x1C000C2F0 (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C004445C (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     TR_SendCompleteStageRequest @ 0x1C003F64C (TR_SendCompleteStageRequest.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C004F3D0 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 */

void __fastcall Bulk_Stage_FreeScatterGatherList(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  KIRQL v6; // si
  __int64 v7; // r8

  if ( *(_BYTE *)(a1 + 280) )
  {
    if ( *(_DWORD *)(a2 + 160) )
    {
      TR_SendCompleteStageRequest(a1);
      SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 128);
    }
  }
  else if ( *(_QWORD *)(a2 + 56) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    v6 = KfRaiseIrql(2u);
    LOBYTE(v7) = (*(_BYTE *)(v4 + 32) & 1) == 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v5 + 8) + 96LL))(v5, *(_QWORD *)(a2 + 56), v7);
    KeLowerIrql(v6);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
}
