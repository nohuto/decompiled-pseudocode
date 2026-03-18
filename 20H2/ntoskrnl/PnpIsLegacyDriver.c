/*
 * XREFs of PnpIsLegacyDriver @ 0x140738AA8
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140736D64 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x1409C8420 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
