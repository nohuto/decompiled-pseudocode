/*
 * XREFs of CmpUnblockHiveWrites @ 0x14071A730
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x14071A4E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteOpenLogic @ 0x1407C64A0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140917708 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x14071BA34 (CmpGetNextHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnblockHiveWrites(volatile signed __int32 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 NextHive; // rax

  v5 = P;
  if ( P )
  {
    HvUnlockHiveFlusherExclusive(P);
  }
  else
  {
    while ( 1 )
    {
      NextHive = CmpGetNextHive((PVOID)P);
      v5 = (volatile signed __int32 *)NextHive;
      if ( !a2 || (a2 & *(_DWORD *)(NextHive + 4112)) == a2 || NextHive == CmpMasterHive )
      {
        HvUnlockHiveFlusherExclusive(NextHive);
        if ( _InterlockedExchangeAdd(v5 + 1058, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v5);
      }
      if ( v5 == a3 )
        break;
      P = v5;
    }
  }
  if ( _InterlockedExchangeAdd(v5 + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v5);
}
