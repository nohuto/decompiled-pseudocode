/*
 * XREFs of TR_AcquireSecureSegments @ 0x1C003F134
 * Callers:
 *     TR_EnsureSegments @ 0x1C0008D50 (TR_EnsureSegments.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_AcquireSecureSegments(__int64 a1, unsigned int a2, __int64 a3)
{
  int *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v9; // r13d
  __int64 Pool2; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // edx
  int v21; // ebx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 j; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v36; // [rsp+20h] [rbp-49h]
  __int64 v37; // [rsp+20h] [rbp-49h]
  __int64 v38; // [rsp+20h] [rbp-49h]
  _QWORD *v39; // [rsp+40h] [rbp-29h] BYREF
  _QWORD **v40; // [rsp+48h] [rbp-21h]
  __int64 i; // [rsp+50h] [rbp-19h]
  __int128 v42; // [rsp+58h] [rbp-11h] BYREF
  __int128 v43; // [rsp+68h] [rbp-1h]
  __int128 v44; // [rsp+78h] [rbp+Fh]

  v40 = &v39;
  v3 = 0LL;
  v4 = 0;
  v39 = &v39;
  v6 = *(_QWORD *)(a1 + 40);
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  for ( i = *(_QWORD *)(v6 + 120); v4 < a2; v40 = (_QWORD **)v11 )
  {
    v9 = *(_DWORD *)(a1 + 20);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(v9 + 88), 1229146200LL);
    v11 = (_QWORD *)Pool2;
    if ( !Pool2 )
      goto LABEL_15;
    *(_DWORD *)(Pool2 + 40) = v9 + 88;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 88;
    *(_DWORD *)(Pool2 + 44) = v9;
    *(_DWORD *)(Pool2 + 64) = 828862034;
    *(_QWORD *)(Pool2 + 72) = a1;
    *(_DWORD *)(Pool2 + 80) = 2;
    v12 = v40;
    if ( *v40 != &v39 )
LABEL_38:
      __fastfail(3u);
    v11[1] = v40;
    *v11 = &v39;
    ++v4;
    *v12 = v11;
  }
  v13 = -1;
  v14 = 8 * a2 + 8;
  if ( v14 >= 8 * a2 )
    v13 = 8 * a2 + 8;
  v15 = 0;
  if ( v14 >= 8 * a2 )
    v15 = v13;
  v16 = v15;
  v17 = ExAllocatePool2(64LL, v15, 1229146200LL);
  v3 = (int *)v17;
  if ( !v17 )
  {
LABEL_15:
    v21 = -1073741670;
    goto LABEL_16;
  }
  *((_QWORD *)&v43 + 1) = *(_QWORD *)(a1 + 288);
  v18 = v17;
  v19 = *(_QWORD *)(a1 + 40);
  LODWORD(v44) = 40;
  DWORD2(v44) = a2;
  v21 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v19 + 112), &v42, 48LL, v18, v16);
  if ( v21 >= 0 )
  {
    v21 = *v3;
    if ( *v3 >= 0 )
    {
      if ( v3[1] == a2 )
      {
        v32 = v39;
        v33 = 0LL;
        while ( &v39 != v32 )
        {
          v34 = *(_QWORD *)&v3[2 * v33 + 2];
          v33 = (unsigned int)(v33 + 1);
          v32[3] = v34;
          v32 = (_QWORD *)*v32;
        }
        if ( (_DWORD)v33 != a2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              (__int64)v32,
              v33,
              v22,
              v36,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
              145,
              "Segment mismatch");
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        if ( v39 != &v39 )
        {
          **(_QWORD **)(a3 + 8) = v39;
          v39[1] = *(_QWORD *)(a3 + 8);
          *v40 = (_QWORD *)a3;
          *(_QWORD *)(a3 + 8) = v40;
          v40 = &v39;
          v39 = &v39;
        }
        v21 = 0;
LABEL_40:
        ExFreePoolWithTag(v3, 0x49434858u);
        return (unsigned int)v21;
      }
      v21 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          v20,
          14,
          23,
          (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v29,
            v30,
            v31,
            v38,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
            126,
            "allocateSegmentsOut->NumberOfSegments != SegmentsRequired");
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v20,
        14,
        22,
        (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
        *v3);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v23,
          v24,
          v25,
          v37,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
          117,
          "TransferRingAllocateSegments Failed");
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
LABEL_16:
  for ( j = i; ; CommonBuffer_ReleaseBuffer(j, v27) )
  {
    v27 = (__int64)v39;
    if ( v39 == &v39 )
      break;
    if ( (_QWORD **)v39[1] != &v39 )
      goto LABEL_38;
    v28 = *v39;
    if ( *(_QWORD **)(*v39 + 8LL) != v39 )
      goto LABEL_38;
    v39 = (_QWORD *)*v39;
    *(_QWORD *)(v28 + 8) = &v39;
  }
  if ( v3 )
    goto LABEL_40;
  return (unsigned int)v21;
}
