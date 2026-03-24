/*
 * XREFs of IopCancelPendingEject @ 0x1408B2978
 * Callers:
 *     PnpProcessRelation @ 0x1407374AC (PnpProcessRelation.c)
 * Callees:
 *     IoCancelIrp @ 0x1402BB2C0 (IoCancelIrp.c)
 *     IoFreeIrp @ 0x140353540 (IoFreeIrp.c)
 */

void __fastcall IopCancelPendingEject(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) && !_InterlockedExchange((volatile __int32 *)(a1 + 80), 1) )
  {
    IoCancelIrp(*(PIRP *)(a1 + 72));
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 80), 2) == 3 )
      IoFreeIrp(*(PIRP *)(a1 + 72));
  }
}
