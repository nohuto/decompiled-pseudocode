/*
 * XREFs of UsbDevice_UpdateUsbDevice @ 0x1C001843C
 * Callers:
 *     UsbDevice_UpdateCompletion @ 0x1C0018310 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00185D0 (UsbDevice_UcxEvtUpdate.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Etw_DeviceUpdate @ 0x1C001850C (Etw_DeviceUpdate.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     RootHub_SetPortResumeTime @ 0x1C003DE94 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003E620 (RootHub_Update20HardwareLpmParameters.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rax
  int v14; // eax
  int v15; // edx
  int v16; // r9d
  _OWORD *Pool2; // rax
  _OWORD *v18; // rax
  __int64 v19; // [rsp+40h] [rbp-49h] BYREF
  __int128 v20; // [rsp+48h] [rbp-41h]
  __int64 v21; // [rsp+58h] [rbp-31h]
  int v22; // [rsp+60h] [rbp-29h]
  int v23; // [rsp+64h] [rbp-25h]
  _QWORD v24[10]; // [rsp+70h] [rbp-19h] BYREF

  v2 = *(_DWORD *)(a2 + 24);
  if ( (v2 & 8) != 0 && *(_BYTE *)(a2 + 52) )
  {
    *(_BYTE *)(a1 + 136) = 1;
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)v5;
    *(_WORD *)(a1 + 132) = *(_WORD *)(v5 + 16);
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 568) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned int *)(a2 + 60),
      *(unsigned __int8 *)(a1 + 135));
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned __int16 *)(a2 + 64));
    *(_BYTE *)(a1 + 569) = 1;
  }
  memset(v24, 0, 0x48uLL);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 664) + 8LL);
  v11 = *(_QWORD *)(v10 + 112);
  if ( *(_BYTE *)(a1 + 657) )
  {
    if ( !v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    v13 = *(_QWORD *)(a1 + 608);
    v19 = 0LL;
    v23 = 0;
    v21 = v13;
    v22 = 45;
    v20 = 0LL;
    v14 = SecureChannel_SendRequestSynchronously(v11, &v19, 40LL, v24, 72);
    if ( v14 >= 0 )
    {
      LOBYTE(v14) = v24[0];
      if ( SLODWORD(v24[0]) >= 0 )
      {
        LOBYTE(v7) = BYTE6(v24[0]);
        *(_WORD *)(a1 + 672) = WORD2(v24[0]);
        *(_BYTE *)(a1 + 688) = HIBYTE(v24[4]);
        *(_BYTE *)(a1 + 674) = v7;
        if ( (_BYTE)v7 )
        {
          Pool2 = *(_OWORD **)(a1 + 680);
          if ( Pool2
            || (Pool2 = (_OWORD *)ExAllocatePool2(64LL, 32LL, 1229146200LL), (*(_QWORD *)(a1 + 680) = Pool2) != 0LL) )
          {
            *Pool2 = *(_OWORD *)((char *)v24 + 7);
            Pool2[1] = *(_OWORD *)((char *)&v24[2] + 7);
          }
        }
        if ( *(_BYTE *)(a1 + 674) )
        {
          v18 = *(_OWORD **)(a1 + 696);
          if ( v18 || (v18 = (_OWORD *)ExAllocatePool2(64LL, 32LL, 1229146200LL), (*(_QWORD *)(a1 + 696) = v18) != 0LL) )
          {
            *v18 = *(_OWORD *)&v24[5];
            v18[1] = *(_OWORD *)&v24[7];
          }
        }
        return Etw_DeviceUpdate(v7, a1);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return Etw_DeviceUpdate(v7, a1);
      v16 = 15;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return Etw_DeviceUpdate(v7, a1);
      v16 = 14;
    }
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 72),
      v15,
      12,
      v16,
      (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
      v14);
  }
  return Etw_DeviceUpdate(v7, a1);
}
