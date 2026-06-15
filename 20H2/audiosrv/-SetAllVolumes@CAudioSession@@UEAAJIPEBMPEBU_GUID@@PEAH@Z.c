/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CA590
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CA740 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x18002EA78 (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x1800CB204 (WPP_SF_dS.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v6; // rdi
  int v9; // ebx
  float *v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ebp
  float *v15; // rax
  __int64 v16; // rcx
  char *v17; // r15
  float v18; // xmm1_4
  int v19; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25,
      (unsigned int)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      a2,
      *((_QWORD *)this + 91));
  }
  v9 = 0;
  if ( (_DWORD)v6 )
  {
    v10 = a3;
    while ( ValidateAudioLevel(*v10) )
    {
      v10 = (float *)(v11 + 4);
      if ( v12 + 1 >= (unsigned int)v6 )
        goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
LABEL_9:
  v13 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  if ( (_DWORD)v6 != *((_DWORD *)this + 240) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FC,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    if ( this != (CAudioSession *)-808LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
    return 2147942487LL;
  }
  if ( (_DWORD)v6 )
  {
    v15 = (float *)*((_QWORD *)this + 121);
    v16 = v6;
    v17 = (char *)((char *)a3 - (char *)v15);
    do
    {
      v18 = *(float *)((char *)v15 + (_QWORD)v17);
      if ( *v15 != v18 )
      {
        *v15 = v18;
        ++v13;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  if ( this != (CAudioSession *)-808LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  LOBYTE(v19) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
    (char *)this + 16,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v19,
    0LL);
  if ( a5 )
  {
    LOBYTE(v9) = v13 == 0;
    *a5 = v9;
  }
  return 0LL;
}
