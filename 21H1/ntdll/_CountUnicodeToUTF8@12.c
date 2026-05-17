/*
 * XREFs of _CountUnicodeToUTF8@12 @ 0x4B2E47B1
 * Callers:
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 *     _RtlUnicodeStringToUTF8String@12 @ 0x4B36A770 (_RtlUnicodeStringToUTF8String@12.c)
 * Callees:
 *     <none>
 */

int __fastcall CountUnicodeToUTF8(char *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // edx
  char *v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // eax
  int result; // eax
  char *v8; // edi
  unsigned int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // [esp+Ch] [ebp-4h]

  v14 = 0;
  v3 = a2 >> 1;
  v4 = &a1[2 * v3];
LABEL_2:
  v5 = 0;
  while ( a1 < v4 )
  {
    if ( v5 )
    {
      ++v3;
      if ( (unsigned int)*(unsigned __int16 *)a1 - 56320 <= 0x3FF )
      {
        v5 = 65533;
        a1 += 2;
      }
LABEL_7:
      if ( v5 - 55296 <= 0x7FF )
      {
        v14 = 263;
        v5 = 65533;
      }
      if ( v5 > 0x7F )
      {
        if ( v5 > 0x7FF )
          ++v3;
        ++v3;
      }
      v6 = (v4 - a1) >> 1;
      if ( v6 <= 0xD )
      {
        while ( a1 < v4 )
        {
          v5 = *(unsigned __int16 *)a1;
          a1 += 2;
          if ( v5 > 0x7F )
            goto LABEL_6;
        }
        goto LABEL_15;
      }
      v8 = &a1[2 * v6 - 14];
LABEL_17:
      if ( a1 >= v8 )
        goto LABEL_2;
      v9 = *(unsigned __int16 *)a1;
      a1 += 2;
      if ( v9 > 0x7F )
      {
        if ( v9 > 0x7FF )
        {
          if ( (v9 & 0xF800) == 0xD800 )
            goto LABEL_58;
          ++v3;
        }
        ++v3;
      }
      if ( ((unsigned __int8)a1 & 2) != 0 )
      {
        v9 = *(unsigned __int16 *)a1;
        a1 += 2;
        if ( v9 > 0x7F )
        {
          if ( v9 > 0x7FF )
          {
            if ( (v9 & 0xF800) == 0xD800 )
              goto LABEL_58;
            ++v3;
          }
          ++v3;
          goto LABEL_20;
        }
      }
      while ( 1 )
      {
LABEL_20:
        if ( a1 >= v8 )
          goto LABEL_2;
        v10 = *(_DWORD *)a1;
        v11 = *(_DWORD *)a1 | *((_DWORD *)a1 + 1);
        if ( (v11 & 0xFF80FF80) != 0 )
        {
          if ( (v11 & 0xF800F800) != 0 )
            goto LABEL_57;
          if ( (v10 & 0xFF800000) != 0 )
            ++v3;
          if ( (v10 & 0xFF80) != 0 )
            ++v3;
          if ( (*((_DWORD *)a1 + 1) & 0xFF800000) != 0 )
            ++v3;
          if ( (*((_DWORD *)a1 + 1) & 0xFF80) != 0 )
            ++v3;
        }
        v12 = *((_DWORD *)a1 + 3);
        a1 += 8;
        v10 = *(_DWORD *)a1;
        v13 = *(_DWORD *)a1 | v12;
        if ( (v13 & 0xFF80FF80) != 0 )
        {
          if ( (v13 & 0xF800F800) != 0 )
          {
LABEL_57:
            v9 = (unsigned __int16)v10;
            a1 += 2;
            if ( (unsigned __int16)v10 > 0x7Fu )
            {
LABEL_58:
              if ( v9 <= 0x7FF )
                goto LABEL_64;
              if ( v9 - 55296 > 0x7FF )
                goto LABEL_63;
              if ( v9 > 0xDBFF || (unsigned int)*(unsigned __int16 *)a1 - 56320 > 0x3FF )
              {
                a1 -= 2;
                goto LABEL_2;
              }
              a1 += 2;
LABEL_63:
              ++v3;
LABEL_64:
              ++v3;
            }
            goto LABEL_17;
          }
          if ( (v10 & 0xFF800000) != 0 )
            ++v3;
          if ( (v10 & 0xFF80) != 0 )
            ++v3;
          if ( (*((_DWORD *)a1 + 1) & 0xFF800000) != 0 )
            ++v3;
          if ( (*((_DWORD *)a1 + 1) & 0xFF80) != 0 )
            ++v3;
        }
        a1 += 8;
      }
    }
    v5 = *(unsigned __int16 *)a1;
    a1 += 2;
LABEL_6:
    if ( v5 - 55296 > 0x3FF )
      goto LABEL_7;
    --v3;
  }
  if ( v5 )
  {
    ++v3;
    goto LABEL_7;
  }
LABEL_15:
  result = v14;
  *a3 = v3;
  return result;
}
