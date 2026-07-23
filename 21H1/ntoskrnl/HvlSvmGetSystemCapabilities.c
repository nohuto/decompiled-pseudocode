/*
 * XREFs of HvlSvmGetSystemCapabilities @ 0x1404F1600
 * Callers:
 *     HvlpInitializeSvmIommuSupport @ 0x1404F3C2C (HvlpInitializeSvmIommuSupport.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HviGetHypervisorFeatures @ 0x1403A9C70 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x1404F4720 (HvlpGetRegister128.c)
 *     HviGetHardwareFeatures @ 0x1405B92A0 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405B9320 (HviGetHypervisorVendorAndMaxFunction.c)
 */

char __fastcall HvlSvmGetSystemCapabilities(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ecx
  int v10; // eax
  _QWORD *v11; // rbx
  _DWORD *v12; // rsi
  _BYTE v13[40]; // [rsp+20h] [rbp-E8h] BYREF
  PHYSICAL_ADDRESS v14[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+78h] [rbp-90h] BYREF
  __int128 v17; // [rsp+88h] [rbp-80h] BYREF
  __int128 v18; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v19[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v20[2064]; // [rsp+B8h] [rbp-50h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = HvlpRootFlags;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(v14, 0, sizeof(v14));
  memset(&v13[8], 0, 32);
  v15 = 0LL;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v16, a2, a3, a4);
      if ( (HIDWORD(v16) & 0x10000) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(&v17, v6, v7, v8);
        if ( (unsigned int)v17 >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v15);
          v9 = v15;
          if ( (v15 & 1) != 0 )
          {
            v10 = DWORD1(v15);
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 4) = v10;
            *(_DWORD *)(a1 + 12) = DWORD2(v15);
            *(_DWORD *)(a1 + 8) = v9 >> 11;
            result = HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures(&v18);
              if ( (v18 & 0x80u) == 0LL )
                *(_DWORD *)a1 |= 2u;
              v11 = HvlpAcquireHypercallPage(v14, 1, (__int64)v19, 8LL);
              v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v13[8], 2, (__int64)v20, 1032LL);
              *v11 = 0LL;
              *(_DWORD *)v11 = 11;
              if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
              {
                *(_DWORD *)(a1 + 16) = *v12;
                *(_DWORD *)(a1 + 20) = v12[1];
              }
              HvlpReleaseHypercallPage((__int64)&v13[8]);
              return HvlpReleaseHypercallPage((__int64)v14);
            }
          }
        }
      }
    }
  }
  return result;
}
