/*
 * XREFs of CountUnicodeToUTF8 @ 0x18005C1E8
 * Callers:
 *     RtlUnicodeToUTF8N @ 0x18005BF30 (RtlUnicodeToUTF8N.c)
 *     RtlUnicodeStringToUTF8String @ 0x180102F20 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned __int64 v4; // rax
  unsigned int *v6; // r9
  unsigned int v7; // edx
  unsigned __int64 v8; // r10
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  unsigned int *v12; // r8
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  char v22; // r8
  unsigned int *v23; // rax

  v3 = 0;
  v4 = (unsigned __int64)a2 >> 1;
  v6 = a1;
  v7 = a2 >> 1;
  v8 = (unsigned __int64)a1 + 2 * v4;
LABEL_2:
  v9 = 0;
  while ( (unsigned __int64)v6 < v8 )
  {
    if ( v9 )
    {
      ++v7;
      if ( (unsigned int)*(unsigned __int16 *)v6 - 56320 > 0x3FF )
      {
        v22 = 0;
      }
      else
      {
        v22 = 1;
        v9 = 65533;
      }
      v23 = (unsigned int *)((char *)v6 + 2);
      if ( !v22 )
        v23 = v6;
      v6 = v23;
LABEL_7:
      if ( v9 - 55296 <= 0x7FF )
      {
        v9 = 65533;
        v3 = 263;
      }
      if ( v9 > 0x7F )
      {
        v21 = v7 + 1;
        if ( v9 <= 0x7FF )
          v21 = v7;
        v7 = v21 + 1;
      }
      v10 = (__int64)(v8 - (_QWORD)v6) >> 1;
      if ( v10 <= 0xD )
      {
        while ( (unsigned __int64)v6 < v8 )
        {
          v9 = *(unsigned __int16 *)v6;
          v6 = (unsigned int *)((char *)v6 + 2);
          if ( v9 > 0x7F )
            goto LABEL_6;
        }
        goto LABEL_15;
      }
      v12 = (unsigned int *)((char *)v6 + 2 * v10 - 14);
LABEL_17:
      while ( 2 )
      {
        if ( v6 >= v12 )
          goto LABEL_2;
        v13 = *(unsigned __int16 *)v6;
        v6 = (unsigned int *)((char *)v6 + 2);
        if ( v13 <= 0x7F )
        {
LABEL_19:
          if ( ((unsigned __int8)v6 & 2) == 0
            || (v13 = *(unsigned __int16 *)v6, v6 = (unsigned int *)((char *)v6 + 2), v13 <= 0x7F) )
          {
            while ( 1 )
            {
LABEL_20:
              if ( v6 >= v12 )
                goto LABEL_2;
              v13 = *v6;
              v14 = *v6 | v6[1];
              if ( (v14 & 0xFF80FF80) != 0 )
              {
                if ( (v14 & 0xF800F800) != 0 )
                  goto LABEL_42;
                v17 = v7 + 1;
                if ( (v13 & 0xFF800000) == 0 )
                  v17 = v7;
                v18 = v17 + 1;
                if ( (*v6 & 0xFF80) == 0 )
                  v18 = v17;
                v7 = v18 + 1;
                if ( (v6[1] & 0xFF800000) == 0 )
                  v7 = v18;
                if ( (v6[1] & 0xFF80) != 0 )
                  ++v7;
              }
              v15 = v6[3];
              v6 += 2;
              v13 = *v6;
              v16 = *v6 | v15;
              if ( (v16 & 0xFF80FF80) != 0 )
              {
                if ( (v16 & 0xF800F800) != 0 )
                {
LABEL_42:
                  v13 = (unsigned __int16)v13;
                  v6 = (unsigned int *)((char *)v6 + 2);
                  if ( (unsigned __int16)v13 > 0x7Fu )
                    goto LABEL_43;
                  goto LABEL_17;
                }
                v19 = v7 + 1;
                if ( (v13 & 0xFF800000) == 0 )
                  v19 = v7;
                v20 = v19 + 1;
                if ( (*v6 & 0xFF80) == 0 )
                  v20 = v19;
                v7 = v20 + 1;
                if ( (v6[1] & 0xFF800000) == 0 )
                  v7 = v20;
                if ( (v6[1] & 0xFF80) != 0 )
                  ++v7;
              }
              v6 += 2;
            }
          }
          if ( v13 <= 0x7FF )
            goto LABEL_66;
          if ( (v13 & 0xF800) != 0xD800 )
          {
            ++v7;
LABEL_66:
            ++v7;
            goto LABEL_20;
          }
          goto LABEL_43;
        }
        if ( v13 > 0x7FF )
        {
          if ( (v13 & 0xF800) == 0xD800 )
          {
LABEL_43:
            if ( v13 > 0x7FF )
            {
              if ( v13 - 55296 <= 0x7FF )
              {
                if ( v13 > 0xDBFF || (unsigned int)*(unsigned __int16 *)v6 - 56320 > 0x3FF )
                {
                  v6 = (unsigned int *)((char *)v6 - 2);
                  goto LABEL_2;
                }
                v6 = (unsigned int *)((char *)v6 + 2);
              }
              ++v7;
            }
            ++v7;
            continue;
          }
          ++v7;
        }
        break;
      }
      ++v7;
      goto LABEL_19;
    }
    v9 = *(unsigned __int16 *)v6;
    v6 = (unsigned int *)((char *)v6 + 2);
LABEL_6:
    if ( v9 - 55296 > 0x3FF )
      goto LABEL_7;
    --v7;
  }
  if ( v9 )
  {
    ++v7;
    goto LABEL_7;
  }
LABEL_15:
  result = v3;
  *a3 = v7;
  return result;
}
