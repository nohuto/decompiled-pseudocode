/*
 * XREFs of FindNodeOrParent @ 0x4B2A7F4E
 * Callers:
 *     _RtlInsertElementGenericTable@16 @ 0x4B2A7D60 (_RtlInsertElementGenericTable@16.c)
 *     _RtlDeleteElementGenericTable@8 @ 0x4B2A7E60 (_RtlDeleteElementGenericTable@8.c)
 *     _RtlLookupElementGenericTableFull@16 @ 0x4B2A7F10 (_RtlLookupElementGenericTableFull@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __fastcall FindNodeOrParent(int *a1, int a2, _DWORD *a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // [esp-Ch] [ebp-18h]
  int v9; // [esp+4h] [ebp-8h]
  int *v10; // [esp+8h] [ebp-4h]

  v3 = *a1;
  v9 = a2;
  v10 = a1;
  if ( !*a1 )
    return 0;
  v4 = 1;
  while ( 1 )
  {
    v5 = ((int (__thiscall *)(int, int *, int, int))a1[6])(a1[6], a1, a2, v3 + 24);
    if ( v5 )
      break;
    v6 = *(_DWORD *)(v3 + 4);
    if ( !v6 )
    {
      v8 = 2;
      goto LABEL_9;
    }
LABEL_6:
    a1 = v10;
    v3 = v6;
    a2 = v9;
  }
  if ( v5 != 1 )
    goto LABEL_10;
  v6 = *(_DWORD *)(v3 + 8);
  if ( v6 )
    goto LABEL_6;
  v8 = 3;
LABEL_9:
  v4 = v8;
LABEL_10:
  result = v4;
  *a3 = v3;
  return result;
}
