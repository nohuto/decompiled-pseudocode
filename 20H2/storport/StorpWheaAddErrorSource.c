/*
 * XREFs of StorpWheaAddErrorSource @ 0x1C007B0D4
 * Callers:
 *     DllInitialize @ 0x1C004C300 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 StorpWheaAddErrorSource()
{
  xmmword_1C0069094 = g_StorpSourceGuid;
  return WheaAddErrorSourceDeviceDriverV1(0LL, &g_StorpWheaConfiguration, 1LL, 1124LL);
}
