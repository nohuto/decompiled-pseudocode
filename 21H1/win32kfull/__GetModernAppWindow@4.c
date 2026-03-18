/*
 * XREFs of __GetModernAppWindow@4 @ 0x80AB2
 * Callers:
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall _GetModernAppWindow(int a1)
{
  int v1; // eax
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 || *(_DWORD *)(v1 + 796) != a1 )
  {
    UserSetLastError(87);
    return 0;
  }
  v3 = *(_DWORD *)(v1 + 800);
  if ( !v3 )
    return 0;
  return *(_DWORD *)v3;
}
