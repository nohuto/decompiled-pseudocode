/*
 * XREFs of ?xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x18264B
 * Callers:
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 *     ?xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z @ 0x182318 (-xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z.c)
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 */

int __fastcall xxxGetDummyBitmap(int a1, _DWORD *a2)
{
  int v2; // esi
  struct tagCLIP *ClipFormat; // eax
  int v6; // edx
  struct tagCLIP *v8; // eax
  int v9; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagCLIP *v12; // eax
  struct tagCLIP *v13; // ebx
  unsigned int v14; // [esp+0h] [ebp-20h]
  unsigned int v15; // [esp+0h] [ebp-20h]
  HPALETTE v16; // [esp+0h] [ebp-20h]
  unsigned int v17; // [esp+0h] [ebp-20h]
  unsigned int v18; // [esp+4h] [ebp-1Ch]
  unsigned int v19; // [esp+4h] [ebp-1Ch]
  unsigned int v20; // [esp+4h] [ebp-1Ch]
  unsigned int v21; // [esp+4h] [ebp-1Ch]
  _DWORD v22[3]; // [esp+10h] [ebp-10h] BYREF
  int ClipboardData; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  ClipboardData = 0;
  v22[2] = 0;
  if ( (*(_BYTE *)(_gpsi + 6248) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, a2);
  ClipFormat = FindClipFormat(17, a1, (struct tagWINDOWSTATION *)1, v14, v18);
  if ( ClipFormat )
  {
    if ( *((_DWORD *)ClipFormat + 1) != 2 )
    {
      v2 = xxxGetClipboardData(a1, a2);
      if ( v2 )
      {
        v6 = ClipboardData;
        *a2 = 17;
        a2[2] = v6;
        return v2;
      }
    }
  }
  v8 = FindClipFormat(8, a1, (struct tagWINDOWSTATION *)1, v15, v19);
  if ( v8 && *((_DWORD *)v8 + 1) != 2 )
    v2 = xxxGetClipboardData(a1, a2);
  if ( v2 )
  {
    v9 = HMValidateHandleNoRip(v2, 6);
    if ( v9 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v22[0] = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = v22;
      v22[1] = v9;
      HMLockObject(v9);
      v2 = xxxDIBtoBMP(ClipboardData, v9 + 12, *(struct tagBITMAPINFOHEADER **)(v9 + 8), v16, v20);
      if ( v2 )
      {
        v12 = FindClipFormat(2, a1, (struct tagWINDOWSTATION *)1, v17, v21);
        v13 = v12;
        if ( v12 )
        {
          UT_FreeCBFormat(v12);
          *((_DWORD *)v13 + 1) = v2;
          GreSetBitmapOwner(v2, 0);
          *a2 = 2;
        }
        else
        {
          GreDeleteObject(v2);
          v2 = 0;
        }
      }
      ThreadUnlock1();
      return v2;
    }
  }
  return 0;
}
