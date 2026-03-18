/*
 * XREFs of ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778
 * Callers:
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     ?SizeOfDib@@YGKPAUtagBITMAPINFOHEADER@@@Z @ 0x181F69 (-SizeOfDib@@YGKPAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 *     ?xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z @ 0x182097 (-xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z.c)
 *     __ConvertMemHandle@8 @ 0x182DD4 (__ConvertMemHandle@8.c)
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 */

void *__fastcall xxxGetDummyDib(int a1, _DWORD *a2)
{
  int ClipboardData; // esi
  struct tagCLIP *ClipFormat; // eax
  void *result; // eax
  struct tagCLIP *v7; // eax
  struct XEPALOBJ *v8; // eax
  int v9; // esi
  struct tagBITMAPINFOHEADER *v10; // eax
  unsigned int v11; // eax
  struct tagCLIP *v12; // eax
  struct tagCLIP *v13; // ebx
  int v14; // eax
  unsigned int v15; // [esp+0h] [ebp-10h]
  unsigned int v16; // [esp+0h] [ebp-10h]
  HPALETTE v17; // [esp+0h] [ebp-10h]
  unsigned int v18; // [esp+0h] [ebp-10h]
  unsigned int v19; // [esp+4h] [ebp-Ch]
  unsigned int v20; // [esp+4h] [ebp-Ch]
  unsigned int *v21; // [esp+4h] [ebp-Ch]
  unsigned int v22; // [esp+4h] [ebp-Ch]
  int v23; // [esp+Ch] [ebp-4h]
  struct tagBITMAPINFOHEADER *v24; // [esp+Ch] [ebp-4h]

  ClipboardData = 0;
  v23 = 0;
  if ( (*(_BYTE *)(_gpsi + 6248) & 1) != 0 )
  {
    ClipboardData = xxxGetClipboardData(a1, a2);
    v23 = ClipboardData;
    if ( !ClipboardData )
      return 0;
  }
  ClipFormat = FindClipFormat(17, a1, (struct tagWINDOWSTATION *)1, v15, v19);
  if ( ClipFormat )
  {
    if ( *((_DWORD *)ClipFormat + 1) != 2 )
    {
      result = (void *)xxxGetClipboardData(a1, a2);
      if ( result )
      {
        *a2 = 17;
        a2[2] = ClipboardData;
        return result;
      }
    }
  }
  v7 = FindClipFormat(2, a1, (struct tagWINDOWSTATION *)1, v16, v20);
  if ( !v7 )
    return 0;
  if ( *((_DWORD *)v7 + 1) == 2 )
    return 0;
  v8 = (struct XEPALOBJ *)xxxGetClipboardData(a1, a2);
  if ( !v8 )
    return 0;
  v9 = 0;
  v10 = xxxBMPtoDIB(v23, v8, 0, v17, v21);
  v24 = v10;
  if ( v10 )
  {
    v11 = SizeOfDib(v10);
    v9 = _ConvertMemHandle(v24, v11);
    Win32FreePool(v24);
    if ( v9 )
    {
      v12 = FindClipFormat(8, a1, (struct tagWINDOWSTATION *)1, v18, v22);
      v13 = v12;
      if ( v12 )
      {
        UT_FreeCBFormat(v12);
        *((_DWORD *)v13 + 1) = v9;
        *a2 = 8;
      }
      else
      {
        v14 = HMValidateHandleNoRip(v9, 6);
        if ( v14 )
          HMUnlockDestroyObject(v14);
        return 0;
      }
    }
  }
  return (void *)v9;
}
