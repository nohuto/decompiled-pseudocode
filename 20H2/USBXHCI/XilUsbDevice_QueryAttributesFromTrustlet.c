/*
 * XREFs of XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0018F0C
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C0018DDC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C00502E8 (SecureChannel_SendRequestSynchronously.c)
 */

char __fastcall XilUsbDevice_QueryAttributesFromTrustlet(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  int v10; // r9d
  char v11; // cl
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int128 v14; // [rsp+48h] [rbp-41h]
  __int64 v15; // [rsp+58h] [rbp-31h]
  int v16; // [rsp+60h] [rbp-29h]
  int v17; // [rsp+64h] [rbp-25h]
  _QWORD v18[10]; // [rsp+70h] [rbp-19h] BYREF

  v17 = 0;
  v14 = 0LL;
  memset(v18, 0, 0x48uLL);
  PoolWithTag = *(_QWORD **)(a1 + 664);
  v6 = PoolWithTag[1];
  v7 = *(_QWORD *)(v6 + 112);
  if ( !*(_BYTE *)(a1 + 657) )
    return (char)PoolWithTag;
  if ( !v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v2, v3, v4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  v8 = *(_QWORD *)(a1 + 608);
  v13 = 0LL;
  v17 = 0;
  v15 = v8;
  v16 = 45;
  v14 = 0LL;
  LODWORD(PoolWithTag) = SecureChannel_SendRequestSynchronously(v7, &v13, 40LL, v18, 72);
  if ( (int)PoolWithTag < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (char)PoolWithTag;
    v10 = 14;
    goto LABEL_11;
  }
  LOBYTE(PoolWithTag) = v18[0];
  if ( SLODWORD(v18[0]) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (char)PoolWithTag;
    v10 = 15;
LABEL_11:
    LOBYTE(v9) = 2;
    LOBYTE(PoolWithTag) = WPP_RECORDER_SF_d(
                            *(_QWORD *)(v6 + 72),
                            v9,
                            12,
                            v10,
                            (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
                            (char)PoolWithTag);
    return (char)PoolWithTag;
  }
  v11 = BYTE6(v18[0]);
  *(_WORD *)(a1 + 672) = WORD2(v18[0]);
  LOBYTE(PoolWithTag) = HIBYTE(v18[4]);
  *(_BYTE *)(a1 + 688) = HIBYTE(v18[4]);
  *(_BYTE *)(a1 + 674) = v11;
  if ( v11 )
  {
    PoolWithTag = *(_QWORD **)(a1 + 680);
    if ( PoolWithTag
      || (PoolWithTag = ExAllocatePoolWithTag(
                          SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
                          0x20uLL,
                          0x49434858u),
          (*(_QWORD *)(a1 + 680) = PoolWithTag) != 0LL) )
    {
      *(_OWORD *)PoolWithTag = *(_OWORD *)((char *)v18 + 7);
      *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)((char *)&v18[2] + 7);
    }
  }
  if ( *(_BYTE *)(a1 + 674) )
  {
    PoolWithTag = *(_QWORD **)(a1 + 696);
    if ( PoolWithTag
      || (PoolWithTag = ExAllocatePoolWithTag(
                          SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
                          0x20uLL,
                          0x49434858u),
          (*(_QWORD *)(a1 + 696) = PoolWithTag) != 0LL) )
    {
      *(_OWORD *)PoolWithTag = *(_OWORD *)&v18[5];
      *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)&v18[7];
    }
  }
  return (char)PoolWithTag;
}
