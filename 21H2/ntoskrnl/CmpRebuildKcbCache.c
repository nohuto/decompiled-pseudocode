/*
 * XREFs of CmpRebuildKcbCache @ 0x14071B3F0
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmpSyncKcbCacheForHive @ 0x1409176B0 (CmpSyncKcbCacheForHive.c)
 *     CmpCommitDiscardReplacePost @ 0x14091CBB0 (CmpCommitDiscardReplacePost.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14071B4A0 (CmpRebuildKcbCacheFromNode.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR a1)
{
  int v1; // eax
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v8 = 0xFFFFFFFFLL;
  if ( (v1 & 0x10) != 0 || (*(_DWORD *)(a1 + 184) & 0x400000) != 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v4 != -1 )
    {
      if ( (*(_BYTE *)(v3 + 140) & 1) != 0 ? HvpGetCellFlat(v3, v4, &v8) : HvpGetCellPaged(v3) )
      {
        ++*(_QWORD *)(a1 + 304);
        CmpRebuildKcbCacheFromNode(a1);
        v6 = *(_QWORD *)(a1 + 32);
        if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v6, &v8);
        else
          HvpReleaseCellPaged(v6, &v8);
        return 1;
      }
    }
  }
  return 0;
}
