/*
 * XREFs of ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01BE278
 * Callers:
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x1C01BE0D0 (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     IsTouchpadDevice @ 0x1C01B17A0 (IsTouchpadDevice.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B6674 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCB5C (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01BF4F0 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STR.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(
        IVRootDeliver::Mouse::Detail *this,
        const struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3,
        const struct ContainerMouseInput *a4)
{
  char *v5; // rdi
  PVOID v7; // rbx
  __int64 v8; // rdx
  const struct _UNICODE_STRING *v9; // r8
  int v10; // edi
  unsigned int v11; // r14d
  char v12; // r15
  int v13; // eax
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rcx
  struct _ETHREAD *CurrentThread; // r9
  unsigned int v19; // edx
  int v20; // eax
  struct ContainerMouseInput *v22; // [rsp+28h] [rbp-39h]
  struct CONTAINER_ID *v23; // [rsp+30h] [rbp-31h]
  struct _UNICODE_STRING v24; // [rsp+48h] [rbp-19h] BYREF
  void *v25; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v26[2]; // [rsp+60h] [rbp-1h]
  __int64 v27; // [rsp+68h] [rbp+7h]
  PVOID Object; // [rsp+E0h] [rbp+7Fh] BYREF

  v5 = (char *)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      15,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  v7 = 0LL;
  v24 = 0LL;
  Object = 0LL;
  CIVSerializer::CIVSerializer((CIVSerializer *)&v25, 56LL);
  if ( !v27 )
  {
    v10 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      12,
      16,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
      -1073741801);
    goto LABEL_27;
  }
  v11 = 0;
  v12 = *(_BYTE *)(*(_QWORD *)a3 + 32LL);
  if ( !v5 )
  {
LABEL_18:
    LOBYTE(v9) = v12;
    v10 = IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
            (IVRootDeliver::Mouse::Detail *)&v25,
            &v24,
            v9,
            a3,
            v22);
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      v7 = 0LL;
      Object = 0LL;
    }
    if ( v10 >= 0 )
    {
      v17 = v25;
      CurrentThread = KeGetCurrentThread();
      v19 = v26[0];
      *((_DWORD *)v25 + 1) = 1;
      v17[1] = 4LL;
      *(_DWORD *)v17 = v19 - 16;
      v20 = ivrIVSend(v17, v19, CurrentThread, CurrentThread, v11, this);
      v10 = v20;
      if ( v20 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = Object;
      }
      else
      {
        LODWORD(v23) = v20;
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v8,
          12,
          19,
          (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
          v23);
        v7 = Object;
      }
    }
    if ( v7 )
      ObfDereferenceObject(v7);
LABEL_27:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 20;
        goto LABEL_30;
      }
    }
    goto LABEL_31;
  }
  v13 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 0, &Object);
  v8 = 0LL;
  v10 = v13;
  if ( v13 >= 0 )
  {
    v7 = Object;
    v16 = 0LL;
    v24 = *(struct _UNICODE_STRING *)((char *)Object + 296);
    if ( Object != (PVOID)-88LL )
      v16 = *((_QWORD *)Object + 11);
    if ( v12 && IsTouchpadDevice(v16) )
      v11 = 2;
    goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      12,
      17,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
      v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      v8 = 0LL;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 18;
LABEL_30:
        LOBYTE(v8) = 5;
        WPP_RECORDER_SF_(v14->DeviceExtension, v8, 12, v15, (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
      }
    }
  }
LABEL_31:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v25, v8, (__int64)v9);
  return (unsigned int)v10;
}
