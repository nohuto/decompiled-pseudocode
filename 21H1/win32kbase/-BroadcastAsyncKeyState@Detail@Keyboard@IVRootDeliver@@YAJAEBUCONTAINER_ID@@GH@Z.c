/*
 * XREFs of ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01BD9D0
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BF984 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B6674 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCAA4 (-ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2,
        int a3)
{
  __int16 v4; // di
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // r9d
  _DWORD *v10; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v12; // eax
  struct CONTAINER_ID *v14; // [rsp+28h] [rbp-70h]
  void *v15; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+50h] [rbp-48h]

  v4 = (__int16)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_WORD)a2,
      12,
      53,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v15, 8LL);
  v7 = v17;
  if ( !v17 )
  {
    v8 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v9 = v17 + 54;
    LODWORD(v14) = -1073741801;
    goto LABEL_10;
  }
  v10 = v15;
  *(_DWORD *)v15 = v16 - 16;
  v10[1] = 1;
  *((_QWORD *)v10 + 1) = 6LL;
  *(_WORD *)v7 = v4;
  *(_DWORD *)(v7 + 4) = a3;
  CurrentThread = KeGetCurrentThread();
  v12 = ivrIVBroadcast(v15, v16, CurrentThread, CurrentThread, 1u, this);
  v8 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v9 = 55;
    LODWORD(v14) = v12;
LABEL_10:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      12,
      v9,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
      v14);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_WORD)v7,
      12,
      56,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
LABEL_14:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v15, v7, v6);
  return v8;
}
