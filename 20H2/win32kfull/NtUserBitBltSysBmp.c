/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C00FE520
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C00FE8B4 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  int v7; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  HDC v13; // r15
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v16; // rdi
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // eax
  int DCDpiScaleValue; // eax

  v7 = 0;
  EnterCrit(0LL, 1LL);
  if ( a4 >= 0x5D )
  {
    UserSetLastError(87LL, v10, v11);
  }
  else
  {
    v13 = (HDC)PrepareHDCBITSBitmap(a1);
    if ( v13 )
    {
      DpiForSystem = GetDpiForSystem(v12);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v16 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v16 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
      }
      v18 = OemBitmapInfoForDpi[2];
      if ( v16 )
        v19 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v18,
                OemBitmapInfoForDpi[3],
                v13,
                *v16,
                v16[1],
                v16[2],
                v16[3],
                a5,
                0,
                0);
      else
        v19 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                v18,
                OemBitmapInfoForDpi[3],
                v13,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v7 = v19;
    }
  }
  UserSessionSwitchLeaveCrit(v12);
  return v7;
}
