/*
 * XREFs of ?GetActivePid@CRotationMgr@@SGKXZ @ 0x1407B7
 * Callers:
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x141425 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DI.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 */

int __stdcall CRotationMgr::GetActivePid()
{
  int v0; // esi
  int v1; // esi
  int v3; // [esp+4h] [ebp-4h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v3, _gRotationProcessLock);
  if ( _grpdeskRitInput && (v0 = *(_DWORD *)(_grpdeskRitInput + 148)) != 0 )
    v1 = *(_DWORD *)(v0 + 32);
  else
    v1 = 0;
  if ( v3 )
  {
    ExReleasePushLockExclusiveEx(v3, 0);
    KeLeaveCriticalRegion();
  }
  return v1;
}
