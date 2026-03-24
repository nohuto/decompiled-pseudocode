/*
 * XREFs of PnpiCmResourceToBiosAddressDouble @ 0x1C00B4B34
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0090950 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosAddressDouble(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  char v6; // al
  unsigned int v7; // r10d
  int v8; // ecx
  unsigned __int8 *i; // rdx
  int v10; // r9d
  int v11; // ecx
  int v12; // eax
  __int16 v13; // cx
  __int16 v14; // ax
  char v15; // al
  int v16; // ecx

  v3 = *(unsigned __int8 *)(a1 + 3);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 3221225473LL;
      v6 = 6;
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 3;
  }
  v7 = *(_DWORD *)(a2 + 16);
  v8 = 0;
  if ( v7 )
  {
    for ( i = (unsigned __int8 *)(a2 + 20); ; i += 20 )
    {
      v10 = *i;
      if ( (_BYTE)v10 == v6 )
        break;
      if ( ++v8 >= v7 )
        return 0LL;
    }
    if ( (_BYTE)v10 )
    {
      if ( v10 != 1 )
      {
        if ( v10 != 2 )
        {
LABEL_26:
          *i = 0;
          return 0LL;
        }
        v11 = *((_DWORD *)i + 1);
        *(_DWORD *)(a1 + 10) = v11;
        *(_DWORD *)(a1 + 14) = *((_DWORD *)i + 2) - 1 + v11;
        v12 = *((_DWORD *)i + 2);
LABEL_25:
        *(_DWORD *)(a1 + 22) = v12;
        goto LABEL_26;
      }
LABEL_24:
      v16 = *((_DWORD *)i + 1);
      *(_DWORD *)(a1 + 10) = v16;
      *(_DWORD *)(a1 + 14) = *((_DWORD *)i + 3) - 1 + v16;
      v12 = *((_DWORD *)i + 3);
      goto LABEL_25;
    }
    *(_BYTE *)(a1 + 5) = 0;
    v13 = *((_WORD *)i + 1) & 3;
    *(_BYTE *)(a1 + 5) = v13 == 0;
    v14 = *((_WORD *)i + 1);
    if ( (v14 & 0x20) != 0 )
    {
      v15 = 3 - (v13 != 0);
    }
    else if ( (v14 & 8) != 0 )
    {
      v15 = 5 - (v13 != 0);
    }
    else
    {
      if ( (v14 & 4) == 0 )
        goto LABEL_24;
      v15 = 7 - (v13 != 0);
    }
    *(_BYTE *)(a1 + 5) = v15;
    goto LABEL_24;
  }
  return 0LL;
}
