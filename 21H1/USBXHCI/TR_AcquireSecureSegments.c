/*
 * XREFs of TR_AcquireSecureSegments @ 0x1C003E014
 * Callers:
 *     TR_EnsureSegments @ 0x1C0008EF0 (TR_EnsureSegments.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0018AA0 (CommonBuffer_ReleaseBuffer.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C002FE40 (CommonBuffer_AcquireShadowBuffer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_AcquireSecureSegments(__int64 a1, unsigned int a2, __int64 a3)
{
  int *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int *PoolWithTag; // rax
  int *v17; // r9
  __int64 v18; // rax
  int v19; // edx
  int v20; // ebx
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  _QWORD *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  _QWORD *v34; // [rsp+40h] [rbp-29h] BYREF
  _QWORD **v35; // [rsp+48h] [rbp-21h]
  __int128 v36; // [rsp+50h] [rbp-19h] BYREF
  __int128 v37; // [rsp+60h] [rbp-9h]
  __int128 v38; // [rsp+70h] [rbp+7h]

  v35 = &v34;
  v3 = 0LL;
  v4 = 0;
  v34 = &v34;
  v6 = *(_QWORD *)(a1 + 40);
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v9 = *(_QWORD *)(v6 + 120);
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
      if ( !v10 )
        break;
      v11 = v35;
      if ( *v35 != &v34 )
LABEL_43:
        __fastfail(3u);
      v10[1] = v35;
      *v10 = &v34;
      ++v4;
      *v11 = v10;
      v35 = (_QWORD **)v10;
      if ( v4 >= a2 )
        goto LABEL_5;
    }
LABEL_17:
    v20 = -1073741670;
    goto LABEL_18;
  }
LABEL_5:
  v12 = -1;
  v13 = 8 * a2 + 8;
  if ( v13 >= 8 * a2 )
    v12 = 8 * a2 + 8;
  v14 = 0;
  if ( v13 >= 8 * a2 )
    v14 = v12;
  v15 = v14;
  PoolWithTag = (int *)ExAllocatePoolWithTag((POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState, v14, 0x49434858u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_17;
  *((_QWORD *)&v37 + 1) = *(_QWORD *)(a1 + 288);
  v17 = PoolWithTag;
  v18 = *(_QWORD *)(a1 + 40);
  LODWORD(v38) = 40;
  DWORD2(v38) = a2;
  v20 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v18 + 112), &v36, 48LL, v17, v15);
  if ( v20 < 0 )
    goto LABEL_18;
  v20 = *v3;
  if ( *v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v19,
        14,
        22,
        (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
        *v3);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v22, v23, v24);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
LABEL_37:
    if ( v20 < 0 )
      goto LABEL_18;
    if ( v34 != &v34 )
    {
      **(_QWORD **)(a3 + 8) = v34;
      v34[1] = *(_QWORD *)(a3 + 8);
      *v35 = (_QWORD *)a3;
      *(_QWORD *)(a3 + 8) = v35;
      v35 = &v34;
      v34 = &v34;
    }
    goto LABEL_40;
  }
  if ( v3[1] == a2 )
  {
    v30 = v34;
    v31 = 0LL;
    while ( &v34 != v30 )
    {
      v32 = *(_QWORD *)&v3[2 * v31 + 2];
      v31 = (unsigned int)(v31 + 1);
      v30[3] = v32;
      v30 = (_QWORD *)*v30;
    }
    if ( (_DWORD)v31 != a2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v30, v31, v21);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    v20 = 0;
    goto LABEL_37;
  }
  v20 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v19,
      14,
      23,
      (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v27, v28, v29);
  }
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
LABEL_18:
  while ( 1 )
  {
    v25 = (__int64)v34;
    if ( v34 == &v34 )
      break;
    if ( (_QWORD **)v34[1] != &v34 )
      goto LABEL_43;
    v26 = *v34;
    if ( *(_QWORD **)(*v34 + 8LL) != v34 )
      goto LABEL_43;
    v34 = (_QWORD *)*v34;
    *(_QWORD *)(v26 + 8) = &v34;
    CommonBuffer_ReleaseBuffer(v9, v25);
  }
LABEL_40:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x49434858u);
  return (unsigned int)v20;
}
