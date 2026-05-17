/*
 * XREFs of _RtlpFilterSacl@16 @ 0x4B348981
 * Callers:
 *     _RtlQuerySecurityObject@20 @ 0x4B336460 (_RtlQuerySecurityObject@20.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

unsigned int *__fastcall RtlpFilterSacl(int a1, int a2, unsigned int *a3, unsigned int a4)
{
  int v5; // esi
  int v6; // ecx
  unsigned __int16 *v7; // edx
  int v8; // edi
  bool v9; // zf
  unsigned int *result; // eax
  unsigned int v11; // esi
  unsigned int v12; // esi
  void *v13; // ecx
  unsigned int v14; // eax
  char v15; // al
  unsigned __int16 v16; // ax
  unsigned __int16 *v17; // [esp+Ch] [ebp-10h]
  unsigned int *v19; // [esp+14h] [ebp-8h]
  char *v20; // [esp+18h] [ebp-4h]

  v5 = 8;
  v6 = *(unsigned __int16 *)(a1 + 4);
  v7 = (unsigned __int16 *)(a1 + 8);
  v19 = (unsigned int *)a1;
  v8 = a1 + 8;
  v17 = (unsigned __int16 *)(a1 + 8);
  if ( v6 )
  {
    while ( 2 )
    {
      switch ( *(_BYTE *)v8 )
      {
        case 0x11:
          v9 = (a4 & 0x10) == 0;
          goto LABEL_10;
        case 0x12:
          v9 = (a4 & 0x20) == 0;
          goto LABEL_10;
        case 0x13:
          v9 = (a4 & 0x40) == 0;
          goto LABEL_10;
        case 0x14:
          if ( (a4 & 0x80u) != 0 )
            goto LABEL_11;
          goto LABEL_12;
        case 0x15:
          v9 = (a4 & 0x100) == 0;
          goto LABEL_10;
        default:
          v9 = (a4 & 8) == 0;
LABEL_10:
          if ( !v9 )
LABEL_11:
            v5 += *(unsigned __int16 *)(v8 + 2);
LABEL_12:
          v8 += *(unsigned __int16 *)(v8 + 2);
          if ( !--v6 )
            break;
          continue;
      }
      break;
    }
  }
  result = a3;
  v11 = (v5 + 3) & 0xFFFFFFFC;
  if ( *a3 >= v11 )
  {
    v12 = 0;
    *(_DWORD *)a2 = *v19;
    v13 = (void *)(a2 + 8);
    *(_DWORD *)(a2 + 4) = v19[1];
    *(_WORD *)(a2 + 4) = 0;
    *(_WORD *)(a2 + 2) = 8;
    result = v19;
    v20 = (char *)(a2 + 8);
    if ( *((_WORD *)v19 + 2) )
    {
      while ( 2 )
      {
        switch ( *(_BYTE *)v7 )
        {
          case 2:
          case 3:
          case 7:
          case 8:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
            v14 = a4 >> 3;
            goto LABEL_18;
          case 0x11:
            v14 = a4 >> 4;
            goto LABEL_18;
          case 0x12:
            v14 = a4 >> 5;
            goto LABEL_18;
          case 0x13:
            v14 = a4 >> 6;
            goto LABEL_18;
          case 0x14:
            v14 = a4 >> 7;
            goto LABEL_18;
          case 0x15:
            v14 = a4 >> 8;
LABEL_18:
            v15 = v14 & 1;
            goto LABEL_26;
          default:
            if ( (a4 & 8) == 0 )
              goto LABEL_28;
            v15 = 1;
LABEL_26:
            if ( v15 )
            {
              memcpy(v13, v7, v7[1]);
              v7 = v17;
              ++*(_WORD *)(a2 + 4);
              *(_WORD *)(a2 + 2) += v17[1];
              v20 += v17[1];
              v16 = v17[1];
              v13 = v20;
            }
            else
            {
LABEL_28:
              v16 = v7[1];
            }
            ++v12;
            v7 = (unsigned __int16 *)((char *)v7 + v16);
            v17 = v7;
            result = (unsigned int *)*((unsigned __int16 *)v19 + 2);
            if ( v12 >= (unsigned int)result )
              return result;
            continue;
        }
      }
    }
  }
  else
  {
    *a3 = v11;
  }
  return result;
}
