/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EBEC
 * Callers:
 *     xxxGetClipboardData @ 0x1C0016DFC (xxxGetClipboardData.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00161A0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     xxxGetClipboardData @ 0x1C0016DFC (xxxGetClipboardData.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01517B8 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C021EA68 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

void *__fastcall xxxGetDummyBitmap(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  void *v2; // rbx
  void *ClipboardData; // rbp
  struct tagCLIP *ClipFormat; // rax
  void *result; // rax
  struct tagCLIP *v8; // rax
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  struct tagCLIP *v15; // rax
  struct tagCLIP *v16; // rsi
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  ClipboardData = 0LL;
  v17[2] = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9u, (__int64)a2);
  ClipFormat = FindClipFormat(a1, 0x11u, 1);
  if ( ClipFormat
    && *((_QWORD *)ClipFormat + 1) != 2LL
    && (result = xxxGetClipboardData(a1, 0x11u, (__int64)a2), (v2 = result) != 0LL) )
  {
    *(_DWORD *)a2 = 17;
    *((_QWORD *)a2 + 1) = ClipboardData;
  }
  else
  {
    v8 = FindClipFormat(a1, 8u, 1);
    if ( v8 && *((_QWORD *)v8 + 1) != 2LL )
      v2 = xxxGetClipboardData(a1, 8u, (__int64)a2);
    if ( v2 && (v9 = HMValidateHandleNoRip((__int64)v2, 6)) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v17;
      v17[1] = v9;
      HMLockObject(v9);
      v13 = xxxDIBtoBMP((const struct tagBITMAPINFO *)(v9 + 20), (__int64)ClipboardData, *(_DWORD *)(v9 + 16));
      if ( v13 )
      {
        v15 = FindClipFormat(a1, 2u, 1);
        v16 = v15;
        if ( v15 )
        {
          UT_FreeCBFormat(v15);
          *((_QWORD *)v16 + 1) = v13;
          GreSetBitmapOwner(v13, 0LL);
          *(_DWORD *)a2 = 2;
        }
        else
        {
          GreDeleteObject(v13);
          v13 = 0LL;
        }
      }
      ThreadUnlock1(v12, v11, v14);
      return (void *)v13;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
