/*
 * XREFs of EtwpEnableKeyProviders @ 0x14081881C
 * Callers:
 *     EtwStartAutoLogger @ 0x140817CD8 (EtwStartAutoLogger.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1402DF2C0 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpFreeKeyNameList @ 0x140818900 (EtwpFreeKeyNameList.c)
 *     EtwpEnumerateKeyProviders @ 0x140818934 (EtwpEnumerateKeyProviders.c)
 */

__int64 __fastcall EtwpEnableKeyProviders(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  RTL_AVL_TABLE Table; // [rsp+40h] [rbp-1C8h] BYREF
  _BYTE v10[288]; // [rsp+B0h] [rbp-158h] BYREF

  memset(&Table, 0, sizeof(Table));
  memset(v10, 0, sizeof(v10));
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)EtwpAvlCompareKeyNames,
    (PRTL_AVL_ALLOCATE_ROUTINE)EtwpAllocateKeyNameEntry,
    (PRTL_AVL_FREE_ROUTINE)EtwpFreeKeyNameEntry,
    0LL);
  EtwpEnumerateKeyProviders(a1, a2, a3, a4, v10);
  if ( a4 )
    EtwpEnumerateKeyProviders(a1, a2, a4, 0LL, v10);
  return EtwpFreeKeyNameList(&Table);
}
