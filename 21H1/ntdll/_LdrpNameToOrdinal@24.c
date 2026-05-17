/*
 * XREFs of _LdrpNameToOrdinal@24 @ 0x4B2A6330
 * Callers:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 * Callees:
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __fastcall LdrpNameToOrdinal(int a1, unsigned int a2, char *a3, unsigned int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // ebx
  int v8; // edi
  char *v9; // eax
  bool v10; // cf
  unsigned __int8 v11; // dl
  int v12; // eax
  char v13; // al
  int v15; // [esp+Ch] [ebp-4h]

  v6 = a2;
  v15 = a1;
  v7 = 0;
  v8 = a4 - 1;
  if ( a2 >= a4 )
    v6 = v8 / 2;
  if ( v8 < 0 )
  {
LABEL_14:
    v13 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrsnap.c",
        1559,
        "LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        (const char *)a1,
        a3);
      v13 = ShowSnaps;
    }
    if ( (v13 & 0x40) != 0 )
      __debugbreak();
    return -1;
  }
  else
  {
    while ( 1 )
    {
      v9 = &a3[*(_DWORD *)(a5 + 4 * v6)];
      while ( 1 )
      {
        v10 = *(_BYTE *)a1 < (unsigned __int8)*v9;
        if ( *(_BYTE *)a1 != *v9 )
          break;
        if ( !*(_BYTE *)a1 )
          goto LABEL_9;
        v11 = *(_BYTE *)(a1 + 1);
        v10 = v11 < (unsigned __int8)v9[1];
        if ( v11 != v9[1] )
          break;
        a1 += 2;
        v9 += 2;
        if ( !v11 )
        {
LABEL_9:
          v12 = 0;
          goto LABEL_10;
        }
      }
      v12 = v10 ? -1 : 1;
LABEL_10:
      if ( !v12 )
        return *(unsigned __int16 *)(a6 + 2 * v6);
      if ( v12 >= 0 )
        v7 = v6 + 1;
      else
        v8 = v6 - 1;
      a1 = v15;
      v6 = (v8 + v7) / 2;
      if ( v8 < v7 )
        goto LABEL_14;
    }
  }
}
