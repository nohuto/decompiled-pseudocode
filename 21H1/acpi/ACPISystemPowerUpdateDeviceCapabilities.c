/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00199EC
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009ED54 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C005F16C (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C009D8F4 (ACPISystemPowerUpdateWakeCapabilities.c)
 *     ACPISystemPowerGetSxD @ 0x1C009DF70 (ACPISystemPowerGetSxD.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009E0D4 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm0_8
  int v7; // eax
  void *v8; // rsi
  unsigned int v9; // edx
  int v10; // r14d
  unsigned int v11; // r15d
  int updated; // eax
  signed int v13; // ecx
  int v14; // eax
  int SxD; // eax
  char v16; // cl
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r14
  __int64 *v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
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
  void *v39; // rcx
  __int64 v40; // rax
  void *v41; // rdx
  __int64 v42; // rcx
  void *v43; // rcx
  __int64 v44; // [rsp+40h] [rbp-59h]
  __int64 v45; // [rsp+40h] [rbp-59h]
  __int64 v46; // [rsp+40h] [rbp-59h]
  __int64 v47; // [rsp+40h] [rbp-59h]
  char v48; // [rsp+50h] [rbp-49h]
  unsigned int v49; // [rsp+54h] [rbp-45h]
  int v50; // [rsp+54h] [rbp-45h]
  int v51; // [rsp+58h] [rbp-41h] BYREF
  int v52; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int64 *v53; // [rsp+60h] [rbp-39h]
  int v54; // [rsp+68h] [rbp-31h] BYREF
  int v55; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v56; // [rsp+70h] [rbp-29h]
  int v57; // [rsp+74h] [rbp-25h] BYREF
  int v58; // [rsp+78h] [rbp-21h] BYREF
  int v59; // [rsp+7Ch] [rbp-1Dh]
  int v60; // [rsp+80h] [rbp-19h]
  __int64 v61; // [rsp+88h] [rbp-11h]
  __m128i v62; // [rsp+90h] [rbp-9h] BYREF
  __int64 v63; // [rsp+A0h] [rbp+7h]
  __int32 v64; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v62 = a2[1];
  v64 = v3;
  v61 = a3;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v62, 4));
  v54 = 0;
  v58 = 0;
  if ( v62.m128i_i32[1] != 1 )
    v7 = 1;
  v57 = 0;
  v62.m128i_i32[1] = v7;
  v51 = 0;
  v55 = 0;
  v60 = 0;
  v52 = 0;
  v63 = v5;
  v8 = &unk_1C00701BA;
  v10 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v10 < 0 )
  {
    v28 = &unk_1C00701BA;
    if ( BugCheckParameter2 )
    {
      v29 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v8 = *(void **)(BugCheckParameter2 + 568);
        if ( (v29 & 0x400000000000LL) != 0 )
          v28 = *(void **)(BugCheckParameter2 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v44 = (__int64)v28;
      LOBYTE(v28) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v28,
        15,
        20,
        (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
        v10,
        v4,
        (__int64)v8,
        v44);
    }
    return (unsigned int)v10;
  }
  else
  {
    v11 = v55 | v60;
    if ( !(v55 | v60) )
    {
      v9 = *(_DWORD *)(v61 + 4);
      if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 64 && (v9 & 3) == 0 )
        goto LABEL_19;
      v11 = 4 * (*(_DWORD *)(v61 + 4) & 1) + 18;
      if ( (v9 & 2) != 0 )
        v11 |= 8u;
    }
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v9,
                v61,
                (unsigned int)&v62,
                (__int64)&v52,
                (__int64)&v51,
                (__int64)&v58,
                (__int64)&v57);
    v49 = updated;
    if ( updated >= 0 )
    {
      v13 = 2;
      v50 = 2;
      v53 = &v62.m128i_i64[1];
      while ( 1 )
      {
        v14 = AcpiSupportedSystemStates;
        if ( !_bittest(&v14, v13) )
        {
          v19 = v53;
          goto LABEL_18;
        }
        SxD = ACPISystemPowerGetSxD(BugCheckParameter2, (unsigned int)v13, &v54);
        v16 = SxD;
        if ( SxD >= 0 )
        {
          v19 = v53;
          if ( v54 > *(_DWORD *)v53 )
            *(_DWORD *)v53 = v54;
          v13 = v50;
          goto LABEL_18;
        }
        if ( SxD != -1073741772 )
        {
          v33 = 0;
          v34 = &unk_1C00701BA;
          v35 = &unk_1C00701BA;
          if ( BugCheckParameter2 )
          {
            v36 = *(_QWORD *)(BugCheckParameter2 + 8);
            v33 = BugCheckParameter2;
            if ( (v36 & 0x200000000000LL) != 0 )
            {
              v34 = *(void **)(BugCheckParameter2 + 568);
              if ( (v36 & 0x400000000000LL) != 0 )
                v35 = *(void **)(BugCheckParameter2 + 576);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v46 = (__int64)v35;
            LOBYTE(v35) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v35,
              15,
              22,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              v16,
              v33,
              (__int64)v34,
              v46);
          }
        }
        v48 = 0;
        v9 = v11 & (-1 << *(_DWORD *)v53);
        v56 = v9;
        if ( !v9 )
          goto LABEL_60;
        while ( 1 )
        {
          LeastSignificantBit = RtlFindLeastSignificantBit(v9);
          BugCheckParameter4 = LeastSignificantBit;
          v54 = LeastSignificantBit;
          v13 = v50;
          v9 = ~(1 << LeastSignificantBit) & v56;
          v56 = v9;
          if ( v50 > v51 )
          {
            v19 = v53;
            goto LABEL_16;
          }
          if ( (v9 & v52) == 0 )
            break;
LABEL_56:
          if ( !v9 )
          {
            v19 = v53;
            goto LABEL_59;
          }
        }
        v19 = v53;
        if ( (_DWORD)BugCheckParameter4 == v57 )
        {
          v48 = 1;
          *(_DWORD *)v53 = BugCheckParameter4;
        }
LABEL_16:
        if ( (_DWORD)BugCheckParameter4 == 4 || !v55 )
        {
          *(_DWORD *)v19 = BugCheckParameter4;
          goto LABEL_18;
        }
        KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v37 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4);
        v59 = v37;
        if ( !v37 )
        {
          v41 = &unk_1C00701BA;
          if ( BugCheckParameter2 )
          {
            v42 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v42 & 0x200000000000LL) != 0 )
            {
              v8 = *(void **)(BugCheckParameter2 + 568);
              if ( (v42 & 0x400000000000LL) != 0 )
                v41 = *(void **)(BugCheckParameter2 + 576);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v47 = (__int64)v41;
            LOBYTE(v41) = 2;
            WPP_RECORDER_SF_Dqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v41,
              15,
              23,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              BugCheckParameter4 - 1,
              v4,
              (__int64)v8,
              v47);
          }
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
        }
        KeReleaseSpinLock(&AcpiPowerLock, v38);
        v13 = v50;
        if ( v59 < v50 )
        {
          v9 = v56;
          goto LABEL_56;
        }
        v19 = v53;
        v48 = 1;
        *(_DWORD *)v53 = BugCheckParameter4;
LABEL_59:
        if ( !v48 )
        {
LABEL_60:
          v39 = &unk_1C00701BA;
          if ( BugCheckParameter2 )
          {
            v40 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v40 & 0x200000000000LL) != 0 )
            {
              v8 = *(void **)(BugCheckParameter2 + 568);
              if ( (v40 & 0x400000000000LL) != 0 )
                v39 = *(void **)(BugCheckParameter2 + 576);
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 2;
            WPP_RECORDER_SF_Dqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v9,
              15,
              24,
              (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
              v50 - 1,
              v4,
              (__int64)v8,
              (__int64)v39);
          }
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v50);
        }
LABEL_18:
        v50 = ++v13;
        v53 = (__int64 *)((char *)v19 + 4);
        if ( v13 > 6 )
        {
LABEL_19:
          result = ACPISystemPowerUpdateWakeCapabilities(
                     BugCheckParameter2,
                     v9,
                     v61,
                     (unsigned int)&v62,
                     (__int64)&v52,
                     (__int64)&v51,
                     (__int64)&v58,
                     (__int64)&v57);
          v59 = result;
          if ( (int)result < 0 )
          {
            v43 = &unk_1C00701BA;
            if ( BugCheckParameter2 )
            {
              v21 = *(_QWORD *)(BugCheckParameter2 + 8);
              v4 = BugCheckParameter2;
              if ( (v21 & 0x200000000000LL) != 0 )
              {
                v8 = *(void **)(BugCheckParameter2 + 568);
                if ( (v21 & 0x400000000000LL) != 0 )
                  v43 = *(void **)(BugCheckParameter2 + 576);
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v21) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                v21,
                15,
                25,
                (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
                result,
                v4,
                (__int64)v8,
                (__int64)v43);
              return (unsigned int)v59;
            }
          }
          else
          {
            v22 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
            v23 = v64;
            v24 = v22;
            v25 = *(_DWORD *)(BugCheckParameter2 + 560) & 0xFFFFFFC0;
            v26 = v63;
            v27 = 2 * (v52 & 0x1E);
            *(__m128i *)(BugCheckParameter2 + 468) = v62;
            *(_QWORD *)(BugCheckParameter2 + 484) = v26;
            *(_DWORD *)(BugCheckParameter2 + 492) = v23;
            *(_DWORD *)(BugCheckParameter2 + 500) = v58;
            *(_DWORD *)(BugCheckParameter2 + 496) = v51;
            *(_DWORD *)(BugCheckParameter2 + 560) = v25 | (v11 >> 2) & 3 | v27;
            KeReleaseSpinLock(&AcpiPowerLock, v24);
            if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) == 0 )
              _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
            return 0LL;
          }
          return result;
        }
      }
    }
    v30 = &unk_1C00701BA;
    v31 = &unk_1C00701BA;
    if ( BugCheckParameter2 )
    {
      v32 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v30 = *(void **)(BugCheckParameter2 + 568);
        if ( (v32 & 0x400000000000LL) != 0 )
          v31 = *(void **)(BugCheckParameter2 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = (__int64)v31;
      LOBYTE(v31) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v31,
        15,
        21,
        (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
        updated,
        v4,
        (__int64)v30,
        v45);
    }
    return v49;
  }
}
