/*
 * XREFs of EngOffsetRgn @ 0x1C014F360
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0023750 (GreGetObjectOwner.c)
 *     GreOffsetRgn @ 0x1C007BAB0 (GreOffsetRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00D09EC (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngOffsetRgn(HANDLE hrgn, INT x, INT y)
{
  INT result; // eax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v7);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreOffsetRgn((HRGN)hrgn, x, y);
  if ( v7 )
    *(_DWORD *)(v7 + 328) &= ~0x20u;
  return result;
}
