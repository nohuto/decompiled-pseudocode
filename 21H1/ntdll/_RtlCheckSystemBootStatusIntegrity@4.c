/*
 * XREFs of _RtlCheckSystemBootStatusIntegrity@4 @ 0x4B3508F0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

int __stdcall RtlCheckSystemBootStatusIntegrity(int a1)
{
  _DWORD v2[4]; // [esp+0h] [ebp-1Ch] BYREF
  char v3; // [esp+10h] [ebp-Ch] BYREF
  int v4; // [esp+14h] [ebp-8h]
  int v5; // [esp+18h] [ebp-4h]

  if ( !a1 )
    return -1073741811;
  v4 = a1;
  v2[1] = 0;
  v2[0] = 34;
  v5 = 1;
  v2[2] = 1;
  v2[3] = &v3;
  return ZwPowerInformation(87, (int)v2, 16, 0, 0);
}
