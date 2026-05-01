/*
 * XREFs of ?SetMonitor@CImmersiveApp@@UEAAJPEAUIImmersiveMonitor@@W4__MIDL___MIDL_itf_shpriv_core_0000_0321_0002@@@Z @ 0x18015DAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SetMonitor(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi

  v4 = a3 - 1;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 24) + 456LL))(
    a1 + 24,
    a2,
    0LL,
    3 - (unsigned int)(v4 != 0));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
