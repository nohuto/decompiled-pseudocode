/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C008DC50
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C008C770 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C013A8D4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013AB74 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013ACE4 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013AE74 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0181C30 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (xmmword_1C0249BCC & 1) != 0
    || (xmmword_1C0249BCC & 4) != 0
    || (dword_1C0249BC4 & 1) != 0
    || (dword_1C0249BC4 & 4) != 0
    || (dword_1C0249B7C & 4) != 0
    || (dword_1C0249BA4 & 1) != 0
    || (dword_1C0249BA4 & 4) != 0
    || (dword_1C0249B8C & 1) != 0
    || (dword_1C0249B8C & 4) != 0
    || (dword_1C024CE24 & 1) != 0
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
