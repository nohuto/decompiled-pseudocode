/*
 * XREFs of ?UMPDDrvDriverFn@@YGHPAXPAH@Z @ 0x20B8CA
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YGPAU_LDEV@@PAGW4_LDEVTYPE@@@Z @ 0x21107D (-UMPD_ldevLoadDriver@@YGPAU_LDEV@@PAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

BOOL __fastcall UMPDDrvDriverFn(int a1, void *a2)
{
  BOOL v4; // ebx
  UMPDOBJ *v6; // [esp+10h] [ebp-20h] BYREF
  _DWORD Src[6]; // [esp+14h] [ebp-1Ch] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  memset(Src, 0, sizeof(Src));
  if ( v6 )
  {
    Src[0] = 24;
    Src[1] = 108;
    Src[4] = *(_DWORD *)v6;
    Src[5] = a1;
    v4 = UMPDOBJ::Thunk(v6, Src, 0x18u, a2, (char *)0x1A0) != -1;
  }
  else
  {
    v4 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v6);
  return v4;
}
