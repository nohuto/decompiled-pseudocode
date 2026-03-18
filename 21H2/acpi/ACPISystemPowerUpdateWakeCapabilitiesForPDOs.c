/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C001EF50
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C00953E0 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C00203FC (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00952D0 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C009581C (ACPISystemPowerGetDeviceWake.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        int *a8)
{
  int v8; // esi
  int v9; // ebx
  int *v10; // r15
  unsigned int v11; // edi
  int v13; // eax
  int v14; // ebp
  _DWORD *v15; // rax
  KIRQL v17; // al
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r15d
  KIRQL v22; // r9
  int v23; // eax
  int IdleWakeInfo; // eax
  int v25; // edx
  __int64 v26; // rax
  char v27; // cl
  char v28; // [rsp+20h] [rbp-68h]
  unsigned int v29; // [rsp+24h] [rbp-64h] BYREF
  int *v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  __m128i si128; // [rsp+40h] [rbp-48h]
  int v34; // [rsp+50h] [rbp-38h]
  int v35; // [rsp+54h] [rbp-34h]

  v8 = 0;
  v29 = 0;
  v9 = 0;
  v10 = a5;
  v11 = 0;
  v32 = a6;
  v13 = *(_DWORD *)(a1 + 8);
  v31 = a4;
  v30 = a5;
  v28 = 0;
  if ( (*(_QWORD *)&v13 & 0x10000LL) == 0 )
    goto LABEL_2;
  v17 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = *(_DWORD *)(a1 + 536);
  LOBYTE(v18) = v17;
  v21 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v19, v20, v18);
  KeReleaseSpinLock(&AcpiPowerLock, v22);
  if ( !v11 )
  {
    v26 = *(_QWORD *)(a1 + 1000);
    if ( (v26 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v11 = 5;
      else
        v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v11 = (v26 & 0x100000000LL) != 0;
    }
  }
  v23 = AcpiSupportedSystemStates;
  if ( !_bittest(&v23, v11) )
  {
    v10 = v30;
    v11 = 0;
    goto LABEL_2;
  }
  if ( v21 )
  {
    v27 = v21;
    v28 = 1;
    v9 = v21;
    v10 = v30;
    *v30 = 1 << v27;
  }
  else
  {
    v10 = v30;
  }
  v8 = v9;
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v11, &v29);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v29);
  if ( IdleWakeInfo >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v34 = 4;
    v35 = 4;
    if ( v29 > 5 )
      v9 = 0;
    else
      v9 = si128.m128i_i32[v29];
    v8 = v9;
    v25 = v9;
  }
  else
  {
    v25 = v9;
    if ( !v28 )
    {
      v9 = *(_DWORD *)(v31 + 4LL * (int)v11);
      if ( !v9 )
        v9 = 4;
      goto LABEL_20;
    }
  }
  if ( !v9 )
  {
LABEL_2:
    v14 = 0;
    goto LABEL_3;
  }
LABEL_20:
  v8 = v25;
  v14 = 1 << v9;
LABEL_3:
  v15 = (_DWORD *)v32;
  *v10 = v14;
  if ( v15 )
    *v15 = v11;
  if ( a7 )
    *a7 = v9;
  if ( a8 )
    *a8 = v8;
  return 0LL;
}
