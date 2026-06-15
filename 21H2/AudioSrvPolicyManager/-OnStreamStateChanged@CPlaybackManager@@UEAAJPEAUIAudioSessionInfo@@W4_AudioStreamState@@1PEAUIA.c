/*
 * XREFs of ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180022880
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001A78 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWrit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x18001B6E8 (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002C060 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::OnStreamStateChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        struct IAudioStreamInfo *a5)
{
  int v5; // esi
  int v6; // r15d
  __int64 v7; // r14
  struct IAudioStreamInfo *v8; // r13
  LPVOID v9; // rsi
  HANDLE ProcessHeap; // rax
  LPVOID v11; // rdi
  int ProcessFromStreamInfo; // ebx
  CApplicationManager *v13; // rcx
  __int64 v14; // rdx
  CStreamStoppedWorkItem *v16; // rsi
  HANDLE v17; // rax
  CStreamStoppedWorkItem *v18; // rdi
  __int64 v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp+58h] [rbp-21h] BYREF
  __int64 v27; // [rsp+60h] [rbp-19h] BYREF
  __int64 v28; // [rsp+68h] [rbp-11h] BYREF
  __int64 v29; // [rsp+70h] [rbp-9h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h] BYREF
  __int64 v31; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  __int64 v33; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v34; // [rsp+E0h] [rbp+67h]
  int v35; // [rsp+E8h] [rbp+6Fh]
  int v36; // [rsp+F0h] [rbp+77h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v8 = a5;
    if ( a4 == 1 )
    {
      v9 = 0LL;
      ProcessHeap = GetProcessHeap();
      v11 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        *(_QWORD *)v11 = &CStreamStartedWorkItem::`vftable';
        *((_QWORD *)v11 + 2) = 0LL;
        *((_QWORD *)v11 + 3) = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = v8;
        (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v8 + 8LL))(v8);
        ProcessFromStreamInfo = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v11 + 1) + 32LL))(
                                  *((_QWORD *)v11 + 1),
                                  (__int64)v11 + 16);
        if ( ProcessFromStreamInfo < 0
          || (ProcessFromStreamInfo = CApplicationManager::GetProcessFromStreamInfo(
                                        v13,
                                        v8,
                                        (struct CProcess **)v11 + 3),
              ProcessFromStreamInfo < 0) )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0xBu,
              &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
              ProcessFromStreamInfo);
          }
          AudPolicyLogError("CStreamStartedWorkItem::Initialize", 97, ProcessFromStreamInfo);
        }
        if ( ProcessFromStreamInfo >= 0 )
        {
          v9 = v11;
          v11 = 0LL;
        }
      }
      else
      {
        ProcessFromStreamInfo = -2147024882;
      }
      if ( v11 )
        (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1LL);
      if ( ProcessFromStreamInfo >= 0 )
      {
        ProcessFromStreamInfo = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
        if ( ProcessFromStreamInfo >= 0 )
          v9 = 0LL;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xAu,
            &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
            ProcessFromStreamInfo);
        }
        AudPolicyLogError("CStreamStartedWorkItem::CreateInstance", 69, ProcessFromStreamInfo);
      }
      if ( v9 )
        (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
      if ( ProcessFromStreamInfo < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xCu,
            &WPP_5aa1b3140c133be9bcd44f84bf38f0ce_Traceguids,
            ProcessFromStreamInfo);
        }
        AudPolicyLogError("CPlaybackManager::QueueStreamStartedWorkItem", 207, ProcessFromStreamInfo);
        v14 = 139LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)ProcessFromStreamInfo);
        return (unsigned int)ProcessFromStreamInfo;
      }
    }
    else
    {
      if ( a4 )
        goto LABEL_63;
      v16 = 0LL;
      v17 = GetProcessHeap();
      v18 = (CStreamStoppedWorkItem *)HeapAlloc(v17, 0, 0x20uLL);
      if ( v18 )
      {
        *((_QWORD *)v18 + 1) = 0LL;
        *(_QWORD *)v18 = &CStreamStoppedWorkItem::`vftable';
        *((_QWORD *)v18 + 2) = 0LL;
        *((_QWORD *)v18 + 3) = 0LL;
      }
      else
      {
        v18 = 0LL;
      }
      if ( v18 )
      {
        ProcessFromStreamInfo = CStreamStoppedWorkItem::Initialize(v18, v8);
        if ( ProcessFromStreamInfo >= 0 )
        {
          v16 = v18;
          v18 = 0LL;
        }
      }
      else
      {
        ProcessFromStreamInfo = -2147024882;
      }
      if ( v18 )
        (*(void (__fastcall **)(CStreamStoppedWorkItem *, __int64))(*(_QWORD *)v18 + 8LL))(v18, 1LL);
      if ( ProcessFromStreamInfo >= 0 )
      {
        ProcessFromStreamInfo = (*(__int64 (__fastcall **)(CStreamStoppedWorkItem *))(*(_QWORD *)v16 + 16LL))(v16);
        if ( ProcessFromStreamInfo >= 0 )
          v16 = 0LL;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xEu,
            &WPP_c6f978e82fd73817a9c6bd1960ca45a6_Traceguids,
            ProcessFromStreamInfo);
        }
        AudPolicyLogError("CStreamStoppedWorkItem::CreateInstance", 297, ProcessFromStreamInfo);
      }
      if ( v16 )
        (*(void (__fastcall **)(CStreamStoppedWorkItem *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1LL);
      if ( ProcessFromStreamInfo < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xDu,
            &WPP_5aa1b3140c133be9bcd44f84bf38f0ce_Traceguids,
            ProcessFromStreamInfo);
        }
        AudPolicyLogError("CPlaybackManager::QueueStreamStoppedWorkItem", 235, ProcessFromStreamInfo);
        v14 = 143LL;
        goto LABEL_35;
      }
    }
    v6 = v35;
    v7 = v34;
    v5 = v36;
LABEL_63:
    v19 = *(_QWORD *)v8;
    v27 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v19 + 24))(v8, &v27) >= 0 )
    {
      v20 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *v20 > 4u )
      {
        v21 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v8 + 80LL))(v8);
        v22 = v27;
        v28 = v21;
        v23 = *(_QWORD *)v8;
        LODWORD(v33) = v5;
        LODWORD(v26) = v6;
        v29 = (__int64)off_18003F8E0[(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(v23 + 48))(v8)];
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (__int64)v20,
          (unsigned __int8 *)dword_180046441,
          v24,
          v25,
          (void **)&v31,
          (void **)&v30,
          (void **)&v29,
          (__int64)&v26,
          (__int64)&v33,
          (__int64)&v28);
      }
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return 0LL;
}
