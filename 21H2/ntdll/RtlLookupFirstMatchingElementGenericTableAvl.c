/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008A640
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005D15C (FindNodeOrParent.c)
 *     RealPredecessor @ 0x18005D30C (RealPredecessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlLookupFirstMatchingElementGenericTableAvl(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( (unsigned int)FindNodeOrParent(a1, a2, &v11) != 1 )
    return 0LL;
  v6 = v11;
  do
  {
    v7 = v6;
    v8 = v6;
    v9 = RealPredecessor(v6);
    v6 = v9;
  }
  while ( v9 && (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 72))(a1, a2, v9 + 4) == 2 );
  *a3 = v8;
  return v7 + 4;
}
