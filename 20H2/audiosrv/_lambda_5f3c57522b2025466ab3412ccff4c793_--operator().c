/*
 * XREFs of _lambda_5f3c57522b2025466ab3412ccff4c793_::operator() @ 0x18006FAA0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Do_call @ 0x1800E6CB0 (std--_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180023320 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180054398 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CD3CC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CD438 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800E9268 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_5f3c57522b2025466ab3412ccff4c793_::operator()(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  char v10; // al
  int v11; // eax
  const struct _tlgProvider_t *v12; // rax
  int v13; // r8d
  int v14; // r9d
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  __int64 v20; // [rsp+80h] [rbp+28h] BYREF
  __int64 v21; // [rsp+88h] [rbp+30h] BYREF
  __int64 v22; // [rsp+90h] [rbp+38h] BYREF
  __int64 v23; // [rsp+98h] [rbp+40h] BYREF

  v23 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(*(_QWORD *)a1, &v23);
  v3 = v23;
  if ( v2 >= 0 && v23 )
  {
    v20 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v23, &v20) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 384LL))(v20, **(_QWORD **)(a1 + 8)) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 128LL))(v20);
      v22 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      v5 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                     + 24LL))(
             g_DeviceGraphStore,
             v4,
             &v22);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA0F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v5);
LABEL_9:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
LABEL_20:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
        v3 = v23;
        goto LABEL_22;
      }
      (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v22 + 112LL))(v22, &v16);
      v21 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 192LL))(v20, &v21);
      v6 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA17,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
        goto LABEL_9;
      }
      if ( v21 )
      {
        v8 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
               g_DeviceGraphManager,
               v20);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            2587LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v8);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 280LL))(v20);
      if ( v21 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 208LL))(v20);
        v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                g_DeviceGraphManager,
                v20,
                v21,
                v10 == 0,
                0LL);
        v9 = retaddr;
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            2597LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v11);
      }
      v12 = AudioSrvTelemetryProvider::Provider((__int64)v9);
      if ( *(_DWORD *)v12 > 4u )
      {
        v17 = **(_QWORD **)(a1 + 8);
        v18[0] = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          (_DWORD)v12,
          (unsigned int)&unk_180168211,
          v13,
          v14,
          (__int64)v18,
          (__int64)&v17);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
    }
    v6 = 0;
    goto LABEL_20;
  }
  v6 = 0;
LABEL_22:
  if ( v3 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v6;
}
