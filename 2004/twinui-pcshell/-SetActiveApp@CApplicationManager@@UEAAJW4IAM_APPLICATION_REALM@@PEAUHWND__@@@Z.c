/*
 * XREFs of ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x180080B90
 * Callers:
 *     <none>
 * Callees:
 *     ?CanChangeForeground@@YAJXZ @ 0x18004DA0C (-CanChangeForeground@@YAJXZ.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x180080C98 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x180080CE0 (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x180155D7C (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x18015B228 (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManager::SetActiveApp(__int64 a1, int a2, HWND a3)
{
  __int64 v6; // rcx
  int LastActiveModernWindowForActivation; // edi
  HWND v8; // rdx
  int v9; // ebx
  int v10; // ebx
  HWND LastActiveVisiblePopupOrSelf; // rax
  FILETIME FileTime1; // [rsp+20h] [rbp-28h] BYREF
  HWND v15; // [rsp+50h] [rbp+8h] BYREF
  FILETIME FileTime2; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *(_DWORD *)(a1 + 720) == 2 )
  {
    v6 = *(_QWORD *)(a1 + 296);
    LastActiveModernWindowForActivation = 0;
    if ( v6 )
    {
      if ( a2 == 2 )
      {
        LastActiveModernWindowForActivation = (*(__int64 (__fastcall **)(__int64, FILETIME *))(*(_QWORD *)v6 + 96LL))(
                                                v6,
                                                &FileTime1);
        if ( LastActiveModernWindowForActivation < 0
          || (int)CApplicationManager::_GetLastActiveModernTimestamp((CApplicationManager *)(a1 - 240), &FileTime2) < 0
          || CompareFileTime(&FileTime1, &FileTime2) >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, HWND *))(**(_QWORD **)(a1 + 296) + 104LL))(
            *(_QWORD *)(a1 + 296),
            0LL,
            &v15);
        }
        else
        {
          CApplicationManager::_GetLastActiveModernWindowForActivation((CApplicationManager *)(a1 - 240), &v15);
        }
      }
      else if ( a2 == 8 )
      {
        v15 = a3;
      }
      else
      {
        LastActiveModernWindowForActivation = CApplicationManager::_GetLastActiveModernWindowForActivation(
                                                (CApplicationManager *)(a1 - 240),
                                                &v15);
      }
    }
  }
  else
  {
    LastActiveModernWindowForActivation = -2147024891;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( LastActiveModernWindowForActivation >= 0 && *(_QWORD *)(a1 + 296) )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
                                         (CApplicationManagerUtility *)v15,
                                         v8);
        SwitchToThisWindow(LastActiveVisiblePopupOrSelf, 1);
        return (unsigned int)LastActiveModernWindowForActivation;
      }
      if ( v10 != 6 )
        return (unsigned int)LastActiveModernWindowForActivation;
    }
    if ( v15 )
    {
      return (unsigned int)CApplicationManagerUtility::SetForegroundWindow((CApplicationManagerUtility *)v15, v8);
    }
    else
    {
      LastActiveModernWindowForActivation = CanChangeForeground();
      if ( LastActiveModernWindowForActivation < 0 )
        return (unsigned int)LastActiveModernWindowForActivation;
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 40LL))(*(_QWORD *)(a1 + 328));
    }
  }
  return (unsigned int)LastActiveModernWindowForActivation;
}
