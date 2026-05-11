/*
 * XREFs of ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000AFA0
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E514 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004174 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000A874 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000AA60 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1C000AD58 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000BF40 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointCapabilities(
        CSidebandDevice *this,
        __int64 a2,
        struct _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *a3)
{
  unsigned int v4; // edi
  struct _KSFILTER_DESCRIPTOR *v6; // r14
  __int64 v7; // rdx
  int BridgePinForDataPin; // ebx
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  int NodeOfType; // r12d
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r12d
  __int64 v18; // rdx
  int SidetoneNodes; // ebx
  __int64 v20; // r8
  int v21; // ecx
  unsigned __int16 v22; // r9
  unsigned int *v24; // [rsp+28h] [rbp-28h]
  unsigned int *v25; // [rsp+28h] [rbp-28h]
  __int64 v26; // [rsp+30h] [rbp-20h]
  __int64 v27; // [rsp+38h] [rbp-18h]
  unsigned int v28; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v30; // [rsp+48h] [rbp-8h] BYREF
  int v31; // [rsp+4Ch] [rbp-4h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+A8h] [rbp+58h] BYREF

  v4 = a2;
  v6 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL);
  v32 = -1;
  v33 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x2Eu,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids);
  BridgePinForDataPin = CSidebandDevice::GetBridgePinForDataPin(this, v6, v4, &v32);
  if ( BridgePinForDataPin >= 0 )
  {
    v11 = v32;
    NodeOfType = CSidebandDevice::GetNodeOfType(this, v32, v4, v6, &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1, &v33);
    if ( NodeOfType >= 0 )
    {
      a3->Volume = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = v11;
        WPP_RECORDER_SF_ddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v12,
          9u,
          0x30u,
          (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
          v25,
          v4,
          v33);
      }
    }
    if ( NodeOfType == -1073741275 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = v4;
      LODWORD(v25) = v11;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        v13,
        0x31u,
        (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
        v25,
        v26);
    }
    v17 = CSidebandDevice::GetNodeOfType(this, v11, v4, v6, &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1, &v28);
    if ( v17 >= 0 )
    {
      a3->Mute = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = v28;
        LODWORD(v26) = v4;
        LODWORD(v24) = v11;
        WPP_RECORDER_SF_ddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          9u,
          0x32u,
          (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
          v24,
          v26,
          v27);
      }
    }
    if ( v17 == -1073741275 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = v4;
      LODWORD(v24) = v11;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        0x33u,
        (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
        v24,
        v26);
    }
    SidetoneNodes = CSidebandDevice::GetSidetoneNodes(this, v11, v6, &v30, &v29);
    if ( SidetoneNodes >= 0 )
    {
      a3->Sidetone = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = v29;
        LODWORD(v24) = v30;
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v20,
          0x34u,
          (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
          v24,
          v26);
      }
    }
    if ( SidetoneNodes == -1073741275 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v18,
        9u,
        0x35u,
        (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids);
    BridgePinForDataPin = CSidebandDevice::IsFeedbackSupported(this, *((struct _KSDEVICE **)this + 4), v4, &v31);
    if ( BridgePinForDataPin >= 0 )
    {
      v21 = v31;
      a3->Feedback = v31;
      if ( v21 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)BridgePinForDataPin;
        v22 = 54;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)BridgePinForDataPin;
        v22 = 55;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        9u,
        v22,
        (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = 56;
        goto LABEL_35;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = WPP_GLOBAL_Control;
    v10 = 47;
LABEL_35:
    LODWORD(v24) = BridgePinForDataPin;
    WPP_RECORDER_SF_d(
      (__int64)v9->DeviceExtension,
      v7,
      9u,
      v10,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
      v24);
  }
  return (unsigned int)BridgePinForDataPin;
}
