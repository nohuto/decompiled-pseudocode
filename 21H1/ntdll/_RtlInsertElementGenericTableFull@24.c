/*
 * XREFs of _RtlInsertElementGenericTableFull@24 @ 0x4B2A7DA0
 * Callers:
 *     _RtlInsertElementGenericTable@16 @ 0x4B2A7D60 (_RtlInsertElementGenericTable@16.c)
 * Callees:
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

_DWORD *__stdcall RtlInsertElementGenericTableFull(int a1, void *Src, size_t Size, bool *a4, _DWORD *a5, int a6)
{
  int v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edx

  if ( a6 == 1 )
  {
    v7 = a5;
LABEL_8:
    *(_DWORD *)a1 = RtlSplay(v7);
    if ( a4 )
      *a4 = a6 != 1;
    return v7 + 6;
  }
  if ( Size + 24 >= Size )
  {
    v6 = (*(int (__thiscall **)(_DWORD, int, size_t))(a1 + 28))(*(_DWORD *)(a1 + 28), a1, Size + 24);
    v7 = (_DWORD *)v6;
    if ( v6 )
    {
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 8) = 0;
      v8 = (_DWORD *)(v6 + 12);
      *v7 = v7;
      v9 = *(_DWORD **)(a1 + 8);
      if ( *v9 != a1 + 4 )
        __fastfail(3u);
      *v8 = a1 + 4;
      v7[4] = v9;
      *v9 = v8;
      *(_DWORD *)(a1 + 8) = v8;
      ++*(_DWORD *)(a1 + 20);
      if ( a6 )
      {
        if ( a6 == 2 )
          a5[1] = v7;
        else
          a5[2] = v7;
        *v7 = a5;
      }
      else
      {
        *(_DWORD *)a1 = v7;
      }
      memcpy(v7 + 6, Src, Size);
      goto LABEL_8;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0;
}
