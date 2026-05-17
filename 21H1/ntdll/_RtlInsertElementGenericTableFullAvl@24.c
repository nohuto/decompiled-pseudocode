/*
 * XREFs of _RtlInsertElementGenericTableFullAvl@24 @ 0x4B2A6F20
 * Callers:
 *     _RtlInsertElementGenericTableAvl@16 @ 0x4B2A6EE0 (_RtlInsertElementGenericTableAvl@16.c)
 * Callees:
 *     _RebalanceNode@4 @ 0x4B2A70E5 (_RebalanceNode@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

_DWORD *__stdcall RtlInsertElementGenericTableFullAvl(int a1, void *Src, size_t Size, bool *a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // esi
  _DWORD *v7; // edx
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  char v11; // dl
  char v12; // al
  _DWORD *result; // eax

  if ( a6 == 1 )
  {
    v6 = a5;
LABEL_14:
    if ( a4 )
      *a4 = a6 != 1;
    *(_DWORD *)(a1 + 20) = 0;
    result = v6 + 4;
    *(_DWORD *)(a1 + 16) = 0;
    return result;
  }
  if ( Size + 16 >= Size )
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int, size_t))(a1 + 44))(*(_DWORD *)(a1 + 44), a1, Size + 16);
    if ( v6 )
    {
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      ++*(_DWORD *)(a1 + 24);
      if ( a6 )
      {
        v7 = v6;
        v8 = (int)a5;
        if ( a6 == 2 )
          a5[1] = v6;
        else
          a5[2] = v6;
        *v6 = a5;
        *(_BYTE *)(a1 + 12) = -1;
        v9 = *v6;
        while ( 1 )
        {
          v10 = *(_DWORD *)(v9 + 4) == (_DWORD)v7;
          v11 = *(_BYTE *)(v8 + 12);
          v12 = 2 * !v10 - 1;
          if ( v11 )
            break;
          *(_BYTE *)(v8 + 12) = v12;
          v7 = (_DWORD *)v8;
          v9 = *(_DWORD *)v8;
          v8 = *(_DWORD *)v8;
        }
        if ( v11 == v12 )
        {
          RebalanceNode(v8);
        }
        else
        {
          *(_BYTE *)(v8 + 12) = 0;
          if ( !*(_BYTE *)(a1 + 12) )
            ++*(_DWORD *)(a1 + 28);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 8) = v6;
        *v6 = a1;
        *(_DWORD *)(a1 + 28) = 1;
      }
      memcpy(v6 + 4, Src, Size);
      goto LABEL_14;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0;
}
