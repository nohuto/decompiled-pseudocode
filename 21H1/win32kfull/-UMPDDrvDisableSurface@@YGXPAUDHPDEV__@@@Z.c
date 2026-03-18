/*
 * XREFs of ?UMPDDrvDisableSurface@@YGXPAUDHPDEV__@@@Z @ 0x20B53B
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

void __stdcall UMPDDrvDisableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v1; // [esp+8h] [ebp-20h] BYREF
  _DWORD Src[6]; // [esp+Ch] [ebp-1Ch] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v1);
  memset(Src, 0, sizeof(Src));
  if ( v1 )
  {
    Src[0] = 24;
    Src[1] = 4;
    Src[4] = *(_DWORD *)v1;
    Src[5] = a1;
    UMPDOBJ::Thunk(v1, Src, 0x18u, 0, 0);
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v1);
}
