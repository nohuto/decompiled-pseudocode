/*
 * XREFs of _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$12 @ 0x1800D3F2E
 * Callers:
 *     <none>
 * Callees:
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180007634 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~4u;
    Microsoft::WRL::Wrappers::HString::~HString((HSTRING *)(a2 + 88));
  }
}
