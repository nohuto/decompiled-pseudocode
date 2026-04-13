/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001BFB0
 * Callers:
 *     ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x180010720 (-GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000728C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001AC9C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB364 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        HRESULT a2,
        __int64 a3)
{
  _DWORD *v4; // rbx
  HANDLE Event; // rax
  signed int LastError; // eax
  signed int v7; // esi
  __int64 v8; // rax
  char v9; // bl
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v11; // rax
  int (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  HANDLE *v16; // rcx
  HANDLE pHandles[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v19; // [rsp+80h] [rbp+28h] BYREF
  HRESULT v20; // [rsp+88h] [rbp+30h] BYREF
  __int64 dwindex; // [rsp+90h] [rbp+38h] BYREF
  HANDLE *v22; // [rsp+98h] [rbp+40h]

  dwindex = a3;
  v20 = a2;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[1])(a1);
  v22 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 2));
    v4[11] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>'};
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v4 = off_1800D9588;
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v4[12] = 0;
    *((_QWORD *)v4 + 7) = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v4 + 7) = Event;
    if ( Event )
    {
      v7 = 0;
    }
    else
    {
      LastError = GetLastError();
      v7 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v7 = LastError;
    }
    v8 = *(_QWORD *)v4;
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(v8 + 8))(v4);
      v22 = (HANDLE *)v4;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
      v7 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(v8 + 16))(v4);
    }
    v20 = v7;
    if ( v7 >= 0 )
    {
      v20 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), HANDLE *))(*a1)[6])(a1, v22);
      if ( v20 >= 0 )
      {
        pHandles[0] = v22[7];
        pHandles[1] = 0LL;
        v9 = 0;
        v20 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, pHandles, (LPDWORD)&dwindex);
        if ( v20 >= 0 && (_DWORD)dwindex )
        {
          v20 = -2147023673;
          v9 = 1;
        }
        v19 = 0LL;
        if ( v9 )
        {
          v10 = **a1;
          v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v19);
          if ( v10(a1, &GUID_00000036_0000_0000_c000_000000000046, v11) >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 72LL))(v19);
        }
        if ( v20 >= 0 && *((_DWORD *)v22 + 12) != 1 )
        {
          if ( v19
            || (v12 = **a1,
                v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v19),
                v12(a1, &GUID_00000036_0000_0000_c000_000000000046, v13) >= 0) )
          {
            (*(void (__fastcall **)(__int64, HRESULT *))(*(_QWORD *)v19 + 64LL))(v19, &v20);
          }
        }
        v14 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
  }
  else
  {
    v20 = -2147024882;
  }
  v15 = v20;
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*((void (__fastcall **)(HANDLE *))*v16 + 2))(v16);
  }
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[2])(a1);
  return v15;
}
