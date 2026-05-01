/*
 * XREFs of ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180056380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  DWORD CurrentThreadId; // esi
  HRESULT ApartmentType; // ebx
  unsigned int v12; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  int cchValue; // [rsp+20h] [rbp-298h]
  int cchValuea; // [rsp+20h] [rbp-298h]
  __int64 v20; // [rsp+30h] [rbp-288h] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp-280h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+3Ch] [rbp-27Ch] BYREF
  __int64 v23; // [rsp+40h] [rbp-278h]
  HRESULT v24; // [rsp+48h] [rbp-270h]
  WCHAR Filename[264]; // [rsp+50h] [rbp-268h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  if ( a1 )
    v8 = a1 + 48;
  else
    v8 = 0LL;
  v23 = v8;
  v9 = *(_DWORD *)(v8 + 44);
  if ( v9 == 2 )
    goto LABEL_4;
  v14 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_27;
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v15 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v15;
  }
  else
  {
    v15 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v15 != 1 )
    goto LABEL_10;
  if ( v9 == 1 )
  {
    if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
    {
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_10;
    }
    v14 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_27:
    if ( v14 != 1 )
      goto LABEL_10;
  }
LABEL_4:
  if ( *(_DWORD *)(v8 + 40) == -3 )
    goto LABEL_10;
  CurrentThreadId = 0;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_8;
  if ( pAptType == APTTYPE_STA )
    goto LABEL_7;
  if ( pAptType != APTTYPE_MTA )
  {
    if ( pAptType == APTTYPE_NA )
    {
      CurrentThreadId = -1;
    }
    else if ( pAptType == APTTYPE_MAINSTA )
    {
LABEL_7:
      CurrentThreadId = GetCurrentThreadId();
    }
  }
LABEL_8:
  if ( ApartmentType < 0 )
    goto LABEL_12;
  if ( CurrentThreadId != *(_DWORD *)(v8 + 40) )
  {
    ApartmentType = -2147417842;
    goto LABEL_12;
  }
LABEL_10:
  ApartmentType = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v8) )
    ApartmentType = 0;
LABEL_12:
  v24 = ApartmentType;
  if ( ApartmentType < 0 )
  {
    v20 = 0LL;
    v16 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 96) + 24LL))(
            *(_QWORD *)(a1 + 96),
            &GUID_727f9e97_76ee_497b_a942_b6371328485c,
            &v20);
    v12 = v16;
    if ( v16 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v20 + 24LL))(v20, a2, a3, a4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50B,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)v16,
        cchValue);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)v12,
        cchValuea);
    }
    v17 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 104) + 24LL))(
            *(_QWORD *)(a1 + 104),
            a2,
            a3,
            a4);
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
  return v12;
}
