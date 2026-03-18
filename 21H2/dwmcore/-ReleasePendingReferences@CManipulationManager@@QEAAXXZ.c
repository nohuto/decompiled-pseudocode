/*
 * XREFs of ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x18007D7D0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x18017F9F4 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CManipulationManager::ReleasePendingReferences(CManipulationManager *this)
{
  char *v1; // rbx
  __int64 v2; // rdi
  char *v3; // rcx
  __int64 v4; // rax

  v1 = (char *)this + 104;
  while ( 1 )
  {
    v2 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    v3 = *(char **)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v1 = v4;
    *(_QWORD *)(v4 + 8) = v1;
    if ( v3 != v1 )
    {
      v2 = *((_QWORD *)v3 + 2);
      operator delete(v3, 0x18uLL);
      --*((_DWORD *)v1 + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    if ( !v2 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
