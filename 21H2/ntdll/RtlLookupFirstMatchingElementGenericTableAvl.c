/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008A640
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005D15C (FindNodeOrParent.c)
 *     RealPredecessor @ 0x18005D30C (RealPredecessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

PVOID __cdecl RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  void *v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+50h] [rbp+18h] BYREF

  *RestartKey = 0LL;
  if ( (unsigned int)FindNodeOrParent((__int64)Table, (__int64)Buffer, &v11) != 1 )
    return 0LL;
  v6 = v11;
  do
  {
    v7 = v6;
    v8 = v6;
    v9 = RealPredecessor(v6);
    v6 = v9;
  }
  while ( v9 && Table->CompareRoutine(Table, Buffer, v9 + 4) == GenericEqual );
  *RestartKey = v8;
  return v7 + 4;
}
