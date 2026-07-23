/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmpDoQueryKeyName @ 0x14026CB70 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     NtFlushKey @ 0x140612E10 (NtFlushKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpQueryKeySecurity @ 0x14065A180 (CmpQueryKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x1406E4650 (CmEnumerateValueKey.c)
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmLockKeyForWrite @ 0x1407C3510 (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1407D05C0 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140868160 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140868440 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140868830 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868A50 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C6A8 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F980 (CmKeyBodyRemapToVirtual.c)
 *     CmDumpKey @ 0x14087BE78 (CmDumpKey.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A61258 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax
  char *NextElement; // rcx
  __int64 v7; // r9
  _QWORD **v8; // r10
  int v9; // eax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  if ( (v4 & 9) == 0 )
  {
    if ( !a2 )
      return 0LL;
    NextElement = CmListGetNextElement((_QWORD **)(v3 + 208), &v10, 32);
    if ( !NextElement )
      return 0LL;
    while ( 1 )
    {
      v9 = *((_DWORD *)NextElement + 17);
      if ( v9 == 2 || v9 == 11 )
        break;
      result = (__int64)CmListGetNextElement(v8, &v10, 32);
      NextElement = (char *)result;
      if ( !result )
        return result;
    }
    if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), v7) )
      return 0LL;
    v4 = *(_DWORD *)(a1 + 48);
  }
  if ( (v4 & 1) != 0 )
    return 3221226533LL;
  else
    return 3221225852LL;
}
