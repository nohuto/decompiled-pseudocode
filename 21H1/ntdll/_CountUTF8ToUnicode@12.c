/*
 * XREFs of _CountUTF8ToUnicode@12 @ 0x4B2DD464
 * Callers:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 *     _RtlUTF8StringToUnicodeString@12 @ 0x4B36A6A0 (_RtlUTF8StringToUnicodeString@12.c)
 * Callees:
 *     <none>
 */

int __fastcall CountUTF8ToUnicode(char *a1, int a2, _DWORD *a3)
{
  int v5; // ecx
  char *v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  int result; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  bool v12; // zf
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  char v15; // di
  char v16; // cl
  int v17; // eax
  int v18; // eax
  int v19; // [esp+Ch] [ebp-8h]
  char *v20; // [esp+10h] [ebp-4h]

  v5 = 0;
  v19 = 0;
  v6 = &a1[a2];
  v20 = &a1[a2];
  while ( a1 < v6 )
  {
    v7 = *a1++;
    if ( v5 )
    {
      if ( (v7 & 0xC0) != 0x80 )
      {
        --a1;
        a2 += v5 >> 30;
        goto LABEL_34;
      }
      v5 = v7 & 0x3F | (v5 << 6);
      if ( (v5 & 0x20000000) != 0 )
        goto LABEL_6;
      if ( (v5 & 0x10000000) != 0 )
      {
        if ( (v5 & 0x800000) == 0 && (v5 & 0x1F0u) - 16 > 0xF0 )
          goto LABEL_34;
      }
      else if ( (v5 & 0x3E0) == 0 || (v5 & 0x3E0) == 0x360 )
      {
        goto LABEL_34;
      }
    }
    else
    {
      v8 = v7;
LABEL_5:
      if ( v8 > 0x7F )
      {
        --a2;
        if ( (v8 & 0x40) == 0 )
          goto LABEL_34;
        if ( (v8 & 0x20) != 0 )
        {
          v12 = (v8 & 0x10) == 0;
          v13 = v8 & 0xF;
          if ( v12 )
          {
            v5 = v13 | 0x48228000;
            goto LABEL_39;
          }
          if ( v13 > 4 )
          {
LABEL_34:
            ++a2;
            v19 = 263;
            v5 = 0;
          }
          else
          {
            v5 = v13 | 0x504D0C00;
LABEL_39:
            --a2;
          }
        }
        else
        {
          v14 = v8 & 0x1F;
          if ( v14 <= 1 )
            goto LABEL_34;
          v5 = v14 | 0x800000;
        }
      }
      else
      {
LABEL_6:
        if ( (unsigned int)(v6 - a1) <= 0xD )
        {
          while ( a1 < v6 )
          {
            v8 = *a1++;
            if ( v8 > 0x7F )
              goto LABEL_5;
          }
          v5 = 0;
          break;
        }
        v10 = (unsigned int)(v6 - 7);
        while ( (unsigned int)a1 < v10 )
        {
          v11 = *a1++;
          if ( v11 <= 0x7F )
          {
            if ( ((unsigned __int8)a1 & 1) == 0 || (v11 = *a1, ++a1, v11 <= 0x7F) )
            {
              if ( ((unsigned __int8)a1 & 2) == 0 )
                goto LABEL_21;
              LOWORD(v11) = *(_WORD *)a1;
              if ( (*(_WORD *)a1 & 0x8080) == 0 )
              {
                a1 += 2;
LABEL_21:
                while ( (unsigned int)a1 < v10 )
                {
                  v11 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_48;
                  a1 += 8;
                  if ( (unsigned int)a1 >= v10 )
                    break;
                  v11 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_48;
                  a1 += 8;
                }
                break;
              }
LABEL_48:
              ++a1;
              if ( (unsigned __int8)v11 <= 0x7Fu )
                continue;
            }
          }
          v15 = *a1++;
          if ( (v11 & 0x40) == 0 || (v15 & 0xC0) != 0x80 )
          {
LABEL_64:
            a1 -= 2;
            break;
          }
          if ( (v11 & 0x20) != 0 )
          {
            if ( (v11 & 0x10) != 0 )
            {
              if ( ((v15 & 0x3F | ((v11 & 0xF) << 6)) >> 4) - 1 > 0xF )
                goto LABEL_64;
              v16 = *a1 & 0xC0;
              if ( v16 != (char)0x80 || (a1[1] & 0xC0) != v16 )
                goto LABEL_64;
              --a2;
              v17 = 2;
            }
            else
            {
              v18 = v15 & 0x20 | ((v11 & 0xF) << 6) & 0x3E0;
              if ( !v18 || v18 == 864 || (*a1 & 0xC0) != 0x80 )
                goto LABEL_64;
              --a2;
              v17 = 1;
            }
            a1 += v17;
          }
          else if ( (v11 & 0x1E) == 0 )
          {
            goto LABEL_64;
          }
          --a2;
        }
        v6 = v20;
        v5 = 0;
      }
    }
  }
  if ( v5 )
  {
    result = 263;
    a2 += (v5 >> 30) + 1;
  }
  else
  {
    result = v19;
  }
  *a3 = 2 * a2;
  return result;
}
