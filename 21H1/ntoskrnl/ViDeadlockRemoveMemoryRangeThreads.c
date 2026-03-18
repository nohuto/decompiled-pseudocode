/*
 * XREFs of ViDeadlockRemoveMemoryRangeThreads @ 0x14059C7C8
 * Callers:
 *     VfDeadlockDeleteMemoryRange @ 0x1409DADC0 (VfDeadlockDeleteMemoryRange.c)
 * Callees:
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14059C638 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 *     ViLowerIrql @ 0x14059C8F8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14059C970 (ViRaiseIrqlToDpcLevel.c)
 *     VfUtilAddressRangeFit @ 0x1409C32DC (VfUtilAddressRangeFit.c)
 *     ViDeadlockDatabaseHashIndex @ 0x1409DC1B4 (ViDeadlockDatabaseHashIndex.c)
 *     ViDeadlockDetectionLock @ 0x1409DC23C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DC274 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x1409DC538 (ViDeadlockFree.c)
 *     ViDeadlockRemoveThread @ 0x1409DCB78 (ViDeadlockRemoveThread.c)
 */

__int64 __fastcall ViDeadlockRemoveMemoryRangeThreads(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 *v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // r12
  _QWORD **v9; // r14
  _QWORD *v10; // rbx
  unsigned __int64 *v11; // rsi
  __int64 v12; // rcx
  __int64 result; // rax
  unsigned __int64 *v14; // rbx
  char v15; // [rsp+20h] [rbp-48h]

  v4 = a2;
  v6 = 0LL;
  v7 = 0;
  v8 = ViDeadlockDatabaseHashIndex();
  v15 = ViRaiseIrqlToDpcLevel();
LABEL_2:
  ViDeadlockDetectionLock(v7);
  v9 = (_QWORD **)(16 * v8 + *((_QWORD *)ViDeadlockGlobals + 2050));
  v10 = *v9;
  if ( *v9 != v9 && (unsigned int)VfUtilAddressRangeFit((char *)ViDeadlockGlobals + 16 * v8 + 16416, a1, v4) )
  {
    while ( v10 != v9 )
    {
      v11 = v10 - 3;
      v10 = (_QWORD *)*v10;
      if ( *v11 >= a3 && *v11 < a4 )
      {
        if ( !v7 )
        {
          v7 = 1;
          if ( !ViDeadlockDetectionTryConvertSharedToExclusive() )
          {
            ViDeadlockDetectionUnlock(0LL);
            v4 = a2;
            goto LABEL_2;
          }
        }
        ViDeadlockRemoveThread((__int64)v11);
        *v11 = (unsigned __int64)v6;
        v6 = v11;
      }
    }
  }
  ViDeadlockDetectionUnlock(v7);
  LOBYTE(v12) = v15;
  result = ViLowerIrql(v12);
  if ( v6 )
  {
    do
    {
      v14 = (unsigned __int64 *)*v6;
      result = ViDeadlockFree(v6);
      v6 = v14;
    }
    while ( v14 );
  }
  return result;
}
