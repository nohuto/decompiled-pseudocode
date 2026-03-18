/*
 * XREFs of ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EF44
 * Callers:
 *     xxxGetClipboardData @ 0x1C0016DFC (xxxGetClipboardData.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00161A0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     xxxGetClipboardData @ 0x1C0016DFC (xxxGetClipboardData.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01517B8 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     CreateDIBPalette @ 0x1C021F2B8 (CreateDIBPalette.c)
 */

__int64 __fastcall xxxGetDummyPalette(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  unsigned int v2; // ebx
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v6; // rax
  void *ClipboardData; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  struct tagCLIP *v10; // rdi
  __int64 DIBPalette; // rbx

  v2 = 17;
  ClipFormat = FindClipFormat(a1, 0x11u, 1);
  if ( ClipFormat )
  {
    if ( *((_QWORD *)ClipFormat + 1) == 2LL )
    {
      v2 = 8;
      v6 = FindClipFormat(a1, 8u, 1);
      if ( !v6 || *((_QWORD *)v6 + 1) == 2LL )
        return 0LL;
    }
  }
  ClipboardData = xxxGetClipboardData(a1, v2, (__int64)a2);
  if ( !ClipboardData )
    return 0LL;
  v8 = HMValidateHandle((unsigned __int64)ClipboardData, 6u);
  if ( !v8 )
    return 0LL;
  v9 = v8 + 20;
  v10 = FindClipFormat(a1, 9u, 1);
  if ( !v10 )
    return 0LL;
  DIBPalette = CreateDIBPalette(v9, *(unsigned int *)(v9 + 32));
  if ( DIBPalette )
  {
    UT_FreeCBFormat(v10);
    *((_QWORD *)v10 + 1) = DIBPalette;
    GreSetPaletteOwner(DIBPalette, 0LL);
  }
  return DIBPalette;
}
