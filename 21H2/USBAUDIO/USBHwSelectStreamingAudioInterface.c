/*
 * XREFs of USBHwSelectStreamingAudioInterface @ 0x1C002DF1C
 * Callers:
 *     USBType1StateChangePin @ 0x1C00067C0 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C0006B50 (USBType1ChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0007630 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0007BE0 (USBCaptureChangePowerState.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0031E14 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00014A8 (WPP_RECORDER_SF_qd.c)
 *     memmove @ 0x1C0013AC0 (memmove.c)
 *     memset @ 0x1C0013D80 (memset.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C002CC80 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002D9FC (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwFreePipes @ 0x1C002E2A4 (USBHwFreePipes.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002EFA8 (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterface(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rbx
  unsigned __int8 v5; // bp
  void *v6; // rdx
  int v7; // edi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  char v10; // al
  __int64 EndpointDescriptor; // rax
  struct _URB *PoolWithTag; // rax
  struct _URB *v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // edx
  UCHAR v18; // al
  __int64 v19; // r13
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rsi
  unsigned int NumberOfPipes; // edx
  PVOID v25; // rax
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+48h] [rbp-40h]
  int v29; // [rsp+90h] [rbp+8h]
  _QWORD *v30; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  v28 = v2;
  v5 = 0;
  v6 = &WPP_eb712d1854393e93b2f63308c1ee1dbb_Traceguids;
  v7 = -1073741808;
  v27 = *(_QWORD *)(v2 + 16);
  v8 = *(_QWORD *)(v27 + 16);
  v9 = *(_QWORD **)(v8 + 72);
  v30 = v9;
  if ( !*(_BYTE *)(v8 + 64) && !*(_BYTE *)(v8 + 67) )
  {
    v10 = a2[4];
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        EndpointDescriptor = USBParseGetEndpointDescriptor(v9[5], a2, 0LL);
        if ( !EndpointDescriptor || !*(_WORD *)(EndpointDescriptor + 4) )
          v5 = 1;
      }
    }
    else
    {
      v5 = 1;
    }
    if ( *(_BYTE *)(v2 + 47) && !v5 )
      return USBHwSelectStreamingAudioInterfaceSideband(a1, (__int64)a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_eb712d1854393e93b2f63308c1ee1dbb_Traceguids,
        8u,
        0x26u,
        (__int64)&WPP_eb712d1854393e93b2f63308c1ee1dbb_Traceguids,
        a1,
        v5);
    v29 = (unsigned __int8)a2[4];
    PoolWithTag = (struct _URB *)ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)(24 * v29 + 56), 0x41627845u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_46;
    memset(PoolWithTag, 0, (unsigned int)(24 * v29 + 56));
    v15 = 0;
    v16 = v30[5];
    v17 = *(unsigned __int8 *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 4) )
    {
      do
      {
        if ( *(_BYTE *)(*(_QWORD *)(v30[2] + 16LL * v15) + 2LL) == a2[2] )
          break;
        ++v15;
      }
      while ( v15 < v17 );
    }
    if ( v15 == v17 )
      goto LABEL_38;
    v18 = a2[2];
    v19 = *(_QWORD *)(a1 + 16);
    v14->UrbSelectInterface.Interface.Length = 24 * (v29 + 1);
    v14->UrbSelectInterface.Interface.InterfaceNumber = v18;
    v14->UrbSelectInterface.Interface.AlternateSetting = a2[3];
    if ( v5 )
    {
      if ( v29 )
        v14->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 0;
      goto LABEL_28;
    }
    v20 = *(_QWORD *)(v19 + 144);
    v21 = *(_DWORD *)(v20 + 216) & 0xF000;
    switch ( v21 )
    {
      case 0:
        goto LABEL_23;
      case 0x1000:
        v14->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 3872;
        break;
      case 0x2000:
LABEL_23:
        v14->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize = 500 * *(_DWORD *)(v20 + 220);
        if ( !*(_QWORD *)(v20 + 176) )
          v14->UrbSelectInterface.Interface.Pipes[0].PipeFlags |= 8u;
        break;
    }
LABEL_28:
    v14->UrbHeader.Length = 24 * v29 + 56;
    v14->UrbHeader.Function = 1;
    v14->UrbSelectInterface.ConfigurationHandle = (USBD_CONFIGURATION_HANDLE)v30[3];
    v22 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v27 + 40), v14, 0LL);
    if ( v14->UrbHeader.Status < 0 )
      v22 = -1073741808;
    v7 = v22;
    if ( v22 >= 0 )
    {
      v23 = *(_QWORD *)(v19 + 152);
      if ( !v5 )
      {
        NumberOfPipes = v14->UrbSelectInterface.Interface.NumberOfPipes;
        *(_DWORD *)(v23 + 56) = NumberOfPipes;
        *(_QWORD *)(v23 + 64) = v14->UrbSelectInterface.Interface.Pipes[0].PipeHandle;
        if ( NumberOfPipes > 0x14 )
        {
          v7 = -1073741438;
        }
        else
        {
          USBHwFreePipes(a1);
          v25 = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * *(unsigned int *)(v23 + 56), 0x41627845u);
          *(_QWORD *)(v23 + 72) = v25;
          if ( !v25 )
            v7 = -1073741670;
        }
        if ( v7 >= 0 )
          memmove(*(void **)(v23 + 72), &v14->UrbOSFeatureDescriptorRequest.UrbLink, 24LL * *(unsigned int *)(v23 + 56));
      }
    }
LABEL_38:
    ExFreePool(v14);
    goto LABEL_40;
  }
  v7 = -1073741632;
LABEL_40:
  if ( v7 < 0 )
  {
LABEL_46:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = v7;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v6,
        8u,
        0x27u,
        (__int64)&WPP_eb712d1854393e93b2f63308c1ee1dbb_Traceguids,
        a1,
        v26);
    }
  }
  if ( v5 && *(_BYTE *)(v28 + 47) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v6,
      9u,
      0x28u,
      (__int64)&WPP_eb712d1854393e93b2f63308c1ee1dbb_Traceguids);
  return (unsigned int)v7;
}
