/*
 * XREFs of ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x180156BB8
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800379B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1801573E0 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CApplicationManager::_HandleUncloakableWindow(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  char v3; // bl
  unsigned int v4; // ecx
  unsigned __int16 **v5; // r8
  unsigned __int16 *v6; // rax
  int v7; // r10d
  int v8; // edx
  _QWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( GetPropW(*((HWND *)a2 + 1), L"SpartanUncloakable") == HANDLE_FLAG_INHERIT )
  {
    v4 = 0;
    v10[0] = L"Microsoft.zMicrosoftEdge_8wekyb3d8bbwe!zMicrosoftEdge";
    v5 = (unsigned __int16 **)v10;
    v10[1] = L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge";
    v10[2] = L"Microsoft.MicrosoftEdgeBeta_8wekyb3d8bbwe!MicrosoftEdgeBeta";
    while ( 1 )
    {
      v6 = *v5;
      do
      {
        v7 = *(unsigned __int16 *)((char *)v6 + *((_QWORD *)a2 + 4) - (_QWORD)*v5);
        v8 = *v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( !v8 )
        break;
      ++v4;
      ++v5;
      if ( v4 >= 3 )
        return v3;
    }
    v3 = 1;
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *((_QWORD *)a2 + 1),
      0LL);
  }
  return v3;
}
