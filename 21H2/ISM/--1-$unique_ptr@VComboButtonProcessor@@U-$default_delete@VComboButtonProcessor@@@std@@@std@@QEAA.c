/*
 * XREFs of ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x180171DD8
 * Callers:
 *     _ComboButtonProcessor::Create_::_1_::dtor$0 @ 0x180171F97 (_ComboButtonProcessor--Create_--_1_--dtor$0.c)
 *     _RawButtonProcessor::Create_::_1_::dtor$0 @ 0x180182486 (_RawButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x180171DF8 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemButtonProcessor>::operator()(a1, *a1);
  return result;
}
