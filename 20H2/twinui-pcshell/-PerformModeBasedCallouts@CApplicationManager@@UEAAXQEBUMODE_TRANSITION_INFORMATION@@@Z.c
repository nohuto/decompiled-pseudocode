/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x1800667A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180150D2C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *const a2)
{
  unsigned __int64 v4; // r14
  int v5; // ebx
  int v6; // ecx
  signed int ApartmentId; // ebx
  int v8; // edi
  bool v9; // r15
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  _BYTE *v17; // rcx
  unsigned int v18[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-C0h]
  _QWORD v21[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+68h] [rbp-A0h]
  int v23; // [rsp+6Ch] [rbp-9Ch]
  __int64 v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  _BYTE *v27; // [rsp+88h] [rbp-80h]
  bool v28; // [rsp+90h] [rbp-78h]
  unsigned __int64 v29; // [rsp+98h] [rbp-70h]
  signed int v30; // [rsp+A0h] [rbp-68h]
  _BYTE v31[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v32[96]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR Filename[264]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v4 = ((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)240);
  v29 = v4;
  v5 = *(_DWORD *)(v4 + 0x2C);
  if ( v5 != 2 )
  {
    v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_3;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      v14 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v14;
    }
    else
    {
      v14 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    }
    if ( v14 != 1 )
      goto LABEL_4;
    if ( v5 == 1 )
    {
      v15 = IsAppCompatModeEnabled(16LL);
      v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v15 )
        v6 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v6;
LABEL_3:
      if ( v6 != 1 )
        goto LABEL_4;
    }
  }
  if ( *(_DWORD *)(v4 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v18);
    if ( ApartmentId >= 0 && v18[0] != *(_DWORD *)(v4 + 40) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId);
      goto LABEL_5;
    }
  }
LABEL_4:
  ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
LABEL_5:
  v30 = ApartmentId;
  v8 = *((_DWORD *)a2 + 4);
  if ( (v8 != 1 && *((_DWORD *)a2 + 4) != 8 || v8 == 1 || *((_QWORD *)this + 34)) && *((_QWORD *)this + 39) )
  {
    v9 = 0;
    v10 = 0LL;
    v20 = 0LL;
    memset_0(v32, 0, 0x58uLL);
    if ( v8 == 1 || v8 == 8 )
    {
      if ( v8 == 1 )
      {
        v9 = 1;
        v19 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 40) + 88LL))(
               *((_QWORD *)this + 40),
               *((_QWORD *)this + 31),
               &SID_PerMonitorDesktopVisibilityService,
               &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
               &v19) >= 0
          && (*(int (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, 0LL, v18) >= 0 )
        {
          v9 = v18[0] != 0;
        }
        v11 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      else
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 280LL))(*((_QWORD *)this + 34)) & 4) != 0 )
        {
          v9 = 1;
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 384LL))(*((_QWORD *)this + 34));
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)this + 34) + 328LL))(
                *((_QWORD *)this + 34),
                &v19,
                v31);
        v17 = v31;
        if ( v16 < 0 )
          v17 = v20;
        v20 = v17;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 344LL))(*((_QWORD *)this + 34), v32);
      }
    }
    v12 = *((_QWORD *)this + 31);
    v13 = *((_DWORD *)this + 66);
    *(_OWORD *)&v21[1] = *(_OWORD *)a2;
    v22 = *((_DWORD *)a2 + 4);
    v23 = v13;
    LODWORD(v24) = 0;
    v25 = v10;
    v26 = v12;
    v27 = v20;
    v28 = v9;
    *((_BYTE *)this + 240) = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 39) + 40LL))(
                               *((_QWORD *)this + 39),
                               &v21[1]) >= 0;
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
