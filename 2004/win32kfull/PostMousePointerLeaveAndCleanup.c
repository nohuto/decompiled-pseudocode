/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x1C01E25F0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C0037938 (_PostTransformableMessage.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E0D54 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E1808 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E1838 (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01E23D8 (IsMiPEnabledForWindow.c)
 */

__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, struct tagWND *a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rdi
  __int64 MiPWindowFlags; // rax
  __int64 v7; // r9

  v2 = (__int64 *)((char *)a2 + 16);
  if ( !a2 )
    v2 = (__int64 *)gptiCurrent;
  v5 = *v2;
  if ( *(_QWORD *)(v5 + 1272) && (GetMiPWindowFlags(a2) & 1) == 0 )
  {
    MiPWindowFlags = GetMiPWindowFlags(a2);
    SetMiPWindowFlags(a2, MiPWindowFlags | 1);
    if ( !a1 || v5 != *(_QWORD *)(a1 + 16) )
    {
      **(_DWORD **)(v5 + 1272) &= ~4u;
      **(_DWORD **)(v5 + 1272) &= ~0x10u;
      **(_DWORD **)(v5 + 1272) &= ~2u;
      **(_DWORD **)(v5 + 1272) &= ~8u;
    }
    if ( (**(_DWORD **)(v5 + 1272) & 1) != 0 )
    {
      if ( !a2 )
        goto LABEL_14;
      if ( IsMiPEnabledForWindow((__int64)a2) )
        PostTransformableMessage(a2, 0x24Au, ((unsigned __int64)(*(_WORD *)(v7 + 36) & 0xE1F7) << 16) | 1, 0LL, 0);
    }
    if ( a2 && *(_QWORD *)a2 != *(_QWORD *)(*(_QWORD *)(v5 + 424) + 440LL) )
    {
LABEL_15:
      if ( a2 )
        StopMiPIdleNotificationTimer(a2);
      return 1LL;
    }
LABEL_14:
    *(_QWORD *)(*(_QWORD *)(v5 + 424) + 440LL) = 0LL;
    goto LABEL_15;
  }
  return 1LL;
}
