/*
 * XREFs of _RtlpHashStringToAtom@28 @ 0x4B2E032F
 * Callers:
 *     _RtlpFreeAllAtom@8 @ 0x4B2A78D7 (_RtlpFreeAllAtom@8.c)
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 *     _RtlLookupAtomInAtomTable@12 @ 0x4B2E0270 (_RtlLookupAtomInAtomTable@12.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _RtlpAtomMapAtomToHandleEntry@8 @ 0x4B2E04EF (_RtlpAtomMapAtomToHandleEntry@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

int __fastcall RtlpHashStringToAtom(int a1, wchar_t *a2, int a3, int **a4, _DWORD *a5, _DWORD *a6, int *a7)
{
  int *v8; // ebx
  wchar_t v9; // ax
  unsigned __int16 *v10; // edi
  unsigned int v11; // edx
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // ax
  unsigned int v14; // edi
  int i; // esi
  int v18; // [esp+10h] [ebp-8h]
  unsigned int v19; // [esp+14h] [ebp-4h]

  v18 = a1;
  v8 = 0;
  if ( ((unsigned int)a2 & 0xFFFF0000) != 0 )
  {
    v9 = *a2;
    v10 = a2;
    v19 = 0;
    v11 = 0;
    if ( v9 )
    {
      v12 = v9;
      do
      {
        ++v10;
        v13 = v12;
        if ( v12 >= 0x61u )
        {
          if ( v12 > 0x7Au )
          {
            v13 = NLS_UPCASE(v12);
            v11 = v19;
          }
          else
          {
            v13 = v12 - 32;
          }
        }
        v11 += (v13 >> 1) + 3 * v13;
        v12 = *v10;
        v19 = v11;
      }
      while ( *v10 );
      a1 = v18;
    }
    v14 = v10 - a2;
    if ( v14 > 0xFF )
    {
      i = 0;
    }
    else
    {
      v8 = (int *)(a1 + 4 * (v11 % *(_DWORD *)(a1 + 44) + 12));
      for ( i = *v8; i && (*(unsigned __int8 *)(i + 12) != v14 || _wcsicmp((const wchar_t *)(i + 14), a2)); i = *(_DWORD *)i )
        v8 = (int *)i;
    }
    if ( a4 )
      *a4 = v8;
    if ( i )
      goto LABEL_18;
    if ( !a5 )
      goto LABEL_21;
    *a5 = 2 * v14;
  }
  else
  {
    i = 0;
    if ( (unsigned __int16)a2 >= 0xC000u )
      i = RtlpAtomMapAtomToHandleEntry(a1, (unsigned __int16)a2 & 0x3FFF);
    if ( a4 )
      *a4 = 0;
  }
  if ( !i )
    goto LABEL_21;
LABEL_18:
  if ( !a6 )
  {
LABEL_21:
    *a7 = i;
    return 0;
  }
  if ( i != -8 )
  {
    *a6 = i + 8;
    goto LABEL_21;
  }
  return -1073741801;
}
