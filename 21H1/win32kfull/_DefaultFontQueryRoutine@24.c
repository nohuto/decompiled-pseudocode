/*
 * XREFs of _DefaultFontQueryRoutine@24 @ 0x292CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 */

int __userpurge DefaultFontQueryRoutine@<eax>(
        unsigned int a1@<ebx>,
        wchar_t *Str1,
        int a3,
        _BYTE *a4,
        int a5,
        int a6,
        int a7)
{
  wchar_t *v7; // edi
  unsigned int *v8; // edx
  unsigned int v11; // ebx
  const unsigned __int16 *v13; // [esp+0h] [ebp-8h]

  v7 = Str1;
  if ( !__wcsicmp(Str1, L"DEFAULT") )
  {
    *(_BYTE *)(a6 + 20) = *a4;
    return 0;
  }
  v8 = *(unsigned int **)(a6 + 8);
  if ( !v8 )
  {
    while ( *v7++ )
      ;
    *(_DWORD *)(a6 + 4) += 2 * (v7 - (Str1 + 1)) + 2;
LABEL_5:
    ++*(_DWORD *)a6;
    return 0;
  }
  if ( a3 == 4 )
  {
    *v8 = *(_DWORD *)a4 | ((*(_DWORD *)(a6 + 16) - *(_DWORD *)(a6 + 12)) << 15) & 0xFFFF0000;
    *(_DWORD *)(a6 + 8) += 4;
    v11 = wcslen(Str1);
    StringCchCopyW((size_t)Str1, a1, v13);
    if ( (unsigned __int16)(Str1[v11 - 1] - 48) <= 9u )
    {
      --v11;
      *(_WORD *)(*(_DWORD *)(a6 + 16) + 2 * v11) = 0;
    }
    *(_DWORD *)(a6 + 16) += 2 * v11 + 2;
    goto LABEL_5;
  }
  return -1073741823;
}
