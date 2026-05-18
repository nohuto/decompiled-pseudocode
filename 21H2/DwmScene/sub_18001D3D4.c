/*
 * XREFs of sub_18001D3D4 @ 0x18001D3D4
 * Callers:
 *     sub_180022C1C @ 0x180022C1C (sub_180022C1C.c)
 * Callees:
 *     sub_180020ED0 @ 0x180020ED0 (sub_180020ED0.c)
 */

_QWORD *__fastcall sub_18001D3D4(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx

  result = (_QWORD *)sub_180020ED0(&unk_18021FA78);
  v5 = 0LL;
  if ( (_BYTE)result )
  {
    v6 = *(_QWORD *)(a1 + 120);
    for ( result = *(_QWORD **)(a1 + 112); result != (_QWORD *)v6 && *result != a2; ++result )
      ;
    if ( result != (_QWORD *)v6 )
    {
      v7 = result + 1;
      v8 = (v6 - (unsigned __int64)(result + 1) + 7) >> 3;
      if ( (unsigned __int64)(result + 1) > v6 )
        v8 = 0LL;
      if ( v8 )
      {
        do
        {
          if ( *v7 != a2 )
            *result++ = *v7;
          ++v7;
          ++v5;
        }
        while ( v5 != v8 );
      }
    }
    *(_QWORD *)(a1 + 120) = result;
  }
  return result;
}
