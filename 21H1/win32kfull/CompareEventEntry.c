/*
 * XREFs of CompareEventEntry @ 0x1B65E8
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1B6A24 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

int __fastcall CompareEventEntry(unsigned __int8 a1, int a2, int a3)
{
  int result; // eax
  unsigned int v7; // esi
  size_t *v8; // edi
  const void **v9; // ebx
  int v10; // ecx
  unsigned int v11; // [esp+Ch] [ebp-8h]
  int v13; // [esp+1Ch] [ebp+8h]
  int v14; // [esp+1Ch] [ebp+8h]

  v13 = *(_DWORD *)(a3 + 16);
  result = memcmp((const void *)(a2 + 16), (const void *)(v13 + 16), 4u);
  if ( !result )
  {
    v7 = *(unsigned __int8 *)(a3 + 33) + 2;
    v11 = a1;
    if ( v7 >= a1 )
    {
      return 0;
    }
    else
    {
      v8 = (size_t *)(16 * v7 + a2 + 8);
      v9 = (const void **)(16 * v7 + v13);
      v10 = v13 - a2;
      v14 = v13 - a2;
      while ( 1 )
      {
        result = *v8 - *(size_t *)((char *)v8 + v10);
        if ( *v8 != *(size_t *)((char *)v8 + v10) )
          break;
        result = memcmp((const void *)*(v8 - 2), *v9, *v8);
        if ( result )
          break;
        v10 = v14;
        ++v7;
        v9 += 4;
        v8 += 4;
        if ( v7 >= v11 )
          return 0;
      }
    }
  }
  return result;
}
