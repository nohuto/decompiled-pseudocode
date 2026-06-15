/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800C6600
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180002098 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x180002804 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002DD30 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct CAudioStream *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+30h] [rbp+8h] BYREF
  CAudioStream *v9; // [rsp+38h] [rbp+10h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  *((_QWORD *)a2 + 9) = this;
  v10 = 0LL;
  v8 = FLOAT_1_0;
  CAudioSession::GetPolicyVolumeForStream(this, v9, &v8, &v10);
  v3 = CAudioStream::SetPolicyVolume(v9, v8, v10, 1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = CAudioSession::AddStream(this, (struct _RTL_CRITICAL_SECTION *)v9);
    v4 = v3;
    if ( v3 >= 0 )
      return 0;
    v5 = 2907LL;
  }
  else
  {
    v5 = 2905LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v3);
  *((_QWORD *)v9 + 9) = 0LL;
  return v4;
}
