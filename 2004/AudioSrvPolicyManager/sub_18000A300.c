/*
 * XREFs of sub_18000A300 @ 0x18000A300
 * Callers:
 *     sub_180005E00 @ 0x180005E00 (sub_180005E00.c)
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 *     sub_180008BD0 @ 0x180008BD0 (sub_180008BD0.c)
 *     sub_180008FD8 @ 0x180008FD8 (sub_180008FD8.c)
 *     sub_180009CC0 @ 0x180009CC0 (sub_180009CC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000A300(volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 5);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 5, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 104LL))(
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
