/*
 * XREFs of ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BE92C
 * Callers:
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0050B20 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005AA30 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C005AE30 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01BBF00 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00A2004 (WPP_RECORDER_SF_S.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B6674 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B753C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B9A10 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BE8E4 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContex.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BEBCC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnp(
        const struct _UNICODE_STRING *this,
        struct DEVICEINFO *a2,
        struct RawInputManagerDeviceObject *a3,
        const struct CONTAINER_ID *a4)
{
  int v5; // esi
  int Buffer; // eax
  IVRootDeliver::PnP *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // r9d
  IVRootDeliver::PnP::Detail *v15; // rax
  __int64 v16; // rdx
  IVRootDeliver::PnP::Detail *v17; // rcx
  struct _ETHREAD *CurrentThread; // r9
  struct _ETHREAD *v19; // [rsp+20h] [rbp-60h]
  struct CONTAINER_ID *v20; // [rsp+28h] [rbp-58h]
  IVRootDeliver::PnP::Detail *v21; // [rsp+40h] [rbp-40h] BYREF
  void *v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]

  v5 = (int)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        12,
        78,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0xCu,
        0x4Fu,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        this[13].Buffer);
  }
  if ( LOBYTE(this[3].Length) > 2u )
    return 0LL;
  if ( v5 == 2 )
  {
    Buffer = (int)this[11].Buffer;
    if ( (Buffer & 0x20000000) != 0 )
    {
      v9 = *(IVRootDeliver::PnP **)&this[2].Length;
      LODWORD(this[11].Buffer) = Buffer & 0xDFFFFFFF;
      IVRootDeliver::PnP::SendRootPnpCreated(v9, a3, a3);
    }
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v21, 32LL);
  v11 = v23;
  if ( v23 )
  {
    v12 = CIVSerializer::Serialize((CIVSerializer *)&v21, (struct _UNICODE_STRING *)(v23 + 8), this + 13, 1);
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 82;
        goto LABEL_16;
      }
    }
    else
    {
      v12 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v21);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v15 = v21;
        *((_DWORD *)v21 + 1) = 1;
        *((_QWORD *)v15 + 1) = 1LL;
        v16 = v23;
        *(_DWORD *)v15 = -16;
        *(_DWORD *)v16 = v5;
        *(_DWORD *)(v16 + 24) = LOBYTE(this[3].Length);
        v12 = CIVSerializer::Serialize((CIVSerializer *)&v21, (struct _UNICODE_STRING *)(v16 + 8), this + 13, 0);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v17 = v21;
          *(_DWORD *)v21 = (_DWORD)v22 - 16;
          *((_DWORD *)v17 + 1) = 1;
          *((_QWORD *)v17 + 1) = 1LL;
          *(_DWORD *)v23 = v5;
          CurrentThread = KeGetCurrentThread();
          LODWORD(v19) = LOBYTE(this[3].Length);
          v12 = IVRootDeliver::PnP::Detail::SendPnP(
                  v21,
                  (void *)(unsigned int)v22,
                  CurrentThread,
                  CurrentThread,
                  v19,
                  a3);
          v13 = v12;
          if ( v12 >= 0 )
          {
LABEL_28:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v11) = 5;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v11,
                  12,
                  85,
                  (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
              }
            }
            goto LABEL_31;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v14 = 84;
            goto LABEL_16;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 81;
          goto LABEL_16;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 80;
LABEL_16:
        LODWORD(v20) = v12;
LABEL_17:
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v11,
          12,
          v14,
          (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
          v20);
        goto LABEL_28;
      }
    }
  }
  else
  {
    v13 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 83;
      LODWORD(v20) = -1073741801;
      goto LABEL_17;
    }
  }
LABEL_31:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v21, v11, v10);
  return v13;
}
