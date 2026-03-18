/*
 * XREFs of CmpBlockHiveWrites @ 0x140693BB8
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1405E9C70 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140691804 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14086C5B8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x140695840 (CmpGetNextHive.c)
 *     CmpReferenceHive @ 0x140695E40 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(volatile signed __int32 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  volatile signed __int32 *NextHive; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = (volatile signed __int32 *)CmpGetNextHive((PVOID)i);
    v8 = NextHive;
    if ( !NextHive )
      break;
    if ( a1 == NextHive || !a1 )
    {
      if ( !a2 || (a2 & NextHive[1038]) == a2 || NextHive == CmpMasterHive )
      {
        CmpReferenceHive(NextHive);
        if ( a3 )
          *a3 = v8;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 18), 0LL);
      }
      if ( a1 == v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 1068, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v8);
        return 0LL;
      }
    }
  }
  if ( !a1 )
    return 0LL;
  return 3221225524LL;
}
