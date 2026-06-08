/*
 * XREFs of RegisterKernelPepIdleStates @ 0x1C0035F90
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003B20 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     DecodeAcpi2CState @ 0x1C0025738 (DecodeAcpi2CState.c)
 *     PepRegisterSpmSettings @ 0x1C0025840 (PepRegisterSpmSettings.c)
 */

__int64 __fastcall RegisterKernelPepIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // rsi
  int v7; // ebx
  unsigned int *v8; // rbx
  unsigned int *v9; // r12
  unsigned int v10; // eax
  SIZE_T v11; // r15
  PVOID PoolWithTag; // rax
  unsigned int v13; // eax
  int *v14; // rdi
  __int128 **v15; // r15
  _DWORD *v16; // rbx
  unsigned int v17; // r9d
  __int128 *v18; // rdx
  _BYTE *v19; // r11
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  __int64 v28; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-71h]
  _QWORD v30[14]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v31; // [rsp+B0h] [rbp+7h] BYREF
  int v32; // [rsp+C0h] [rbp+17h]

  LOBYTE(v28) = 0;
  memset(v30, 0, 0x68uLL);
  v6 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001C418,
    0LL);
  if ( !dword_1C001C9AC || PlatformStatesRegistered )
  {
    v7 = 0;
  }
  else
  {
    HIDWORD(v30[0]) = dword_1C001C9AC;
    LODWORD(v30[0]) = 62;
    v30[5] = PepQueryPlatformStateResidency;
    v7 = ((__int64 (__fastcall *)(_QWORD *))qword_1C001C658)(v30);
    if ( v7 >= 0 )
    {
      PlatformStatesRegistered = 1;
      PepRegisterSpmSettings(a1);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C418);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x10u,
        (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids,
        v7,
        v28);
    return (unsigned int)v7;
  }
  v8 = *(unsigned int **)(a1 + 1128);
  v9 = *(unsigned int **)(a1 + 512);
  v29 = *v8;
  v10 = v8[1];
  if ( v10 )
  {
    v11 = 16 * v10;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v11);
  }
  *(_WORD *)(a2 + 18) = 1;
  *(_QWORD *)(a2 + 24) = PepIdlePrepare;
  HIDWORD(v28) = 0;
  *(_QWORD *)(a2 + 80) = PepIdleExecute;
  *(_QWORD *)(a2 + 88) = PepIdleComplete;
  *(_QWORD *)(a2 + 32) = PepIdleCancel;
  *(_QWORD *)(a2 + 96) = PepIsHalted;
  *(_QWORD *)(a2 + 104) = PepInitiateWake;
  *(_DWORD *)(a2 + 112) = v8[1];
  *(_BYTE *)(a2 + 16) = 1;
  v13 = v8[1];
  v31 = 0LL;
  LOBYTE(v31) = 127;
  BYTE12(v31) = 1;
  HIWORD(v31) = 0;
  *(_DWORD *)(a3 + 40) = v13;
  v32 = 0;
  if ( !v29 )
  {
LABEL_29:
    *(_QWORD *)(a3 + 48) = v6;
    v7 = 0;
    v6 = 0LL;
    goto LABEL_30;
  }
  v14 = (int *)(a2 + 120);
  v15 = (__int128 **)(a3 + 64);
  v16 = v8 + 2;
  while ( 1 )
  {
    LOBYTE(v28) = 0;
    if ( ((*v16 >> 3) & 0xF) != 0 )
      break;
LABEL_28:
    v15 += 11;
    *v14 ^= (*v16 ^ *v14) & 0x78;
    v20 = *v14 ^ (*v16 ^ *v14) & 1;
    *v14 = v20;
    v21 = v20 ^ (*v16 ^ v20) & 2;
    v22 = (unsigned __int8)v28;
    *v14 = v21;
    v23 = v21 & 0x7FFFFFFB | (v22 << 31);
    v24 = *v16++ & 4;
    v25 = v24 | v23;
    v26 = HIDWORD(v28) + 1;
    *v14 = v25;
    v14 += 8;
    HIDWORD(v28) = v26;
    if ( v26 >= v29 )
      goto LABEL_29;
  }
  if ( !v9 || !*v9 )
    goto LABEL_34;
  v17 = 0;
  v18 = &v31;
  v19 = v9 + 4;
  do
  {
    if ( *v19 == ((*v16 >> 3) & 0xF) )
      v18 = (__int128 *)&v9[4 * v17 + 1 + v17];
    ++v17;
    v19 += 20;
  }
  while ( v17 < *v9 );
  if ( v18 != &v31 )
    *v15 = v18;
  if ( (int)DecodeAcpi2CState(a1, (__int64)v18, 0LL, (char *)&v28, (__int64)v15) >= 0 )
  {
    if ( !*v15 && (*v16 & 0x78u) > 8 )
    {
      *v14 |= 0x40000000u;
      v15[2] = 0LL;
      v15[3] = 0LL;
    }
    goto LABEL_28;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 8u);
LABEL_34:
  v7 = -1073741823;
LABEL_30:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return (unsigned int)v7;
}
