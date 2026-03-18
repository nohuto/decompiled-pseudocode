/*
 * XREFs of _FreeThreadsWinEvents@4 @ 0x1471E
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x147B8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     _DestroyEventHook@4 @ 0x14A42 (_DestroyEventHook@4.c)
 *     ?RemoveNotify@@YGXPAUtagNOTIFY@@@Z @ 0xA3C88 (-RemoveNotify@@YGXPAUtagNOTIFY@@@Z.c)
 */

void __stdcall FreeThreadsWinEvents(int a1)
{
  int v1; // eax
  int v2; // esi
  tagDomLock *v3; // [esp+Ch] [ebp-4h] BYREF

  PsGetCurrentThreadId();
  CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v3);
  v1 = _gpWinEventHooks;
  if ( _gpWinEventHooks )
  {
    do
    {
      v2 = *(_DWORD *)(v1 + 12);
      if ( *(_DWORD *)(v1 + 8) == a1 )
        DestroyEventHook(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  tagDomLock::UnLockExclusive(v3);
}
