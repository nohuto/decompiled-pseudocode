/*
 * XREFs of StorpWheaAddErrorSource @ 0x1C0079CB4
 * Callers:
 *     DllInitialize @ 0x1C004ADE0 (DllInitialize.c)
 * Callees:
 *     <none>
 */

__int64 StorpWheaAddErrorSource()
{
  xmmword_1C0068094 = g_StorpSourceGuid;
  return WheaAddErrorSourceDeviceDriverV1(0LL, &g_StorpWheaConfiguration, 1LL, 1124LL);
}
