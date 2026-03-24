/*
 * XREFs of PiDmCompareObjects @ 0x14068FA80
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403D20D0 (_wcsicmp.c)
 */

__int64 __fastcall PiDmCompareObjects(struct _RTL_AVL_TABLE *Table, __int64 *FirstStruct, __int64 *SecondStruct)
{
  __int64 v3; // rcx
  __int64 v4; // r10
  unsigned int v5; // eax
  bool v7; // zf
  const wchar_t *v8; // r8
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rcx
  int v11; // eax

  v3 = *FirstStruct;
  v4 = *SecondStruct;
  if ( *FirstStruct != *SecondStruct )
  {
    v5 = *(_DWORD *)(v3 + 24);
    if ( v5 < *(_DWORD *)(v4 + 24) )
      return 0LL;
    if ( v5 > *(_DWORD *)(v4 + 24) )
      return 1LL;
    v7 = *(_DWORD *)(v3 + 28) == 3;
    v8 = *(const wchar_t **)(v3 + 16);
    v9 = (const wchar_t *)(*(_QWORD *)(v4 + 16) + 8LL);
    v10 = v8 + 4;
    if ( !v7 )
    {
      v9 = *(const wchar_t **)(v4 + 16);
      v10 = v8;
    }
    v11 = wcsicmp(v10, v9);
    if ( v11 < 0 )
      return 0LL;
    if ( v11 > 0 )
      return 1LL;
  }
  return 2LL;
}
