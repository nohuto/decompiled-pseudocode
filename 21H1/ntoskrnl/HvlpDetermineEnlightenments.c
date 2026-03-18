/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1404F4964
 * Callers:
 *     HvlPhase0Initialize @ 0x14077FA4C (HvlPhase0Initialize.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HviGetEnlightenmentInformation @ 0x1403A9C30 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A9C70 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403EC190 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x1404F4720 (HvlpGetRegister128.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404F4F38 (HvlpQueryExtendedCapabilities.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F4FD8 (HvlpTryToLockCpuManagementVersion.c)
 *     HviGetHardwareFeatures @ 0x1405B92A0 (HviGetHardwareFeatures.c)
 */

__int64 (__fastcall *__fastcall HvlpDetermineEnlightenments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_DWORD *a1)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rbx
  unsigned int v13; // r15d
  unsigned __int64 v14; // rax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  unsigned int v19; // ecx
  char v20; // r14
  int v21; // ecx
  int v22; // edx
  ULONG v23; // eax
  int v24; // ecx
  int v25; // r14d
  __int64 *v26; // rdi
  __int64 v27; // r9
  int v28; // ecx
  int v29; // edi
  int v30; // ebx
  char v31; // al
  __int64 v32; // rax
  int v33; // edx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v35; // [rsp+28h] [rbp-59h] BYREF
  __int128 v36; // [rsp+38h] [rbp-49h] BYREF
  __int128 v37; // [rsp+48h] [rbp-39h]
  __int128 v38; // [rsp+58h] [rbp-29h] BYREF
  __int128 v39; // [rsp+68h] [rbp-19h] BYREF
  __int128 v40; // [rsp+78h] [rbp-9h] BYREF
  __int128 v41; // [rsp+88h] [rbp+7h] BYREF
  __int128 v42; // [rsp+98h] [rbp+17h] BYREF
  _BYTE v43[16]; // [rsp+A8h] [rbp+27h] BYREF

  v35 = 0LL;
  v4 = 0;
  v39 = 0LL;
  HvlEnableIdleYield = 0;
  v38 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  HviGetEnlightenmentInformation(&v38, a2, a3, a4);
  v41 = 0LL;
  HviGetHypervisorFeatures(&v41, v5, v6, v7);
  HviGetHypervisorFeatures(&v42, v8, v9, v10);
  HviGetHardwareFeatures(&v40);
  v11 = v38;
  if ( (v38 & 1) != 0 )
  {
    v4 = 8388615;
  }
  else if ( (v38 & 2) != 0 )
  {
    v4 = 8388614;
  }
  else if ( (v38 & 4) != 0 )
  {
    if ( (v38 & 0x20000) != 0 || (v4 = 8388612, v11 = v38, KeGetCurrentPrcb()->CpuVendor == 2) )
      v4 = 4;
  }
  v12 = v41;
  if ( (v41 & 0x10) != 0 )
    HvlpFlags |= 0x80000u;
  if ( (v11 & 8) != 0 )
  {
    v4 |= 0x10u;
    HvlpFlags |= 1u;
  }
  if ( (v11 & 0x200) != 0 )
  {
    v4 |= 0x1000u;
    HvlpFlags |= 0x10u;
  }
  v13 = HIDWORD(v42);
  if ( (HIDWORD(v42) & 0x40000) != 0 )
  {
    v14 = __readmsr(0x40000001u);
    if ( (v14 & 2) == 0 )
      __writemsr(0x40000001u, v14 | 2);
    v4 |= 0x100000u;
  }
  if ( (v11 & 0x40000) != 0 )
    HvlpFlags |= 0x400000u;
  if ( (v11 & 0x10000) != 0 )
    HvlpFlags |= 0x800000u;
  v15 = v4 | 0x80;
  if ( ((HIDWORD(v42) >> 4) & 1) == 0 )
    v15 = v4;
  if ( (v11 & 0x800) != 0 )
    HvlpFlags |= 0x80u;
  v16 = v15 | 0x20;
  if ( (v11 & 0x20) == 0 )
    v16 = v15;
  v17 = v16 | 0x4000;
  if ( (v11 & 0x400) == 0 )
    v17 = v16;
  v18 = v17 | 0x200;
  if ( (BYTE12(v42) & 0x20) == 0 )
    v18 = v17;
  if ( SDWORD1(v38) > 0 )
  {
    _BitScanReverse(&v19, DWORD1(v38));
    v18 |= 0x40u;
    HvlLongSpinCountMask = DWORD1(v38) | ((1 << v19) - 1);
  }
  if ( (v41 & 0x100000000000LL) != 0 && (unsigned __int8)HvlpTryToLockCpuManagementVersion() )
    HvlpFlags |= 2u;
  if ( (v13 & 0x10000000) != 0 )
  {
    v18 |= 0x4000000u;
    if ( ((v13 >> 4) & 1) == 0 )
      v18 &= ~0x4000000u;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516LL, &v39);
    v20 = v39;
    v21 = v18 | 0x400;
    if ( (BYTE4(v39) & 1) == 0 )
      v21 = v18;
    v22 = v21 | 0x20000;
    if ( (BYTE4(v39) & 2) == 0 )
      v22 = v21;
    v18 = v22 | 0x40000;
    if ( (BYTE4(v39) & 4) == 0 )
      v18 = v22;
    if ( (v39 & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v39 & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( (int)v39 < 0 )
    {
      HvlpRootFlags |= 0x187u;
      v18 |= 0x10008u;
      HvlHyperVRootPartition = 1;
      if ( (unsigned int)HvlpQueryHypervisorSchedulerType() == 4 )
        v18 |= 0x40000u;
    }
    v23 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v20 & 4) != 0 )
    {
      v23 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v12 & 0x10000000000LL) != 0 )
    {
      v23 |= 0x10u;
      HvlpRootFlags = v23;
    }
    if ( (v11 & 0x1000) != 0 )
      HvlpRootFlags = v23 | 0x400;
  }
  v24 = v18 | 0x800;
  if ( (v13 & 0x80u) == 0 )
    v24 = v18;
  if ( (v13 & 8) == 0 )
    HvlpFlags |= 4u;
  v25 = v24 | 0x100;
  if ( (v12 & 0x202) != 0x202 )
    v25 = v24;
  if ( (v12 & 0x200000000LL) != 0 )
  {
    v26 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v36, 2, (__int64)v43, 8LL);
    HvcallInitiateHypercall(70, 0LL, *((__int64 *)&v37 + 1), v27);
    HvlpReleaseHypercallPage((__int64)&v36);
    HvlPartitionId = *v26;
  }
  v28 = v25 | 0x2000;
  if ( (v13 & 0x400) == 0 )
    v28 = v25;
  if ( (v12 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v13 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v12 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v29 = v28 | 0x8000;
  if ( (v12 & 0x20000000000000LL) == 0 )
    v29 = v28;
  if ( (v11 & 0x2000) != 0 )
  {
    v30 = v29 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags() & 2) == 0 )
      v30 = v29;
  }
  else
  {
    v30 = v29;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( (v40 & 0x800000) != 0 )
    HvlpFlags |= 0x1000000u;
  if ( (v11 & 0x8000) != 0 && (v30 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v40 & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v31 = HvlpQueryExtendedCapabilities(&v35);
  v32 = v35 & -(__int64)(v31 != 0);
  if ( (v32 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v32 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v32 & 8) != 0 )
    HvlpFlags |= 0x100000u;
  if ( (v32 & 0x40) != 0 )
    HvlpFlags |= 0x200000u;
  v33 = v30 | 0x200000;
  if ( (v32 & 2) == 0 )
    v33 = v30;
  if ( (v32 & 4) != 0 )
  {
    v33 |= 0x400000u;
    if ( (v32 & 0x80u) != 0LL )
      v33 |= 0x8000000u;
  }
  result = HvlGetEnlightenmentInfo;
  qword_140C00710 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v33;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v33;
  return result;
}
