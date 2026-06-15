/*
 * XREFs of ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CB310
 * Callers:
 *     <none>
 * Callees:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002EDD4 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CB160 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetAllVolumes(
        CPerStreamVolumeAudioSession *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = CAudioSession::SetAllVolumes(this, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
