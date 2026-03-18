/*
 * XREFs of KiIsHyperVCr3RspErrataPresent @ 0x14041900C
 * Callers:
 *     KiIsBranchConfusionMitigationSupported @ 0x140418BA4 (KiIsBranchConfusionMitigationSupported.c)
 * Callees:
 *     HviIsHypervisorVendorMicrosoft @ 0x1403BF790 (HviIsHypervisorVendorMicrosoft.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HviGetHypervisorVersion @ 0x140647BBC (HviGetHypervisorVersion.c)
 */

_BOOL8 __fastcall KiIsHyperVCr3RspErrataPresent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  _BOOL8 result; // rax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(a1 + 141) == 1;
  v4 = 0LL;
  result = 0;
  if ( v2 && HviIsHypervisorVendorMicrosoft(a1, a2) )
  {
    v5 = 0LL;
    HviGetHypervisorFeatures(&v5);
    if ( (v5 & 0x100000000000LL) == 0 )
    {
      HviGetHypervisorVersion(&v4);
      if ( (unsigned int)v4 < 0x429D && ((_DWORD)v4 != 14393 || (HIDWORD(v4) & 0xFFFFFFu) < 0x1479) )
        return 1;
    }
  }
  return result;
}
