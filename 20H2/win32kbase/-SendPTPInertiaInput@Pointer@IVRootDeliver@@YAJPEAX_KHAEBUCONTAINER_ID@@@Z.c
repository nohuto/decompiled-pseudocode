/*
 * XREFs of ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01B6494
 * Callers:
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A2004 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01AE594 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01AE5FC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01AF45C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasurePTPInertiaPacket@@YAJU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01AFC60 (-IVMeasurePTPInertiaPacket@@YAJU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z @ 0x1C01B02CC (-IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01B4A8C (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendPTPInertiaInput(
        IVRootDeliver::Pointer *this,
        __int64 a2,
        int a3,
        const struct CONTAINER_ID *a4)
{
  void *v8; // rdx
  PVOID v9; // rdi
  struct _UNICODE_STRING v11; // xmm6
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ebx
  int v15; // edx
  int v16; // eax
  int v17; // r9d
  int v18; // edx
  _DWORD *v19; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v21; // eax
  int v22; // [rsp+30h] [rbp-61h]
  struct CONTAINER_ID *v23; // [rsp+30h] [rbp-61h]
  char *v24; // [rsp+48h] [rbp-49h] BYREF
  struct _UNICODE_STRING v25; // [rsp+58h] [rbp-39h] BYREF
  struct _UNICODE_STRING v26; // [rsp+68h] [rbp-29h] BYREF
  void *v27; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]

  v8 = &WPP_ce934868e6283481801d375bb45badae_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      12,
      33,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    v8 = &WPP_ce934868e6283481801d375bb45badae_Traceguids;
  }
  v9 = 0LL;
  v24 = 0LL;
  if ( *((_DWORD *)gpHidInput + 314) )
  {
    v11 = 0LL;
    if ( this )
    {
      v12 = RawInputManagerDeviceObjectResolveHandle((char *)this, 3u, a3 == 0, (PVOID *)&v24);
      v14 = v12;
      if ( v12 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v13,
            12,
            35,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v12);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v18) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v18,
                12,
                36,
                (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
            }
          }
        }
        return v14;
      }
      v9 = v24;
      v11 = *(struct _UNICODE_STRING *)(v24 + 296);
    }
    CIVSerializer::CIVSerializer((CIVSerializer *)&v27, 24LL);
    if ( !v29 )
    {
      v14 = -1073741801;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_30;
      v17 = 40;
      v22 = -1073741801;
      goto LABEL_18;
    }
    v25 = v11;
    v16 = IVMeasurePTPInertiaPacket(&v25, (struct _UNICODE_STRING **)&v27);
    v14 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_30;
      v17 = 39;
      goto LABEL_17;
    }
    v16 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v27);
    v14 = v16;
    if ( v16 >= 0 )
    {
      v26 = v11;
      v16 = IVSerializePTPInertiaPacket(&v26, a2, (struct CIVSerializer *)&v27);
      v14 = v16;
      if ( v16 >= 0 )
      {
        v19 = v27;
        *(_DWORD *)v27 = v28 - 16;
        v19[1] = 1;
        *((_QWORD *)v19 + 1) = 9LL;
        CurrentThread = KeGetCurrentThread();
        v21 = ivrIVSend(v27, v28, CurrentThread, CurrentThread, 2u, a4);
        v14 = v21;
        if ( v21 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = v24;
        }
        else
        {
          LODWORD(v23) = v21;
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v15,
            12,
            41,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v23);
          v9 = v24;
        }
        goto LABEL_30;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 38;
        goto LABEL_17;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 37;
LABEL_17:
      v22 = v16;
LABEL_18:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        12,
        v17,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        v22);
    }
LABEL_30:
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        12,
        42,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
    CIVSerializer::~CIVSerializer((CIVSerializer *)&v27);
    return v14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v8) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v8,
        12,
        34,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
  }
  return 0LL;
}
