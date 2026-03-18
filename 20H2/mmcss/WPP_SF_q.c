/*
 * XREFs of WPP_SF_q @ 0x1C00046A8
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000C300 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003170 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0f75fd9923be30bc1807a9ff104f69db_Traceguids,
           14LL,
           (__int64 *)va,
           8LL,
           0LL);
}
