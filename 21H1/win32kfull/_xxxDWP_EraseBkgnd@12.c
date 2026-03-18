/*
 * XREFs of _xxxDWP_EraseBkgnd@12 @ 0xA4032
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _xxxFillWindow@16 @ 0x720DE (_xxxFillWindow@16.c)
 *     _xxxInternalPaintDesktop@12 @ 0xE7CB0 (_xxxInternalPaintDesktop@12.c)
 */

int __fastcall xxxDWP_EraseBkgnd(int a1, int a2, int a3)
{
  unsigned int v4; // ecx

  if ( a2 != 20 )
  {
    if ( a2 == 39 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0x40) != 0 )
        return 0;
      xxxInternalPaintDesktop(1);
    }
    return 1;
  }
  v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 76) + 4) + 44);
  if ( v4 )
  {
    if ( v4 <= 0x1F )
      v4 = *(_DWORD *)(_gpsi + 4 * v4 + 4288);
    xxxFillWindow(a1, a1, a3, v4);
    return 1;
  }
  return 0;
}
