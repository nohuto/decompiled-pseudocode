/*
 * XREFs of ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889
 * Callers:
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     ?DIBtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUtagBITMAPINFOHEADER@@K@Z @ 0x18194A (-DIBtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?SizeOfDib@@YGKPAUtagBITMAPINFOHEADER@@@Z @ 0x181F69 (-SizeOfDib@@YGKPAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 *     ?xxxBMPtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUHBITMAP__@@PAUHPALETTE__@@@Z @ 0x1822DF (-xxxBMPtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUHBITMAP__@@PAUHPALETTE__@@@Z.c)
 *     __ConvertMemHandle@8 @ 0x182DD4 (__ConvertMemHandle@8.c)
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 */

void *__fastcall xxxGetDummyDibV5(int a1, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v4; // esi
  struct tagCLIP *ClipFormat; // eax
  int ClipboardData; // eax
  int v7; // eax
  struct BITMAPV5HEADER *v8; // edi
  struct tagCLIP *v9; // eax
  int v10; // edx
  void *result; // eax
  unsigned int v12; // eax
  struct tagCLIP *v13; // eax
  struct tagCLIP *v14; // edi
  int v15; // eax
  unsigned int v16; // [esp+0h] [ebp-18h]
  unsigned int v17; // [esp+0h] [ebp-18h]
  unsigned int v18; // [esp+4h] [ebp-14h]
  unsigned int v19; // [esp+4h] [ebp-14h]
  struct XEPALOBJ *v20; // [esp+10h] [ebp-8h]

  v2 = a2;
  v4 = 0;
  ClipFormat = FindClipFormat(8, a1, (struct tagWINDOWSTATION *)1, v16, v18);
  if ( ClipFormat )
  {
    if ( *((_DWORD *)ClipFormat + 1) != 2 )
    {
      ClipboardData = xxxGetClipboardData(a1, v2);
      if ( ClipboardData )
      {
        v7 = HMValidateHandleNoRip(ClipboardData, 6);
        if ( v7 )
        {
          v8 = DIBtoDIBV5(v7 + 12, *(_DWORD *)(v7 + 8));
          if ( v8 )
            goto LABEL_13;
          v2 = a2;
        }
      }
    }
  }
  v9 = FindClipFormat(2, a1, (struct tagWINDOWSTATION *)1, v17, v19);
  if ( !v9 )
    return (void *)v4;
  if ( *((_DWORD *)v9 + 1) == 2 )
    return (void *)v4;
  v20 = (struct XEPALOBJ *)xxxGetClipboardData(a1, v2);
  if ( !v20 )
    return (void *)v4;
  v10 = 0;
  if ( (*(_BYTE *)(_gpsi + 6248) & 1) == 0 || (result = (void *)xxxGetClipboardData(a1, v2), (v10 = (int)result) != 0) )
  {
    v8 = xxxBMPtoDIBV5(v20, v10);
    if ( v8 )
    {
LABEL_13:
      v12 = SizeOfDib(v8);
      v4 = _ConvertMemHandle(v8, v12);
      Win32FreePool(v8);
      if ( v4 )
      {
        v13 = FindClipFormat(17, a1, (struct tagWINDOWSTATION *)1, v17, v19);
        v14 = v13;
        if ( v13 )
        {
          UT_FreeCBFormat(v13);
          *((_DWORD *)v14 + 1) = v4;
          *a2 = 17;
        }
        else
        {
          v15 = HMValidateHandleNoRip(v4, 6);
          if ( v15 )
            HMUnlockDestroyObject(v15);
          return 0;
        }
      }
      return (void *)v4;
    }
    return (void *)v4;
  }
  return result;
}
