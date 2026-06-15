/*
 * XREFs of sub_18000D5F4 @ 0x18000D5F4
 * Callers:
 *     sub_18000D0F8 @ 0x18000D0F8 (sub_18000D0F8.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 */

char __fastcall sub_18000D5F4(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rdx
  void *v9; // rsi
  const void *v11; // rcx
  size_t v12; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    if ( !v5 )
    {
      v5 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v5 = a2 - v4;
    }
    if ( a2 < v4 + v5 )
      a2 = v4 + v5;
    v7 = (void *)o_calloc(a2, 32LL);
    v9 = v7;
    if ( v7 )
    {
      v11 = *(const void **)a1;
      v12 = 32LL * *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        if ( !v11 )
        {
          *(_DWORD *)o__errno(0LL, v8) = 22;
          o__invalid_parameter_noinfo();
          sub_18000A174(-2147024809);
        }
        memmove(v7, *(const void **)a1, v12);
        v11 = *(const void **)a1;
      }
      _o_free(v11);
      *(_QWORD *)a1 = v9;
      goto LABEL_18;
    }
    return 0;
  }
  if ( v5 > a2 )
    a2 = v5;
  v6 = o_calloc(a2, 32LL);
  *(_QWORD *)a1 = v6;
  if ( !v6 )
    return 0;
LABEL_18:
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}
