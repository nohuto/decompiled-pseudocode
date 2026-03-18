/*
 * XREFs of ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C00DF6A8
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00DF53C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C00DF638 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C016EFD8 (-UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDisplayPlaneConfigQueueEmpty(struct _DISPLAY_PLANE_CONFIG_QUEUE *a1, __int64 a2)
{
  bool v3; // zf
  int v5; // eax
  __int64 v6; // rax

  v3 = *(_DWORD *)a1 == -1;
  if ( *(_DWORD *)a1 == -1 )
  {
    v5 = -1;
    if ( *((_DWORD *)a1 + 1) != -1 )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v6 + 24) = 8901LL;
      WdLogEvent5_WdAssertion(v6);
      v5 = *(_DWORD *)a1;
    }
    return v5 == -1;
  }
  return v3;
}
