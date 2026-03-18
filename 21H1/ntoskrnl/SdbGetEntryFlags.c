/*
 * XREFs of SdbGetEntryFlags @ 0x1407AC7A8
 * Callers:
 *     SdbReadEntryInformation @ 0x1407AC59C (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407AC6C0 (SdbpGetExeEntryFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1407AC85C (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x1407ACB38 (AslGuidToString.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  int AppCompatFlagsByExeID; // eax
  int v6; // ecx
  _DWORD v8[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v9[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  if ( (int)AslGuidToString(v9, 39LL, a1) < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    v8[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v3, v9, 1LL, v8) >= 0 )
      *a2 = v8[0];
    v8[0] = 0;
    AppCompatFlagsByExeID = SdbpQueryAppCompatFlagsByExeID(v4, v9, 0LL, v8);
    v6 = *a2;
    if ( AppCompatFlagsByExeID >= 0 )
      LOWORD(v6) = LOWORD(v8[0]) | v6;
    *a2 = v6 & 0xFFF;
  }
  return 1LL;
}
