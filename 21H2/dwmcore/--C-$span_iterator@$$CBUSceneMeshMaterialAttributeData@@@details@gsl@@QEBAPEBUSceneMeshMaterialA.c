/*
 * XREFs of ??C?$span_iterator@$$CBUSceneMeshMaterialAttributeData@@@details@gsl@@QEBAPEBUSceneMeshMaterialAttributeData@@XZ @ 0x18023C3B0
 * Callers:
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x18023CC00 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

unsigned __int64 __fastcall gsl::details::span_iterator<SceneMeshMaterialAttributeData const>::operator->(
        gsl::details *a1)
{
  unsigned __int64 result; // rax

  if ( !*(_QWORD *)a1
    || !*((_QWORD *)a1 + 1)
    || (result = *((_QWORD *)a1 + 2), *(_QWORD *)a1 > result)
    || result >= *((_QWORD *)a1 + 1) )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  return result;
}
