/*
 * XREFs of ?CreateCLIPOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@XZ @ 0x1F397D
 * Callers:
 *     _NtGdiEngCreateClip@0 @ 0x217EB8 (_NtGdiEngCreateClip@0.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 */

struct _CLIPOBJ *__thiscall UMPDOBJ::CreateCLIPOBJ(UMPDOBJ *this)
{
  CLIPOBJ *Clip; // esi
  void *v4; // [esp+8h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 19) )
    return 0;
  Clip = EngCreateClip();
  v4 = Clip;
  if ( !Clip )
    return 0;
  if ( !UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 72), &v4, 0x18u, 0) )
  {
    EngDeleteClip(Clip);
    return 0;
  }
  return (struct _CLIPOBJ *)v4;
}
