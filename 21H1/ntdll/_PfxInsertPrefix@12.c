/*
 * XREFs of _PfxInsertPrefix@12 @ 0x4B345220
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSplay@4 @ 0x4B2E8250 (_RtlSplay@4.c)
 *     _CompareNamesCaseSensitive@8 @ 0x4B344F9C (_CompareNamesCaseSensitive@8.c)
 *     _ComputeNameLength@4 @ 0x4B3450EB (_ComputeNameLength@4.c)
 */

char __stdcall PfxInsertPrefix(int a1, unsigned __int16 *a2, int a3)
{
  __int16 v3; // cx
  __int16 *v4; // edx
  int v5; // eax
  int i; // edi
  char result; // al
  int j; // ebx
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  int v13; // esi
  _DWORD *v14; // eax
  int v15; // [esp+8h] [ebp-4h]

  v3 = ComputeNameLength(a2);
  v4 = (__int16 *)a2;
  *(_WORD *)(a3 + 2) = v3;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  *(_DWORD *)(a3 + 8) = a3 + 8;
  v5 = a1;
  *(_DWORD *)(a3 + 20) = a2;
  v15 = a1;
  for ( i = *(_DWORD *)(a1 + 4); *(__int16 *)(i + 2) > v3; i = *(_DWORD *)(i + 4) )
  {
    v5 = i;
    v15 = i;
  }
  if ( *(_WORD *)(i + 2) == v3 )
  {
    for ( j = i; ; j = v10 - 8 )
    {
      v9 = CompareNamesCaseSensitive(*(unsigned __int16 **)(j + 20), v4);
      if ( v9 == 2 )
        break;
      if ( v9 == 3 )
      {
        v10 = *(_DWORD *)(j + 12);
        if ( !v10 )
        {
          *(_DWORD *)(a3 + 4) = 0;
          v11 = (_DWORD *)(j + 8);
          *(_WORD *)a3 = 514;
          v12 = (_DWORD *)(a3 + 8);
          v11[1] = a3 + 8;
LABEL_14:
          *v12 = v11;
          v13 = *(_DWORD *)(i + 4);
          *(_DWORD *)(i + 4) = 0;
          *(_WORD *)i = 514;
          v14 = RtlSplay(v11) - 2;
          *(_WORD *)v14 = 513;
          *(_DWORD *)(v15 + 4) = v14;
          v14[1] = v13;
          return 1;
        }
      }
      else
      {
        v10 = *(_DWORD *)(j + 16);
        if ( !v10 )
        {
          *(_DWORD *)(a3 + 4) = 0;
          v12 = (_DWORD *)(a3 + 8);
          v11 = (_DWORD *)(j + 8);
          *(_WORD *)a3 = 514;
          v11[2] = a3 + 8;
          goto LABEL_14;
        }
      }
      v4 = (__int16 *)a2;
    }
    return 0;
  }
  else
  {
    *(_DWORD *)(v5 + 4) = a3;
    result = 1;
    *(_WORD *)a3 = 513;
    *(_DWORD *)(a3 + 4) = i;
  }
  return result;
}
