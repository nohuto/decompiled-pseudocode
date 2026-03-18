/*
 * XREFs of ?GetSURFOBJ@UMPDOBJ@@QAEPAU_SURFOBJ@@PAU2@@Z @ 0x216411
 * Callers:
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__thiscall UMPDOBJ::GetSURFOBJ(UMPDOBJ *this, struct _SURFOBJ *a2)
{
  if ( a2 == *((struct _SURFOBJ **)this + 11) )
    return (struct _SURFOBJ *)*((_DWORD *)this + 10);
  if ( a2 == *((struct _SURFOBJ **)this + 13) )
    return (struct _SURFOBJ *)*((_DWORD *)this + 12);
  if ( a2 == *((struct _SURFOBJ **)this + 15) )
    return (struct _SURFOBJ *)*((_DWORD *)this + 14);
  return 0;
}
