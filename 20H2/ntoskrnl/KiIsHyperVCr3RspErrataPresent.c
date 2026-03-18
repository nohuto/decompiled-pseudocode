/*
 * XREFs of KiIsHyperVCr3RspErrataPresent @ 0x1403F1EB0
 * Callers:
 *     KiIsBranchConfusionMitigationSupported @ 0x1403F1CBC (KiIsBranchConfusionMitigationSupported.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1403A8520 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403BBED0 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HviGetHypervisorVersion @ 0x1405BD5F0 (HviGetHypervisorVersion.c)
 */

_BOOL8 __fastcall KiIsHyperVCr3RspErrataPresent(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _BOOL8 result; // rax
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_BYTE *)(a1 + 141) == 1;
  v6 = 0LL;
  result = 0;
  if ( v1 && HviIsHypervisorVendorMicrosoft() )
  {
    v7 = 0LL;
    HviGetHypervisorFeatures(&v7, v2, v3, v4);
    if ( (v7 & 0x100000000000LL) == 0 )
    {
      HviGetHypervisorVersion(&v6);
      if ( (unsigned int)v6 < 0x429D && ((_DWORD)v6 != 14393 || (HIDWORD(v6) & 0xFFFFFFu) < 0x1479) )
        return 1;
    }
  }
  return result;
}
