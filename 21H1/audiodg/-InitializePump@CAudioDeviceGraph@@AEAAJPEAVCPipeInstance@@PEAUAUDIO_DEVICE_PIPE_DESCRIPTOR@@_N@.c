/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140003308
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140004C60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EC8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x14000538C (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDeviceGraph::InitializePump(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        unsigned __int8 a4)
{
  int v4; // esi
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-58h]
  _QWORD v19[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v20; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF

  v4 = a4;
  v7 = **(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail((__int64)a2 + 16)
                   + 32LL);
  v19[1] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v19[0] = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_1b8969bf_17f7_48d1_89bc_fccafb532af5,
         v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = 1142LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v8,
      v18);
    goto LABEL_11;
  }
  v10 = 8;
  if ( (unsigned int)(*((_DWORD *)a3 + 25) - 2) > 1 )
    v10 = 0;
  v18 = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 19) + 24LL))(
         *((_QWORD *)this + 19),
         v10 | (4 * v4) | ((unsigned int)(*((_DWORD *)this + 35) == 0) + 1),
         *((unsigned int *)this + 32),
         v19[0]);
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = 1155LL;
    goto LABEL_18;
  }
  v22 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 19))(
    *((_QWORD *)this + 19),
    &GUID_00aa665f_84cd_47e3_9b9a_fbf6e17686eb,
    &v22);
  v20 = *((_OWORD *)this + 22);
  v11 = v22;
  v12 = *((_QWORD *)this + 49);
  v14 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
          v13,
          _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64))(*(_QWORD *)v11 + 24LL))(
          v11,
          *(_QWORD *)(v14 + 8),
          &v20,
          v12);
  v9 = v15;
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x488,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v15,
      v7);
  else
    v9 = 0;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_11:
  if ( v19[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
