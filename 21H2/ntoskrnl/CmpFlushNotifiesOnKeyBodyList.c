/*
 * XREFs of CmpFlushNotifiesOnKeyBodyList @ 0x140661A20
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140213A9C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x1405CD7BC (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmpInvalidateSubtreeWorker @ 0x140772180 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpFlushNotifiesPostCallback @ 0x140876340 (CmpFlushNotifiesPostCallback.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140876400 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmpRefreshWorkerRoutine @ 0x14087D9A0 (CmpRefreshWorkerRoutine.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087EE34 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087F024 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpFlushNotify @ 0x14065FCAC (CmpFlushNotify.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087AC98 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpFlushNotifiesOnKeyBodyList(__int64 a1, __int16 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 *i; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rbx
  struct _PRIVILEGE_SET *v12; // rcx
  struct _PRIVILEGE_SET *v13; // rcx

  v4 = (__int64 *)(a1 + 120);
  for ( i = *(__int64 **)(a1 + 120); i != v4; i = (__int64 *)*i )
  {
    if ( *(i - 2) )
      CmpFlushNotify((__int64)(i - 4), a4, 0LL);
    v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64(i + 7, 0LL);
    if ( v13 )
      CmpKeyEnumStackFreeResumeContext(v13);
    *((_WORD *)i + 8) |= a2;
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
        CmpFlushNotify(v11, a4, 0LL);
      v12 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v11 + 88), 0LL);
      if ( v12 )
        CmpKeyEnumStackFreeResumeContext(v12);
      *(_WORD *)(v11 + 48) |= a2;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v9 + 136), v11, 2LL);
    }
    v9 = (unsigned int)(v9 + 1);
    ++v10;
  }
  while ( (unsigned int)v9 < 4 );
}
