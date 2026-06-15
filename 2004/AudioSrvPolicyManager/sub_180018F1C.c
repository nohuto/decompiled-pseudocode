/*
 * XREFs of sub_180018F1C @ 0x180018F1C
 * Callers:
 *     sub_180016EF0 @ 0x180016EF0 (sub_180016EF0.c)
 *     sub_180018138 @ 0x180018138 (sub_180018138.c)
 *     sub_180018754 @ 0x180018754 (sub_180018754.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180018BEC @ 0x180018BEC (sub_180018BEC.c)
 *     sub_180018D3C @ 0x180018D3C (sub_180018D3C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018F1C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // eax
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx

  if ( !a2 )
    sub_18000A174(-2147467259);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  result = v5;
  *(_QWORD *)(a1 + 8) = v5;
  if ( v5 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v7 = sub_180018D3C(a1, v5);
    sub_180018BEC(a1, v7);
    result = *(_QWORD *)(a1 + 8);
  }
  if ( !result )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v8 = *(_QWORD **)(a1 + 56);
    if ( v8 )
    {
      do
      {
        v9 = (_QWORD *)*v8;
        result = _o_free(v8);
        v8 = v9;
      }
      while ( v9 );
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  return result;
}
