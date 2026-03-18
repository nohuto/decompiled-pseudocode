/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1406773C0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpDoQueryKeyName @ 0x140302C50 (CmpDoQueryKeyName.c)
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpQueryKeySecurity @ 0x14066F1E0 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x140677BB0 (CmEnumerateValueKey.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     NtFlushKey @ 0x1406BF640 (NtFlushKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x14086A3E0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14086A6C0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14086AAB0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14086ACD0 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086E904 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmDumpKey @ 0x14087E390 (CmDumpKey.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A5EE28 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1406A42B0 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax
  __int64 NextElement; // rcx
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  if ( (v4 & 9) == 0 )
  {
    if ( !a2 )
      return 0LL;
    NextElement = CmListGetNextElement(v3 + 208, &v10, 32LL);
    if ( !NextElement )
      return 0LL;
    while ( 1 )
    {
      v9 = *(_DWORD *)(NextElement + 68);
      if ( v9 == 2 || v9 == 11 )
        break;
      result = CmListGetNextElement(v8, &v10, 32LL);
      NextElement = result;
      if ( !result )
        return result;
    }
    if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v7) )
      return 0LL;
    v4 = *(_DWORD *)(a1 + 48);
  }
  if ( (v4 & 1) != 0 )
    return 3221226533LL;
  else
    return 3221225852LL;
}
