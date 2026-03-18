/*
 * XREFs of CmpLogTransactionAborted @ 0x14087054C
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406EC080 (CmpLogTransactionAbortedWithChildName.c)
 */

void __fastcall CmpLogTransactionAborted(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  CmpLogTransactionAbortedWithChildName(a1, 0LL, a2, a4, a4);
}
