/*
 * XREFs of PnpIsLegacyDriver @ 0x1407402EC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140742518 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x1409C5410 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
