/*
 * XREFs of AlpcpAllocateMessageFromExtendedTables @ 0x140966C80
 * Callers:
 *     AlpcpAllocateMessageFunction @ 0x1406C1810 (AlpcpAllocateMessageFunction.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExCreateHandleTable @ 0x1406A6378 (ExCreateHandleTable.c)
 *     ExpFreeHandleTable @ 0x1406AC130 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406AC404 (ExpRemoveHandleTable.c)
 *     ExCreateHandleEx @ 0x1407A1CE8 (ExCreateHandleEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

unsigned __int64 __fastcall AlpcpAllocateMessageFromExtendedTables(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  __int64 i; // rsi
  _QWORD *v6; // rbx
  __int64 HandleTable; // rax
  __int64 Handle; // rax

  if ( !AlpcpSecondaryMessageTables )
  {
    Pool2 = ExAllocatePool2(256LL, 256LL, 1632136257LL);
    v3 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return 0LL;
    memset((void *)(Pool2 + 8), 0, 0xF8uLL);
    *v3 = AlpcMessageTable;
    if ( _InterlockedCompareExchange64(&AlpcpSecondaryMessageTables, (signed __int64)v3, 0LL) )
      ExFreePoolWithTag(v3, 0x61486C41u);
  }
  v4 = 1;
  for ( i = 8LL; ; i += 8LL )
  {
    v6 = *(_QWORD **)(i + AlpcpSecondaryMessageTables);
    if ( !v6 )
    {
      HandleTable = ExCreateHandleTable(0LL, 0LL);
      v6 = (_QWORD *)HandleTable;
      if ( !HandleTable )
        return 0LL;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)(AlpcpSecondaryMessageTables + 8LL * v4),
             HandleTable,
             0LL) )
      {
        ExpRemoveHandleTable(HandleTable);
        ExpFreeHandleTable(v6);
        v6 = *(_QWORD **)(i + AlpcpSecondaryMessageTables);
      }
    }
    Handle = ExCreateHandleEx((__int64)v6, a1, 0, 0, 0LL);
    if ( Handle )
      break;
    if ( ++v4 >= 0x20 )
      return 0LL;
  }
  return Handle | ((unsigned __int64)v4 << 26);
}
