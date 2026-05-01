/*
 * XREFs of _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$73 @ 0x1800DC7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1801233C8 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 */

void __fastcall WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor_73(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 92) & 0x100) != 0 )
  {
    *(_DWORD *)(a2 + 92) &= ~0x100u;
    ExperienceManagerUtils::CopyableHString::~CopyableHString((ExperienceManagerUtils::CopyableHString *)(a2 + 152));
  }
}
