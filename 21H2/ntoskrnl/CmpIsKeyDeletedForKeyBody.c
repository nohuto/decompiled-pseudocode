/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140AB45A0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x140718E30 (CmpCloseKeyObject.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1407C83F0 (CmQueryValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1407E5F70 (CmpNotifyChangeKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F7AD0 (CmpCheckKeyBodyAccess.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1409147B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140915854 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140915D20 (CmKeyBodyNeedsVirtualImage.c)
 * Callees:
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AB4218 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  char *NextElement; // rax
  __int64 v6; // r9
  _QWORD **v7; // r10
  int v8; // ecx
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_3;
  NextElement = CmListGetNextElement((_QWORD **)(v4 + 208), &v10, 32);
  if ( !NextElement )
    goto LABEL_3;
  do
  {
    v8 = *((_DWORD *)NextElement + 17);
    if ( v8 == 2 || v8 == 11 )
      break;
    NextElement = CmListGetNextElement(v7, &v10, 32);
  }
  while ( NextElement );
  if ( CmEqualTrans(*((_QWORD *)NextElement + 7), v6) )
LABEL_9:
    LOBYTE(NextElement) = 1;
  else
LABEL_3:
    LOBYTE(NextElement) = 0;
  return (char)NextElement;
}
