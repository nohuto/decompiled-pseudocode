/*
 * XREFs of PnpIsLegacyDriver @ 0x14072A018
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407282D4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x1409C2400 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
