/*
 * XREFs of ?MNDrawHilite@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0xB66E6
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?MNInitDrawItemStruct@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagDRAWITEMSTRUCT@@@Z @ 0xB65B6 (-MNInitDrawItemStruct@@YGXPAUHDC__@@IABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagDRAWI.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     ?MNIsCachedBmpOnly@@YGHPAUtagITEM@@@Z @ 0x1A90AB (-MNIsCachedBmpOnly@@YGHPAUtagITEM@@@Z.c)
 */

BOOL __fastcall MNDrawHilite(int a1, int a2)
{
  int v3; // eax
  _DWORD *v5; // ecx
  struct tagITEM *v6; // [esp+0h] [ebp-4h]

  v3 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  if ( (v3 & 0x80u) == 0 || (v3 & 0xC0000000) != 0 )
    return 0;
  v5 = *(_DWORD **)(a1 + 8);
  if ( !v5 )
    v5 = **(_DWORD ***)a1;
  return MNIsUAHMenu(v5) || !MNIsCachedBmpOnly(v6);
}
