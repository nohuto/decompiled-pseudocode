/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C0101DB0
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C0102144 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  int v7; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  HDC v15; // r15
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v18; // rdi
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // eax
  int DCDpiScaleValue; // eax

  v7 = 0;
  EnterCrit(0LL, 1LL);
  if ( a4 >= 0x5D )
  {
    UserSetLastError(87LL, v10, v11);
  }
  else
  {
    v15 = (HDC)PrepareHDCBITSBitmap(a1);
    if ( v15 )
    {
      DpiForSystem = GetDpiForSystem(v13);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v18 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v19) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v18 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
      }
      v20 = OemBitmapInfoForDpi[2];
      if ( v18 )
        v21 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v20,
                OemBitmapInfoForDpi[3],
                v15,
                *v18,
                v18[1],
                v18[2],
                v18[3],
                a5,
                0,
                0);
      else
        v21 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                v20,
                OemBitmapInfoForDpi[3],
                v15,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v7 = v21;
    }
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14);
  return v7;
}
