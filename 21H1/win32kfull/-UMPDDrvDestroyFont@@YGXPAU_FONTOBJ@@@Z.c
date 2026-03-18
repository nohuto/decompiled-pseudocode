/*
 * XREFs of ?UMPDDrvDestroyFont@@YGXPAU_FONTOBJ@@@Z @ 0x20B40E
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z @ 0x1F4429 (-pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

void __stdcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  UMPDOBJ *v1; // esi
  UMPDOBJ *v2; // [esp+Ch] [ebp-28h] BYREF
  int v3; // [esp+10h] [ebp-24h] BYREF
  _DWORD Src[7]; // [esp+14h] [ebp-20h] BYREF

  v3 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v2);
  v1 = v2;
  memset(Src, 0, sizeof(Src));
  if ( v2 )
  {
    if ( a1 )
    {
      Src[0] = 28;
      Src[1] = 43;
      Src[4] = *(_DWORD *)v2;
      Src[5] = a1[1].ulStyleSize;
      Src[6] = a1;
      if ( UMPDOBJ::pfo(v2, (struct _FONTOBJ **)&Src[6]) )
        UMPDOBJ::Thunk(v1, Src, 0x1Cu, &v3, (char *)4);
    }
  }
  v3 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v2);
}
