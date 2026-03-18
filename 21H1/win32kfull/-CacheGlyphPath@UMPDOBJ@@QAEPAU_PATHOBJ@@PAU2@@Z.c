/*
 * XREFs of ?CacheGlyphPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU2@@Z @ 0x1F3934
 * Callers:
 *     _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF (_NtGdiFONTOBJ_cGetGlyphs@20.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 */

struct _PATHOBJ *__thiscall UMPDOBJ::CacheGlyphPath(UMPDOBJ *this, struct _PATHOBJ *a2)
{
  struct _PATHOBJ *v2; // esi
  struct _PATHOBJ *v3; // edx
  struct _PATHOBJ *result; // eax
  int v5; // eax

  v2 = (struct _PATHOBJ *)*((_DWORD *)this + 35);
  if ( v2 )
  {
    v3 = a2;
    *v2 = *a2;
    result = (struct _PATHOBJ *)*((_DWORD *)this + 35);
    *((_DWORD *)this + 34) = v3;
  }
  else
  {
    v5 = UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 136), (void **)&a2, 8u, 0);
    return v5 != 0 ? a2 : 0;
  }
  return result;
}
