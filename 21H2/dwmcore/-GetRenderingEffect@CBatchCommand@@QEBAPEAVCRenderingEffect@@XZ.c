/*
 * XREFs of ?GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1801EC170
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801F0ECC (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

struct CRenderingEffect *__fastcall CBatchCommand::GetRenderingEffect(CBatchCommand *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)this == 1 )
    return (struct CRenderingEffect *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 1) + 40LL))(
                                        *((_QWORD *)this + 1),
                                        (unsigned int)(*(_DWORD *)this - 1));
  if ( *(_DWORD *)this == 2 )
    return 0LL;
  if ( *(_DWORD *)this != 3 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  return (struct CRenderingEffect *)*((_QWORD *)this + 1);
}
