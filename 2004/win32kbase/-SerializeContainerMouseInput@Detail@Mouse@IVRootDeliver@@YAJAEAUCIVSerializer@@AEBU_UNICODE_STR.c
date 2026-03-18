/*
 * XREFs of ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C01B9790
 * Callers:
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01B8518 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B17DC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B1EE8 (-IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B2500 (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializ.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
        IVRootDeliver::Mouse::Detail *this,
        struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        const struct ContainerMouseInputData **a4)
{
  char v5; // r14
  const struct _UNICODE_STRING *v6; // rbp
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r9d
  int v13; // [rsp+28h] [rbp-30h]

  v5 = (char)a3;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      10,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  v8 = IVMeasureMouseInputBuffer(a4, v6, this);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v8 = CIVSerializer::ExtendByMeasuredExtra(this);
    v10 = v8;
    if ( v8 >= 0 )
    {
      v8 = IVSerializeMouseInputBuffer(v5, (const struct ContainerMouseInput *)a4, v6, this);
      v10 = v8;
      if ( v8 >= 0 )
        goto LABEL_14;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v10;
      v11 = 13;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v10;
      v11 = 12;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v11 = 11;
  }
  v13 = v8;
  LOBYTE(v9) = 2;
  WPP_RECORDER_SF_d(
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    v9,
    12,
    v11,
    (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
    v13);
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      12,
      14,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  return v10;
}
