/*
 * XREFs of ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C01C8E88
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01C8D28 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C01C8E50 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall IsPostCompositionConfigQueueEmpty(struct _POST_COMPOSITION_CONFIG_QUEUE *a1)
{
  bool v2; // zf
  int v3; // eax

  v2 = *(_DWORD *)a1 == -1;
  if ( *(_DWORD *)a1 == -1 )
  {
    v3 = -1;
    if ( *((_DWORD *)a1 + 1) != -1 )
    {
      WdLogSingleEntry1(1LL, 9081LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
        9081LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v3 = *(_DWORD *)a1;
    }
    return v3 == -1;
  }
  return v2;
}
