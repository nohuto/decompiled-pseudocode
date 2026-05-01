/*
 * XREFs of ??$K32GetModuleFileNameExW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0IA@@wil@@YAJPEAXPEAUHINSTANCE__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x180291D90
 * Callers:
 *     ?GetWindowCharacteristicsWithProcessName@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x180291FF4 (-GetWindowCharacteristicsWithProcessName@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacterist.c)
 * Callees:
 *     ?make@?$string_maker@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAJPEBG_K@Z @ 0x180016338 (-make@-$string_maker@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTas.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::K32GetModuleFileNameExW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,128>(
        HANDLE hProcess,
        __int64 a2,
        void **a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  LPWSTR v9; // rbx
  DWORD ModuleFileName; // eax
  const char *v11; // r9
  bool v12; // cf
  DWORD ModuleFileNameW; // eax
  unsigned int LastError; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v17; // [rsp+50h] [rbp+8h] BYREF
  LPWSTR lpFilename; // [rsp+58h] [rbp+10h] BYREF

  v5 = (hProcess != 0LL) + 32744LL;
  lpFilename = 0LL;
  v6 = 128LL;
  while ( 1 )
  {
    v7 = wil::details::string_maker<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::make(
           &lpFilename,
           0LL,
           v6 - 1);
    v8 = v7;
    if ( v7 < 0 )
      break;
    v9 = lpFilename;
    if ( hProcess )
    {
      ModuleFileName = K32GetModuleFileNameExW(hProcess, 0LL, lpFilename, v6);
      if ( !ModuleFileName )
        goto LABEL_18;
      v12 = ModuleFileName < v6 - 1;
    }
    else
    {
      ModuleFileNameW = GetModuleFileNameW(0LL, lpFilename, v6);
      if ( !ModuleFileNameW )
      {
LABEL_18:
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x122,
                      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
                      v11);
        if ( v9 )
          CoTaskMemFree(v9);
        return LastError;
      }
      v12 = ModuleFileNameW < v6;
    }
    if ( v12 )
    {
      lpFilename = 0LL;
      if ( a3 != (void **)&v17 )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          a3,
          v9);
        v9 = 0LL;
      }
      if ( v9 )
        CoTaskMemFree(v9);
      return 0LL;
    }
    if ( v6 == v5 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        309LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
        v11);
      __debugbreak();
    }
    v6 *= 2LL;
    if ( v5 < v6 )
      v6 = v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x109,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
    (const char *)(unsigned int)v7);
  if ( lpFilename )
    CoTaskMemFree(lpFilename);
  return v8;
}
