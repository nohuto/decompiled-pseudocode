/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140678E00
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x140677BB0 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
 *     CmpCloseKeyObject @ 0x1406B1340 (CmpCloseKeyObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1406C3268 (CmpCheckKeyBodyAccess.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406E317C (CmKeyBodyNeedsVirtualImage.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086E630 (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140870DD4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x140870F1C (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140871BE0 (CmEnumerateValueKeyFromMergedView.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1406A42B0 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  __int64 NextElement; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_3;
  NextElement = CmListGetNextElement(v4 + 208, &v10, 32LL);
  if ( !NextElement )
    goto LABEL_3;
  do
  {
    v8 = *(_DWORD *)(NextElement + 68);
    if ( v8 == 2 || v8 == 11 )
      break;
    NextElement = CmListGetNextElement(v7, &v10, 32LL);
  }
  while ( NextElement );
  if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v6) )
LABEL_9:
    LOBYTE(NextElement) = 1;
  else
LABEL_3:
    LOBYTE(NextElement) = 0;
  return NextElement;
}
