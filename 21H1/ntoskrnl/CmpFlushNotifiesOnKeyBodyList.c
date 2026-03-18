/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402D2EA0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14065AE8C (CmpCompleteUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14071F748 (CmpCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x14075D4F0 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x140871A30 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140871AF0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x140879040 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087A91C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087AB10 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x140659FD8 (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140876350 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 *v6; // rbx
  __int16 v7; // r12
  __int64 v9; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rbx
  struct _PRIVILEGE_SET *v12; // rcx
  struct _PRIVILEGE_SET *v13; // rcx

  v4 = (__int64 *)(a1 + 120);
  v6 = *(__int64 **)(a1 + 120);
  v7 = a2;
  while ( v6 != v4 )
  {
    if ( *(v6 - 2) )
    {
      LOBYTE(a2) = a4;
      CmpFlushNotify((__int64)(v6 - 4), a2, 0LL);
    }
    v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(v6 + 7, 0LL);
    if ( v13 )
      CmpKeyEnumStackFreeResumeContext(v13);
    *((_WORD *)v6 + 8) |= v7;
    v6 = (__int64 *)*v6;
  }
  v9 = 0LL;
  v10 = (__int64 *)(a1 + 136);
  do
  {
    v11 = *v10;
    if ( (unsigned __int64)*v10 >= 3
      && v11 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), 2LL, v11) )
    {
      if ( *(_QWORD *)(v11 + 16) )
      {
        LOBYTE(a2) = a4;
        CmpFlushNotify(v11, a2, 0LL);
      }
      v12 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v11 + 88), 0LL);
      if ( v12 )
        CmpKeyEnumStackFreeResumeContext(v12);
      *(_WORD *)(v11 + 48) |= v7;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), v11, 2LL);
    }
    v9 = (unsigned int)(v9 + 1);
    ++v10;
  }
  while ( (unsigned int)v9 < 4 );
}
