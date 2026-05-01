/*
 * XREFs of ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1802DF680
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18004F4A8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall WindowWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  char v7; // bl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 272) + 200LL))(*(_QWORD *)(a1 + 272), &SRWLock);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 172) &= 0xFFFFFFC7;
    goto LABEL_10;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v6 = *(_DWORD *)(a1 + 172);
    if ( (v6 & 0x18) != 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
    v5 = v6 | 8;
    goto LABEL_7;
  }
  if ( v4 == 1 )
  {
    v5 = *(_DWORD *)(a1 + 172) & 0xFFFFFFE7 | 0x10;
LABEL_7:
    *(_DWORD *)(a1 + 172) = v5;
  }
LABEL_10:
  WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16));
  v7 = 1;
LABEL_11:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v7;
}
