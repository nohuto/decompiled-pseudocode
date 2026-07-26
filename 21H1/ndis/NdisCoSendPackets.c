/*
 * XREFs of NdisCoSendPackets @ 0x1C00BBDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisCoSendPackets(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 264))();
}
