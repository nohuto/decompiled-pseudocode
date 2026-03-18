/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x1408B1340
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x1408AE2E4 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}
