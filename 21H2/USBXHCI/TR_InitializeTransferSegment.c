/*
 * XREFs of TR_InitializeTransferSegment @ 0x1C003FC2C
 * Callers:
 *     TR_InitializeTransferRing @ 0x1C00013FC (TR_InitializeTransferRing.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall TR_InitializeTransferSegment(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // eax
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-68h]
  int v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]
  __int64 v18; // [rsp+70h] [rbp-18h]

  v13 = 0LL;
  v2 = *(_QWORD *)(a1 + 288);
  v17 = 0;
  v12 = 0;
  v14 = 0LL;
  v15 = v2;
  v4 = *(_QWORD *)(a2 + 24);
  v16 = 42;
  v18 = v4;
  v5 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), &v13, 48LL, &v12, 4);
  if ( v5 >= 0 )
  {
    LOBYTE(v5) = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          v6,
          14,
          29,
          (__int64)&WPP_202329088b1a3bd773cf1c67d995fd13_Traceguids,
          v12);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v7,
            v8,
            v9,
            v11,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
            127,
            "TransferRingInitializeSegment Failed");
      }
      LOBYTE(v5) = KdRefreshDebuggerNotPresent();
      if ( !(_BYTE)v5 )
        __debugbreak();
    }
  }
  return v5;
}
