/*
 * XREFs of RaidUnitDeviceHealthTelemetrySupported @ 0x1C000D0F4
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000CD98 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidUnitDeviceHealthTelemetrySupported(__int64 a1)
{
  _BYTE *v1; // rax
  char v2; // al
  char v3; // dl
  int v4; // eax

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 5488LL) )
    return 0;
  v1 = *(_BYTE **)(a1 + 104);
  if ( !v1 )
    return 0;
  v2 = *v1 & 0x1F;
  if ( v2 )
  {
    if ( v2 != 20 )
      return 0;
  }
  v3 = 1;
  if ( *(_DWORD *)(a1 + 48) != 1 )
    return 0;
  v4 = *(_DWORD *)(a1 + 3280);
  if ( v4 <= 0 || v4 != 8 && v4 > 3 && (v4 <= 9 || v4 > 11 && v4 != 17 && v4 != 19) )
    return 0;
  return v3;
}
