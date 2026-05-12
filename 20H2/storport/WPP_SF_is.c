/*
 * XREFs of WPP_SF_is @ 0x1C003D644
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C0039270 (StorPortGetDeviceBase.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_is(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx

  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(a5 + v5) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_42621249f2c9312d441c8bf8760aa631_Traceguids);
}
