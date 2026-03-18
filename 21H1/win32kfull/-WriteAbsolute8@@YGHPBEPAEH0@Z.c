/*
 * XREFs of ?WriteAbsolute8@@YGHPBEPAEH0@Z @ 0x2320D5
 * Callers:
 *     _EncodeRLE8@20 @ 0x2332AE (_EncodeRLE8@20.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

int __userpurge WriteAbsolute8@<eax>(
        _BYTE *a1@<edx>,
        _BYTE *a2@<ecx>,
        size_t Size,
        unsigned __int8 *a4,
        int a5,
        const unsigned __int8 *a6)
{
  int v6; // edi
  _BYTE *v8; // esi
  _BYTE *v9; // esi
  int v10; // [esp-4h] [ebp-30h]

  if ( Size == 1 )
  {
    v10 = 2;
LABEL_5:
    v6 = v10;
    goto LABEL_8;
  }
  if ( Size == 2 )
  {
    v10 = 4;
    goto LABEL_5;
  }
  v6 = Size + 3;
  if ( (Size & 1) == 0 )
    v6 = Size + 2;
LABEL_8:
  if ( !a1 )
    return v6;
  if ( &a1[v6] > a4 )
    return 0;
  v8 = a1 + 1;
  if ( Size == 1 )
  {
    *a1 = 1;
    *v8 = *a2;
    return 2;
  }
  else
  {
    if ( Size != 2 )
    {
      *a1 = 0;
      *v8 = Size;
      v9 = a1 + 2;
      memmove(a1 + 2, a2, Size);
      if ( (Size & 1) != 0 )
        v9[Size] = 0;
      return v6;
    }
    *a1 = 1;
    *v8 = *a2;
    a1[2] = 1;
    a1[3] = a2[1];
    return 4;
  }
}
