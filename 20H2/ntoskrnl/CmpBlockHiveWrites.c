/*
 * XREFs of CmpBlockHiveWrites @ 0x1406FFD24
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x14060BF80 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406FF870 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1408733F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     CmpReferenceHive @ 0x140670AB8 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x140700CD8 (CmpGetNextHive.c)
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
        CmpReferenceHive((__int64)NextHive);
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
