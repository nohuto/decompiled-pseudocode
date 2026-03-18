/*
 * XREFs of SetImeInfoEx @ 0x1C000E41C
 * Callers:
 *     NtUserSetImeInfoEx @ 0x1C000E310 (NtUserSetImeInfoEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetImeInfoEx(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1

  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  while ( v3[5] != *(_QWORD *)a2 )
  {
    v3 = (_QWORD *)v3[2];
    if ( v3 == v2 )
      return 0LL;
  }
  v4 = v3[10];
  if ( !v4 )
    return 0LL;
  if ( !*(_DWORD *)(v4 + 76) )
  {
    v5 = 2LL;
    do
    {
      *(_OWORD *)v4 = *(_OWORD *)a2;
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v4 + 48) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 64);
      *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 80);
      *(_OWORD *)(v4 + 96) = *(_OWORD *)(a2 + 96);
      v4 += 128LL;
      v6 = *(_OWORD *)(a2 + 112);
      a2 += 128LL;
      *(_OWORD *)(v4 - 16) = v6;
      --v5;
    }
    while ( v5 );
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 80);
  }
  return 1LL;
}
