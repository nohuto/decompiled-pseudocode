/*
 * XREFs of ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BEBCC
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005A970 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01BBF00 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BE92C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00A2004 (WPP_RECORDER_SF_S.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B6674 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B753C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B7F28 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B8620 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BE8E4 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContex.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpCreated(
        IVRootDeliver::PnP *this,
        struct RawInputManagerDeviceObject *a2,
        const struct CONTAINER_ID *a3)
{
  void *v5; // rdx
  unsigned __int64 v6; // rsi
  char *v8; // rcx
  PVOID v9; // rdi
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  int v17; // r9d
  unsigned __int64 v18; // rdx
  IVRootDeliver::PnP::Detail *v19; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v21; // eax
  struct _ETHREAD *v22; // [rsp+28h] [rbp-39h]
  struct CONTAINER_ID *v23; // [rsp+30h] [rbp-31h]
  struct CONTAINER_ID *v24; // [rsp+30h] [rbp-31h]
  struct _UNICODE_STRING v25; // [rsp+48h] [rbp-19h] BYREF
  IVRootDeliver::PnP::Detail *v26; // [rsp+58h] [rbp-9h] BYREF
  void *v27; // [rsp+60h] [rbp-1h]
  _DWORD *v28; // [rsp+68h] [rbp+7h]
  char *v29; // [rsp+C8h] [rbp+67h] BYREF

  v5 = &WPP_ce934868e6283481801d375bb45badae_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      12,
      67,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    v5 = &WPP_ce934868e6283481801d375bb45badae_Traceguids;
  }
  v25 = 0LL;
  v6 = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
  if ( *(_BYTE *)(v6 + 0x30) <= 2u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0xCu,
        0x45u,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        *(const wchar_t **)((((unsigned __int64)this + 88) & -(__int64)(this != 0LL)) + 0xD8));
    v8 = *(char **)((((unsigned __int64)this + 88) & -(__int64)(this != 0LL)) + 0x530);
    v9 = 0LL;
    v29 = 0LL;
    if ( v8 )
    {
      v10 = RawInputManagerDeviceObjectResolveHandle(v8, 3u, 0, (PVOID *)&v29);
      v12 = v10;
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = v10;
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v11,
            12,
            70,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v23);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v13) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v13,
                12,
                71,
                (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
            }
          }
        }
        return v12;
      }
      v9 = v29;
      v25 = *(struct _UNICODE_STRING *)(v29 + 296);
    }
    CIVSerializer::CIVSerializer((CIVSerializer *)&v26, 1464LL);
    if ( !v28 )
    {
      v12 = -1073741801;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v17 = 75;
      LODWORD(v23) = -1073741801;
      goto LABEL_24;
    }
    v16 = IVMeasureRimDevForIVPnpCreatePacket((struct RIMDEV *)v6, &v25, (struct CIVSerializer *)&v26);
    v12 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v17 = 74;
      goto LABEL_23;
    }
    v16 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v26);
    v12 = v16;
    if ( v16 >= 0 )
    {
      v16 = IVSerializeRimDevForIVPnpCreatePacket((struct RIMDEV *)v6, &v25, (struct CIVSerializer *)&v26);
      v12 = v16;
      if ( v16 >= 0 )
      {
        v18 = (unsigned int)v27;
        v19 = v26;
        *(_DWORD *)v26 = (_DWORD)v27 - 16;
        *(_QWORD *)((char *)v19 + 4) = 1LL;
        *((_DWORD *)v19 + 3) = 0;
        *v28 = 1;
        CurrentThread = KeGetCurrentThread();
        LODWORD(v22) = *(unsigned __int8 *)(v6 + 48);
        v21 = IVRootDeliver::PnP::Detail::SendPnP(v26, (void *)v18, CurrentThread, CurrentThread, v22, a2);
        v12 = v21;
        if ( v21 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = v29;
        }
        else
        {
          LODWORD(v24) = v21;
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v14,
            12,
            76,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v24);
          v9 = v29;
        }
        goto LABEL_32;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 73;
        goto LABEL_23;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 72;
LABEL_23:
      LODWORD(v23) = v16;
LABEL_24:
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v14,
        12,
        v17,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        v23);
    }
LABEL_32:
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        12,
        77,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
    CIVSerializer::~CIVSerializer((CIVSerializer *)&v26, v14, v15);
    return v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        12,
        68,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
  }
  return 0LL;
}
