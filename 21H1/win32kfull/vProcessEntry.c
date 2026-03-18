/*
 * XREFs of vProcessEntry @ 0xE2E66
 * Callers:
 *     _QueryRegistryFontSubstituteListRoutine@24 @ 0x292BF4 (_QueryRegistryFontSubstituteListRoutine@24.c)
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x8A554 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _vCheckCharSet@8 @ 0xE2F02 (_vCheckCharSet@8.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

int __fastcall vProcessEntry(WCHAR *a1, WCHAR *a2, char *a3)
{
  int v3; // ebx
  WCHAR *v4; // eax
  _WORD *v5; // edi
  int v6; // esi
  size_t v7; // esi
  unsigned int v9; // [esp+0h] [ebp-14h]
  const unsigned __int16 *v10; // [esp+4h] [ebp-10h]
  WCHAR *Src; // [esp+10h] [ebp-4h]

  v3 = 0;
  Src = a1;
  v4 = a1;
  if ( *a1 )
  {
    do
    {
      if ( v4 >= a1 + 32 )
        break;
      v5 = v4 + 1;
      if ( *v4 == 44 )
        goto LABEL_6;
      ++v4;
    }
    while ( *v5 );
  }
  v5 = 0;
LABEL_6:
  if ( v5 )
  {
    v6 = v5 - a1;
    vCheckCharSet(a2, v5);
    a1 = Src;
  }
  else
  {
    v6 = 32;
    a2[32] = 257;
  }
  cCapString(a2, a1, v6);
  if ( a3 )
  {
    if ( v5 )
    {
      v7 = 2 * (v6 - 1);
      memmove(a3, Src, v7);
      *(_WORD *)&a3[v7] = 0;
    }
    else
    {
      return StringCchCopyW((size_t)Src, v9, v10);
    }
  }
  return v3;
}
