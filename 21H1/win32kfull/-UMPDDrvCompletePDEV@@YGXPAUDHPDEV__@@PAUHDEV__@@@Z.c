/*
 * XREFs of ?UMPDDrvCompletePDEV@@YGXPAUDHPDEV__@@PAUHDEV__@@@Z @ 0x20B197
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

void __stdcall UMPDDrvCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  UMPDOBJ *v2; // [esp+8h] [ebp-24h] BYREF
  _DWORD Src[7]; // [esp+Ch] [ebp-20h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v2);
  memset(Src, 0, sizeof(Src));
  if ( v2 )
  {
    Src[0] = 28;
    Src[1] = 1;
    Src[4] = *(_DWORD *)v2;
    Src[6] = (_DWORD)a2[3];
    Src[5] = a1;
    UMPDOBJ::Thunk(v2, Src, 0x1Cu, 0, 0);
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v2);
}
