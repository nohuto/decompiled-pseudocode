/*
 * XREFs of ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BDE50
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BF984 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B6674 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BCB5C (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C01BF770 (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@AEBU_UN.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendKeyboardInput(
        IVRootDeliver::Keyboard::Detail *this,
        struct _UNICODE_STRING *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        void *a4)
{
  const struct _UNICODE_STRING *v5; // rsi
  PVOID v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ebx
  int v12; // edx
  __int64 v14; // rdx
  __int64 v15; // r8
  const struct _KEYBOARD_INPUT_DATA *v16; // r9
  int v17; // edi
  _DWORD *v18; // rcx
  struct _ETHREAD *CurrentThread; // r9
  unsigned int v20; // edx
  int v21; // eax
  struct CONTAINER_ID *v22; // [rsp+30h] [rbp-31h]
  struct _UNICODE_STRING v23; // [rsp+48h] [rbp-19h] BYREF
  void *v24; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v25[2]; // [rsp+60h] [rbp-1h]
  __int64 v26; // [rsp+68h] [rbp+7h]
  char *v27; // [rsp+E0h] [rbp+7Fh] BYREF

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      61,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  v7 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v8 = HMValidateHandleNoSecure((unsigned __int64)a3, 19);
  if ( v8 )
  {
    v9 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v8 + 24), 3u, 0, (PVOID *)&v27);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v10,
          12,
          62,
          (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
          v9);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v12) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v12,
              12,
              63,
              (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
          }
        }
      }
      return v11;
    }
    v7 = v27;
    v23 = *(struct _UNICODE_STRING *)(v27 + 296);
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v24, 40LL);
  if ( v26 )
  {
    v17 = IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
            (IVRootDeliver::Keyboard::Detail *)&v24,
            &v23,
            v5,
            v16);
    if ( v17 >= 0 )
    {
      v18 = v24;
      CurrentThread = KeGetCurrentThread();
      v20 = v25[0];
      *((_QWORD *)v24 + 1) = 5LL;
      *v18 = v20 - 16;
      v18[1] = 1;
      v21 = ivrIVSend(v18, v20, CurrentThread, CurrentThread, 1u, this);
      v17 = v21;
      if ( v21 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = v27;
      }
      else
      {
        LODWORD(v22) = v21;
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v14,
          12,
          65,
          (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
          v22);
        v7 = v27;
      }
    }
  }
  else
  {
    v17 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v14,
        12,
        64,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        -1073741801);
    }
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      12,
      66,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v24, v14, v15);
  return (unsigned int)v17;
}
