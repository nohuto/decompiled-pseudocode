/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001EC04
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0094A68 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C00600EC (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C00941D8 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerGetSxD @ 0x1C0094BF8 (ACPISystemPowerGetSxD.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C00953E0 (ACPISystemPowerUpdateWakeCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm0_8
  int v7; // eax
  const char *v8; // rsi
  unsigned int v9; // edx
  int v10; // r14d
  unsigned int v11; // r14d
  int updated; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int SxD; // eax
  char v16; // cl
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r15
  __int64 *v19; // rax
  int v20; // eax
  __int64 result; // rax
  KIRQL v22; // al
  __int32 v23; // ecx
  KIRQL v24; // r8
  unsigned int v25; // eax
  __int64 v26; // xmm1_8
  int v27; // edx
  void *v28; // rdx
  __int64 v29; // rcx
  void *v30; // rsi
  void *v31; // rdx
  __int64 v32; // rcx
  char v33; // r8
  void *v34; // r10
  void *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  KIRQL v38; // r10
  const char *v39; // rcx
  __int64 v40; // rax
  const char *v41; // rdx
  __int64 v42; // rcx
  void *v43; // rcx
  __int64 v44; // rdx
  char v45; // [rsp+50h] [rbp-49h]
  int v46; // [rsp+54h] [rbp-45h]
  int v47; // [rsp+58h] [rbp-41h] BYREF
  int v48; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int64 *v49; // [rsp+60h] [rbp-39h]
  int v50; // [rsp+68h] [rbp-31h] BYREF
  int v51; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v52; // [rsp+70h] [rbp-29h]
  int v53; // [rsp+74h] [rbp-25h] BYREF
  int v54; // [rsp+78h] [rbp-21h] BYREF
  int v55; // [rsp+7Ch] [rbp-1Dh]
  int v56; // [rsp+80h] [rbp-19h]
  __int64 v57; // [rsp+88h] [rbp-11h]
  __m128i v58; // [rsp+90h] [rbp-9h] BYREF
  __int64 v59; // [rsp+A0h] [rbp+7h]
  __int32 v60; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v58 = a2[1];
  v60 = v3;
  v57 = a3;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
  v50 = 0;
  v54 = 0;
  if ( v58.m128i_i32[1] != 1 )
    v7 = 1;
  v53 = 0;
  v58.m128i_i32[1] = v7;
  v47 = 0;
  v51 = 0;
  v56 = 0;
  v48 = 0;
  v59 = v5;
  v8 = (const char *)&unk_1C006FB8B;
  v10 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v10 < 0 )
  {
    v28 = &unk_1C006FB8B;
    if ( BugCheckParameter2 )
    {
      v29 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v29 & 0x400000000000LL) != 0 )
          v28 = *(void **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x14u,
        (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
        v10,
        v4,
        (__int64)v8,
        (__int64)v28);
    return (unsigned int)v10;
  }
  else
  {
    v11 = v51 | v56;
    if ( !(v51 | v56) )
    {
      v9 = *(_DWORD *)(v57 + 4);
      if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 64 && (v9 & 3) == 0 )
      {
LABEL_20:
        result = ACPISystemPowerUpdateWakeCapabilities(
                   BugCheckParameter2,
                   v9,
                   v57,
                   (unsigned int)&v58,
                   (__int64)&v48,
                   (__int64)&v47,
                   (__int64)&v54,
                   (__int64)&v53);
        v55 = result;
        if ( (int)result < 0 )
        {
          v43 = &unk_1C006FB8B;
          if ( BugCheckParameter2 )
          {
            v44 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v44 & 0x200000000000LL) != 0 )
            {
              v8 = *(const char **)(BugCheckParameter2 + 608);
              if ( (v44 & 0x400000000000LL) != 0 )
                v43 = *(void **)(BugCheckParameter2 + 616);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x19u,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              result,
              v4,
              (__int64)v8,
              (__int64)v43);
            return (unsigned int)v55;
          }
        }
        else
        {
          v22 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v23 = v60;
          v24 = v22;
          v25 = *(_DWORD *)(BugCheckParameter2 + 600) & 0xFFFFFFC0;
          v26 = v59;
          v27 = 2 * (v48 & 0x1E);
          *(__m128i *)(BugCheckParameter2 + 508) = v58;
          *(_QWORD *)(BugCheckParameter2 + 524) = v26;
          *(_DWORD *)(BugCheckParameter2 + 532) = v23;
          *(_DWORD *)(BugCheckParameter2 + 540) = v54;
          *(_DWORD *)(BugCheckParameter2 + 536) = v47;
          *(_DWORD *)(BugCheckParameter2 + 600) = v25 | (v11 >> 2) & 3 | v27;
          KeReleaseSpinLock(&AcpiPowerLock, v24);
          if ( !_bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u) )
            _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
          return 0LL;
        }
        return result;
      }
      v11 = 4 * (*(_DWORD *)(v57 + 4) & 1) + 18;
      if ( (v9 & 2) != 0 )
        v11 |= 8u;
    }
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v9,
                v57,
                (unsigned int)&v58,
                (__int64)&v48,
                (__int64)&v47,
                (__int64)&v54,
                (__int64)&v53);
    v46 = updated;
    if ( updated >= 0 )
    {
      v13 = 2;
      v46 = 2;
      v49 = &v58.m128i_i64[1];
LABEL_10:
      v14 = AcpiSupportedSystemStates;
      if ( !_bittest(&v14, v13) )
        goto LABEL_18;
      SxD = ACPISystemPowerGetSxD(BugCheckParameter2, v13, &v50);
      v16 = SxD;
      if ( SxD >= 0 )
      {
        if ( v50 > *(_DWORD *)v49 )
          *(_DWORD *)v49 = v50;
        goto LABEL_18;
      }
      if ( SxD != -1073741772 )
      {
        v33 = 0;
        v34 = &unk_1C006FB8B;
        v35 = &unk_1C006FB8B;
        if ( BugCheckParameter2 )
        {
          v36 = *(_QWORD *)(BugCheckParameter2 + 8);
          v33 = BugCheckParameter2;
          if ( (v36 & 0x200000000000LL) != 0 )
          {
            v34 = *(void **)(BugCheckParameter2 + 608);
            if ( (v36 & 0x400000000000LL) != 0 )
              v35 = *(void **)(BugCheckParameter2 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x16u,
            (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
            v16,
            v33,
            (__int64)v34,
            (__int64)v35);
      }
      v45 = 0;
      v9 = v11 & (-1 << *(_DWORD *)v49);
      v52 = v9;
      if ( !v9 )
        goto LABEL_57;
      while ( 1 )
      {
        LeastSignificantBit = RtlFindLeastSignificantBit(v9);
        BugCheckParameter4 = LeastSignificantBit;
        v50 = LeastSignificantBit;
        v9 = ~(1 << LeastSignificantBit) & v52;
        v52 = v9;
        if ( v46 <= v47 )
        {
          if ( (v9 & v48) != 0 )
            goto LABEL_55;
          v19 = v49;
          if ( (_DWORD)BugCheckParameter4 == v53 )
          {
            v45 = 1;
            *(_DWORD *)v49 = BugCheckParameter4;
          }
        }
        else
        {
          v19 = v49;
        }
        if ( (_DWORD)BugCheckParameter4 == 4 || !v51 )
          goto LABEL_17;
        KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v37 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4);
        v55 = v37;
        if ( !v37 )
        {
          v41 = (const char *)&unk_1C006FB8B;
          if ( BugCheckParameter2 )
          {
            v42 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v42 & 0x200000000000LL) != 0 )
            {
              v8 = *(const char **)(BugCheckParameter2 + 608);
              if ( (v42 & 0x400000000000LL) != 0 )
                v41 = *(const char **)(BugCheckParameter2 + 616);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x17u,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              BugCheckParameter4 - 1,
              v4,
              v8,
              v41);
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
        }
        KeReleaseSpinLock(&AcpiPowerLock, v38);
        if ( v55 >= v46 )
        {
          v19 = v49;
LABEL_17:
          *(_DWORD *)v19 = BugCheckParameter4;
LABEL_18:
          v49 = (__int64 *)((char *)v49 + 4);
          v20 = v46 + 1;
          v46 = v20;
          if ( v20 > 6 )
            goto LABEL_20;
          v13 = v20;
          goto LABEL_10;
        }
        v9 = v52;
LABEL_55:
        if ( !v9 )
        {
          if ( v45 )
            goto LABEL_18;
LABEL_57:
          v39 = (const char *)&unk_1C006FB8B;
          if ( BugCheckParameter2 )
          {
            v40 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v40 & 0x200000000000LL) != 0 )
            {
              v8 = *(const char **)(BugCheckParameter2 + 608);
              if ( (v40 & 0x400000000000LL) != 0 )
                v39 = *(const char **)(BugCheckParameter2 + 616);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xFu,
              0x18u,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              v46 - 1,
              v4,
              v8,
              v39);
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, (unsigned int)v46);
        }
      }
    }
    v30 = &unk_1C006FB8B;
    v31 = &unk_1C006FB8B;
    if ( BugCheckParameter2 )
    {
      v32 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v30 = *(void **)(BugCheckParameter2 + 608);
        if ( (v32 & 0x400000000000LL) != 0 )
          v31 = *(void **)(BugCheckParameter2 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x15u,
        (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
        updated,
        v4,
        (__int64)v30,
        (__int64)v31);
    return (unsigned int)v46;
  }
}
