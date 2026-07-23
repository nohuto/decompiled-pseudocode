/*
 * XREFs of _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0
 * Callers:
 *     _RtlOemToUnicodeN@20 @ 0x4B2AACD0 (_RtlOemToUnicodeN@20.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     _RtlMultiByteToUnicodeSize@12 @ 0x4B2CE970 (_RtlMultiByteToUnicodeSize@12.c)
 *     _RtlMultiByteToUnicodeN@20 @ 0x4B2E1E50 (_RtlMultiByteToUnicodeN@20.c)
 *     _RtlCustomCPToUnicodeN@24 @ 0x4B343EC0 (_RtlCustomCPToUnicodeN@24.c)
 *     _RtlUTF8StringToUnicodeString@12 @ 0x4B36A6A0 (_RtlUTF8StringToUnicodeString@12.c)
 * Callees:
 *     _CountUTF8ToUnicode@12 @ 0x4B2DD464 (_CountUTF8ToUnicode@12.c)
 */

NTSTATUS __cdecl RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  PWSTR v5; // eax
  PCCH v6; // ebx
  unsigned int v7; // edx
  const CHAR *v8; // edi
  unsigned int v9; // esi
  WCHAR *v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // ecx
  WCHAR *v13; // edi
  unsigned int v14; // edx
  unsigned int v15; // esi
  NTSTATUS v16; // edx
  bool v18; // zf
  unsigned int v19; // edx
  unsigned int v20; // edx
  char v21; // si
  int v22; // esi
  unsigned int v23; // esi
  int v24; // esi
  CHAR v25; // dl
  int v26; // ecx
  WCHAR v27; // si
  unsigned int v28; // edx
  char v29; // [esp+10h] [ebp-Ch]
  int v30; // [esp+14h] [ebp-8h]
  WCHAR *v31; // [esp+18h] [ebp-4h]

  v5 = UnicodeStringDestination;
  v6 = UTF8StringSource;
  v31 = &UnicodeStringDestination[UnicodeStringMaxByteCount >> 1];
  v7 = 0;
  v30 = 0;
  v8 = &UTF8StringSource[UTF8StringByteCount];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( v6 >= v8 )
        {
          if ( v7 )
          {
            v16 = 263;
            if ( v5 < v31 )
              *v5++ = -3;
            else
              v16 = -1073741789;
            goto LABEL_27;
          }
LABEL_26:
          v16 = v30;
LABEL_27:
          if ( UnicodeStringActualByteCount )
            *UnicodeStringActualByteCount = ((char *)v5 - (char *)UnicodeStringDestination) & 0xFFFFFFFE;
          return v16;
        }
        v9 = *v6++;
        if ( !v7 )
        {
          LOWORD(v7) = v9;
          if ( v9 <= 0x7F )
          {
LABEL_6:
            v10 = &UnicodeStringDestination[UnicodeStringMaxByteCount >> 1];
LABEL_7:
            if ( v5 >= v10 )
              goto LABEL_81;
            *v5++ = v7;
            v11 = v8 - v6;
            v12 = v31 - v5;
            if ( (unsigned int)(v8 - v6) > 0xD )
            {
              if ( v11 >= v12 )
                v11 = v31 - v5;
              v13 = &v5[v11 - 7];
              if ( v5 >= v13 )
                goto LABEL_20;
              while ( 1 )
              {
                v14 = *v6++;
                if ( v14 > 0x7F )
                  goto LABEL_62;
                *v5++ = v14;
                if ( ((unsigned __int8)v6 & 1) != 0 )
                {
                  v14 = *v6++;
                  if ( v14 > 0x7F )
                    goto LABEL_62;
                  *v5++ = v14;
                }
                if ( ((unsigned __int8)v6 & 2) == 0 )
                  goto LABEL_17;
                v14 = *(unsigned __int16 *)v6;
                if ( (v14 & 0x8080) == 0 )
                {
                  *v5 = *(_WORD *)v6 & 0x7F;
                  v6 += 2;
                  v5[1] = (v14 >> 8) & 0x7F;
                  v5 += 2;
LABEL_17:
                  while ( v5 < v13 )
                  {
                    v15 = *((_DWORD *)v6 + 1);
                    v14 = *(_DWORD *)v6;
                    if ( ((*(_DWORD *)v6 | v15) & 0x80808080) != 0 )
                      goto LABEL_60;
                    v6 += 8;
                    *v5 = v14 & 0x7F;
                    v5[1] = (v14 >> 8) & 0x7F;
                    v5[2] = BYTE2(v14) & 0x7F;
                    v5[3] = HIBYTE(v14) & 0x7F;
                    v5[4] = v15 & 0x7F;
                    v5[5] = (v15 >> 8) & 0x7F;
                    v5[6] = BYTE2(v15) & 0x7F;
                    v5[7] = HIBYTE(v15) & 0x7F;
                    v5 += 8;
                  }
LABEL_20:
                  v8 = &UTF8StringSource[UTF8StringByteCount];
                  v7 = 0;
                  goto LABEL_3;
                }
LABEL_60:
                ++v6;
                if ( (unsigned __int8)v14 <= 0x7Fu )
                {
                  *v5 = (unsigned __int8)v14;
                  goto LABEL_78;
                }
LABEL_62:
                v21 = *v6++;
                if ( (v14 & 0x40) == 0 || (v21 & 0xC0) != 0x80 )
                {
LABEL_80:
                  v6 -= 2;
                  goto LABEL_20;
                }
                v22 = v21 & 0x3F;
                if ( (v14 & 0x20) != 0 )
                {
                  v23 = ((v14 & 0xF) << 6) | v22;
                  v29 = *v6;
                  if ( (v14 & 0x10) != 0 )
                  {
                    if ( (v23 >> 4) - 1 > 0xF )
                      goto LABEL_80;
                    if ( (v29 & 0xC0) != 0x80 )
                      goto LABEL_80;
                    v24 = v29 & 0x3F | (v23 << 6);
                    v25 = v6[1];
                    if ( (v25 & 0xC0) != 0x80 )
                      goto LABEL_80;
                    *v5++ = (((v25 & 0x3F | (unsigned int)(v24 << 6)) >> 10) & 0x7FF) - 10304;
                    v26 = 2;
                    v27 = (v25 & 0x3F | ((_WORD)v24 << 6) & 0x3FF) - 9216;
                  }
                  else
                  {
                    if ( (v23 & 0x3E0) == 0 || (v23 & 0x3E0) == 0x360 || (v29 & 0xC0) != 0x80 )
                      goto LABEL_80;
                    v27 = v29 & 0x3F | ((_WORD)v23 << 6);
                    v26 = 1;
                  }
                  v6 += v26;
                  --v13;
                }
                else
                {
                  v28 = v14 & 0x1F;
                  if ( v28 <= 1 )
                    goto LABEL_80;
                  v27 = ((_WORD)v28 << 6) | v22;
                }
                *v5 = v27;
                --v13;
LABEL_78:
                if ( ++v5 >= v13 )
                  goto LABEL_20;
              }
            }
            if ( v12 < v11 )
            {
              v7 = 0;
              continue;
            }
            while ( v6 < v8 )
            {
              v7 = *v6++;
              if ( v7 > 0x7F )
                goto LABEL_42;
              *v5++ = v7;
            }
            goto LABEL_26;
          }
LABEL_42:
          if ( (v7 & 0x40) != 0 )
          {
            if ( (v7 & 0x20) != 0 )
            {
              v18 = (v7 & 0x10) == 0;
              v19 = v7 & 0xF;
              if ( v18 )
              {
                v7 = v19 | 0x48228000;
                continue;
              }
              if ( v19 <= 4 )
              {
                v7 = v19 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v20 = v7 & 0x1F;
              if ( v20 > 1 )
              {
                v7 = v20 | 0x800000;
                continue;
              }
            }
          }
LABEL_50:
          LOWORD(v7) = -3;
          v30 = 263;
          goto LABEL_6;
        }
        break;
      }
      if ( (v9 & 0xC0) != 0x80 )
      {
        --v6;
        goto LABEL_50;
      }
      v7 = v9 & 0x3F | (v7 << 6);
      if ( (v7 & 0x20000000) == 0 )
      {
        if ( (v7 & 0x10000000) != 0 )
        {
          if ( (v7 & 0x800000) != 0 || (v7 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v7 & 0x3E0) != 0 && (v7 & 0x3E0) != 0x360 )
        {
          continue;
        }
        goto LABEL_50;
      }
      break;
    }
    v10 = &UnicodeStringDestination[UnicodeStringMaxByteCount >> 1];
    if ( (v7 & 0x101F0000) <= 0x10000000 )
      goto LABEL_7;
    if ( v5 < v31 )
    {
      *v5++ = ((v7 >> 10) & 0x7FF) - 10304;
      LOWORD(v7) = (v7 & 0x3FF) - 9216;
      goto LABEL_7;
    }
LABEL_81:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = ((char *)v5 - (char *)UnicodeStringDestination) & 0xFFFFFFFE;
    return -1073741789;
  }
  else if ( UnicodeStringActualByteCount )
  {
    return CountUTF8ToUnicode(UnicodeStringActualByteCount);
  }
  else
  {
    return -1073741811;
  }
}
