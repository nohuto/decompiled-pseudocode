/*
 * XREFs of _NtUserBitBltSysBmp@20 @ 0x15FB34
 * Callers:
 *     <none>
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 *     _GreGetDCDpiScaleValue@4 @ 0x91320 (_GreGetDCDpiScaleValue@4.c)
 *     _PrepareHDCBITSBitmap@4 @ 0xC37BA (_PrepareHDCBITSBitmap@4.c)
 */

DC *__stdcall NtUserBitBltSysBmp(HDC a1, int a2, struct XDCOBJ *a3, unsigned int a4, int a5)
{
  DC *v5; // ebx
  int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // esi
  __int16 *v8; // edi
  int DCDpiScaleValue; // eax
  DC *v10; // eax
  HDC v12; // [esp+8h] [ebp-8h]
  __int16 *v13; // [esp+Ch] [ebp-4h]

  v5 = 0;
  EnterCrit(0, 1);
  if ( a4 < 0x5D )
  {
    v12 = (HDC)PrepareHDCBITSBitmap(a1);
    if ( v12 )
    {
      DpiForSystem = GetDpiForSystem();
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v8 = 0;
      v13 = 0;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
        {
          v8 = (__int16 *)GetOemBitmapInfoForDpi(a4, 96 * DCDpiScaleValue);
          v13 = v8;
        }
      }
      if ( v8 )
        v10 = (DC *)GreStretchBltInternal(
                      a1,
                      a2,
                      a3,
                      OemBitmapInfoForDpi[2],
                      OemBitmapInfoForDpi[3],
                      v12,
                      *v13,
                      (struct XDCOBJ *)v8[1],
                      v8[2],
                      v8[3],
                      a5,
                      0,
                      0);
      else
        v10 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                OemBitmapInfoForDpi[2],
                OemBitmapInfoForDpi[3],
                v12,
                (struct ECLIPOBJ *)*OemBitmapInfoForDpi,
                (struct ECLIPOBJ *)OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v5 = v10;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
