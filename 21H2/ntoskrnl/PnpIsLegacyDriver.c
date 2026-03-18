/*
 * XREFs of PnpIsLegacyDriver @ 0x14067A4A0
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14067B998 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x140A80A58 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
