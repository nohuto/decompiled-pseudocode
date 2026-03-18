/*
 * XREFs of ?UMPDDrvResetPDEV@@YGHPAUDHPDEV__@@0@Z @ 0x20E47C
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

BOOL __stdcall UMPDDrvResetPDEV(struct DHPDEV__ *a1, struct DHPDEV__ *a2)
{
  BOOL v2; // esi
  UMPDOBJ *v4; // [esp+10h] [ebp-28h] BYREF
  int v5; // [esp+14h] [ebp-24h] BYREF
  _DWORD Src[7]; // [esp+18h] [ebp-20h] BYREF

  v2 = 0;
  v5 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  memset(Src, 0, sizeof(Src));
  if ( v4 )
  {
    Src[0] = 28;
    Src[1] = 7;
    Src[4] = *(_DWORD *)v4;
    Src[6] = a2;
    Src[5] = a1;
    if ( UMPDOBJ::Thunk(v4, Src, 0x1Cu, &v5, (char *)4) != -1 )
      v2 = v5 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v4);
  return v2;
}
