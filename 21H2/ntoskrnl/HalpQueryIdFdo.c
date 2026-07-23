/*
 * XREFs of HalpQueryIdFdo @ 0x1407D1898
 * Callers:
 *     HalpDispatchPnp @ 0x140765140 (HalpDispatchPnp.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpQueryIdFdo(__int64 a1, int a2, _QWORD *a3)
{
  const wchar_t *v4; // rbx
  const wchar_t *v5; // rax
  unsigned int v6; // eax
  unsigned __int64 v7; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v9; // rsi
  __int64 result; // rax

  if ( a2 < 0 )
    return 3221225659LL;
  if ( a2 <= 1 )
  {
    v4 = L"acpiapic";
    v5 = L"acpiapic";
    do
      ++v5;
    while ( *v5 );
    v6 = (_DWORD)v5 - (unsigned int)L"acpiapic" + 2;
    goto LABEL_6;
  }
  if ( a2 != 3 )
    return 3221225659LL;
  v4 = L"0";
  v6 = 4;
LABEL_6:
  v7 = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 2LL, 0x206C6148u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, v4, (unsigned int)v7);
  result = 0LL;
  v9[v7 >> 1] = 0;
  *a3 = v9;
  return result;
}
