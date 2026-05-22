/*
 * XREFs of ??1?$unique_ptr@VDockProcessor@@U?$default_delete@VDockProcessor@@@std@@@std@@QEAA@XZ @ 0x180187F18
 * Callers:
 *     _DockProcessor::Create_::_1_::dtor$0 @ 0x1801880C6 (_DockProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VDockProcessor@@@std@@QEBAXPEAVDockProcessor@@@Z @ 0x180187F38 (--R-$default_delete@VDockProcessor@@@std@@QEBAXPEAVDockProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<DockProcessor>::~unique_ptr<DockProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<DockProcessor>::operator()();
  return result;
}
