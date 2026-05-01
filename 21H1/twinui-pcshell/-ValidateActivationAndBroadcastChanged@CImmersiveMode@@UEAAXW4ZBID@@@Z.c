/*
 * XREFs of ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x1800739B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180073AD0 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x18012C85C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x18013BDA0 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

void __fastcall CImmersiveMode::ValidateActivationAndBroadcastChanged(__int64 a1, int a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  int v6; // ecx
  unsigned int v7; // edx
  signed int ApartmentId; // ebx
  _DWORD *v9; // rcx
  ZBAND_NOTIFICATION_DATA *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14[4]; // [rsp+30h] [rbp-258h] BYREF
  WCHAR Filename[264]; // [rsp+40h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v4 = (a1 + 96) & -(__int64)(a1 != 88);
  v5 = *(_DWORD *)(v4 + 0x2C);
  if ( v5 == 2 )
    goto LABEL_24;
  v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
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
  if ( v5 == 1 )
  {
    v12 = IsAppCompatModeEnabled(16LL);
    v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( v12 )
      v6 = 2;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v6;
LABEL_3:
    if ( v6 != 1 )
    {
LABEL_4:
      ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
      goto LABEL_5;
    }
  }
LABEL_24:
  if ( *(_DWORD *)(v4 + 40) == -3 )
    goto LABEL_4;
  ApartmentId = SHCoGetApartmentId(v14);
  if ( ApartmentId >= 0 )
  {
    if ( v14[0] != *(_DWORD *)(v4 + 40) )
      ApartmentId = -2147417842;
    if ( ApartmentId >= 0 )
      goto LABEL_4;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (__int64)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentId);
LABEL_5:
  v9 = *(_DWORD **)(a1 + 264);
  if ( v9 )
  {
    if ( *v9 != a2 && *v9 )
    {
      v13 = 0;
      if ( a2 != *(_DWORD *)(a1 + 160) )
        v13 = a2;
      *v9 = v13;
    }
    v10 = *(ZBAND_NOTIFICATION_DATA **)(a1 + 264);
    if ( *(_DWORD *)v10 && (*(_DWORD *)(a1 + 160) = *(_DWORD *)v10) != 0 && *((_QWORD *)v10 + 1) )
    {
      CImmersiveMode::_ScheduleListenerNotification((CImmersiveMode *)(a1 - 88));
    }
    else
    {
      if ( v10 )
        ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v10, v7);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
