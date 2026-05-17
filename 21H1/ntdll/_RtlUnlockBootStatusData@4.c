/*
 * XREFs of _RtlUnlockBootStatusData@4 @ 0x4B350D40
 * Callers:
 *     <none>
 * Callees:
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

int __stdcall RtlUnlockBootStatusData(int a1)
{
  int result; // eax
  _DWORD v2[4]; // [esp+0h] [ebp-10h] BYREF

  if ( !a1 )
  {
    v2[0] = 38;
    memset(&v2[1], 0, 12);
    return ZwPowerInformation(87, (int)v2, 16, 0, 0);
  }
  return result;
}
