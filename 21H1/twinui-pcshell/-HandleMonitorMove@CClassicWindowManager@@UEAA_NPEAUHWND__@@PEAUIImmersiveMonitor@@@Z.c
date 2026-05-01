/*
 * XREFs of ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x18004BD40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x18012C85C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=6
_BOOL8 __fastcall CClassicWindowManager::HandleMonitorMove(
        CClassicWindowManager *this,
        HWND a2,
        struct IImmersiveMonitor *a3)
{
  int v5; // esi
  char *v6; // r15
  int v7; // ebx
  int v8; // eax
  int ApartmentId; // r12d
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // ebx
  bool v15; // bl
  __int64 v16; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  int cchValue; // [rsp+20h] [rbp-2A8h]
  unsigned int v20[2]; // [rsp+30h] [rbp-298h] BYREF
  __int64 v21; // [rsp+38h] [rbp-290h] BYREF
  struct IImmersiveMonitor *v22; // [rsp+40h] [rbp-288h]
  __int64 v23; // [rsp+48h] [rbp-280h]
  __int64 v24; // [rsp+50h] [rbp-278h]
  __int64 v25; // [rsp+58h] [rbp-270h]
  char *v26; // [rsp+60h] [rbp-268h]
  int v27; // [rsp+68h] [rbp-260h]
  WCHAR Filename[264]; // [rsp+70h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v22 = a3;
  v5 = 0;
  if ( this == (CClassicWindowManager *)72 )
    v6 = 0LL;
  else
    v6 = (char *)this + 64;
  v26 = v6;
  v7 = *((_DWORD *)v6 + 11);
  if ( v7 != 2 )
  {
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_43;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v7 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v8 != 1 )
          goto LABEL_6;
        goto LABEL_37;
      }
LABEL_43:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_37:
  if ( *((_DWORD *)v6 + 10) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v20);
    if ( ApartmentId >= 0 && v20[0] != *((_DWORD *)v6 + 10) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_8;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v6) )
    ApartmentId = 0;
LABEL_8:
  v27 = ApartmentId;
  v21 = 0LL;
  v23 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *((_QWORD *)this + 16) )
  {
    v24 = 0LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v11);
      v25 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *(_QWORD *)v20 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, unsigned int *))v12)(
             v12,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             v20) < 0
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)v20 + 192LL))(*(_QWORD *)v20, a2) )
      {
        v5 = -1;
      }
      v13 = *(_QWORD *)v20;
      if ( *(_QWORD *)v20 )
      {
        *(_QWORD *)v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( !v5 )
        break;
      ++v11;
      v5 = 0;
      if ( v11 >= *((_QWORD *)this + 16) )
        goto LABEL_19;
    }
    v10 = v11;
    v14 = 0;
  }
  else
  {
LABEL_19:
    v14 = -2147319765;
  }
  if ( v14 >= 0 )
  {
    v18 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8 * v10);
    v14 = (**v18)(v18, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v21);
    if ( v14 >= 0 )
      (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v21 + 88LL))(v21, v22);
  }
  v15 = v14 >= 0;
  v16 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return v15;
}
