/*
 * XREFs of ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED
 * Callers:
 *     _xxxEmptyClipboard@4 @ 0xACB3A (_xxxEmptyClipboard@4.c)
 *     ?InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z @ 0x181B81 (-InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z.c)
 *     ?xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x18264B (-xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778 (-xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x1829A7 (-xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?IsMetaDummyHandle@@YGHPAX@Z @ 0x181CFC (-IsMetaDummyHandle@@YGHPAX@Z.c)
 *     ?UT_GetFormatType@@YGHPAUtagCLIP@@@Z @ 0x182055 (-UT_GetFormatType@@YGHPAUtagCLIP@@@Z.c)
 */

void __thiscall UT_FreeCBFormat(_DWORD *this)
{
  void *v1; // esi
  int FormatType; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  bool v7; // zf
  int v8; // eax
  struct tagCLIP *v9; // [esp+0h] [ebp-4h]

  v1 = (void *)this[1];
  if ( !v1 )
    return;
  FormatType = UT_GetFormatType(v9);
  if ( !FormatType )
  {
    v7 = *(_DWORD *)(v3 + 8) == 0;
LABEL_13:
    if ( !v7 )
    {
      v8 = HMValidateHandleNoSecure((unsigned int)v1, 6);
      if ( v8 )
        HMUnlockDestroyObject(v8);
    }
    return;
  }
  v4 = FormatType - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 && !IsMetaDummyHandle(v1) )
        GreDeleteServerMetaFile(v6);
      return;
    }
    if ( v1 == (void *)1 )
      return;
    v7 = v1 == (void *)2;
    goto LABEL_13;
  }
  if ( v1 != (void *)2 )
    GreDeleteObject(v1);
}
