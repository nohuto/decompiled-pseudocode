/*
 * XREFs of CmpUnfreezeHive @ 0x14071EA78
 * Callers:
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086B380 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406E31D0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x140868B44 (CmWorkerEngineDequeueWorkItem.c)
 */

void __fastcall CmpUnfreezeHive(_QWORD *P)
{
  __int64 v2; // rcx
  ULONG_PTR v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  CmpInitializeDelayDerefContext(&v4);
  v2 = P[368];
  *((_BYTE *)P + 2936) = 0;
  if ( v2 )
  {
    if ( (unsigned __int8)CmWorkerEngineDequeueWorkItem()
      && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1068, 0xFFFFFFFF) == 1 )
    {
      CmpDeleteHive(P);
    }
    P[368] = 0LL;
  }
  v3 = P[366];
  if ( v3 )
  {
    CmpDereferenceKeyControlBlockWithLock(v3, (__int64)&v4, 0);
    P[366] = 0LL;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v4);
}
