/*
 * XREFs of _ShouldUseLogPixelsForWindowMetrics@4 @ 0x2AC48
 * Callers:
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

int __thiscall ShouldUseLogPixelsForWindowMetrics(_DWORD *this)
{
  int v2; // esi
  int v3; // ebx
  int TopLevelWindow; // eax
  int v5; // esi

  v2 = 0;
  v3 = this[5];
  if ( (*(_DWORD *)(v3 + 184) & 0xF) == 2 )
  {
    if ( _IsTopLevelWindow(this) )
    {
      v5 = 8 * *(_DWORD *)(v3 + 144);
      return v5 >> 31;
    }
    TopLevelWindow = _GetTopLevelWindow(this);
    if ( TopLevelWindow )
    {
      v5 = 4 * *(_DWORD *)(*(_DWORD *)(TopLevelWindow + 20) + 144);
      return v5 >> 31;
    }
  }
  return v2;
}
