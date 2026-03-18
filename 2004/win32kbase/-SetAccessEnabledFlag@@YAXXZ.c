/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C002EFE0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C002DD30 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C013CC24 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013CEC4 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013D034 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013D1C4 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0184170 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (xmmword_1C024BBCC & 1) != 0
    || (xmmword_1C024BBCC & 4) != 0
    || (dword_1C024BBC4 & 1) != 0
    || (dword_1C024BBC4 & 4) != 0
    || (dword_1C024BB7C & 4) != 0
    || (dword_1C024BBA4 & 1) != 0
    || (dword_1C024BBA4 & 4) != 0
    || (dword_1C024BB8C & 1) != 0
    || (dword_1C024BB8C & 4) != 0
    || (dword_1C024EE24 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v0 = gdwPUDFlags | 0x100;
  }
  else
  {
    v0 = gdwPUDFlags & 0xFFFFFEFF;
  }
  gdwPUDFlags = v0;
}
