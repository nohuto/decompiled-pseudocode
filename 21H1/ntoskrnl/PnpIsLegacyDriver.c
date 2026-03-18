/*
 * XREFs of PnpIsLegacyDriver @ 0x14072597C
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140727BA8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x1409C23F0 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
