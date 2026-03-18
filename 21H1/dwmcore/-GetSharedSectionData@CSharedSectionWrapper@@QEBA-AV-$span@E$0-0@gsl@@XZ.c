/*
 * XREFs of ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@E$0?0@gsl@@XZ @ 0x1801F04EC
 * Callers:
 *     _lambda_05398b4549421d065ab404e0dbeea144_::operator() @ 0x1801EC6E8 (_lambda_05398b4549421d065ab404e0dbeea144_--operator().c)
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801EC800 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x180038464 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall CSharedSectionWrapper::GetSharedSectionData(__int64 a1)
{
  void *v1; // rax
  __int64 v2; // r8
  _QWORD *v3; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 56) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  if ( *(_DWORD *)(a1 + 68) == -1 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v1 = CSharedSectionBase::ResolveAllocation(
         *(CSharedSectionBase **)(a1 + 56),
         *(unsigned int *)(a1 + 64),
         *(unsigned int *)(a1 + 68));
  *v3 = v2;
  v3[1] = v1;
  if ( !v1 && v2 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return v3;
}
