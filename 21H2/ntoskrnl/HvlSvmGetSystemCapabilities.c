/*
 * XREFs of HvlSvmGetSystemCapabilities @ 0x1404F6FE0
 * Callers:
 *     HvlpInitializeSvmIommuSupport @ 0x1404F960C (HvlpInitializeSvmIommuSupport.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     HviGetHypervisorFeatures @ 0x1403AE350 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x1404FA100 (HvlpGetRegister128.c)
 *     HviGetHardwareFeatures @ 0x1405BF1A0 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BF220 (HviGetHypervisorVendorAndMaxFunction.c)
 */

char __fastcall HvlSvmGetSystemCapabilities(__int64 a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ecx
  int v7; // eax
  _QWORD *v8; // rbx
  _DWORD *v9; // rsi
  _BYTE v10[40]; // [rsp+20h] [rbp-E8h] BYREF
  PHYSICAL_ADDRESS v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v12; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+78h] [rbp-90h] BYREF
  __int128 v14; // [rsp+88h] [rbp-80h] BYREF
  __int128 v15; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v16[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v17[2064]; // [rsp+B8h] [rbp-50h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = HvlpRootFlags;
  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(&v10[8], 0, 32);
  v12 = 0LL;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v13);
      if ( (HIDWORD(v13) & 0x10000) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(&v14, v3, v4, v5);
        if ( (unsigned int)v14 >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v12);
          v6 = v12;
          if ( (v12 & 1) != 0 )
          {
            v7 = DWORD1(v12);
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 4) = v7;
            *(_DWORD *)(a1 + 12) = DWORD2(v12);
            *(_DWORD *)(a1 + 8) = v6 >> 11;
            result = HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures(&v15);
              if ( (v15 & 0x80u) == 0LL )
                *(_DWORD *)a1 |= 2u;
              v8 = HvlpAcquireHypercallPage(v11, 1, (__int64)v16, 8LL);
              v9 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v10[8], 2, (__int64)v17, 1032LL);
              *v8 = 0LL;
              *(_DWORD *)v8 = 11;
              if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
              {
                *(_DWORD *)(a1 + 16) = *v9;
                *(_DWORD *)(a1 + 20) = v9[1];
              }
              HvlpReleaseHypercallPage((__int64)&v10[8]);
              return HvlpReleaseHypercallPage((__int64)v11);
            }
          }
        }
      }
    }
  }
  return result;
}
