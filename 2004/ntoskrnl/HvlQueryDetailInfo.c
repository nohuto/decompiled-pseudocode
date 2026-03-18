/*
 * XREFs of HvlQueryDetailInfo @ 0x14088B238
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetEnlightenmentInformation @ 0x1403A5F60 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A5FA0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorInterface @ 0x1403A6030 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HviGetHardwareFeatures @ 0x1405B99C0 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405B9A40 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorVersion @ 0x1405B9A90 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1405B9AE0 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlQueryDetailInfo(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD v16[7]; // [rsp+30h] [rbp-88h] BYREF

  if ( a2 == 112 )
  {
    memset(v16, 0, sizeof(v16));
    HviGetHypervisorVendorAndMaxFunction(v16);
    HviGetHypervisorInterface(&v16[1]);
    HviGetHypervisorVersion(&v16[2]);
    HviGetHypervisorFeatures(&v16[3], v7, v8, v9);
    HviGetHardwareFeatures((__int64)&v16[4], v10, v11, v12);
    HviGetEnlightenmentInformation(&v16[5], v13, v14, v15);
    HviGetImplementationLimits(&v16[6]);
    result = 0LL;
    *a1 = v16[0];
    a1[1] = v16[1];
    a1[2] = v16[2];
    a1[3] = v16[3];
    a1[4] = v16[4];
    a1[5] = v16[5];
    a1[6] = v16[6];
    *a4 = 112;
  }
  else
  {
    result = 3221225712LL;
    *a4 = 0;
  }
  return result;
}
