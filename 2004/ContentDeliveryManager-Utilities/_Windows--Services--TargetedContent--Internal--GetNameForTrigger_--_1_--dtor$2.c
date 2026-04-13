/*
 * XREFs of _Windows::Services::TargetedContent::Internal::GetNameForTrigger_::_1_::dtor$2 @ 0x1800D3244
 * Callers:
 *     <none>
 * Callees:
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180007634 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::GetNameForTrigger_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    Microsoft::WRL::Wrappers::HString::~HString((HSTRING *)(a2 + 96));
  }
}
