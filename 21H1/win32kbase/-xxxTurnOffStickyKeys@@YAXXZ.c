/*
 * XREFs of ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C018B770
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0012D90 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0143384 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0189E70 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C018B2B0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C018B8C0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01CF630 (ApiSetEditionPostAccessibility.c)
 */

void xxxTurnOffStickyKeys(void)
{
  unsigned int v0; // edx
  _BOOL8 (__fastcall **i)(struct tagKE *, __int64, unsigned int); // rax

  v0 = 0;
  for ( i = (_BOOL8 (__fastcall **)(struct tagKE *, __int64, unsigned int))off_1C020C600; ; ++i )
  {
    ++v0;
    if ( *i == xxxStickyKeys )
      break;
    if ( v0 >= 5 )
      return;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, v0);
  dword_1C0251BC4 &= ~1u;
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibility(1LL);
}
