/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140735334
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140672910 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140672A48 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140734F60 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14097D4B0 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140635220 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
