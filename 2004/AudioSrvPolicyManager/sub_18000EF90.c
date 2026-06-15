/*
 * XREFs of sub_18000EF90 @ 0x18000EF90
 * Callers:
 *     sub_18000C288 @ 0x18000C288 (sub_18000C288.c)
 *     sub_18000D298 @ 0x18000D298 (sub_18000D298.c)
 *     sub_18000EFFC @ 0x18000EFFC (sub_18000EFFC.c)
 *     sub_18002B9D0 @ 0x18002B9D0 (sub_18002B9D0.c)
 *     sub_18002DD08 @ 0x18002DD08 (sub_18002DD08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000EF90(volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 13);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 13, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( qword_18004FE28 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)qword_18004FE28 + 16LL))(
        qword_18004FE28,
        *(_QWORD *)qword_18004FE28,
        v2,
        v1);
  }
  return v3;
}
