/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x1406FC600
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     CmDeleteLayeredKey @ 0x1404ED078 (CmDeleteLayeredKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140669674 (CmQueryMultipleValueKey.c)
 *     CmpCloseKeyObject @ 0x14066AF80 (CmpCloseKeyObject.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406C3180 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086C260 (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E5DC (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x14086E724 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F410 (CmEnumerateValueKeyFromMergedView.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CA90 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmListGetNextElement @ 0x1406A3CF4 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14071D970 (CmEqualTrans.c)
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
  if ( (unsigned __int8)CmEqualTrans(*((_QWORD *)NextElement + 7), v6) )
LABEL_9:
    LOBYTE(NextElement) = 1;
  else
LABEL_3:
    LOBYTE(NextElement) = 0;
  return (char)NextElement;
}
