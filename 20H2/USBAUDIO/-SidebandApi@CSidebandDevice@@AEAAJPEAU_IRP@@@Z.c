/*
 * XREFs of ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CD2C
 * Callers:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000D424 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0001258 (WPP_RECORDER_SF_q.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DA00 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DBC4 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DFC8 (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E104 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E474 (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E588 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E6C0 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EA30 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EB44 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EC80 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED94 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F0A4 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F260 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F554 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F85C (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FA70 (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FC20 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FF3C (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00101EC (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00104D4 (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0010684 (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::SidebandApi(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int LowPart; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int SupportedFormats; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v26; // [rsp+28h] [rbp-30h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x8Bu,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      CurrentStackLocation->FileObject);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 5) + 8LL), 0LL, File, 1u, 0x20u);
  if ( v6 >= 0 )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart > 0x220033 )
    {
      if ( LowPart > 0x22004B )
      {
        v21 = LowPart - 2228303;
        if ( !v21 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x9Eu,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetSupportedFormats(this, a2);
          goto LABEL_97;
        }
        v22 = v21 - 4;
        if ( !v22 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x9Fu,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetSiop(this, a2);
          goto LABEL_97;
        }
        v23 = v22 - 12;
        if ( !v23 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0xA0u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::SetSiop(this, a2);
          goto LABEL_97;
        }
        if ( v23 == 4 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0xA1u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::SetSidebandClaimed(this, a2);
          goto LABEL_97;
        }
      }
      else
      {
        if ( LowPart == 2228299 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x9Du,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetStreamStatusUpdate(this, a2);
          goto LABEL_97;
        }
        v17 = LowPart - 2228279;
        if ( !v17 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x98u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::SetSidetone(this, a2);
          goto LABEL_97;
        }
        v18 = v17 - 4;
        if ( !v18 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x99u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::StreamOpen(this, a2);
          goto LABEL_97;
        }
        v19 = v18 - 4;
        if ( !v19 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x9Au,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::StreamClose(this, a2);
          goto LABEL_97;
        }
        v20 = v19 - 4;
        if ( !v20 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x9Bu,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::StreamStart(this, a2);
          goto LABEL_97;
        }
        if ( v20 == 4 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x9Cu,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::StreamSuspend(this, a2);
          goto LABEL_97;
        }
      }
    }
    else
    {
      if ( LowPart == 2228275 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v5,
            9u,
            0x97u,
            (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
        SupportedFormats = CSidebandDevice::GetSidetoneStatusUpdate(this, a2);
        goto LABEL_97;
      }
      if ( LowPart > 0x22001F )
      {
        v14 = LowPart - 2228259;
        if ( !v14 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x93u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetMutePropertyValues(this, a2);
          goto LABEL_97;
        }
        v15 = v14 - 4;
        if ( !v15 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x94u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::SetMute(this, a2);
          goto LABEL_97;
        }
        v16 = v15 - 4;
        if ( !v16 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x95u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetMuteStatusUpdate(this, a2);
          goto LABEL_97;
        }
        if ( v16 == 4 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x96u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetSidetoneVolumePropertyValues(this, a2);
          goto LABEL_97;
        }
      }
      else
      {
        if ( LowPart == 2228255 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x92u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetVolumeStatusUpdate(this, a2);
          goto LABEL_97;
        }
        v9 = LowPart - 2228231;
        if ( !v9 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x8Du,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetDeviceDescriptor(this, a2);
          goto LABEL_97;
        }
        v10 = v9 - 4;
        if ( !v10 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x8Eu,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetErrorStatusUpdate(this, a2);
          goto LABEL_97;
        }
        v11 = v10 - 4;
        if ( !v11 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x8Fu,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetEndpointDescriptor(this, a2);
          goto LABEL_97;
        }
        v12 = v11 - 8;
        if ( !v12 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x90u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::GetVolumePropertyValues(this, a2);
          goto LABEL_97;
        }
        if ( v12 == 4 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v5,
              9u,
              0x91u,
              (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
          SupportedFormats = CSidebandDevice::SetVolume(this, a2);
LABEL_97:
          v6 = SupportedFormats;
LABEL_98:
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 5) + 8LL), 0LL, 0x20u);
          goto LABEL_99;
        }
      }
    }
    v6 = -1073741437;
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -1073741437;
    IofCompleteRequest(a2, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = -1073741437;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v24,
        9u,
        0xA2u,
        (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
        v26);
    }
    goto LABEL_98;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0x8Cu,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      CurrentStackLocation->FileObject);
  a2->IoStatus.Status = v6;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
LABEL_99:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v26) = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      9u,
      0xA3u,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      v26);
  }
  return (unsigned int)v6;
}
