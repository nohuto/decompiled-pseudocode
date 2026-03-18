/*
 * XREFs of ?UMPDDrvEnableDriver@@YGHPAGPAPAX@Z @ 0x20B946
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YGPAU_LDEV@@PAGW4_LDEVTYPE@@@Z @ 0x21107D (-UMPD_ldevLoadDriver@@YGPAU_LDEV@@PAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QAEHPAPAG@Z @ 0x20AAA2 (-ThunkStringW@UMPDOBJ@@QAEHPAPAG@Z.c)
 */

BOOL __fastcall UMPDDrvEnableDriver(int a1, void *a2)
{
  UMPDOBJ *v3; // esi
  BOOL v4; // esi
  UMPDOBJ *v7; // [esp+10h] [ebp-20h] BYREF
  _DWORD Src[6]; // [esp+14h] [ebp-1Ch] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v7);
  v3 = v7;
  memset(Src, 0, sizeof(Src));
  v4 = 0;
  if ( v7 )
  {
    if ( a1 )
    {
      Src[0] = 24;
      Src[1] = 105;
      Src[4] = *(_DWORD *)v7;
      Src[5] = a1;
      if ( UMPDOBJ::ThunkStringW(v7, (unsigned __int16 **)&Src[5]) )
      {
        if ( UMPDOBJ::Thunk(v3, Src, 0x18u, a2, (char *)4) != -1 )
          v4 = 1;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v7);
  return v4;
}
