/*
 * XREFs of ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18003406C
 * Callers:
 *     ?Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180034020 (-Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180027FE0 (-IsEdition@@YA_N_K@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18003443C (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180034490 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180042BB0 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800683B0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18008965C (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 */

GameControllerRawInputProvider *__fastcall GameControllerRawInputProvider::GameControllerRawInputProvider(
        GameControllerRawInputProvider *this,
        struct IRawInputClient *a2)
{
  __int64 *v3; // rdi
  int v4; // eax
  HANDLE FileW; // rax
  const char *v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  char *v10; // rax
  int updated; // eax
  int dwCreationDisposition; // [rsp+20h] [rbp-38h]
  int dwCreationDispositiona; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD CurrentProcessId; // [rsp+60h] [rbp+8h] BYREF
  struct GameInputServerProxy *v17; // [rsp+68h] [rbp+10h] BYREF

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &GameControllerRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &GameControllerRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &GameControllerRawInputProvider::`vftable'{for `IGameInputServerInputRouter'};
  *((_QWORD *)this + 3) = &GameControllerRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
  v3 = (__int64 *)((char *)this + 48);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = -1LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  QpcTimeConverter::QpcTimeConverter((GameControllerRawInputProvider *)((char *)this + 128));
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  if ( GameControllerRawInputProvider::s_instance )
    goto LABEL_22;
  GameControllerRawInputProvider::s_instance = this;
  CurrentProcessId = GetCurrentProcessId();
  dwCreationDispositiona = 0;
  v4 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &CurrentProcessId, 4LL);
  if ( v4 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v4,
      dwCreationDispositiona);
LABEL_24:
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      v6);
    goto LABEL_25;
  }
  if ( IsEdition(6176LL) )
  {
    FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 72,
      FileW);
    if ( ((*((_QWORD *)this + 9) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      goto LABEL_24;
  }
  v7 = *v3;
  *v3 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = CoreUICreate(v3);
  if ( v8 < 0 )
  {
LABEL_25:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v8,
      dwCreationDispositiona);
    JUMPOUT(0x180034325LL);
  }
  if ( !gbIsDWMNoRawGameController )
  {
    v9 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( (int)GameInputServerProxy::CreateSingleton((GameControllerRawInputProvider *)((char *)this + 16), &v17) < 0 )
    {
      *((_QWORD *)this + 7) = 0LL;
    }
    else
    {
      if ( v17 )
        v10 = (char *)v17 + 16;
      else
        v10 = 0LL;
      *((_QWORD *)this + 7) = v10;
    }
  }
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = -1;
  updated = GameControllerRawInputProvider::UpdateFocusPids(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)updated,
      dwCreationDispositiona);
LABEL_22:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)0x8000FFFFLL,
      dwCreationDisposition);
    goto LABEL_23;
  }
  return this;
}
