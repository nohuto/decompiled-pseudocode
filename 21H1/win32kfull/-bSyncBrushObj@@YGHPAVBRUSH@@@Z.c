/*
 * XREFs of ?bSyncBrushObj@@YGHPAVBRUSH@@@Z @ 0x1FF612
 * Callers:
 *     ?cjGetBrushOrPen@@YGJPAXH0@Z @ 0x1FD0B9 (-cjGetBrushOrPen@@YGJPAXH0@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 * Callees:
 *     <none>
 */

int __thiscall bSyncBrushObj(_DWORD *this)
{
  int v1; // edi
  _DWORD *v2; // esi

  v1 = 1;
  if ( this )
  {
    v2 = (_DWORD *)this[8];
    if ( (*(_BYTE *)v2 & 4) != 0 )
    {
      if ( GreSetSolidBrushLight(this, v2[1], this[6] & 0x400) )
        *v2 &= ~4u;
      else
        return 0;
    }
  }
  return v1;
}
