/*
 * XREFs of RegisterKernelPepIdleStates @ 0x1C002EE90
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C000AC00 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     DecodeAcpi2CState @ 0x1C0030DC8 (DecodeAcpi2CState.c)
 *     PepRegisterSpmSettings @ 0x1C00345BC (PepRegisterSpmSettings.c)
 */

__int64 __fastcall RegisterKernelPepIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  void *v6; // rsi
  int v7; // ebx
  unsigned int *v8; // rbx
  _DWORD *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  SIZE_T v12; // r15
  PVOID PoolWithTag; // rax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r13
  __int128 **v17; // r15
  __int64 v18; // r12
  __int64 v19; // r9
  __int128 *v20; // rdx
  _BYTE *v21; // r11
  __int64 v22; // r14
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // eax
  __int64 v29; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-91h]
  _DWORD *v31; // [rsp+40h] [rbp-89h]
  __int64 v32; // [rsp+48h] [rbp-81h]
  __int64 v33; // [rsp+50h] [rbp-79h]
  _QWORD v34[14]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v35; // [rsp+D0h] [rbp+7h] BYREF
  int v36; // [rsp+E0h] [rbp+17h]

  v32 = a3;
  v3 = a3;
  v33 = a1;
  LOBYTE(v29) = 0;
  memset(v34, 0, 0x68uLL);
  v6 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00133F8,
    0LL);
  if ( !dword_1C001398C || PlatformStatesRegistered )
  {
    v7 = 0;
  }
  else
  {
    HIDWORD(v34[0]) = dword_1C001398C;
    LODWORD(v34[0]) = 62;
    v34[5] = PepQueryPlatformStateResidency;
    v7 = ((__int64 (__fastcall *)(_QWORD *))qword_1C0013638)(v34);
    if ( v7 >= 0 )
    {
      PlatformStatesRegistered = 1;
      PepRegisterSpmSettings(a1);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00133F8);
  if ( v7 >= 0 )
  {
    v8 = *(unsigned int **)(a1 + 1128);
    v9 = *(_DWORD **)(a1 + 512);
    v31 = v9;
    v10 = v8[1];
    v11 = *v8;
    HIDWORD(v29) = *v8;
    if ( v10 )
    {
      v12 = 16 * v10;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x72637250u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, v12);
      v9 = v31;
      v11 = HIDWORD(v29);
      v3 = v32;
    }
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)(a2 + 24) = PepIdlePrepare;
    *(_QWORD *)(a2 + 80) = PepIdleExecute;
    *(_QWORD *)(a2 + 88) = PepIdleComplete;
    *(_QWORD *)(a2 + 32) = PepIdleCancel;
    *(_QWORD *)(a2 + 96) = PepIsHalted;
    *(_QWORD *)(a2 + 104) = PepInitiateWake;
    *(_DWORD *)(a2 + 112) = v8[1];
    *(_BYTE *)(a2 + 16) = 1;
    v14 = v8[1];
    v35 = 0LL;
    *(_DWORD *)(v3 + 40) = v14;
    v15 = 0;
    LOBYTE(v35) = 127;
    BYTE12(v35) = 1;
    HIWORD(v35) = 0;
    v36 = 0;
    while ( 1 )
    {
      v30 = v15;
      if ( v15 >= v11 )
        break;
      v16 = v15;
      LOBYTE(v29) = 0;
      v17 = (__int128 **)(88LL * v15 + v3 + 64);
      v18 = 32LL * v15;
      if ( ((v8[v15 + 2] >> 3) & 0xF) != 0 )
      {
        if ( !v9 || !*v9 )
          goto LABEL_30;
        v19 = 0LL;
        v20 = &v35;
        v21 = v9 + 4;
        do
        {
          if ( *v21 == ((v8[v15 + 2] >> 3) & 0xF) )
            v20 = (__int128 *)&v31[4 * v19 + 1 + (unsigned int)v19];
          v19 = (unsigned int)(v19 + 1);
          v21 += 20;
        }
        while ( (unsigned int)v19 < *v9 );
        v22 = v33;
        if ( v20 != &v35 )
          *v17 = v20;
        if ( (int)DecodeAcpi2CState(v22, (_DWORD)v20, 0, (unsigned int)&v29, (__int64)v17) < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v22 + 1096), 8u);
LABEL_30:
          v7 = -1073741823;
          goto LABEL_32;
        }
        v11 = HIDWORD(v29);
        if ( !*v17 && (v8[v16 + 2] & 0x78) > 8 )
        {
          *(_DWORD *)(v18 + a2 + 120) |= 0x40000000u;
          v17[2] = 0LL;
          v17[3] = 0LL;
        }
      }
      v3 = v32;
      *(_DWORD *)(v18 + a2 + 120) ^= (*(_DWORD *)(v18 + a2 + 120) ^ v8[v16 + 2]) & 0x78;
      v23 = *(_DWORD *)(v18 + a2 + 120) ^ ((unsigned __int8)*(_DWORD *)(v18 + a2 + 120) ^ (unsigned __int8)v8[v16 + 2]) & 1;
      *(_DWORD *)(v18 + a2 + 120) = v23;
      v24 = v23 ^ (v8[v16 + 2] ^ v23) & 2;
      v25 = (unsigned __int8)v29;
      *(_DWORD *)(v18 + a2 + 120) = v24;
      v26 = v8[v16 + 2] & 4 | v24 & 0x7FFFFFFB | (v25 << 31);
      v27 = v30;
      *(_DWORD *)(v18 + a2 + 120) = v26;
      v15 = v27 + 1;
      v9 = v31;
    }
    *(_QWORD *)(v3 + 48) = v6;
    v6 = 0LL;
    v7 = 0;
LABEL_32:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x72637250u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x10u,
      (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids,
      v7,
      v29);
  }
  return (unsigned int)v7;
}
