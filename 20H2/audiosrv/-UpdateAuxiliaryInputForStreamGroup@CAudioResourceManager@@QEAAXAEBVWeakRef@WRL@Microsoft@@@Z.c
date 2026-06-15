/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800EDCA4
 * Callers:
 *     ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800EDC84 (-UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180051424 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CD3CC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CD438 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800EA66C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EA89C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  LPCRITICAL_SECTION v4; // rcx
  int v5; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  int v8; // eax
  char v9; // al
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  v14 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v14) >= 0 && v14 )
  {
    v19 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v14, &v19) >= 0 )
    {
      v3 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 128LL))(v19);
      v15 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
      v5 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, struct _RTL_CRITICAL_SECTION *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
             g_DeviceGraphStore,
             v3,
             &v15);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v15 + 112LL))(v15, lpCriticalSection);
        v18 = 0LL;
        v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 192LL))(v19, &v18);
        if ( v18 )
        {
          (*(void (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
            g_DeviceGraphManager,
            v19);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 280LL))(v19);
          v6 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
          v7 = v6;
          if ( v6 )
          {
            v6[1] = 0;
            *v6 = 0;
            *((_QWORD *)v6 + 1) = 0LL;
          }
          else
          {
            v7 = 0LL;
          }
          lpCriticalSection[1] = (LPCRITICAL_SECTION)v7;
          if ( (*(int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 264LL))(v19, v7) >= 0 && *v7 == 1 )
          {
            v8 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
                   this,
                   &v19,
                   *((const unsigned __int16 **)v7 + 1));
            if ( v8 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                2531LL,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v8);
          }
          if ( v7 )
            AuxiliaryInputDescriptor::`scalar deleting destructor'((LPVOID *)v7);
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 208LL))(v19);
          v5 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                 g_DeviceGraphManager,
                 v19,
                 v18,
                 v9 == 0,
                 0LL);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v18);
        v4 = lpCriticalSection[0];
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
      }
      v10 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    (__int64)v4,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v10 > 4u )
      {
        LODWORD(v18) = v5;
        lpCriticalSection[0] = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (__int64)v10,
          byte_180168271,
          v11,
          v12,
          (void **)lpCriticalSection,
          (__int64)&v18);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
  }
  v13 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
