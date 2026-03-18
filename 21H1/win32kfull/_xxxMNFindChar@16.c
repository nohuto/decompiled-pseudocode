/*
 * XREFs of _xxxMNFindChar@16 @ 0x1ACD4F
 * Callers:
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 * Callees:
 *     _xxxClientFindMnemChar@16 @ 0x19406B (_xxxClientFindMnemChar@16.c)
 *     _MNFindNextValidItem@16 @ 0x1ACCB8 (_MNFindNextValidItem@16.c)
 */

int __fastcall xxxMNFindChar(int **a1, int a2, int ValidItem, char **a4)
{
  int result; // eax
  int v6; // esi
  char *MnemChar; // edi
  int v8; // ecx
  int v9; // ecx
  _DWORD *v10; // edx
  const WCHAR *v11; // ecx
  int v12; // ecx
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-18h] BYREF
  int v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v16 = -1;
  result = a2;
  v15 = a2;
  if ( a2 )
  {
    v6 = ValidItem;
    MnemChar = 0;
    v17 = -1;
    if ( ValidItem < 0 )
    {
      v8 = (int)a1[2];
      if ( !v8 )
        v8 = **a1;
      ValidItem = MNFindNextValidItem(v8, *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 24), -1, 1);
    }
    do
    {
      v9 = (int)a1[2];
      v14 = v6;
      if ( !v9 )
        v9 = **a1;
      v6 = MNFindNextValidItem(v9, v6, 1, 1);
      if ( v6 == -1 || v6 == v16 )
        break;
      if ( v16 == -1 )
        v16 = v6;
      v10 = (_DWORD *)(*(_DWORD *)(**a1 + 56) + 80 * v6);
      v11 = (const WCHAR *)v10[3];
      if ( v11 && *(_DWORD *)(*v10 + 28) )
      {
        *(_DWORD *)&DestinationString.Length = 0;
        DestinationString.Buffer = 0;
        if ( *v11 == 8 )
          ++v11;
        RtlInitUnicodeString(&DestinationString, v11);
        MnemChar = xxxClientFindMnemChar((const void **)&DestinationString, v15, v12, v12);
        if ( MnemChar == (char *)128 && v17 == -1 )
          v17 = v6;
      }
    }
    while ( v6 != v14 && MnemChar != (char *)1 && ValidItem != v6 );
    *a4 = MnemChar;
    result = v6;
    if ( MnemChar != (char *)1 )
      return v17;
  }
  return result;
}
