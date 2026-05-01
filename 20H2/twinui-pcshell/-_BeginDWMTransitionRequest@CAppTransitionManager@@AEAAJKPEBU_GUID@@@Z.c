/*
 * XREFs of ?_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z @ 0x1803C57CC
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C45E0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppTransitionManager::_BeginDWMTransitionRequest(
        CAppTransitionManager *this,
        unsigned int a2,
        const struct _GUID *a3)
{
  __int64 result; // rax

  result = DwmpBeginTransitionRequestWithGUID(a2, a3);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 75) = a2;
    return 0LL;
  }
  return result;
}
