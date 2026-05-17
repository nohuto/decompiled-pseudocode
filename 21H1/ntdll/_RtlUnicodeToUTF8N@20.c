/*
 * XREFs of _RtlUnicodeToUTF8N@20 @ 0x4B2E4640
 * Callers:
 *     _RtlUnicodeToOemN@20 @ 0x4B2E0AF0 (_RtlUnicodeToOemN@20.c)
 *     _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70 (_RtlUnicodeToMultiByteN@20.c)
 *     _RtlUnicodeToMultiByteSize@12 @ 0x4B2E0DE0 (_RtlUnicodeToMultiByteSize@12.c)
 *     _RtlUnicodeToCustomCPN@24 @ 0x4B3442B0 (_RtlUnicodeToCustomCPN@24.c)
 *     _UpcaseUnicodeToUTF8NHelper@20 @ 0x4B344718 (_UpcaseUnicodeToUTF8NHelper@20.c)
 *     _RtlUnicodeStringToUTF8String@12 @ 0x4B36A770 (_RtlUnicodeStringToUTF8String@12.c)
 * Callees:
 *     _CountUnicodeToUTF8@12 @ 0x4B2E47B1 (_CountUnicodeToUTF8@12.c)
 */

int __stdcall RtlUnicodeToUTF8N(_BYTE *a1, int a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int *v5; // ecx
  unsigned int v6; // ebx
  int result; // eax
  _BYTE *v8; // edx
  unsigned int v9; // edi
  int v10; // esi
  int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // esi
  int v14; // edi
  unsigned int *v15; // esi
  unsigned int v16; // ebx
  char v17; // al
  char v18; // al
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // edi
  unsigned int v22; // [esp+8h] [ebp-10h]
  int v23; // [esp+Ch] [ebp-Ch]
  _BYTE *v24; // [esp+10h] [ebp-8h]

  v5 = a4;
  v6 = 0;
  v23 = 0;
  if ( !a4 )
    return -1073741582;
  if ( !a1 )
  {
    if ( a3 )
      return CountUnicodeToUTF8(a3);
    else
      return -1073741811;
  }
  if ( (a5 & 1) != 0 )
    return -1073741581;
  v8 = a1;
  v9 = (unsigned int)a4 + 2 * (a5 >> 1);
  v24 = &a1[a2];
LABEL_8:
  while ( 2 )
  {
    if ( (unsigned int)v5 >= v9 )
    {
      if ( !v6 )
        goto LABEL_22;
    }
    else
    {
      v10 = *(unsigned __int16 *)v5;
      if ( v6 )
      {
        if ( (unsigned int)(v10 - 56320) <= 0x3FF )
        {
          v6 = v10 + (v6 << 10) - 56613888;
          v5 = (unsigned int *)((char *)v5 + 2);
        }
      }
      else
      {
        v6 = *(unsigned __int16 *)v5;
        v5 = (unsigned int *)((char *)v5 + 2);
LABEL_11:
        if ( v6 - 55296 <= 0x3FF )
          continue;
      }
    }
    break;
  }
  if ( v6 - 55296 <= 0x7FF )
  {
    v23 = 263;
    v6 = 65533;
  }
  v11 = 1;
  if ( v6 > 0x7F )
  {
    if ( v6 > 0x7FF )
      v11 = (v6 > 0xFFFF) + 2;
    ++v11;
  }
  if ( v8 <= &v24[-v11] )
  {
    if ( v6 > 0x7F )
    {
      if ( v6 > 0x7FF )
      {
        if ( v6 > 0xFFFF )
        {
          *v8++ = (v6 >> 18) | 0xF0;
          v18 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v18 = (v6 >> 12) | 0xE0;
        }
        *v8++ = v18;
        v17 = (v6 >> 6) & 0x3F | 0x80;
      }
      else
      {
        v17 = (v6 >> 6) | 0xC0;
      }
      *v8++ = v17;
      LOBYTE(v6) = v6 & 0x3F | 0x80;
    }
    *v8++ = v6;
    v12 = (int)(v9 - (_DWORD)v5) >> 1;
    v13 = v24 - v8;
    if ( v12 <= 0xD )
    {
      if ( v13 < v12 )
        goto LABEL_34;
      while ( (unsigned int)v5 < v9 )
      {
        v6 = *(unsigned __int16 *)v5;
        v5 = (unsigned int *)((char *)v5 + 2);
        if ( v6 > 0x7F )
          goto LABEL_11;
        *v8++ = v6;
      }
LABEL_22:
      v14 = v23;
      goto LABEL_23;
    }
    if ( v13 < v12 )
      v12 = v24 - v8;
    v15 = (unsigned int *)((char *)v5 + 2 * v12 - 10);
    if ( v5 >= v15 )
      goto LABEL_34;
    while ( 1 )
    {
      v16 = *(unsigned __int16 *)v5;
      v5 = (unsigned int *)((char *)v5 + 2);
      if ( v16 <= 0x7F )
      {
        *v8++ = v16;
        if ( ((unsigned __int8)v5 & 2) != 0 )
        {
          v16 = *(unsigned __int16 *)v5;
          v5 = (unsigned int *)((char *)v5 + 2);
          if ( v16 > 0x7F )
            goto LABEL_57;
          *v8++ = v16;
        }
        if ( v5 >= v15 )
          goto LABEL_33;
        while ( 1 )
        {
          v16 = *v5;
          v22 = v5[1];
          if ( ((*v5 | v22) & 0xFF80FF80) != 0 )
            break;
          v5 += 2;
          *v8 = v16;
          v8[2] = v22;
          v8[1] = BYTE2(v16);
          v8[3] = BYTE2(v22);
          v8 += 4;
          if ( v5 >= v15 )
            goto LABEL_32;
        }
        v16 = (unsigned __int16)v16;
        v5 = (unsigned int *)((char *)v5 + 2);
        if ( (unsigned __int16)v16 <= 0x7Fu )
        {
          *v8++ = v16;
          goto LABEL_32;
        }
      }
LABEL_57:
      if ( v16 > 0x7FF )
      {
        if ( v16 - 55296 <= 0x7FF )
        {
          if ( v16 > 0xDBFF )
          {
            v5 = (unsigned int *)((char *)v5 - 2);
LABEL_33:
            v9 = (unsigned int)a4 + 2 * (a5 >> 1);
LABEL_34:
            v6 = 0;
            goto LABEL_8;
          }
          v21 = *(unsigned __int16 *)v5;
          v5 = (unsigned int *)((char *)v5 + 2);
          if ( (unsigned int)(v21 - 56320) > 0x3FF )
          {
            --v5;
            goto LABEL_33;
          }
          v16 = v21 + (v16 << 10) - 56613888;
          *v8++ = (v16 >> 18) | 0xF0;
          v20 = v16 & 0x3F000 | 0x80000;
        }
        else
        {
          v20 = v16 | 0xE0000;
        }
        v15 = (unsigned int *)((char *)v15 - 2);
        *v8++ = v20 >> 12;
        v19 = v16 & 0xFC0 | 0x2000;
      }
      else
      {
        v19 = v16 | 0x3000;
      }
      *v8 = v19 >> 6;
      v15 = (unsigned int *)((char *)v15 - 2);
      v8[1] = v16 & 0x3F | 0x80;
      v8 += 2;
LABEL_32:
      if ( v5 >= v15 )
        goto LABEL_33;
    }
  }
  v14 = -1073741789;
LABEL_23:
  result = v14;
  *a3 = v8 - a1;
  return result;
}
