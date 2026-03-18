/*
 * XREFs of ?DeleteCLIPOBJ@UMPDOBJ@@QAEXPAU_CLIPOBJ@@@Z @ 0x1F3A23
 * Callers:
 *     _NtGdiEngDeleteClip@4 @ 0x2180E5 (_NtGdiEngDeleteClip@4.c)
 * Callees:
 *     <none>
 */

void __thiscall UMPDOBJ::DeleteCLIPOBJ(CLIPOBJ **this, struct _CLIPOBJ *a2)
{
  if ( a2 )
  {
    if ( a2 == this[19] )
    {
      EngDeleteClip(this[18]);
      this[18] = 0;
      this[19] = 0;
    }
  }
}
