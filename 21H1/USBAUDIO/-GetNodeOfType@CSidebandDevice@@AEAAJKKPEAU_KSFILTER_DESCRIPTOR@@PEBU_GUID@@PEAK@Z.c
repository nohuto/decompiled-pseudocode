/*
 * XREFs of ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000A874
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000AFA0 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C1D8 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C510 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C704 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C920 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EA54 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F078 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004174 (WPP_RECORDER_SF_ddd.c)
 *     ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C000A6DC (-GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetNodeOfType(
        CSidebandDevice *this,
        __int64 a2,
        unsigned int a3,
        struct _KSFILTER_DESCRIPTOR *a4,
        const struct _GUID *a5,
        unsigned int *a6)
{
  unsigned int v8; // r15d
  __int64 v10; // rdx
  int NodesInPath; // edi
  struct _LIST_ENTRY *Flink; // rbx
  __int64 Flink_low; // rdx
  _QWORD *v14; // r8
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  struct _LIST_ENTRY P; // [rsp+40h] [rbp-38h] BYREF

  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x24u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
  P.Blink = &P;
  P.Flink = &P;
  NodesInPath = CSidebandDevice::GetNodesInPath(this, v8, a3, &P);
  if ( NodesInPath >= 0 )
  {
    Flink = P.Flink;
    for ( NodesInPath = -1073741275; P.Flink != &P; Flink = P.Flink )
    {
      Flink_low = LODWORD(Flink[1].Flink);
      v14 = *(const GUID **)((char *)&a4->NodeDescriptors->Type + (unsigned int)(Flink_low * a4->NodeDescriptorSize));
      if ( *v14 == *(_QWORD *)&a5->Data1 && v14[1] == *(_QWORD *)a5->Data4 )
      {
        *a6 = Flink_low;
        NodesInPath = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v20) = Flink_low;
        LODWORD(v19) = a3;
        LODWORD(v18) = v8;
        WPP_RECORDER_SF_ddd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          Flink_low,
          9u,
          0x25u,
          (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
          v18,
          v19,
          v20);
      }
      v15 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v15;
      v15->Blink = Blink;
      ExFreePoolWithTag(Flink, 0x66627845u);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = NodesInPath;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0x26u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
      v18);
  }
  return (unsigned int)NodesInPath;
}
