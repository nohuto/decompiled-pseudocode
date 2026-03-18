/*
 * XREFs of NtGdiHfontCreate @ 0x1C00ED4E0
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x1C008FEE0 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

struct HOBJ__ *__fastcall NtGdiHfontCreate(char *Src, size_t Size, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  _DWORD Srca[108]; // [rsp+30h] [rbp-1D8h] BYREF

  v6 = (unsigned int)Size;
  if ( !Src || (unsigned int)(Size - 1) > 0x1A3 )
    return 0LL;
  memset(Srca, 0, 0x1A4uLL);
  if ( &Src[v6] < Src || (unsigned __int64)&Src[v6] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Srca, Src, (unsigned int)v6);
  Srca[88] = 0;
  return hfontCreate((WCHAR *)Srca, a3, 0, a5, 0);
}
