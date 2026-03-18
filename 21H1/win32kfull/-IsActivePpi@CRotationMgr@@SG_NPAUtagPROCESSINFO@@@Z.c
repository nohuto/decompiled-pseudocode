/*
 * XREFs of ?IsActivePpi@CRotationMgr@@SG_NPAUtagPROCESSINFO@@@Z @ 0x1215E
 * Callers:
 *     _NtUserSetDisplayAutoRotationPreferences@4 @ 0x12114 (_NtUserSetDisplayAutoRotationPreferences@4.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 */

bool __thiscall CRotationMgr::IsActivePpi(void *this)
{
  bool v2; // bl
  int v4; // [esp+8h] [ebp-4h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, _gRotationProcessLock);
  v2 = _grpdeskRitInput && *(void **)(_grpdeskRitInput + 148) == this;
  if ( v4 )
  {
    ExReleasePushLockExclusiveEx(v4, 0);
    KeLeaveCriticalRegion();
  }
  return v2;
}
