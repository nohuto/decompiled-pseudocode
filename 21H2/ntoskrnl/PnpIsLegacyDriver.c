/*
 * XREFs of PnpIsLegacyDriver @ 0x1407404AC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407426D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140769958 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x1409C6410 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
