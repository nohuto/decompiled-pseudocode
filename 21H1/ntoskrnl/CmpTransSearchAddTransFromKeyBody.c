/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x1406569A4
 * Callers:
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14061A030 (CmpQueryKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14061EA20 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14065781C (CmQueryMultipleValueKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086AE10 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddLightWeightTrans @ 0x140656A44 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14075056C (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = a1[7];
  if ( !v3 && !a1[8] )
    return 3222863874LL;
  v5 = a1[1] ^ 1LL;
  if ( (a1[1] & 1) == 0 )
    v5 = a1[1];
  v6 = *(_QWORD *)(v5 + 32);
  if ( (v3 & 1) != 0 )
  {
    result = CmpTransSearchAddLightWeightTrans(a1[7], *(_QWORD *)(v5 + 32), 0LL, &v9);
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 4192);
    if ( !v8 )
      return 3222863877LL;
    result = CmpTransSearchAddTrans(a1[7], a1[8], v8, v6, 0, (__int64)&v9);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  return result;
}
