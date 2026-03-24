/*
 * XREFs of KiIsHyperVCr3RspErrataPresent @ 0x1403F3760
 * Callers:
 *     KiIsBranchConfusionMitigationSupported @ 0x1403F3154 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsTsaMitigationSupported @ 0x1403F33EC (KiIsTsaMitigationSupported.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1403AE200 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403AF7D0 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     HviGetHypervisorVersion @ 0x1405BF040 (HviGetHypervisorVersion.c)
 */

_BOOL8 __fastcall KiIsHyperVCr3RspErrataPresent(__int64 a1)
{
  bool v1; // zf
  _BOOL8 result; // rax
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_BYTE *)(a1 + 141) == 1;
  v3 = 0LL;
  result = 0;
  if ( v1 && HviIsHypervisorVendorMicrosoft() )
  {
    v4 = 0LL;
    HviGetHypervisorFeatures(&v4);
    if ( (v4 & 0x100000000000LL) == 0 )
    {
      HviGetHypervisorVersion(&v3);
      if ( (unsigned int)v3 < 0x429D && ((_DWORD)v3 != 14393 || (HIDWORD(v3) & 0xFFFFFFu) < 0x1479) )
        return 1;
    }
  }
  return result;
}
