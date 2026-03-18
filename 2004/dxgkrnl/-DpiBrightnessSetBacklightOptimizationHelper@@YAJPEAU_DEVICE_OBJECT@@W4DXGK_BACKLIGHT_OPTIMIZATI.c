/*
 * XREFs of ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02D1284
 * Callers:
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02CFB5C (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02D0E60 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 * Callees:
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C02D1684 (DpiCallDrvSetBacklightOptimizationLevel.c)
 */

__int64 __fastcall DpiBrightnessSetBacklightOptimizationHelper(struct _DEVICE_OBJECT *a1, unsigned int a2)
{
  _WORD *DeviceExtension; // rbx
  char *v4; // rdx
  __int64 result; // rax

  DeviceExtension = a1->DeviceExtension;
  v4 = 0LL;
  if ( DeviceExtension[2369] == 2 )
    v4 = (char *)(DeviceExtension + 2368);
  if ( !v4 )
    return 3221225659LL;
  if ( !*((_QWORD *)v4 + 9) || a2 == *((_DWORD *)DeviceExtension + 1091) )
    return 0LL;
  result = DpiCallDrvSetBacklightOptimizationLevel(a1, v4, a2);
  if ( (int)result >= 0 )
    *((_DWORD *)DeviceExtension + 1091) = a2;
  return result;
}
