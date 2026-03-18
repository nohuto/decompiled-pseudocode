/*
 * XREFs of _AtmDrvFontManagementRedirector@28 @ 0x1FCF46
 * Callers:
 *     _GreNamedEscape@24 @ 0x206C75 (_GreNamedEscape@24.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _UmfdFontManagement@28 @ 0x24A78E (_UmfdFontManagement@28.c)
 */

int __stdcall AtmDrvFontManagementRedirector(unsigned int a1, unsigned int a2, int *a3, unsigned int a4, void *a5)
{
  int v5; // esi
  int v7; // eax

  v5 = 0;
  if ( a1 == 8 )
  {
    v7 = *a3;
    if ( *a3 == 8 || v7 == 256 || (unsigned int)(v7 - 9473) <= 0x13 )
      return 1;
  }
  else if ( a1 == 256 || a1 > 0x2500 && a1 < 0x2515 )
  {
    UmfdHostLifeTimeManager::EnsureUmfdHost();
    return UmfdFontManagement(0, 0, a1, a2, a3, a4, a5);
  }
  return v5;
}
