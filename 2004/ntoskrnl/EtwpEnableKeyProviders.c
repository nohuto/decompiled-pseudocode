/*
 * XREFs of EtwpEnableKeyProviders @ 0x14079D678
 * Callers:
 *     EtwStartAutoLogger @ 0x14079CB10 (EtwStartAutoLogger.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140202100 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpEnumerateKeyProviders @ 0x14077C948 (EtwpEnumerateKeyProviders.c)
 *     EtwpFreeKeyNameList @ 0x14079D75C (EtwpFreeKeyNameList.c)
 */

__int64 __fastcall EtwpEnableKeyProviders(__int64 a1, unsigned int a2, const WCHAR *a3, const WCHAR *a4, int a5)
{
  BOOLEAN v10; // [rsp+28h] [rbp-1E0h]
  BOOLEAN v11; // [rsp+28h] [rbp-1E0h]
  _RTL_AVL_TABLE Table; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int v13[72]; // [rsp+B0h] [rbp-158h] BYREF

  memset(&Table, 0, sizeof(Table));
  memset(v13, 0, sizeof(v13));
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)EtwpAvlCompareKeyNames,
    (PRTL_AVL_ALLOCATE_ROUTINE)EtwpAllocateKeyNameEntry,
    (PRTL_AVL_FREE_ROUTINE)EtwpFreeKeyNameEntry,
    0LL);
  EtwpEnumerateKeyProviders(a1, a2, a3, a4, v13, v10, &Table, a5);
  if ( a4 )
    EtwpEnumerateKeyProviders(a1, a2, a4, 0LL, v13, v11, &Table, a5);
  return EtwpFreeKeyNameList(&Table);
}
