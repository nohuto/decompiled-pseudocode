/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmpDoQueryKeyName @ 0x140346910 (CmpDoQueryKeyName.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     CmEnumerateValueKey @ 0x1406A18C0 (CmEnumerateValueKey.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     CmpQueryKeySecurity @ 0x140721254 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14090E160 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x14090E310 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14090E5E0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14090E9C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14090EC00 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140AB4A00 (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140B13368 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
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
