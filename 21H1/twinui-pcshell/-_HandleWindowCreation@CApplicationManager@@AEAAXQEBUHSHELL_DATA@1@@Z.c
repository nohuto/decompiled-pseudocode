/*
 * XREFs of ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180132DF0
 * Callers:
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180132BF8 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x18004CE00 (CDelayIAMOperations--AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180081C98 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z @ 0x1801325C8 (-_HandleUncloakableWindow@CApplicationManager@@AEAA_NQEBUHSHELL_DATA@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleWindowCreation(int **this, HWND *a2)
{
  HWND ForegroundWindow; // rax
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  struct IImmersiveMonitor *v6; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
    CApplicationManager::_MonitorFromWindow((CApplicationManager *)this, a2[1], &v6);
    (*(void (__fastcall **)(int *, HWND, _QWORD, __int64, struct IImmersiveMonitor *))(*(_QWORD *)this[67] + 24LL))(
      this[67],
      a2[1],
      *((unsigned int *)a2 + 6),
      1LL,
      v6);
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow == a2[1] )
    {
      v5[0] = this;
      v5[1] = ForegroundWindow;
      CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(this[100], (HWND)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( (*a2 == (HWND)26 || *a2 == (HWND)29)
      && !CApplicationManager::_HandleUncloakableWindow(
            (CApplicationManager *)this,
            (const struct CApplicationManager::HSHELL_DATA *const)a2) )
    {
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
        a2[1],
        1LL);
    }
  }
  else
  {
    (*(void (__fastcall **)(int *, HWND))(*(_QWORD *)this[74] + 24LL))(this[74], a2[1]);
  }
}
