/*
 * XREFs of _RtlpSystemBootStatusRequest@16 @ 0x4B350FCD
 * Callers:
 *     _RtlGetSystemBootStatus@16 @ 0x4B350B70 (_RtlGetSystemBootStatus@16.c)
 *     _RtlGetSystemBootStatusEx@12 @ 0x4B350BB0 (_RtlGetSystemBootStatusEx@12.c)
 *     _RtlSetSystemBootStatus@16 @ 0x4B350CE0 (_RtlSetSystemBootStatus@16.c)
 *     _RtlSetSystemBootStatusEx@12 @ 0x4B350D20 (_RtlSetSystemBootStatusEx@12.c)
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

int __fastcall RtlpSystemBootStatusRequest(int a1, int a2, unsigned int a3, int a4)
{
  int result; // eax
  int v7; // eax
  _DWORD v8[4]; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  if ( a4 )
  {
    result = RtlULongLongToUInt(&v9, 4 * a3, (unsigned __int64)a3 >> 30);
    if ( result < 0 )
      return result;
    v7 = v9;
  }
  else
  {
    v7 = 0;
  }
  v8[1] = 0;
  v8[0] = a1;
  v8[2] = a3;
  v8[3] = a2;
  return ZwPowerInformation(87, (int)v8, 16, a4, v7);
}
