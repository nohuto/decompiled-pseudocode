/*
 * XREFs of ?xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x1829A7
 * Callers:
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 *     _CreateDIBPalette@8 @ 0x182CEE (_CreateDIBPalette@8.c)
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 */

int __fastcall xxxGetDummyPalette(int a1, int a2)
{
  struct tagCLIP *ClipFormat; // eax
  struct tagCLIP *v5; // eax
  int ClipboardData; // eax
  int v7; // eax
  int v8; // esi
  struct tagCLIP *v9; // edi
  int DIBPalette; // esi
  unsigned int v12; // [esp+0h] [ebp-Ch]
  unsigned int v13; // [esp+0h] [ebp-Ch]
  unsigned int v14; // [esp+4h] [ebp-8h]
  unsigned int v15; // [esp+4h] [ebp-8h]

  ClipFormat = FindClipFormat(17, a1, (struct tagWINDOWSTATION *)1, v12, v14);
  if ( ClipFormat )
  {
    if ( *((_DWORD *)ClipFormat + 1) == 2 )
    {
      v5 = FindClipFormat(8, a1, (struct tagWINDOWSTATION *)1, v13, v15);
      if ( !v5 || *((_DWORD *)v5 + 1) == 2 )
        return 0;
    }
  }
  ClipboardData = xxxGetClipboardData(a1, a2);
  if ( !ClipboardData )
    return 0;
  v7 = HMValidateHandle(ClipboardData, 6);
  if ( !v7 )
    return 0;
  v8 = v7 + 12;
  v9 = FindClipFormat(9, a1, (struct tagWINDOWSTATION *)1, v13, v15);
  if ( !v9 )
    return 0;
  DIBPalette = CreateDIBPalette(v8, *(_DWORD *)(v8 + 32));
  if ( DIBPalette )
  {
    UT_FreeCBFormat(v9);
    *((_DWORD *)v9 + 1) = DIBPalette;
    GreSetPaletteOwner(DIBPalette, 0);
  }
  return DIBPalette;
}
