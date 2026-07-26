/*
 * XREFs of NdisSendPackets @ 0x1C006C600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisSendPackets(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 168))();
}
