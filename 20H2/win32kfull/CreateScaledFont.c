/*
 * XREFs of CreateScaledFont @ 0x1C01E9BB0
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C0034A40 (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01E98AC (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E99D8 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GetCharDimensions @ 0x1C0024BC8 (GetCharDimensions.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x1C008F8E0 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall CreateScaledFont(HBRUSH a1, __int64 *a2, __int64 a3, INT a4, _DWORD *a5, _DWORD *a6, __int64 a7)
{
  unsigned int v10; // edi
  __int64 FontIndirectW; // rax
  int CharDimensions; // eax
  INT a[24]; // [rsp+20h] [rbp-A8h] BYREF

  memset(a, 0, 0x5CuLL);
  *a2 = 0LL;
  v10 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, (char *)a) )
  {
    a[0] = EngMulDiv(a[0], a4, 96);
    a[1] = EngMulDiv(a[1], a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)a, 0x88u);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v10 = 1;
      if ( a5 || a6 || a7 )
      {
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
        CharDimensions = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL), a7, a6);
        if ( a5 )
          *a5 = CharDimensions;
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
      }
    }
  }
  return v10;
}
