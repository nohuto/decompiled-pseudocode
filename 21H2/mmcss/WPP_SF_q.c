/*
 * XREFs of WPP_SF_q @ 0x1C00046E8
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000C640 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00031A0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f2567f649f8e330a8ddb4ba7f0878bc2_Traceguids,
           14LL,
           (__int64 *)va,
           8LL,
           0LL);
}
