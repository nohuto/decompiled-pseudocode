/*
 * XREFs of ?UMPDDrvGetGlyphMode@@YGKPAUDHPDEV__@@PAU_FONTOBJ@@@Z @ 0x20C8C7
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z @ 0x1F4429 (-pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

int __stdcall UMPDDrvGetGlyphMode(struct DHPDEV__ *a1, struct _FONTOBJ *a2)
{
  UMPDOBJ *v2; // esi
  int v3; // esi
  UMPDOBJ *v5; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+14h] [ebp-24h] BYREF
  _DWORD Src[7]; // [esp+18h] [ebp-20h] BYREF

  v6 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v2 = v5;
  memset(Src, 0, sizeof(Src));
  if ( v5
    && (Src[0] = 28,
        Src[1] = 37,
        Src[4] = *(_DWORD *)v5,
        Src[6] = a2,
        Src[5] = a1,
        UMPDOBJ::pfo(v5, (struct _FONTOBJ **)&Src[6]))
    && UMPDOBJ::Thunk(v2, Src, 0x1Cu, &v6, (char *)4) != -1 )
  {
    v3 = v6;
  }
  else
  {
    v3 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v5);
  return v3;
}
