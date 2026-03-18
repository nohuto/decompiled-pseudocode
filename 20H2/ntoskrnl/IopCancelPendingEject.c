/*
 * XREFs of IopCancelPendingEject @ 0x1408B53A8
 * Callers:
 *     PnpProcessRelation @ 0x1407403AC (PnpProcessRelation.c)
 * Callees:
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x140318CD0 (IoCancelIrp.c)
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
