/*
 * XREFs of UserSetAltScaleFont @ 0x1C0026F48
 * Callers:
 *     SetIconMetrics @ 0x1C00237E0 (SetIconMetrics.c)
 *     xxxSetNCFonts @ 0x1C0024488 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D642C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C008F8E0 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall UserSetAltScaleFont(HBRUSH a1, __int64 *a2)
{
  int ObjectW; // eax
  unsigned int v5; // ebx
  __int64 FontIndirectW; // rax
  INT a[24]; // [rsp+20h] [rbp-78h] BYREF

  memset(a, 0, 0x5CuLL);
  ObjectW = GreExtGetObjectW(a1);
  v5 = 0;
  if ( !ObjectW )
    return 0LL;
  a[0] = EngMulDiv(a[0], 96, *(unsigned __int16 *)(gpsi + 6998LL));
  a[1] = EngMulDiv(a[1], 96, *(unsigned __int16 *)(gpsi + 6998LL));
  FontIndirectW = GreCreateFontIndirectW(a, 136LL);
  *a2 = FontIndirectW;
  LOBYTE(v5) = FontIndirectW != 0;
  return v5;
}
