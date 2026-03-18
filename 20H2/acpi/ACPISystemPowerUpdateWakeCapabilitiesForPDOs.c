/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0017D60
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C009D8F4 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0016194 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C009BCFC (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009C820 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int *a8)
{
  int v8; // r14d
  char v9; // r12
  int *v10; // r15
  int v11; // ebx
  unsigned int v12; // edi
  int v14; // eax
  int v15; // esi
  unsigned int *v16; // rax
  int v18; // r15d
  KIRQL v19; // r9
  int v20; // eax
  int IdleWakeInfo; // eax
  __int64 v22; // rax
  char v23; // cl
  unsigned int v24; // [rsp+20h] [rbp-78h] BYREF
  int *v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  unsigned __int128 v27; // [rsp+38h] [rbp-60h]
  __m128i si128; // [rsp+48h] [rbp-50h]
  int v29; // [rsp+58h] [rbp-40h]
  int v30; // [rsp+5Ch] [rbp-3Ch]

  v8 = 0;
  v24 = 0;
  v9 = 0;
  v10 = a5;
  v11 = 0;
  v12 = 0;
  v27 = __PAIR128__(a7, a6);
  v14 = *(_DWORD *)(a1 + 8);
  v26 = a4;
  v25 = a5;
  if ( (*(_QWORD *)&v14 & 0x10000LL) == 0 )
    goto LABEL_2;
  KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v12 = *(_DWORD *)(a1 + 496);
  v18 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
  KeReleaseSpinLock(&AcpiPowerLock, v19);
  if ( !v12 )
  {
    v22 = *(_QWORD *)(a1 + 960);
    if ( (v22 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v12 = 5;
      else
        v12 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v12 = (v22 & 0x100000000LL) != 0;
    }
  }
  v20 = AcpiSupportedSystemStates;
  if ( !_bittest(&v20, v12) )
  {
    v10 = v25;
    v12 = 0;
    goto LABEL_2;
  }
  if ( v18 )
  {
    v23 = v18;
    v11 = v18;
    v10 = v25;
    v9 = 1;
    *v25 = 1 << v23;
  }
  else
  {
    v10 = v25;
  }
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v12, &v24);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v24);
  if ( IdleWakeInfo >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v29 = 4;
    v30 = 4;
    if ( v24 > 5 )
      v11 = 0;
    else
      v11 = si128.m128i_i32[v24];
    v9 = 1;
  }
  v8 = v11;
  if ( v9 )
  {
LABEL_32:
    if ( v11 )
      goto LABEL_19;
LABEL_2:
    v15 = 0;
    goto LABEL_3;
  }
  v11 = *(_DWORD *)(v26 + 4LL * (int)v12);
  if ( !v11 )
  {
    v11 = 4;
    goto LABEL_32;
  }
LABEL_19:
  v15 = 1 << v11;
LABEL_3:
  v16 = (unsigned int *)v27;
  *v10 = v15;
  if ( v16 )
    *v16 = v12;
  if ( *((_QWORD *)&v27 + 1) )
    **((_DWORD **)&v27 + 1) = v11;
  if ( a8 )
    *a8 = v8;
  return 0LL;
}
