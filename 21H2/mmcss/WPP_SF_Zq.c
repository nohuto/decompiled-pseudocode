/*
 * XREFs of WPP_SF_Zq @ 0x1C0004878
 * Callers:
 *     CiDispatchInitialize @ 0x1C000D270 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00033D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0f75fd9923be30bc1807a9ff104f69db_Traceguids);
}
