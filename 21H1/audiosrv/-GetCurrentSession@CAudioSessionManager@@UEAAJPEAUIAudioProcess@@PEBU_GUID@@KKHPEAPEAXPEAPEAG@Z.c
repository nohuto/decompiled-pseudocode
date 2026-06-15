/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800CFD00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180002420 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800024B0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180004278 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A4F0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001BCF0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180044AE0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     MIDL_user_allocate @ 0x180045D10 (MIDL_user_allocate.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057AD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800D46F8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 */

__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        const unsigned __int16 **this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  struct CAudioSession *v12; // rsi
  const unsigned __int16 *v13; // r8
  int AudioSessionControl; // edi
  unsigned __int16 *v15; // rbx
  __int64 v16; // rdi
  unsigned __int16 *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // r9d
  CAudioSessionManager *v21; // r15
  unsigned int v22; // eax
  struct CAudioSession *v24; // [rsp+40h] [rbp-91h] BYREF
  unsigned __int16 *v25; // [rsp+48h] [rbp-89h] BYREF
  struct CServerAudioSessionControl *v26; // [rsp+50h] [rbp-81h] BYREF
  CAudioSessionManager *v27; // [rsp+58h] [rbp-79h]
  void **v28; // [rsp+60h] [rbp-71h]
  _BYTE v29[80]; // [rsp+70h] [rbp-61h] BYREF

  v27 = (CAudioSessionManager *)this;
  v28 = a7;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (__int64)&ATL::g_strmgr);
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v29);
  v12 = 0LL;
  *a8 = 0LL;
  v13 = this[37];
  v26 = 0LL;
  v24 = 0LL;
  AudioSessionControl = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v29, a2, v13, a3, a6);
  if ( AudioSessionControl < 0
    || (AudioSessionControl = CAudioSessionInstanceId::ToString((__int64)v29, &v25), AudioSessionControl < 0) )
  {
    v15 = v25;
LABEL_17:
    if ( *a8 )
    {
      operator delete(*a8);
      *a8 = 0LL;
    }
    goto LABEL_19;
  }
  v15 = v25;
  v16 = (unsigned int)(*((_DWORD *)v25 - 4) + 1);
  v17 = (unsigned __int16 *)MIDL_user_allocate(2 * v16);
  *a8 = v17;
  if ( !v17 )
  {
    AudioSessionControl = -2147024882;
    goto LABEL_17;
  }
  AudioSessionControl = StringCchCopyW((char *)v17, (unsigned int)v16, (char *)v15);
  if ( AudioSessionControl < 0 )
  {
    operator delete(*a8);
    *a8 = 0LL;
    goto LABEL_21;
  }
  if ( a6 )
  {
    v18 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v18 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    if ( !v18 )
      a4 |= 4u;
  }
  v19 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v20 = a4;
  v21 = v27;
  AudioSessionControl = CAudioSessionManager::CreateAudioSession(
                          v27,
                          a2,
                          (struct CAudioSessionInstanceId *)v29,
                          v20,
                          a5,
                          v19,
                          &v24);
  if ( AudioSessionControl < 0 )
  {
    v12 = v24;
    goto LABEL_17;
  }
  v22 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v12 = v24;
  AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(v21, v22, 1, v24, &v26);
  if ( AudioSessionControl < 0 )
    goto LABEL_17;
  *v28 = v26;
LABEL_19:
  if ( v12 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_21:
  if ( AudioSessionControl < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 1939, AudioSessionControl);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v29);
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 12));
  return (unsigned int)AudioSessionControl;
}
