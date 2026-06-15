/*
 * XREFs of sub_18005B204 @ 0x18005B204
 * Callers:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18005B0B0 @ 0x18005B0B0 (sub_18005B0B0.c)
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18005B204(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF
  __int64 v3; // [rsp+58h] [rbp+10h] BYREF
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF

  if ( a1 )
  {
    result = 2LL;
    *(_OWORD *)a1 = xmmword_180160C48;
    *(_DWORD *)(a1 + 16) = 2;
  }
  else if ( (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v2) = -2147467261;
    v4 = (__int64)"GetSpatialSettingsMonitoringPKey";
    LODWORD(v3) = 404;
    return sub_180109778((int)&dword_18019C480, (__int64)&v4, (__int64)&v3, (__int64)&v2);
  }
  return result;
}
