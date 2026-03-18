/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x1406231D0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmQueryMultipleValueKey @ 0x14065781C (CmQueryMultipleValueKey.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x1406B8480 (CmpCloseKeyObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1406BB974 (CmpCheckKeyBodyAccess.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406ED174 (CmKeyBodyNeedsVirtualImage.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408678C0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086A030 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086AE10 (CmEnumerateValueKeyFromMergedView.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
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
