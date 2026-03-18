/*
 * XREFs of _UMPDEngFreeUserMem@4 @ 0x2101C6
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

BOOL __stdcall UMPDEngFreeUserMem(int a1)
{
  BOOL v1; // esi
  int v3; // [esp+Ch] [ebp-2Ch] BYREF
  UMPDOBJ *v4; // [esp+10h] [ebp-28h] BYREF
  _DWORD Src[8]; // [esp+14h] [ebp-24h] BYREF

  v1 = 0;
  v3 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  memset(Src, 0, sizeof(Src));
  if ( v4 )
  {
    if ( *((_DWORD *)v4 + 58) )
    {
      Src[0] = 32;
      Src[1] = 120;
      Src[4] = *(_DWORD *)v4;
      Src[5] = a1;
      Src[6] = 0;
      Src[7] = 0;
      if ( UMPDOBJ::Thunk(v4, Src, 0x20u, &v3, (char *)4) != -1 )
        v1 = v3 != 0;
    }
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v4);
  return v1;
}
