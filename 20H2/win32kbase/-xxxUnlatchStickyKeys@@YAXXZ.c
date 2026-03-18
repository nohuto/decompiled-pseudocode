/*
 * XREFs of ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C0183610
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C0183680 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01C7330 (ApiSetEditionPostAccessibility.c)
 */

void xxxUnlatchStickyKeys(void)
{
  unsigned int v0; // edx
  _BOOL8 (__fastcall **i)(struct tagKE *, __int64, unsigned int); // rax
  bool v2; // zf

  if ( gLatchBits )
  {
    v0 = 0;
    for ( i = (_BOOL8 (__fastcall **)(struct tagKE *, __int64, unsigned int))off_1C02045F0; ; ++i )
    {
      ++v0;
      if ( *i == xxxStickyKeys )
        break;
      if ( v0 >= 5 )
        return;
    }
    xxxUpdateModifierState((unsigned __int8)gLockBits, v0);
    v2 = gLatchBits == 0;
    gLatchBits = 0;
    if ( !v2 )
      ApiSetEditionPostAccessibility(1LL);
  }
}
