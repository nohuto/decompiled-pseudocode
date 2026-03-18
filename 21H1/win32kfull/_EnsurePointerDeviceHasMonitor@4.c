/*
 * XREFs of _EnsurePointerDeviceHasMonitor@4 @ 0x1590D3
 * Callers:
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 * Callees:
 *     <none>
 */

int __stdcall EnsurePointerDeviceHasMonitor(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 + 1136);
  if ( !v3 )
    return 1;
  if ( !*(_DWORD *)(v2 + 1140) )
  {
    RIMFindMonitorForDigitizer(v2, a1, 1, 0);
    v3 = *(_DWORD *)(v2 + 1136);
  }
  if ( !v3 || *(_DWORD *)(v2 + 1140) )
    return 1;
  return v1;
}
