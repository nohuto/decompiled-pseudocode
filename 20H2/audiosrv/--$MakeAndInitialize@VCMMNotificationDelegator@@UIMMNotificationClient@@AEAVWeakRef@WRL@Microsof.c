/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsoft@@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAVWeakRef@12@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E26FC
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800304D0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@QEAA@XZ @ 0x180038C88 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
        _QWORD *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // edi
  int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // esi

  *a1 = 0LL;
  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>(v8);
    *v9 = &CMMNotificationDelegator::`vftable';
    v9[1] = &CMMNotificationDelegator::`vftable'{for `IMMNotificationClient'};
    v9[2] = &CMMNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
    v9[5] = 0LL;
    *((_DWORD *)v9 + 12) = 0;
    *((_DWORD *)v9 + 13) = 0;
    v11 = *a4;
    v12 = *a2;
    v13 = v9[5];
    v14 = *a3;
    if ( v13 != *a2 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v13 = v9[5];
      }
      v9[5] = v12;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    *((_DWORD *)v9 + 12) = v14;
    *((_DWORD *)v9 + 13) = v11;
    v10 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v9)(
            v9,
            &GUID_7991eec9_7e89_4d85_8390_6c703cec60c0,
            a1);
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
