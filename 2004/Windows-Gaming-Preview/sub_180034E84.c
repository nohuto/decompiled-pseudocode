/*
 * XREFs of sub_180034E84 @ 0x180034E84
 * Callers:
 *     sub_18002D7D0 @ 0x18002D7D0 (sub_18002D7D0.c)
 *     sub_180032A0C @ 0x180032A0C (sub_180032A0C.c)
 * Callees:
 *     sub_180034BB0 @ 0x180034BB0 (sub_180034BB0.c)
 *     sub_180034CB4 @ 0x180034CB4 (sub_180034CB4.c)
 */

__int64 __fastcall sub_180034E84(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx

  if ( !a2 )
    return 2147549183LL;
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = a2;
  v4 = *(_QWORD *)(a1 + 16) - 1LL;
  v5 = v4;
  *(_QWORD *)(a1 + 16) = v4;
  if ( v4 < *(_QWORD *)(a1 + 48) && !*(_DWORD *)(a1 + 56) )
  {
    v6 = sub_180034CB4(a1, v4);
    sub_180034BB0(a1, v6);
    v5 = *(_QWORD *)(a1 + 16);
  }
  if ( !v5 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    v7 = *(_QWORD **)(a1 + 64);
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)*v7;
        _o_free(v7);
        v7 = v8;
      }
      while ( v8 );
      *(_QWORD *)(a1 + 64) = 0LL;
    }
  }
  return 0LL;
}
