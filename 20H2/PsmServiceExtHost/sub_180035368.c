/*
 * XREFs of sub_180035368 @ 0x180035368
 * Callers:
 *     sub_18003529C @ 0x18003529C (sub_18003529C.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180045CFC @ 0x180045CFC (sub_180045CFC.c)
 */

signed int __fastcall sub_180035368(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _DWORD *a5)
{
  signed int result; // eax
  int PartitionHandlesForPackage; // eax
  int v10; // [rsp+20h] [rbp-208h] BYREF
  _BYTE v11[12]; // [rsp+24h] [rbp-204h] BYREF
  _BYTE v12[464]; // [rsp+30h] [rbp-1F8h] BYREF

  if ( (a2 & 0xF000000000000000uLL) == 0x2000000000000000LL || !(unsigned __int8)sub_180045CFC() )
  {
    *a3 = -2LL;
    *a4 = 0LL;
    *a5 = 0;
    return 0;
  }
  v10 = 464;
  result = PsmGetPackageFullNameFromKey(a1, v12, &v10);
  if ( result >= 0 )
  {
    PartitionHandlesForPackage = GetPartitionHandlesForPackage(v12, a3, a4, v11);
    if ( PartitionHandlesForPackage < 0 )
      return PartitionHandlesForPackage & 0xEFFFFFFF;
    if ( (v11[0] & 1) != 0 )
      *a5 = 1;
    return 0;
  }
  return result;
}
