/*
 * XREFs of TR_CreateSecureObject @ 0x1C003F59C
 * Callers:
 *     TR_Create @ 0x1C006BCD8 (TR_Create.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C00308F0 (CommonBuffer_AcquireShadowBuffer.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     XilEndpoint_GetRemoteHandle @ 0x1C00377C4 (XilEndpoint_GetRemoteHandle.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_CreateSecureObject(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  _QWORD *v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 RemoteHandle; // rax
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-59h]
  __int64 v22; // [rsp+20h] [rbp-59h]
  __int128 v23; // [rsp+40h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-29h]
  _QWORD v25[8]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v24) = 0;
  v1 = *(_QWORD *)(a1 + 40);
  v23 = 0LL;
  if ( *(_BYTE *)(v1 + 553) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v3,
        v4,
        v5,
        v21,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
        194,
        "Code Path Requires Passive Level");
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v7 = (_QWORD *)CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v25, 0, sizeof(v25));
  v9 = *(_QWORD *)(a1 + 56);
  LODWORD(v25[4]) = 39;
  RemoteHandle = XilEndpoint_GetRemoteHandle(v9, v10, v11, v12);
  v14 = *(_QWORD *)(a1 + 40);
  v25[5] = RemoteHandle;
  LODWORD(v25[6]) = *(_DWORD *)(a1 + 64);
  HIDWORD(v25[6]) = *(_DWORD *)(a1 + 20);
  LOBYTE(v25[7]) = (*(_QWORD *)(v14 + 336) & 0x4000000000000LL) != 0;
  v8 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v14 + 112), v25, 64LL, &v23, 24);
  if ( v8 < 0 )
  {
LABEL_16:
    CommonBuffer_ReleaseBuffer(v6, (__int64)v7);
    return (unsigned int)v8;
  }
  if ( (int)v23 < 0 )
  {
    v8 = v23;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v15,
        14,
        24,
        (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
        v23);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v16,
          v17,
          v18,
          v22,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
          251,
          "TransferRingCreate Failed");
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    goto LABEL_16;
  }
  *(_QWORD *)(a1 + 288) = *((_QWORD *)&v23 + 1);
  v7[3] = v24;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v20 = *(_QWORD **)(a1 + 216);
  if ( *v20 != a1 + 208 )
    __fastfail(3u);
  v7[1] = v20;
  *v7 = a1 + 208;
  *v20 = v7;
  *(_QWORD *)(a1 + 216) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return (unsigned int)v8;
}
