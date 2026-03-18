/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1406725F0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpDoQueryKeyName @ 0x140202F30 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpQueryKeySecurity @ 0x1405E4A10 (CmpQueryKeySecurity.c)
 *     CmEnumerateValueKey @ 0x1405E9400 (CmEnumerateValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtFlushKey @ 0x140702800 (NtFlushKey.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmLockKeyForWrite @ 0x1407B0CB0 (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1407BD900 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1408649C0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140864CA0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140865090 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408652B0 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140868EE4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086C570 (CmKeyBodyRemapToVirtual.c)
 *     CmDumpKey @ 0x140878820 (CmDumpKey.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A4A08C (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x140643290 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140654660 (CmListGetNextElement.c)
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
