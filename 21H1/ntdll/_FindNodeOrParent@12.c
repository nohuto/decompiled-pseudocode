/*
 * XREFs of _FindNodeOrParent@12 @ 0x4B2A707D
 * Callers:
 *     _RtlDeleteElementGenericTableAvl@8 @ 0x4B2A6DC0 (_RtlDeleteElementGenericTableAvl@8.c)
 *     _RtlInsertElementGenericTableAvl@16 @ 0x4B2A6EE0 (_RtlInsertElementGenericTableAvl@16.c)
 *     _RtlLookupElementGenericTableFullAvl@16 @ 0x4B2A7050 (_RtlLookupElementGenericTableFullAvl@16.c)
 *     _RtlEnumerateGenericTableLikeADirectory@28 @ 0x4B35E1B0 (_RtlEnumerateGenericTableLikeADirectory@28.c)
 *     _RtlLookupFirstMatchingElementGenericTableAvl@12 @ 0x4B35E3A0 (_RtlLookupFirstMatchingElementGenericTableAvl@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __fastcall FindNodeOrParent(int a1, int a2, _DWORD *a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // [esp-10h] [ebp-18h]
  int v9; // [esp+0h] [ebp-8h]
  int v10; // [esp+4h] [ebp-4h]

  v9 = a2;
  v10 = a1;
  if ( !*(_DWORD *)(a1 + 24) )
    return 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = 1;
  while ( 1 )
  {
    v5 = (*(int (__thiscall **)(_DWORD, int, int, int))(a1 + 40))(*(_DWORD *)(a1 + 40), a1, a2, v3 + 16);
    if ( v5 )
      break;
    v6 = *(_DWORD *)(v3 + 4);
    if ( !v6 )
    {
      v8 = 2;
      goto LABEL_10;
    }
LABEL_6:
    a1 = v10;
    v3 = v6;
    a2 = v9;
  }
  if ( v5 != 1 )
    goto LABEL_11;
  v6 = *(_DWORD *)(v3 + 8);
  if ( v6 )
    goto LABEL_6;
  v8 = 3;
LABEL_10:
  v4 = v8;
LABEL_11:
  result = v4;
  *a3 = v3;
  return result;
}
