/*
 * XREFs of _TextCopy@12 @ 0x1D7C6
 * Callers:
 *     _NtUserInternalGetWindowText@12 @ 0x1D632 (_NtUserInternalGetWindowText@12.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     ?DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z @ 0x15C04A (-DrawSwitchWndHilite@@YGXPAUtagSwitchWndInfo@@PAUHDC__@@HHH@Z.c)
 *     __GetAltTabInfo@20 @ 0x15D068 (__GetAltTabInfo@20.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall TextCopy(int a1, void *a2, int a3)
{
  int v3; // edi

  v3 = a3;
  if ( a3 )
  {
    v3 = a3 - 1;
    if ( *(_DWORD *)a1 >> 1 < (unsigned int)(a3 - 1) )
      v3 = *(_DWORD *)a1 >> 1;
    memcpy(a2, *(const void **)(a1 + 8), 2 * v3);
    *((_WORD *)a2 + v3) = 0;
  }
  return v3;
}
