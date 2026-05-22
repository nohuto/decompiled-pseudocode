/*
 * XREFs of ?IsPointerDevice@@YAHPEBUDeviceInfo@@@Z @ 0x180148F4C
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801206B0 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180136420 (-Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPointerDevice(const struct DeviceInfo *a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return (*((_BYTE *)a1 + 4) & 0x3B) != 0;
  return result;
}
