/*
 * XREFs of McTemplateK0pqq_EtwWriteTransfer @ 0x1C0035C20
 * Callers:
 *     StorPortNotification @ 0x1C000D230 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x1C003699C (RaidpLinkDown.c)
 *     StorPortPause @ 0x1C0038350 (StorPortPause.c)
 *     StorPortAdapterActiveCondition @ 0x1C003EB20 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterDirectedPowerDownCompletion @ 0x1C003EC90 (StorPortAdapterDirectedPowerDownCompletion.c)
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C003ED44 (StorPortAdapterDirectedPowerDownRequestD3.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C003F090 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x1C003F15C (StorPortAdapterDirectedPowerUpRequestD0.c)
 *     StorPortAdapterIdleCondition @ 0x1C003F260 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C003F4D0 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C003F780 (StorPortAdapterPowerNotRequiredStep2.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1C003FAB4 (StorPortAdapterPowerRequiredStep2.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0003E98 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 4u, &v4);
}
