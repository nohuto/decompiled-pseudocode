/*
 * XREFs of CmpBlockHiveWrites @ 0x14063FB6C
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x14063F6B8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x1406931B0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14086D908 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     CmpGetNextHive @ 0x1405DF1A0 (CmpGetNextHive.c)
 *     CmpReferenceHive @ 0x1405DF7A0 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(volatile signed __int32 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  __int64 *NextHive; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = (volatile signed __int32 *)NextHive;
    if ( !NextHive )
      break;
    if ( a1 == (volatile signed __int32 *)NextHive || !a1 )
    {
      if ( !a2 || (a2 & (_DWORD)NextHive[519]) == a2 || NextHive == (__int64 *)CmpMasterHive )
      {
        CmpReferenceHive((__int64)NextHive);
        if ( a3 )
          *a3 = v8;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 18), 0LL);
      }
      if ( a1 == v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 1068, 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PVOID)v8);
        return 0LL;
      }
    }
  }
  if ( !a1 )
    return 0LL;
  return 3221225524LL;
}
