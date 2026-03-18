/*
 * XREFs of _CleanupDesktopsMonitorsAndWindowsSnapShot@4 @ 0xD4AAA
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 * Callees:
 *     _CleanMonitorsAndWindowsSnapshot@4 @ 0x145B75 (_CleanMonitorsAndWindowsSnapshot@4.c)
 */

void __stdcall CleanupDesktopsMonitorsAndWindowsSnapShot(_DWORD **a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // ebx
  _DWORD *v4; // ecx

  v1 = *a1;
  while ( v1 != a1 )
  {
    v2 = (_DWORD *)*v1;
    v3 = v1;
    v1 = v2;
    if ( (_DWORD *)v2[1] != v3 || (v4 = (_DWORD *)v3[1], (_DWORD *)*v4 != v3) )
      __fastfail(3u);
    *v4 = v2;
    v2[1] = v4;
    CleanMonitorsAndWindowsSnapshot(v3);
    Win32FreePool(v3);
  }
}
