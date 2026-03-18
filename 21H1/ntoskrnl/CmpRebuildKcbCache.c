/*
 * XREFs of CmpRebuildKcbCache @ 0x14068E350
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     CmpSyncKcbCacheForHive @ 0x14086C560 (CmpSyncKcbCacheForHive.c)
 *     CmpCommitDiscardReplacePost @ 0x1408718A0 (CmpCommitDiscardReplacePost.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140696828 (CmpRebuildKcbCacheFromNode.c)
 */

char __fastcall CmpRebuildKcbCache(ULONG_PTR a1)
{
  int v1; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v7 = 0;
  v1 = *(_DWORD *)(a1 + 8);
  v6 = -1;
  if ( (v1 & 0x10) != 0 || (*(_DWORD *)(a1 + 184) & 0x400000) != 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v4 != -1 )
    {
      if ( (*(__int64 (__fastcall **)(__int64, __int64, int *))(v3 + 8))(v3, v4, &v6) )
      {
        ++*(_QWORD *)(a1 + 304);
        CmpRebuildKcbCacheFromNode(a1);
        (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v6);
        return 1;
      }
    }
  }
  return 0;
}
