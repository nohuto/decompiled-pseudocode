/*
 * XREFs of ?UMPDDrvEnableSurface@@YGPAUHSURF__@@PAUDHPDEV__@@@Z @ 0x20BFD4
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vClient@UMPDOBJ@@QAEXPAX@Z @ 0x1F46FC (-vClient@UMPDOBJ@@QAEXPAX@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

int __stdcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v1; // edi
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  UMPDOBJ *v6; // ecx
  int v7; // esi
  int v9; // [esp+Ch] [ebp-24h] BYREF
  UMPDOBJ *v10; // [esp+10h] [ebp-20h] BYREF
  _DWORD Src[6]; // [esp+14h] [ebp-1Ch] BYREF

  v9 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v10);
  memset(Src, 0, sizeof(Src));
  v1 = v10;
  if ( v10 )
  {
    Src[0] = 24;
    Src[1] = 3;
    Src[4] = *(_DWORD *)v10;
    Src[5] = a1;
    v2 = UMPDOBJ::Thunk(v10, Src, 0x18u, &v9, (char *)4);
    v4 = v2 != -1 ? v9 : 0;
    if ( v4 )
    {
      LOBYTE(v3) = 5;
      v5 = HmgShareLockCheck(v2 != -1 ? v9 : 0, v3);
      v7 = v5;
      if ( v5 )
      {
        if ( *(_WORD *)(v5 + 64) == 1 )
          v4 = (unsigned __int8)((*(_BYTE *)(v5 + 72) & 0x29) - 41) == 0 ? v4 : 0;
        if ( *((_DWORD *)v1 + 58) )
          UMPDOBJ::vClient(v6, (_DWORD *)(v5 + 16));
      }
      else
      {
        v4 = 0;
      }
      if ( v7 )
        DEC_SHARE_REF_CNT(v7);
    }
  }
  else
  {
    v4 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v10);
  return v4;
}
