/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x180085B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180085BFC (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        __int64 a2,
        HSTRING *a3)
{
  _QWORD *v4; // rax
  HSTRING v5; // rax
  HSTRING v7; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(char *, _BYTE *, __int64))(*((_QWORD *)this - 3) + 72LL))(
                   (char *)this - 24,
                   v9,
                   a2);
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v8 = v4;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&v7, &v8);
  std::wstring::_Tidy_deallocate(v9);
  v5 = v7;
  v7 = 0LL;
  *a3 = v5;
  WindowsDeleteString(0LL);
  return 0LL;
}
