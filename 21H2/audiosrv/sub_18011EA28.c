/*
 * XREFs of sub_18011EA28 @ 0x18011EA28
 * Callers:
 *     sub_180119DF0 @ 0x180119DF0 (sub_180119DF0.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_180055F74 @ 0x180055F74 (sub_180055F74.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_18011B7C0 @ 0x18011B7C0 (sub_18011B7C0.c)
 */

__int64 __fastcall sub_18011EA28(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rax
  __int64 i; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 48);
  v2 = *(void **)a1;
  v3 = v2;
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v5 = (_QWORD *)*((_QWORD *)v2 + i);
      v3 = v2;
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = (_QWORD *)v5[2];
          sub_18011B7C0(a1, v6);
        }
        while ( v5 );
        v2 = *(void **)a1;
        v3 = *(void **)a1;
      }
    }
  }
  sub_180033A70(v3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v7 = sub_1800CF858(a1, 0LL);
    sub_180055F74(a1, v7, 0);
  }
  result = sub_18005248C(a1);
  --*(_DWORD *)(a1 + 48);
  return result;
}
