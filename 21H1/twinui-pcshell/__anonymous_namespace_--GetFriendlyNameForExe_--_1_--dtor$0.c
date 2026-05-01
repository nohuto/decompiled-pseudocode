/*
 * XREFs of __anonymous_namespace_::GetFriendlyNameForExe_::_1_::dtor$0 @ 0x18035B107
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1801233C8 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::GetFriendlyNameForExe_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString(*(HSTRING **)(a2 + 64));
  }
}
