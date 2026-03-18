/*
 * XREFs of ?GetCLIPOBJPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU_CLIPOBJ@@@Z @ 0x1F3AFC
 * Callers:
 *     _NtGdiCLIPOBJ_ppoGetPath@4 @ 0x2173A4 (_NtGdiCLIPOBJ_ppoGetPath@4.c)
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ @ 0x1CCB24 (-ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU1@@Z @ 0x1F37D6 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU1@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 */

struct _CLIPOBJ *__thiscall UMPDOBJ::GetCLIPOBJPath(UMPDOBJ *this, struct _CLIPOBJ *a2)
{
  XCLIPOBJ *v3; // eax
  struct _CLIPOBJ *v4; // esi

  if ( *((_DWORD *)this + 33) )
    return 0;
  v3 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(this, (int)a2);
  v4 = v3 ? (struct _CLIPOBJ *)XCLIPOBJ::ppoGetPath(v3) : 0;
  a2 = v4;
  if ( !v4 )
    return 0;
  if ( !UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 128), (void **)&a2, 8u, 0) )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)v4);
    Win32FreePool((PATHOBJ *)v4);
    return 0;
  }
  return a2;
}
