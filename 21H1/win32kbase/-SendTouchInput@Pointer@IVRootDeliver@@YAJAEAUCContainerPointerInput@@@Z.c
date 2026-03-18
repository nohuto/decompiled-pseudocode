/*
 * XREFs of ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01BF0E8
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C018F3FC (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B6674 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B753C (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B7E00 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAUCIVSerializer@@@Z @ 0x1C01B848C (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCB5C (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C01BDB44 (-SendFrameToContainer@Pointer@InputTraceLogging@@SAXQEAURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::Pointer::SendTouchInput(
        IVRootDeliver::Pointer *this,
        struct CContainerPointerInput *a2)
{
  void *v3; // rdx
  PVOID v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r15
  char *v8; // rcx
  struct _UNICODE_STRING v9; // xmm6
  int v10; // r12d
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ebx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r9d
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD *v20; // rcx
  struct _ETHREAD *CurrentThread; // rbx
  int v22; // eax
  int v23; // [rsp+30h] [rbp-51h]
  struct CONTAINER_ID *v24; // [rsp+30h] [rbp-51h]
  struct _UNICODE_STRING v25; // [rsp+48h] [rbp-39h] BYREF
  struct _UNICODE_STRING v26; // [rsp+58h] [rbp-29h] BYREF
  void *v27; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-11h]
  __int64 v29; // [rsp+78h] [rbp-9h]
  PVOID Object; // [rsp+E8h] [rbp+67h] BYREF

  v3 = &WPP_ce934868e6283481801d375bb45badae_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v3) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v3,
      12,
      23,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    v3 = &WPP_ce934868e6283481801d375bb45badae_Traceguids;
  }
  v4 = 0LL;
  v5 = *(_QWORD *)this;
  v6 = *((_QWORD *)this + 1);
  Object = 0LL;
  if ( *((_DWORD *)gpHidInput + 314) )
  {
    v8 = *(char **)(v5 + 32);
    v9 = 0LL;
    v10 = 0;
    if ( v8 )
    {
      v11 = RawInputManagerDeviceObjectResolveHandle(v8, 3u, *(_DWORD *)(v5 + 80) == 0, &Object);
      v13 = v11;
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v12,
            12,
            25,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v11);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v14) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v14,
                12,
                26,
                (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
            }
          }
        }
        return v13;
      }
      v4 = Object;
      v9 = *(struct _UNICODE_STRING *)((char *)Object + 296);
    }
    else
    {
      v10 = 1;
    }
    CIVSerializer::CIVSerializer((CIVSerializer *)&v27, 128LL);
    if ( !v29 )
    {
      v13 = -1073741801;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v18 = 30;
      v23 = -1073741801;
      goto LABEL_23;
    }
    v25 = v9;
    v17 = IVMeasureRimCompleteFrame(
            (struct RIMCOMPLETEFRAME *)v5,
            (struct CPointerInputFrame *)v6,
            &v25,
            (struct CIVSerializer *)&v27);
    v13 = v17;
    if ( v17 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v18 = 29;
      goto LABEL_22;
    }
    v17 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v27);
    v13 = v17;
    if ( v17 >= 0 )
    {
      *(union _LARGE_INTEGER *)(v5 + 64) = gliQpcFreq;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v26 = v9;
      *(LARGE_INTEGER *)(v5 + 48) = PerformanceCounter;
      v17 = IVSerializeRimCompleteFrameForTouchInputPacket(
              (struct RIMCOMPLETEFRAME *)v5,
              (struct CPointerInputFrame *)v6,
              &v26,
              v10,
              (struct CIVSerializer *)&v27);
      v13 = v17;
      if ( v17 >= 0 )
      {
        v20 = v27;
        *(_DWORD *)v27 = v28 - 16;
        v20[1] = 1;
        *((_QWORD *)v20 + 1) = 3LL;
        CurrentThread = KeGetCurrentThread();
        InputTraceLogging::Pointer::SendFrameToContainer(
          *(struct RIMDEV *const *)(*(_QWORD *)(v6 + 152) + 16LL),
          (const struct CPointerInputFrame *)v6);
        v22 = ivrIVSend(v27, v28, CurrentThread, CurrentThread, 2u, (IVRootDeliver::Pointer *)((char *)this + 16));
        v13 = v22;
        if ( v22 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v4 = Object;
        }
        else
        {
          LODWORD(v24) = v22;
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v15,
            12,
            31,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v24);
          v4 = Object;
        }
        goto LABEL_31;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 28;
        goto LABEL_22;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 27;
LABEL_22:
      v23 = v17;
LABEL_23:
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        12,
        v18,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        v23);
    }
LABEL_31:
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        12,
        32,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
    CIVSerializer::~CIVSerializer((CIVSerializer *)&v27, v15, v16);
    return v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v3,
        12,
        24,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
  }
  return 0LL;
}
