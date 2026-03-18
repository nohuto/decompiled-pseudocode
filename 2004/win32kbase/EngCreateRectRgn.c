/*
 * XREFs of EngCreateRectRgn @ 0x1C014F050
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRegionOwner @ 0x1C0081470 (GreSetRegionOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00D09EC (--0EngModeState@@QEAA@XZ.c)
 *     GreCreateRectRgn @ 0x1C014F830 (GreCreateRectRgn.c)
 */

HANDLE __stdcall EngCreateRectRgn(INT left, INT top, INT right, INT bottom)
{
  __int64 RectRgn; // rax
  void *v9; // rbx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v11);
  RectRgn = GreCreateRectRgn((unsigned int)left, (unsigned int)top, (unsigned int)right, (unsigned int)bottom);
  v9 = (void *)RectRgn;
  if ( RectRgn )
    GreSetRegionOwner(RectRgn, 0);
  if ( v11[0] )
    *(_DWORD *)(v11[0] + 328LL) &= ~0x20u;
  return v9;
}
