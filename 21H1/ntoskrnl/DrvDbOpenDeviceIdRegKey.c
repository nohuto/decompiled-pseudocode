/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140712838
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406B0898 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbDispatchDeviceId @ 0x1406B1010 (DrvDbDispatchDeviceId.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140712464 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140978A40 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406ADA5C (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
