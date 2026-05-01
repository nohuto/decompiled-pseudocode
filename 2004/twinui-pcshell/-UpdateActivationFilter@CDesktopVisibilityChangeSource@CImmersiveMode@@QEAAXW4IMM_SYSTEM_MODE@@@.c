/*
 * XREFs of ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180017F40
 * Callers:
 *     ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x180018300 (-_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ.c)
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180075000 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x18015FB90 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180161334 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ldddd @ 0x1801620CC (WPP_SF_ldddd.c)
 */

int __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(__int64 a1, int a2)
{
  unsigned __int8 v2; // r8
  PSRWLOCK v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  int result; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct tagRECT Rect; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a2 && (!*(_BYTE *)(a1 + 12) || *(_BYTE *)(a1 + 13) || *(_BYTE *)(a1 + 14)) )
    v2 = 1;
  if ( v2 != *(_BYTE *)(a1 + 15) )
  {
    v4 = CApplicationManagerUtility::g_pIAMGlobals;
    v5 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 15) = v2;
    v6 = v2;
    (*(void (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)v4[16].Ptr + 48LL))(v4[16].Ptr, v5, v2);
    result = (int)WPP_GLOBAL_Control;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
    {
      result = GetWindowRect(*(HWND *)(a1 + 16), &Rect);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        return WPP_SF_ldddd(
                 *((_QWORD *)WPP_GLOBAL_Control + 2),
                 v8,
                 v9,
                 v6,
                 Rect.left,
                 Rect.top,
                 Rect.right,
                 Rect.bottom);
    }
  }
  return result;
}
