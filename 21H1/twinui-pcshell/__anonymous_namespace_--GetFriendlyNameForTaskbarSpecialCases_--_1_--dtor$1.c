/*
 * XREFs of __anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases_::_1_::dtor$1 @ 0x18035B2B9
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1801233C8 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString(*(HSTRING **)(a2 + 40));
  }
}
