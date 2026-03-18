/*
 * XREFs of ??C?$span_iterator@V?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@$0A@@details@gsl@@QEBAPEBUSceneMeshMaterialAttributeData@@XZ @ 0x1801ED134
 * Callers:
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1801ED924 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall gsl::details::span_iterator<gsl::span<SceneMeshMaterialAttributeData const,-1>,0>::operator->(
        _QWORD *a1)
{
  __int64 v1; // rdx

  v1 = a1[1];
  if ( v1 == *(_QWORD *)*a1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return *(_QWORD *)(*a1 + 8LL) + 8 * v1;
}
