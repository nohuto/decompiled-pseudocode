/*
 * XREFs of IsDumpMode @ 0x1C000911C
 * Callers:
 *     NVMeEnableThrottling @ 0x1C000D38C (NVMeEnableThrottling.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDumpMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 16) != 0;
}
