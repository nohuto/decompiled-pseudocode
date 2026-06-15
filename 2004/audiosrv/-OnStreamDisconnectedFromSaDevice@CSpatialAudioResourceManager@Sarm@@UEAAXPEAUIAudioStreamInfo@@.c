/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18004F630
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800D99E0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@553@Z @ 0x180105EA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U3@U1@@.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180108F88 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180109084 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180109288 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x18010B06C (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r14
  __int64 v6; // r9
  int v7; // ecx
  int v8; // r8d
  const char *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // r15d
  __int128 v13; // xmm0
  char v14; // r14
  std::_Ref_count_base *v15; // rcx
  int v16; // eax
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-ACh] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  int v21; // [rsp+5Ch] [rbp-A4h] BYREF
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v26; // [rsp+88h] [rbp-78h] BYREF
  int v27[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR v29; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall ***v30)(); // [rsp+D0h] [rbp-30h]
  __int128 v31; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v33; // [rsp+100h] [rbp+0h]
  int v34; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+10Ch] [rbp+Ch]
  const char *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( (unsigned int)dword_18019D350 > 5 )
  {
    v20 = 413;
    v38 = &v20;
    v39 = 4LL;
    v36 = "Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice";
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_18019D358;
    v37 = 69LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18019D358;
    v33 = &unk_18016A43E;
    UserData.Reserved = 2;
    v34 = 21;
    v35 = 1;
    v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_18019D370, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v24 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2)(
      a2,
      &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9,
      &v24);
    if ( v24 )
    {
      v6 = *((_QWORD *)this + 29);
      if ( v6 )
      {
        v10 = *(_QWORD *)(v6 + 8LL * ((unsigned int)v24 % *((_DWORD *)this + 62)));
        if ( v10 )
        {
          while ( *(_DWORD *)(v10 + 112) != (_DWORD)v24 || *(_QWORD *)v10 != v24 )
          {
            v10 = *(_QWORD *)(v10 + 104);
            if ( !v10 )
              goto LABEL_6;
          }
          v5 = v10 + 8;
        }
      }
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      if ( v5 )
      {
        v11 = *(_QWORD *)(v5 + 8);
        if ( !v11 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1A7,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            v9);
          __debugbreak();
        }
        v12 = *(_DWORD *)(v5 + 52);
        if ( (unsigned int)dword_18019D350 > 4 )
        {
          v13 = *(_OWORD *)(v5 + 16);
          v22 = *(_DWORD *)(v5 + 80);
          v19 = *(_DWORD *)(v5 + 84);
          v26 = &v31;
          *(_QWORD *)v27 = *(_QWORD *)(v5 + 40);
          v25 = v11;
          v21 = v12;
          v31 = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v7,
            (unsigned int)&unk_18016A101,
            v8,
            (_DWORD)v9,
            (__int64)v27,
            (__int64)&v26,
            (__int64)&v19,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v25);
        }
        Sarm::CSpatialAudioResourceManager::RemoveStream(this, (struct Sarm::CStreamResource *)v5);
        v14 = *(_BYTE *)(v11 + 8);
        v18 = 0;
        Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount((Sarm::CEndpointResourcePool *)v11, &v18);
        if ( *(_DWORD *)(v11 + 12) )
          goto LABEL_34;
        if ( *(_QWORD *)v11 )
          ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
        if ( *((_QWORD *)this + 20) )
        {
LABEL_34:
          if ( *((_QWORD *)this + 30) )
          {
            if ( v14 )
            {
              if ( v18 )
              {
                *(_QWORD *)&EventDescriptor.Id = this;
                v28 = off_1801568A0;
                LODWORD(EventDescriptor.Keyword) = v12;
                v30 = &v28;
                v29 = EventDescriptor;
                v16 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
                if ( v16 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x1D0,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                    (const char *)(unsigned int)v16,
                    UserDataCount);
              }
            }
          }
        }
        else
        {
          v15 = qword_18019FB30;
          Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
          qword_18019FB30 = 0LL;
          if ( v15 )
            std::_Ref_count_base::_Decref(v15);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
