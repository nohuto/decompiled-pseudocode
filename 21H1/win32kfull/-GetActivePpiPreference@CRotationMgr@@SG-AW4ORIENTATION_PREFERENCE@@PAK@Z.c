/*
 * XREFs of ?GetActivePpiPreference@CRotationMgr@@SG?AW4ORIENTATION_PREFERENCE@@PAK@Z @ 0x140802
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AAEHK@Z @ 0x140A16 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AAEHK@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 */

int __thiscall CRotationMgr::GetActivePpiPreference(HANDLE *this)
{
  PEPROCESS *v2; // eax
  int v3; // esi
  int v5; // [esp+4h] [ebp-4h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, _gRotationProcessLock);
  if ( _grpdeskRitInput && (v2 = *(PEPROCESS **)(_grpdeskRitInput + 148)) != 0 )
  {
    if ( this )
      *this = PsGetProcessId(*v2);
    v3 = *(_DWORD *)(*(_DWORD *)(_grpdeskRitInput + 148) + 520);
  }
  else
  {
    v3 = 0;
  }
  if ( v5 )
  {
    ExReleasePushLockExclusiveEx(v5, 0);
    KeLeaveCriticalRegion();
  }
  return v3;
}
