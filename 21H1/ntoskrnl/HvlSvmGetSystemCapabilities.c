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
  _QWORD *v12; // rax
  __int64 v13; // r8
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r9
  __int128 v17; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+38h] [rbp-D0h]
  __int128 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+58h] [rbp-B0h]
  __int128 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+78h] [rbp-90h] BYREF
  __int128 v23; // [rsp+88h] [rbp-80h] BYREF
  __int128 v24; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v25[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v26[2064]; // [rsp+B8h] [rbp-50h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = HvlpRootFlags;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v22, a2, a3, a4);
      if ( (HIDWORD(v22) & 0x10000) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(&v23, v6, v7, v8);
        if ( (unsigned int)v23 >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v21);
          v9 = v21;
          if ( (v21 & 1) != 0 )
          {
            v10 = DWORD1(v21);
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 4) = v10;
            *(_DWORD *)(a1 + 12) = DWORD2(v21);
            *(_DWORD *)(a1 + 8) = v9 >> 11;
            result = HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures(&v24);
              if ( (v24 & 0x80u) == 0LL )
                *(_DWORD *)a1 |= 2u;
              v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v19, 1, (__int64)v25, 8LL);
              v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v17, 2, (__int64)v26, 1032LL);
              v13 = *((_QWORD *)&v18 + 1);
              v14 = v12;
              v15 = *((_QWORD *)&v20 + 1);
              *v11 = 0LL;
              *(_DWORD *)v11 = 11;
              if ( !(unsigned __int16)HvcallInitiateHypercall(123, v15, v13, v16) )
              {
                *(_DWORD *)(a1 + 16) = *v14;
                *(_DWORD *)(a1 + 20) = v14[1];
              }
              HvlpReleaseHypercallPage((__int64)&v17);
              return HvlpReleaseHypercallPage((__int64)&v19);
            }
          }
        }
      }
    }
  }
  return result;
}
