/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x1406A1494
 * Callers:
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14066F1E0 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmEnumerateValueKey @ 0x140677BB0 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x1406784D0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1406A503C (CmQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x140701FA0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140871BE0 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddLightWeightTrans @ 0x1406A1534 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x14076383C (CmpTransSearchAddTrans.c)
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
