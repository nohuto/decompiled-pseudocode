/*
 * XREFs of AlpcpTransferQuotaMessage @ 0x14064B150
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x140647758 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PsTransferProcessQuotaToSharedQuota @ 0x14038A094 (PsTransferProcessQuotaToSharedQuota.c)
 */

void __fastcall AlpcpTransferQuotaMessage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  PVOID v4; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 && (*(_DWORD *)(a1 + 40) & 0x400) == 0 && !*(_QWORD *)(a1 + 96) )
  {
    v3 = 792LL;
    if ( *(_QWORD *)(a1 + 224) )
      v3 = *(_QWORD *)(a1 + 232) + 792LL;
    *(_QWORD *)(a1 + 48) = PsTransferProcessQuotaToSharedQuota(v2, v3);
    ObfDereferenceObjectWithTag(v4, 0x63706C41u);
    *(_DWORD *)(a1 + 40) |= 0x400u;
  }
}
