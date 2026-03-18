/*
 * XREFs of _DwmGetClassStyle@4 @ 0xA4714
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 */

int __thiscall DwmGetClassStyle(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v6; // esi
  _DWORD *v7; // eax

  v2 = this[19];
  v3 = this[22];
  v4 = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 8);
  if ( v3 )
  {
    v6 = 0;
    v7 = MNLookUpItem(v3, 0xF060u, 0, 0);
    if ( !v7 && (v7 = MNLookUpItem(this[22], 0x8060u, 0, 0)) == 0 && (v7 = MNLookUpItem(this[22], 0xC070u, 0, 0)) == 0
      || (*(_BYTE *)(*v7 + 4) & 3) != 0 )
    {
      v6 = 512;
    }
    return v6 | v4;
  }
  return v4;
}
