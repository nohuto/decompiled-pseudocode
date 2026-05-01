/*
 * XREFs of _Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault_::_1_::dtor$0 @ 0x1801B878A
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x18005C2D8 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString(*(HSTRING **)(a2 + 88));
  }
}
