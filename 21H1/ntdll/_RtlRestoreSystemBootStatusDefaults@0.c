/*
 * XREFs of _RtlRestoreSystemBootStatusDefaults@0 @ 0x4B350CB0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

int __stdcall RtlRestoreSystemBootStatusDefaults()
{
  _DWORD v1[4]; // [esp+0h] [ebp-10h] BYREF

  v1[0] = 35;
  memset(&v1[1], 0, 12);
  return ZwPowerInformation(87, (int)v1, 16, 0, 0);
}
