/*
 * XREFs of GreGetScaledLogPixels @ 0x1C00C6E80
 * Callers:
 *     DxgkEngGetWindowGdiDpiScalingFactor @ 0x1C014BD30 (DxgkEngGetWindowGdiDpiScalingFactor.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall GreGetScaledLogPixels(unsigned __int16 a1)
{
  if ( gbUseActualGDIScale )
    return a1;
  else
    return 96 * (((unsigned int)a1 + 95) / 0x60);
}
