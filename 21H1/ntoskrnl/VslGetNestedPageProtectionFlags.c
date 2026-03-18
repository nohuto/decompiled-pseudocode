/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14032BBE0
 * Callers:
 *     RtlpControlFlowGuardEnforced @ 0x14032BBB8 (RtlpControlFlowGuardEnforced.c)
 *     HvlGetEnlightenmentInfo @ 0x1404EF5F0 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4964 (HvlpDetermineEnlightenments.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x140781030 (PsLocateSystemDlls.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     MmInitSystem @ 0x140A4C3E4 (MmInitSystem.c)
 *     KiAreCodePatchesAllowed @ 0x140A6FF74 (KiAreCodePatchesAllowed.c)
 *     KiIsKernelCfgActive @ 0x140A702AC (KiIsKernelCfgActive.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14032BC48 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 VslGetNestedPageProtectionFlags()
{
  int v0; // ecx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  _DWORD v9[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v9, 0, 0x68uLL);
  if ( (unsigned __int8)HvlQueryVsmConnection(0LL)
    && VslpNestedPageProtectionFlags == v0
    && VslpEnterIumSecureMode(2u, 249, 0, (__int64)v9) >= 0 )
  {
    v2 = (2 * (v9[4] & 1) + 4) | 0x20;
    if ( (v9[4] & 2) == 0 )
      v2 = 2 * (v9[4] & 1) + 4;
    v3 = v2 | 0x10;
    if ( (v9[4] & 4) != 0 )
      v3 = v2;
    v4 = v3 | 0x40;
    if ( (v9[4] & 8) == 0 )
      v4 = v3;
    v5 = v4 | 0x80;
    if ( (v9[4] & 0x10) == 0 )
      v5 = v4;
    v6 = v5 | 0x100;
    if ( (v9[4] & 0x20) == 0 )
      v6 = v5;
    v7 = v6 | 0x200;
    if ( (v9[4] & 0x40) == 0 )
      v7 = v6;
    v8 = v7 | 0x400;
    if ( (v9[4] & 0x80) == 0 )
      v8 = v7;
    VslpNestedPageProtectionFlags = v8;
  }
  return (unsigned int)VslpNestedPageProtectionFlags;
}
