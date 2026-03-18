/*
 * XREFs of ?UnlockSurface@UMPDOBJ@@QAEXPAU_SURFOBJ@@@Z @ 0x1F4071
 * Callers:
 *     _NtGdiEngUnlockSurface@4 @ 0x219D93 (_NtGdiEngUnlockSurface@4.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall UMPDOBJ::UnlockSurface(UMPDOBJ *this, struct _SURFOBJ *pv)
{
  ULONG *pva; // [esp+30h] [ebp+8h]

  if ( pv )
  {
    pva = &pv[-1].iBitmapFormat;
    if ( *pva == 1431130959 )
    {
      if ( pva[1] )
        EngFreeUserMem(pva);
    }
  }
}
