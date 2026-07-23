/*
 * XREFs of PiPnpRtlObjectEventCompareObjects @ 0x1406041C0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCompareObjects(_RTL_AVL_TABLE *a1, PVOID a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // r9d
  const wchar_t *v8; // rax
  const wchar_t *v9; // r8
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rcx
  int v12; // eax

  v3 = *a3;
  if ( *(_QWORD *)a2 == *a3 )
    return 2LL;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_DWORD *)(v4 + 24);
  if ( v6 > *(_DWORD *)(v5 + 24) )
    return 1LL;
  if ( v6 >= *(_DWORD *)(v5 + 24) )
  {
    v7 = *(_DWORD *)(v4 + 28);
    if ( v7 >= *(_DWORD *)(v5 + 28) )
    {
      if ( v7 > *(_DWORD *)(v5 + 28) )
        return 1LL;
      v8 = *(const wchar_t **)(v5 + 16);
      v9 = *(const wchar_t **)(v4 + 16);
      v10 = v8 + 4;
      v11 = v9 + 4;
      if ( v7 != 3 )
      {
        v10 = v8;
        v11 = v9;
      }
      v12 = wcsicmp(v11, v10);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          return 2LL;
        return 1LL;
      }
    }
  }
  return 0LL;
}
