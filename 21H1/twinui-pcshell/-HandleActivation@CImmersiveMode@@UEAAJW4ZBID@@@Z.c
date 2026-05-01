/*
 * XREFs of ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x1800748E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180017970 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_ModeFromZbid@CImmersiveMode@@CA?AW4IMM_SYSTEM_MODE@@W4ZBID@@@Z @ 0x1800749EC (-s_ModeFromZbid@CImmersiveMode@@CA-AW4IMM_SYSTEM_MODE@@W4ZBID@@@Z.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180074A18 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x18012C85C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x18013D774 (-_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::HandleActivation(__int64 a1, unsigned int a2)
{
  CImmersiveMode *v4; // r14
  __int64 v5; // rbp
  int v6; // ebx
  int v7; // ecx
  signed int ApartmentId; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 i; // rsi
  unsigned int v14; // [rsp+30h] [rbp-258h] BYREF
  __int64 v15; // [rsp+38h] [rbp-250h]
  signed int v16; // [rsp+40h] [rbp-248h]
  WCHAR Filename[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v4 = (CImmersiveMode *)(a1 - 88);
  v5 = (a1 + 96) & -(__int64)(a1 != 88);
  v15 = v5;
  v6 = *(_DWORD *)(v5 + 0x2C);
  if ( v6 != 2 )
  {
    v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_3;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
      {
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
        goto LABEL_4;
      }
      v11 = 1;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else
    {
      v11 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    }
    if ( v11 != 1 )
      goto LABEL_4;
    if ( v6 == 1 )
    {
      v12 = IsAppCompatModeEnabled(16LL);
      v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v12 )
        v7 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v7;
LABEL_3:
      if ( v7 != 1 )
        goto LABEL_4;
    }
  }
  if ( *(_DWORD *)(v5 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v14);
    if ( ApartmentId >= 0 && v14 != *(_DWORD *)(v5 + 40) )
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
  ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v5) ? 0x8001010E : 0;
LABEL_5:
  v16 = ApartmentId;
  if ( *(_DWORD *)(a1 + 160) != a2 )
  {
    CImmersiveMode::_PrepareDeferredNotifications(v4, a2);
    v10 = CImmersiveMode::s_ModeFromZbid(a2);
    if ( v10 != -1 && v10 != *(_DWORD *)(a1 + 248) )
    {
      *(_DWORD *)(a1 + 248) = v10;
      CImmersiveMode::_UpdateFallbackWindow(v4);
      for ( i = 0LL; i < *(_QWORD *)(a1 + 352); ++i )
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(
          *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8 * i),
          *(_DWORD *)(a1 + 248));
    }
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v5);
  return 0LL;
}
