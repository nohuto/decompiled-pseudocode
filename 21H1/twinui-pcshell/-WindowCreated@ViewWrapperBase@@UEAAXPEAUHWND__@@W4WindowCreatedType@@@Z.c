/*
 * XREFs of ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802B1260
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1802A7CBC (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     ??$WindowCreated@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1802AB0A0 (--$WindowCreated@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND_.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802ADF8C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1802AE2F8 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1802AE988 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ @ 0x1802AEA80 (-PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802B1524 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802BA504 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 */

void __fastcall ViewWrapperBase::WindowCreated(__int64 a1, HWND a2, unsigned int a3)
{
  _OWORD *v6; // rbp
  HWND Ancestor; // rax
  DWORD dwProcessId; // [rsp+20h] [rbp-48h] BYREF
  DWORD v9[3]; // [rsp+24h] [rbp-44h] BYREF
  struct tagPOINT Points[2]; // [rsp+30h] [rbp-38h] BYREF

  Points[0] = (struct tagPOINT)a2;
  if ( a2 != *(HWND *)(a1 + 264) )
  {
    if ( ViewManagerInteropTraceLogging::IsEnabled(a1) )
    {
      v9[0] = GetWindowThreadProcessId(a2, &dwProcessId);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
        (int *)(a1 + 140),
        (__int64 *)Points,
        (int *)v9,
        (int *)&dwProcessId);
    }
    *(_QWORD *)(a1 + 264) = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 8) + 168LL))(a1 - 8, a3);
    WindowReadyState::SetWindow(a1 + 352, *(_QWORD *)(a1 + 264), a3);
    if ( a3 == 1 )
    {
      GetWindowBand(a2, a1 + 208);
      v6 = (_OWORD *)(a1 + 192);
      GetWindowRect(a2, (LPRECT)(a1 + 192));
      Ancestor = GetAncestor(a2, 1u);
      if ( Ancestor )
      {
        *(_OWORD *)&Points[0].x = *v6;
        if ( MapWindowPoints(0LL, Ancestor, Points, 2u) )
          *v6 = *(_OWORD *)&Points[0].x;
      }
      EnumPropsExW(a2, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, a1 + 96);
    }
    else
    {
      ViewWrapperBase::PushDesiredZbidToWindow((ViewWrapperBase *)(a1 - 8));
      ViewWrapperBase::PushDesiredPositionToWindow(a1 - 8, 3);
      LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(a1 + 96), a2);
    }
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(a1 - 8, (__int64)a2, 0);
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion((ViewWrapperBase *)(a1 - 8));
  }
}
