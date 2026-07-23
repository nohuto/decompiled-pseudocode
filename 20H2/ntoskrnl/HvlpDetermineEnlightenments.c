/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1404F8824
 * Callers:
 *     HvlPhase0Initialize @ 0x14078C780 (HvlPhase0Initialize.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402E74C0 (VslGetNestedPageProtectionFlags.c)
 *     HvcallInitiateHypercall @ 0x14038FFF0 (HvcallInitiateHypercall.c)
 *     HviGetEnlightenmentInformation @ 0x1403A84E0 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A8520 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403F00E0 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpAcquireHypercallPage @ 0x1404F0CA0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F1890 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x1404F85E0 (HvlpGetRegister128.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404F8E10 (HvlpQueryExtendedCapabilities.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404F8EB0 (HvlpTryToLockCpuManagementVersion.c)
 *     HviGetHardwareFeatures @ 0x1405BD520 (HviGetHardwareFeatures.c)
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
  int v13; // r15d
  unsigned __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r14d
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  unsigned int v21; // ecx
  char v22; // r14
  int v23; // ecx
  int v24; // edx
  ULONG v25; // eax
  int v26; // ecx
  int v27; // r14d
  __int64 *v28; // rdi
  int v29; // ecx
  int v30; // edi
  int v31; // ebx
  char v32; // al
  __int64 v33; // rax
  int v34; // edx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v36; // [rsp+28h] [rbp-59h] BYREF
  _OWORD v37[2]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v38; // [rsp+58h] [rbp-29h] BYREF
  __int128 v39; // [rsp+68h] [rbp-19h] BYREF
  __int128 v40; // [rsp+78h] [rbp-9h] BYREF
  __int128 v41; // [rsp+88h] [rbp+7h] BYREF
  __int128 v42; // [rsp+98h] [rbp+17h] BYREF
  _BYTE v43[16]; // [rsp+A8h] [rbp+27h] BYREF

  v36 = 0LL;
  v4 = 0;
  v39 = 0LL;
  HvlEnableIdleYield = 0;
  v38 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  memset(v37, 0, sizeof(v37));
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
  v15 = v4 | 0x20000000;
  if ( (v11 & 0x100000) == 0 )
    v15 = v4;
  v16 = v15 | 0x80;
  v17 = (HIDWORD(v42) >> 4) & 1;
  if ( !v17 )
    v16 = v15;
  if ( (v11 & 0x800) != 0 )
    HvlpFlags |= 0x80u;
  v18 = v16 | 0x20;
  if ( (v11 & 0x20) == 0 )
    v18 = v16;
  v19 = v18 | 0x4000;
  if ( (v11 & 0x400) == 0 )
    v19 = v18;
  v20 = v19 | 0x200;
  if ( (BYTE12(v42) & 0x20) == 0 )
    v20 = v19;
  if ( SDWORD1(v38) > 0 )
  {
    _BitScanReverse(&v21, DWORD1(v38));
    v20 |= 0x40u;
    HvlLongSpinCountMask = DWORD1(v38) | ((1 << v21) - 1);
  }
  if ( (v41 & 0x100000000000LL) != 0 && (unsigned __int8)HvlpTryToLockCpuManagementVersion() )
    HvlpFlags |= 2u;
  if ( (v13 & 0x10000000) != 0 )
  {
    v20 |= 0x4000000u;
    if ( !v17 )
      v20 &= ~0x4000000u;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516, &v39);
    v22 = v39;
    v23 = v20 | 0x400;
    if ( (BYTE4(v39) & 1) == 0 )
      v23 = v20;
    v24 = v23 | 0x20000;
    if ( (BYTE4(v39) & 2) == 0 )
      v24 = v23;
    v20 = v24 | 0x40000;
    if ( (BYTE4(v39) & 4) == 0 )
      v20 = v24;
    if ( (v39 & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v39 & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( (int)v39 < 0 )
    {
      HvlpRootFlags |= 0x187u;
      v20 |= 0x10008u;
      BYTE5(Mm64BitPhysicalAddress) = 1;
      if ( (unsigned int)HvlpQueryHypervisorSchedulerType() == 4 )
        v20 |= 0x40000u;
    }
    v25 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v22 & 4) != 0 )
    {
      v25 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v12 & 0x10000000000LL) != 0 )
    {
      v25 |= 0x10u;
      HvlpRootFlags = v25;
    }
    if ( (v11 & 0x1000) != 0 )
      HvlpRootFlags = v25 | 0x400;
  }
  v26 = v20 | 0x800;
  if ( (v13 & 0x80u) == 0 )
    v26 = v20;
  if ( (v13 & 8) == 0 )
    HvlpFlags |= 4u;
  v27 = v26 | 0x100;
  if ( (v12 & 0x202) != 0x202 )
    v27 = v26;
  if ( (v12 & 0x200000000LL) != 0 )
  {
    v28 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v37, 2, (__int64)v43, 8LL);
    HvcallInitiateHypercall(70);
    HvlpReleaseHypercallPage((__int64)v37);
    HvlPartitionId = *v28;
  }
  v29 = v27 | 0x2000;
  if ( (v13 & 0x400) == 0 )
    v29 = v27;
  if ( (v12 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v13 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v12 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v30 = v29 | 0x8000;
  if ( (v12 & 0x20000000000000LL) == 0 )
    v30 = v29;
  if ( (v11 & 0x2000) != 0 )
  {
    v31 = v30 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags() & 2) == 0 )
      v31 = v30;
  }
  else
  {
    v31 = v30;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( (v40 & 0x800000) != 0 )
    HvlpFlags |= 0x1000000u;
  if ( (v11 & 0x8000) != 0 && (v31 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v40 & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v32 = HvlpQueryExtendedCapabilities(&v36);
  v33 = v36 & -(__int64)(v32 != 0);
  if ( (v33 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v33 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v33 & 8) != 0 )
    HvlpFlags |= 0x100000u;
  if ( (v33 & 0x40) != 0 )
    HvlpFlags |= 0x200000u;
  v34 = v31 | 0x200000;
  if ( (v33 & 2) == 0 )
    v34 = v31;
  if ( (v33 & 4) != 0 )
  {
    v34 |= 0x400000u;
    if ( (v33 & 0x80u) != 0LL )
      v34 |= 0x8000000u;
  }
  result = HvlGetEnlightenmentInfo;
  qword_140C00710 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v34;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v34;
  return result;
}
