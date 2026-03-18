/*
 * XREFs of ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01BDCDC
 * Callers:
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01BF8B0 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B6674 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCB5C (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01BF648 (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2)
{
  struct CIVSerializer *v3; // rdx
  __int64 v4; // r8
  int v5; // ebx
  int v6; // r9d
  _DWORD *v7; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v9; // eax
  struct CONTAINER_ID *v11; // [rsp+28h] [rbp-60h]
  void *v12; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      57,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  CIVSerializer::CIVSerializer((CIVSerializer *)&v12, 16LL);
  if ( !v14 )
  {
    v5 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v6 = 58;
    LODWORD(v11) = -1073741801;
    goto LABEL_11;
  }
  v5 = IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
         (IVRootDeliver::Keyboard::Detail *)&v12,
         v3);
  if ( v5 >= 0 )
  {
    v7 = v12;
    *(_DWORD *)v12 = v13 - 16;
    v7[1] = 1;
    *((_QWORD *)v7 + 1) = 7LL;
    CurrentThread = KeGetCurrentThread();
    v9 = ivrIVSend(v12, v13, CurrentThread, CurrentThread, 1u, this);
    v5 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v6 = 59;
      LODWORD(v11) = v9;
LABEL_11:
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)v3,
        12,
        v6,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        v11);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      60,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
LABEL_15:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v12, (__int64)v3, v4);
  return (unsigned int)v5;
}
