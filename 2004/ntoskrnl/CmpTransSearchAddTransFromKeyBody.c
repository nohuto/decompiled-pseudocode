/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x1406536B4
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x1405E4A10 (CmpQueryKeySecurity.c)
 *     CmEnumerateValueKey @ 0x1405E9400 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x1405E9D20 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmQueryMultipleValueKey @ 0x1406552BC (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086C160 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddLightWeightTrans @ 0x140653754 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x140754BFC (CmpTransSearchAddTrans.c)
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
