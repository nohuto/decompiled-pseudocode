/*
 * XREFs of _lambda_868b6464a412d41748ea1a8c758341d2_::operator() @ 0x180055828
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_868b6464a412d41748ea1a8c758341d2___::Run @ 0x180055730 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_868b6464a412d41748ea1a8c758341d2___--.c)
 * Callees:
 *     ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x180058E54 (--$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18005C984 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_868b6464a412d41748ea1a8c758341d2_::operator()(WindowWrapperBase **a1)
{
  WindowWrapperBase *v2; // rcx
  const char *v3; // r9
  int v4; // edi
  WindowWrapperBase *v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  bool v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)*a1 + 36) + 200LL))(*((_QWORD *)*a1 + 36), &SRWLock);
    LOBYTE(v8) = 0;
    v2 = *a1;
    v9 = (*((_DWORD *)*a1 + 47) & 0x40) != 0;
    v10 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v2 + 2) + 288LL))((__int64)v2 + 16);
    ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(&v10, &v9, &v8);
    v4 = *((_DWORD *)*a1 + 47) & 0x40;
    *((_DWORD *)*a1 + 47) &= ~0x40u;
    v5 = *a1;
    if ( (*((_WORD *)*a1 + 130) & 0xC0) == 0xC0 && (*((_DWORD *)v5 + 47) & 0x100) == 0 )
    {
      *((_WORD *)v5 + 130) = *((_WORD *)*a1 + 130) & 0xFFBF;
      WindowWrapperBase::CommitImportanceVector(*a1);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8B1,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 36) + 240LL))(*((_QWORD *)*a1 + 36));
  return 0LL;
}
