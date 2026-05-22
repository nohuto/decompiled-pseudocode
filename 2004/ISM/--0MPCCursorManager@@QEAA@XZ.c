/*
 * XREFs of ??0MPCCursorManager@@QEAA@XZ @ 0x18007BF30
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x180075BB0 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180067DE0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsHyperVGuestOS@@YA_NXZ @ 0x18007C170 (-IsHyperVGuestOS@@YA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18007C76C (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

MPCCursorManager *__fastcall MPCCursorManager::MPCCursorManager(
        MPCCursorManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  HMODULE *v4; // rdi
  struct ISMTestMode *v5; // rax
  HMODULE LibraryW; // rax
  const char *v8; // r9
  FARPROC ProcAddress; // rax
  const char *v10; // r9
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 8) = 0;
  v4 = (HMODULE *)((char *)this + 40);
  v5 = ISMTestMode::s_instance;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_WORD *)this + 32) = 0;
  *((_BYTE *)this + 56) = 0;
  *((_DWORD *)this + 15) = 1;
  *((_BYTE *)this + 66) = 0;
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
    __debugbreak();
  }
  if ( !*(_BYTE *)v5 )
  {
    if ( !IsEdition(10LL) || IsHyperVGuestOS() )
    {
      if ( IsEdition(1024LL) )
      {
        if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(
            retaddr,
            (void *)0x38,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
            v11);
          __debugbreak();
        }
        *((_BYTE *)this + 66) = 1;
      }
    }
    else
    {
      LibraryW = LoadLibraryW(L"User32.dll");
      wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
        v4,
        LibraryW);
      if ( !*v4 )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x2F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v8);
        __debugbreak();
      }
      ProcAddress = GetProcAddress(*v4, "ShowSystemCursor");
      *((_QWORD *)this + 6) = ProcAddress;
      if ( !ProcAddress )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x32,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v10);
        __debugbreak();
      }
      *((_BYTE *)this + 64) = 1;
    }
  }
  return this;
}
