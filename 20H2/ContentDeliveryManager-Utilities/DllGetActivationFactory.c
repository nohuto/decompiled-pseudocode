/*
 * XREFs of DllGetActivationFactory @ 0x1800255F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18002443C (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING string, _QWORD *Ptr)
{
  PCWSTR StringRawBuffer; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  bool i; // cf
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx
  int v10; // r8d
  int v11; // edx
  const struct _GUID *v12; // r9
  unsigned int v13; // ebx
  BOOL hasEmbedNull; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v17[2]; // [rsp+38h] [rbp-50h] BYREF
  int v18; // [rsp+58h] [rbp-30h]
  wchar_t v19; // [rsp+5Ch] [rbp-2Ch]

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_180199418 = 1;
  *Ptr = 0LL;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v18 = *(_DWORD *)L"Id";
    v13 = -2147024809;
    v19 = aActivatiblecla[18];
    v17[0] = *(_OWORD *)L"activatibleClassId";
    v17[1] = *(_OWORD *)L"bleClassId";
    RoOriginateErrorW(2147942487LL, 18LL, v17);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v5 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                              + 40))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
       + 8;
    v6 = (*(__int64 (__fastcall **)(__int64 *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                              + 48))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
    for ( i = v5 < v6; i; i = v5 < v6 )
    {
      if ( *(_QWORD *)v5 )
      {
        v8 = (*(__int64 (**)(void))(*(_QWORD *)v5 + 8LL))() - (_QWORD)StringRawBuffer;
        v9 = (unsigned __int16 *)StringRawBuffer;
        do
        {
          v10 = *(unsigned __int16 *)((char *)v9 + v8);
          v11 = *v9 - v10;
          if ( v11 )
            break;
          ++v9;
        }
        while ( v10 );
        if ( !v11 )
        {
          v12 = *(const struct _GUID **)v5;
          v16 = 1;
          return (unsigned int)Microsoft::WRL::Details::GetCacheEntry(
                                 (Microsoft::WRL::Details *)&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
                                 (struct Microsoft::WRL::Details::ModuleBase *)&v16,
                                 &GUID_00000035_0000_0000_c000_000000000046.Data1,
                                 v12,
                                 Ptr);
        }
      }
      v5 += 8LL;
    }
    v13 = -2147221231;
    RoOriginateError(2147746065LL, string);
  }
  return v13;
}
