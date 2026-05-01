/*
 * XREFs of _lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_::operator() @ 0x18004F398
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a672f9bfb72efbd6ddbbb83b87e44bdf___::Run @ 0x18004F370 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a672f9bfb72efbd6ddbbb83b87e44bdf___--.c)
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18004F4A8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18004F604 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a672f9bfb72efbd6ddbbb83b87e44bdf_::operator()(__int64 a1)
{
  int v2; // esi
  int v3; // ebx
  char v4; // r15
  __int64 v5; // rax
  HWND v6; // r14
  int v7; // ecx
  __int64 v8; // rcx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v2 = **(_DWORD **)a1;
  v3 = 4;
  if ( v2 == 5 )
  {
    v4 = 1;
    v2 = 4;
  }
  else
  {
    v4 = 0;
  }
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 288LL) + 200LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL),
    &SRWLock);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (HWND)*(int *)(v5 + 304);
  v7 = *(_DWORD *)(v5 + 488);
  if ( v2 == v7 )
  {
LABEL_11:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v4 )
    {
      if ( v6 )
        SetForegroundWindow(v6);
    }
    return 0LL;
  }
  if ( v7 )
  {
    *(_DWORD *)(v5 + 488) = v2;
    v8 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v8 + 364) & 4) == 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v8 + 488) - 4) > 1 )
        v3 = 2;
      if ( v3 != ((*(unsigned __int16 *)(v8 + 260) >> 1) & 7) )
      {
        *(_WORD *)(v8 + 260) = (2 * v3) | *(_WORD *)(v8 + 260) & 0xFFF1;
        WindowWrapperBase::CommitImportanceVector(*(WindowWrapperBase **)(a1 + 8));
        v8 = *(_QWORD *)(a1 + 8);
      }
    }
    WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)v8);
    goto LABEL_11;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 2147947423LL;
}
