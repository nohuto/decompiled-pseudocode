/*
 * XREFs of _UMPDDrvDeleteDeviceBitmap@8 @ 0x210152
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

void __stdcall UMPDDrvDeleteDeviceBitmap(int a1, int a2)
{
  UMPDOBJ *v2; // [esp+8h] [ebp-24h] BYREF
  _DWORD Src[7]; // [esp+Ch] [ebp-20h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v2);
  if ( v2 )
  {
    Src[0] = 28;
    Src[2] = 0;
    Src[3] = 0;
    Src[1] = 11;
    Src[4] = *(_DWORD *)v2;
    Src[5] = a1;
    Src[6] = a2;
    UMPDOBJ::Thunk(v2, Src, 0x1Cu, 0, 0);
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v2);
}
