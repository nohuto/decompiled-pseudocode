/*
 * XREFs of EngCopyRgn @ 0x1C014EFD0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0023750 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00D09EC (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngCopyRgn(HANDLE hrgnDst, HANDLE hrgnSrc)
{
  INT v4; // ecx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgnDst, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hrgnSrc, 4) )
  {
    v4 = 0;
  }
  else
  {
    v4 = GreCombineRgn((HRGN)hrgnDst, (HRGN)hrgnSrc, 0LL, 5);
  }
  if ( v6 )
    *(_DWORD *)(v6 + 328) &= ~0x20u;
  return v4;
}
