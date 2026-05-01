/*
 * XREFs of ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x180136928
 * Callers:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180136B9C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x180154768 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_0758695e4094b81417177289bdc77534___.c)
 * Callees:
 *     _Init_thread_footer @ 0x18008DC88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008DCF0 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18012BF14 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CApplicationManagerUtility::NotifyWindow(HWND a1, unsigned int a2, __int64 a3, __int64 a4, BOOL a5)
{
  BOOL v9; // esi
  unsigned int v10; // edi
  PSRWLOCK v11; // rbx

  if ( dword_1805A230C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805A230C);
    if ( dword_1805A230C == -1 )
    {
      qword_1805A16E8[0] = (__int64)PostMessageW;
      qword_1805A16F0 = (__int64)SendNotifyMessageW;
      Init_thread_footer(&dword_1805A230C);
    }
  }
  v9 = a5;
  v10 = 0;
  if ( a5 )
  {
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    v9 = GetWindowThreadProcessId(a1, 0LL) != LODWORD(v11[11].Ptr);
  }
  if ( !((unsigned int (__fastcall *)(HWND, _QWORD, __int64, __int64))qword_1805A16E8[v9])(a1, a2, a3, a4) )
    return (unsigned int)ResultFromKnownLastError();
  return v10;
}
