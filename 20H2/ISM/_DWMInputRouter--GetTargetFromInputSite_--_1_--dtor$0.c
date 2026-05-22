/*
 * XREFs of _DWMInputRouter::GetTargetFromInputSite_::_1_::dtor$0 @ 0x18004F8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ @ 0x180041950 (--1ContextualProcessorEntry@ContextualProcessorManager@@QEAA@XZ.c)
 */

void __fastcall DWMInputRouter::GetTargetFromInputSite_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    ContextualProcessorManager::ContextualProcessorEntry::~ContextualProcessorEntry(*(__int64 **)(a2 + 160));
  }
}
