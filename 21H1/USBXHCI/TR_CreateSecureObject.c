/*
 * XREFs of TR_CreateSecureObject @ 0x1C003E52C
 * Callers:
 *     TR_Create @ 0x1C006AA48 (TR_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0018AA0 (CommonBuffer_ReleaseBuffer.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C002FE40 (CommonBuffer_AcquireShadowBuffer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     XilEndpoint_GetRemoteHandle @ 0x1C0036DB4 (XilEndpoint_GetRemoteHandle.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C004F778 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_CreateSecureObject(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // r15
  _QWORD *v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 RemoteHandle; // rax
  __int64 v14; // rcx
  int v15; // edx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  _QWORD *v19; // rcx
  __int128 v21; // [rsp+40h] [rbp-39h] BYREF
  __int64 v22; // [rsp+50h] [rbp-29h]
  _QWORD v23[8]; // [rsp+60h] [rbp-19h] BYREF

  v22 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v21 = 0LL;
  if ( *(_BYTE *)(v4 + 537) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v7 = CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
  if ( v7 )
  {
    memset(v23, 0, sizeof(v23));
    v9 = *(_QWORD *)(a1 + 56);
    LODWORD(v23[4]) = 39;
    RemoteHandle = XilEndpoint_GetRemoteHandle(v9, v10, v11, v12);
    v14 = *(_QWORD *)(a1 + 40);
    v23[5] = RemoteHandle;
    LODWORD(v23[6]) = *(_DWORD *)(a1 + 64);
    HIDWORD(v23[6]) = *(_DWORD *)(a1 + 20);
    LOBYTE(v23[7]) = (*(_QWORD *)(v14 + 336) & 0x4000000000000LL) != 0;
    v8 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v14 + 112), v23, 64LL, &v21, 24);
    if ( v8 < 0 )
      goto LABEL_20;
    if ( (int)v21 >= 0 )
    {
      *(_QWORD *)(a1 + 288) = *((_QWORD *)&v21 + 1);
      v7[3] = v22;
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v19 = *(_QWORD **)(a1 + 216);
      if ( *v19 != a1 + 208 )
        __fastfail(3u);
      v7[1] = v19;
      *v7 = a1 + 208;
      *v19 = v7;
      *(_QWORD *)(a1 + 216) = v7;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    }
    else
    {
      v8 = v21;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          v15,
          14,
          24,
          (__int64)&WPP_cd4ef2b1b5c53df0a5e2b7b6906ad1d0_Traceguids,
          v21);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v16, v17, v18);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    if ( v8 < 0 )
LABEL_20:
      CommonBuffer_ReleaseBuffer(v6, (__int64)v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
