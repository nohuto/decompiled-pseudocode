/*
 * XREFs of ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000AA60
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000AFA0 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CB14 (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000CD88 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F6E4 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004174 (WPP_RECORDER_SF_ddd.c)
 *     ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C000A6DC (-GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z.c)
 *     ?RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000AEF0 (-RecurseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNEC.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneNodes(
        CSidebandDevice *this,
        unsigned int a2,
        struct _KSFILTER_DESCRIPTOR *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v8; // r12d
  int v9; // esi
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rdx
  ULONG ConnectionsCount; // r9d
  int Flink; // ecx
  const KSTOPOLOGY_CONNECTION *Connections; // r10
  ULONG *p_ToNodePin; // rax
  ULONG v17; // ecx
  const struct KSTOPOLOGY_CONNECTION *v18; // r8
  int v19; // eax
  struct _LIST_ENTRY *v20; // rbx
  _QWORD *v21; // rdx
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v25; // [rsp+28h] [rbp-28h]
  __int64 v26; // [rsp+30h] [rbp-20h]
  __int64 v27; // [rsp+38h] [rbp-18h]
  struct _LIST_ENTRY P; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int *v30; // [rsp+A8h] [rbp+58h]

  v30 = a4;
  v8 = -1;
  v29 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1073741275;
  v12 = (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
      9u,
      0x27u,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids);
  ConnectionsCount = a3->ConnectionsCount;
  Flink = 0;
  if ( ConnectionsCount )
  {
    Connections = a3->Connections;
    v12 = ConnectionsCount;
    P.Flink = (struct _LIST_ENTRY *)1;
    p_ToNodePin = &Connections->ToNodePin;
    do
    {
      if ( *(p_ToNodePin - 1) == -1 && *p_ToNodePin == a2 )
        Flink = (int)P.Flink;
      p_ToNodePin += 4;
      --v12;
    }
    while ( v12 );
    if ( Flink )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = &Connections[v17];
        if ( v18->ToNode == -1 && v18->ToNodePin == a2 )
          break;
        v17 += LODWORD(P.Flink);
        if ( v17 >= ConnectionsCount )
          goto LABEL_17;
      }
      v19 = CSidebandDevice::RecurseToCaptureBridgePin(this, a3, v18, &v29);
      v8 = v29;
      v11 = v19;
LABEL_17:
      if ( v11 >= 0 )
      {
        P.Blink = &P;
        P.Flink = &P;
        if ( (int)CSidebandDevice::GetNodesInPath(this, v8, a2, &P) < 0 )
          goto LABEL_40;
        v20 = P.Flink;
        if ( P.Flink == &P )
          goto LABEL_40;
        do
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v27) = v20[1].Flink;
            LODWORD(v26) = v8;
            LODWORD(v25) = a2;
            WPP_RECORDER_SF_ddd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v12,
              9u,
              0x29u,
              (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
              v25,
              v26,
              v27);
          }
          v21 = *(const GUID **)((char *)&a3->NodeDescriptors->Type + LODWORD(v20[1].Flink) * a3->NodeDescriptorSize);
          if ( *v21 == *(_QWORD *)&GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data1
            && v21[1] == *(_QWORD *)GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data4
            && v9 == -1 )
          {
            v9 = (int)v20[1].Flink;
          }
          if ( *v21 == *(_QWORD *)&GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data1
            && v21[1] == *(_QWORD *)GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data4
            && v10 == -1 )
          {
            v10 = (unsigned int)v20[1].Flink;
          }
          v22 = v20->Flink;
          if ( v20->Flink->Blink != v20 || (Blink = v20->Blink, Blink->Flink != v20) )
            __fastfail(3u);
          Blink->Flink = v22;
          v22->Blink = Blink;
          ExFreePoolWithTag(v20, 0x66627845u);
          v20 = P.Flink;
        }
        while ( P.Flink != &P );
        if ( v9 == -1 && v10 == -1 )
        {
LABEL_40:
          v11 = -1073741275;
        }
        else
        {
          v11 = 0;
          *v30 = v9;
          *a5 = v10;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v11;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v12,
          9u,
          0x28u,
          (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
          v11);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v25) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      0x2Au,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
      v25);
  }
  return (unsigned int)v11;
}
