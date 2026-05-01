/*
 * XREFs of ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x18015AEB8
 * Callers:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18015B12C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x180178D08 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_0758695e4094b81417177289bdc77534___.c)
 * Callees:
 *     _Init_thread_footer @ 0x18008E588 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E5F0 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CApplicationManagerUtility::NotifyWindow(HWND a1, unsigned int a2, __int64 a3, __int64 a4, BOOL a5)
{
  BOOL v9; // esi
  unsigned int v10; // edi
  PSRWLOCK v11; // rbx

  if ( dword_1805CF754 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CF754);
    if ( dword_1805CF754 == -1 )
    {
      qword_1805CEB28[0] = (__int64)PostMessageW;
      qword_1805CEB30 = (__int64)SendNotifyMessageW;
      Init_thread_footer(&dword_1805CF754);
    }
  }
  v9 = a5;
  v10 = 0;
  if ( a5 )
  {
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    v9 = GetWindowThreadProcessId(a1, 0LL) != LODWORD(v11[11].Ptr);
  }
  if ( !((unsigned int (__fastcall *)(HWND, _QWORD, __int64, __int64))qword_1805CEB28[v9])(a1, a2, a3, a4) )
    return (unsigned int)ResultFromKnownLastError();
  return v10;
}
