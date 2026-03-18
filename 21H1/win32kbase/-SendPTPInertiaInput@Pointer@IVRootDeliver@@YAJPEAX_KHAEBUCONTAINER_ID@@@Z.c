/*
 * XREFs of ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01BE564
 * Callers:
 *     ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01AA0E4 (-SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B6674 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B753C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasurePTPInertiaPacket@@YAJU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B7D40 (-IVMeasurePTPInertiaPacket@@YAJU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z @ 0x1C01B83AC (-IVSerializePTPInertiaPacket@@YAJU_UNICODE_STRING@@_KAEAUCIVSerializer@@@Z.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCB5C (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r9d
  int v19; // edx
  _DWORD *v20; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v22; // eax
  int v23; // [rsp+30h] [rbp-61h]
  struct CONTAINER_ID *v24; // [rsp+30h] [rbp-61h]
  char *v25; // [rsp+48h] [rbp-49h] BYREF
  struct _UNICODE_STRING v26; // [rsp+58h] [rbp-39h] BYREF
  struct _UNICODE_STRING v27; // [rsp+68h] [rbp-29h] BYREF
  void *v28; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v29; // [rsp+80h] [rbp-11h]
  __int64 v30; // [rsp+88h] [rbp-9h]

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
  v25 = 0LL;
  if ( *((_DWORD *)gpHidInput + 314) )
  {
    v11 = 0LL;
    if ( this )
    {
      v12 = RawInputManagerDeviceObjectResolveHandle((char *)this, 3u, a3 == 0, (PVOID *)&v25);
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
              LOBYTE(v19) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v19,
                12,
                36,
                (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
            }
          }
        }
        return v14;
      }
      v9 = v25;
      v11 = *(struct _UNICODE_STRING *)(v25 + 296);
    }
    CIVSerializer::CIVSerializer((CIVSerializer *)&v28, 24LL);
    if ( !v30 )
    {
      v14 = -1073741801;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_30;
      v18 = 40;
      v23 = -1073741801;
      goto LABEL_18;
    }
    v26 = v11;
    v17 = IVMeasurePTPInertiaPacket(&v26, (struct _UNICODE_STRING **)&v28);
    v14 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_30;
      v18 = 39;
      goto LABEL_17;
    }
    v17 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v28);
    v14 = v17;
    if ( v17 >= 0 )
    {
      v27 = v11;
      v17 = IVSerializePTPInertiaPacket(&v27, a2, (struct CIVSerializer *)&v28);
      v14 = v17;
      if ( v17 >= 0 )
      {
        v20 = v28;
        *(_DWORD *)v28 = v29 - 16;
        v20[1] = 1;
        *((_QWORD *)v20 + 1) = 9LL;
        CurrentThread = KeGetCurrentThread();
        v22 = ivrIVSend(v28, v29, CurrentThread, CurrentThread, 2u, a4);
        v14 = v22;
        if ( v22 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = v25;
        }
        else
        {
          LODWORD(v24) = v22;
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v15,
            12,
            41,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v24);
          v9 = v25;
        }
        goto LABEL_30;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 38;
        goto LABEL_17;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 37;
LABEL_17:
      v23 = v17;
LABEL_18:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        12,
        v18,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        v23);
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
    CIVSerializer::~CIVSerializer((CIVSerializer *)&v28, v15, v16);
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
