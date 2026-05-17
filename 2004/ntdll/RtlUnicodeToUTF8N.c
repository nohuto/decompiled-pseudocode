/*
 * XREFs of RtlUnicodeToUTF8N @ 0x18005A9B0
 * Callers:
 *     RtlUnicodeToOemN @ 0x180060F60 (RtlUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteSize @ 0x1800612E0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x180061320 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeToCustomCPN @ 0x1800E54B0 (RtlUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800E5834 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlUnicodeStringToUTF8String @ 0x180102BB0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToUTF8N(_BYTE *a1, int a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r10d
  int v8; // r11d
  _BYTE *v9; // rax
  unsigned int *v10; // rbx
  _BYTE *v11; // rbp
  int v12; // edx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int *v17; // r10
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  char v22; // cl
  _BYTE *v23; // rax
  int v24; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)a1;
  if ( !a4 )
    return 3221225714LL;
  if ( !a1 )
  {
    if ( a3 )
      return CountUnicodeToUTF8(a4, a5);
    else
      return 3221225485LL;
  }
  if ( (a5 & 1) != 0 )
    return 3221225715LL;
  v9 = a1;
  v10 = (unsigned int *)((char *)a4 + 2 * ((unsigned __int64)a5 >> 1));
  v11 = &a1[a2];
  while ( 1 )
  {
    do
    {
      if ( a4 >= v10 )
      {
        if ( !v6 )
          goto LABEL_19;
        break;
      }
      v12 = *(unsigned __int16 *)a4;
      if ( v6 )
      {
        if ( (unsigned int)(v12 - 56320) <= 0x3FF )
        {
          v6 = v12 + (v6 << 10) - 56613888;
          a4 = (unsigned int *)((char *)a4 + 2);
        }
        break;
      }
      v6 = *(unsigned __int16 *)a4;
      a4 = (unsigned int *)((char *)a4 + 2);
LABEL_8:
      ;
    }
    while ( v6 - 55296 <= 0x3FF );
    if ( v6 - 55296 <= 0x7FF )
    {
      v5 = 263;
      v6 = 65533;
    }
    v13 = 1LL;
    if ( v6 > 0x7F )
    {
      if ( v6 > 0x7FF )
      {
        if ( v6 > 0xFFFF )
          v13 = 2LL;
        ++v13;
      }
      ++v13;
    }
    if ( v9 > &v11[-v13] )
    {
      *a3 = (_DWORD)v9 - v8;
      return 3221225507LL;
    }
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        *v9++ = (v6 >> 6) | 0xC0;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
      else
      {
        if ( v6 > 0xFFFF )
        {
          *v9++ = (v6 >> 18) | 0xF0;
          v22 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v22 = (v6 >> 12) | 0xE0;
        }
        *v9 = v22;
        v23 = v9 + 1;
        *v23 = (v6 >> 6) & 0x3F | 0x80;
        v9 = v23 + 1;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
    }
    *v9++ = v6;
    v14 = ((char *)v10 - (char *)a4) >> 1;
    v15 = v11 - v9;
    if ( v14 > 0xD )
    {
      if ( v15 < v14 )
        v14 = v11 - v9;
      v17 = (unsigned int *)((char *)a4 + 2 * v14 - 10);
      while ( 2 )
      {
        if ( a4 >= v17 )
          goto LABEL_30;
        v18 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( v18 > 0x7F )
          goto LABEL_31;
        *v9++ = v18;
        if ( ((unsigned __int8)a4 & 2) == 0 )
          goto LABEL_27;
        v18 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( v18 > 0x7F )
          goto LABEL_31;
        *v9++ = v18;
LABEL_27:
        if ( a4 >= v17 )
          goto LABEL_30;
        while ( 1 )
        {
          v19 = a4[1];
          v18 = *a4;
          if ( ((*a4 | v19) & 0xFF80FF80) != 0 )
            break;
          *v9 = v18;
          a4 += 2;
          v9[2] = v19;
          v9[1] = BYTE2(v18);
          v9[3] = BYTE2(v19);
          v9 += 4;
          if ( a4 >= v17 )
            goto LABEL_30;
        }
        v18 = (unsigned __int16)v18;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( (unsigned __int16)v18 > 0x7Fu )
        {
LABEL_31:
          if ( v18 > 0x7FF )
          {
            if ( v18 - 55296 <= 0x7FF )
            {
              if ( v18 > 0xDBFF )
              {
                a4 = (unsigned int *)((char *)a4 - 2);
                goto LABEL_30;
              }
              v24 = *(unsigned __int16 *)a4;
              a4 = (unsigned int *)((char *)a4 + 2);
              if ( (unsigned int)(v24 - 56320) > 0x3FF )
              {
                --a4;
                goto LABEL_30;
              }
              v18 = v24 + (v18 << 10) - 56613888;
              *v9++ = (v18 >> 18) | 0xF0;
              v21 = v18 & 0x3F000 | 0x80000;
            }
            else
            {
              v21 = v18 | 0xE0000;
            }
            v17 = (unsigned int *)((char *)v17 - 2);
            *v9++ = v21 >> 12;
            v20 = v18 & 0xFC0 | 0x2000;
          }
          else
          {
            v20 = v18 | 0x3000;
          }
          v17 = (unsigned int *)((char *)v17 - 2);
          *v9++ = v20 >> 6;
          LOBYTE(v18) = v18 & 0x3F | 0x80;
        }
        *v9++ = v18;
        continue;
      }
    }
    if ( v15 >= v14 )
      break;
LABEL_30:
    v6 = 0;
  }
  while ( a4 < v10 )
  {
    v6 = *(unsigned __int16 *)a4;
    a4 = (unsigned int *)((char *)a4 + 2);
    if ( v6 > 0x7F )
      goto LABEL_8;
    *v9++ = v6;
  }
LABEL_19:
  *a3 = (_DWORD)v9 - v8;
  return v5;
}
