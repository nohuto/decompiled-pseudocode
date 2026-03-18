/*
 * XREFs of CmpBlockHiveWrites @ 0x14071B99C
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x14071A4E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x1407C64A0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140917708 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x14071BA34 (CmpGetNextHive.c)
 *     CmpReferenceHive @ 0x14071BBD8 (CmpReferenceHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(volatile signed __int32 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  __int64 NextHive; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive((PVOID)i);
    v8 = (volatile signed __int32 *)NextHive;
    if ( !NextHive )
      break;
    if ( a1 == (volatile signed __int32 *)NextHive || !a1 )
    {
      if ( !a2 || (a2 & *(_DWORD *)(NextHive + 4112)) == a2 || NextHive == CmpMasterHive )
      {
        CmpReferenceHive(NextHive);
        if ( a3 )
          *a3 = v8;
        HvLockHiveFlusherExclusive(v8);
      }
      if ( a1 == v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 1058, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v8);
        return 0LL;
      }
    }
  }
  if ( !a1 )
    return 0LL;
  return 3221225524LL;
}
