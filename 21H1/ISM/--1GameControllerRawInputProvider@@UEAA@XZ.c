/*
 * XREFs of ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800886E4
 * Callers:
 *     ??_GGameControllerRawInputProvider@@UEAAPEAXI@Z @ 0x180088804 (--_GGameControllerRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180034490 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAA@XZ @ 0x1800410B4 (--1-$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAA@XZ.c)
 */

void __fastcall GameControllerRawInputProvider::~GameControllerRawInputProvider(GameControllerRawInputProvider *this)
{
  unsigned int v2; // edx
  __int64 **v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rcx
  char *v6; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &GameControllerRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &GameControllerRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &GameControllerRawInputProvider::`vftable'{for `IGameInputServerInputRouter'};
  *((_QWORD *)this + 3) = &GameControllerRawInputProvider::`vftable'{for `RefCountedObject'};
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = -1;
  GameControllerRawInputProvider::UpdateFocusPids(this);
  v7 = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &v7, 4LL);
  GameControllerRawInputProvider::s_instance = 0LL;
  NtList<GameControllerRawInputProvider::ShellButtonListEntry>::~NtList<GameControllerRawInputProvider::ShellButtonListEntry>(
    (GameControllerRawInputProvider::ShellButtonListEntry **)this + 13,
    v2);
  v3 = (__int64 **)((char *)this + 80);
  while ( 1 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == (__int64 *)v3 )
      break;
    operator delete(v4, (const struct std::nothrow_t *)0x20);
    --*((_QWORD *)this + 12);
  }
  v6 = (char *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
