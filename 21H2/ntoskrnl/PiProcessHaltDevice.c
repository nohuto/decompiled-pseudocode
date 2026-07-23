/*
 * XREFs of PiProcessHaltDevice @ 0x1408A27BC
 * Callers:
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpRequestDeviceRemoval @ 0x140736848 (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PiProcessHaltDevice(__int64 a1)
{
  _DWORD *v2; // rcx
  int v3; // edx
  int v5; // eax

  v2 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  v3 = v2[75];
  if ( (unsigned int)(v3 - 787) <= 1 )
    return 3221225558LL;
  if ( (*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  v5 = v2[99];
  if ( (v5 & 0x1001) != 0 || (v5 & 1) == 0 && v2[150] )
    return 3221225488LL;
  if ( v3 != 776 )
    return 3221225860LL;
  PnpRequestDeviceRemoval((__int64)v2, 0, 44, 0);
  return 0LL;
}
