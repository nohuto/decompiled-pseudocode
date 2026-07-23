/*
 * XREFs of _RtlpConvertAbsoluteToRelativeSecurityAttribute@12 @ 0x4B34B9A0
 * Callers:
 *     _RtlAddResourceAttributeAce@28 @ 0x4B34B260 (_RtlAddResourceAttributeAce@28.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlStringCbLengthW@12 @ 0x4B3475AA (_RtlStringCbLengthW@12.c)
 */

int __stdcall RtlpConvertAbsoluteToRelativeSecurityAttribute(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // edi
  unsigned __int16 v8; // ax
  int *v9; // eax
  void **v10; // eax
  unsigned int v11; // ecx
  int v12; // ecx
  unsigned int v13; // edx
  char *v14; // ecx
  unsigned __int16 v15; // ax
  unsigned int v16; // edi
  unsigned int *v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  int v20; // esi
  unsigned int *v21; // eax
  int v22; // ecx
  const void *v24; // [esp-14h] [ebp-48h]
  size_t v25; // [esp-10h] [ebp-44h]
  size_t v26; // [esp-4h] [ebp-38h]
  size_t v27; // [esp-4h] [ebp-38h]
  void *Src; // [esp+Ch] [ebp-28h]
  void **v29; // [esp+1Ch] [ebp-18h]
  char *v30; // [esp+1Ch] [ebp-18h]
  char *v31; // [esp+1Ch] [ebp-18h]
  char *v32; // [esp+1Ch] [ebp-18h]
  int *v33; // [esp+20h] [ebp-14h]
  unsigned int v34; // [esp+20h] [ebp-14h]
  int v35; // [esp+20h] [ebp-14h]
  size_t Size; // [esp+24h] [ebp-10h] BYREF
  unsigned int v37; // [esp+2Ch] [ebp-8h] BYREF
  unsigned int v38; // [esp+30h] [ebp-4h] BYREF

  v3 = 0;
  v38 = 20;
  v4 = a1;
  v5 = 0;
  Size = 0LL;
  v37 = 0;
  if ( !a1 || !a3 )
    return -1073741811;
  v6 = *(_DWORD *)(a1 + 12);
  if ( v6 )
  {
    v7 = RtlULongLongToUInt((int *)&v37, 4 * (v6 - 1), (unsigned __int64)(unsigned int)(v6 - 1) >> 30);
    if ( v7 < 0 )
      return v7;
    v5 = v37;
  }
  v7 = RtlULongPtrAdd(0x14u, v5, (int *)&v38);
  if ( v7 >= 0 )
  {
    v7 = RtlStringCbLengthW(*(void **)a1, (_DWORD *)&Size + 1);
    if ( v7 >= 0 )
    {
      v7 = RtlULongPtrAdd(HIDWORD(Size), 2, (int *)&Size);
      if ( v7 >= 0 )
      {
        v7 = RtlULongPtrAdd(v38, Size, (int *)&v38);
        if ( v7 >= 0 )
        {
          v8 = *(_WORD *)(a1 + 4);
          if ( !v8 )
            goto LABEL_31;
          if ( v8 <= 2u )
            goto LABEL_29;
          if ( v8 != 3 )
          {
            if ( v8 == 5 )
            {
LABEL_16:
              v37 = 0;
              if ( *(_DWORD *)(a1 + 12) )
              {
                v9 = (int *)(*(_DWORD *)(a1 + 16) + 4);
                v33 = v9;
                do
                {
                  v7 = RtlULongPtrAdd(v38, *v9, (int *)&v38);
                  if ( v7 < 0 )
                    return v7;
                  v7 = RtlULongPtrAdd(v38, 4, (int *)&v38);
                  if ( v7 < 0 )
                    return v7;
                  v9 = v33 + 2;
                  ++v37;
                  v33 += 2;
                }
                while ( v37 < *(_DWORD *)(a1 + 12) );
              }
LABEL_31:
              v7 = RtlULongPtrAdd(v38, 3, (int *)&v38);
              v35 = v7;
              if ( v7 < 0 )
                return v7;
              v11 = v38 & 0xFFFFFFFC;
              if ( *a3 < (v38 & 0xFFFFFFFC) )
              {
                *a3 = v11;
                return -1073741789;
              }
              if ( a2 )
              {
                LODWORD(v26) = v38 & 0xFFFFFFFC;
                *a3 = v11;
                memset(a2, 0, v26);
                LODWORD(v25) = Size;
                *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 4);
                *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 6);
                a2[2] = *(_DWORD *)(a1 + 8);
                a2[3] = *(_DWORD *)(a1 + 12);
                v12 = *(_DWORD *)(a1 + 12) != 0 ? 4 * *(_DWORD *)(a1 + 12) - 4 + 20 : 20;
                *a2 = v12;
                v24 = *(const void **)a1;
                v37 = v12;
                memcpy((char *)a2 + v12, v24, v25);
                v13 = Size + v37;
                v14 = (char *)a2;
                v37 = v13;
                v30 = (char *)a2 + v13;
                v15 = *(_WORD *)(a1 + 4);
                if ( v15 )
                {
                  if ( v15 <= 2u )
                    goto LABEL_51;
                  switch ( v15 )
                  {
                    case 3u:
                      if ( *(_DWORD *)(a1 + 12) )
                      {
                        do
                        {
                          *(_DWORD *)&v14[4 * v3 + 16] = v13;
                          Src = *(void **)(*(_DWORD *)(v4 + 16) + 4 * v3);
                          v7 = RtlStringCbLengthW(Src, (_DWORD *)&Size + 1);
                          if ( v7 < 0 )
                            break;
                          v20 = HIDWORD(Size) + 2;
                          LODWORD(v27) = HIDWORD(Size) + 2;
                          memcpy(v30, Src, v27);
                          v14 = (char *)a2;
                          v13 = v20 + v37;
                          v4 = a1;
                          ++v3;
                          v37 = v13;
                          v30 = (char *)a2 + v13;
                        }
                        while ( v3 < *(_DWORD *)(a1 + 12) );
                      }
                      return v7;
                    case 5u:
                      goto LABEL_41;
                    case 6u:
LABEL_51:
                      if ( !*(_DWORD *)(a1 + 12) )
                        return v7;
                      v21 = a2 + 4;
                      v32 = (char *)(a2 + 4);
                      do
                      {
                        *v21 = v13;
                        v22 = *(_DWORD *)(v4 + 16);
                        v4 = a1;
                        *(unsigned int *)((char *)a2 + v13) = *(_DWORD *)(v22 + 8 * v3);
                        *(unsigned int *)((char *)a2 + v13 + 4) = *(_DWORD *)(v22 + 8 * v3 + 4);
                        v13 += 8;
                        ++v3;
                        v21 = (unsigned int *)(v32 + 4);
                        v32 += 4;
                      }
                      while ( v3 < *(_DWORD *)(a1 + 12) );
                      return v35;
                  }
                  if ( *(_WORD *)(a1 + 4) == 16 )
                  {
LABEL_41:
                    if ( !*(_DWORD *)(a1 + 12) )
                      return v7;
                    v16 = v37;
                    v17 = a2 + 4;
                    v31 = (char *)(a2 + 4);
                    do
                    {
                      *v17 = v16;
                      *(_DWORD *)&v14[v16] = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 8 * v3 + 4);
                      v18 = v16 + 4;
                      v19 = *(_DWORD *)(a1 + 16);
                      if ( *(_DWORD *)(v19 + 8 * v3 + 4) )
                      {
                        LODWORD(v27) = *(_DWORD *)(v19 + 8 * v3 + 4);
                        memcpy(&v14[v18], *(const void **)(v19 + 8 * v3), v27);
                        v19 = *(_DWORD *)(a1 + 16);
                        v14 = (char *)a2;
                      }
                      v16 = *(_DWORD *)(v19 + 8 * v3++ + 4) + v18;
                      v17 = (unsigned int *)(v31 + 4);
                      v31 += 4;
                    }
                    while ( v3 < *(_DWORD *)(a1 + 12) );
                    return v35;
                  }
                }
              }
              return -1073741811;
            }
            if ( v8 != 6 )
            {
              if ( *(_WORD *)(a1 + 4) != 16 )
                goto LABEL_31;
              goto LABEL_16;
            }
LABEL_29:
            v7 = RtlULongLongToUInt(
                   (int *)&v37,
                   8 * *(_DWORD *)(a1 + 12),
                   (unsigned __int64)*(unsigned int *)(a1 + 12) >> 29);
            if ( v7 < 0 )
              return v7;
            v7 = RtlULongPtrAdd(v38, v37, (int *)&v38);
            if ( v7 < 0 )
              return v7;
            goto LABEL_31;
          }
          v34 = 0;
          if ( !*(_DWORD *)(a1 + 12) )
            goto LABEL_31;
          v10 = *(void ***)(a1 + 16);
          v29 = v10;
          while ( 1 )
          {
            v7 = RtlStringCbLengthW(*v10, (_DWORD *)&Size + 1);
            if ( v7 < 0 )
              break;
            v7 = RtlULongPtrAdd(HIDWORD(Size), 2, (int *)&v37);
            if ( v7 < 0 )
              break;
            v7 = RtlULongPtrAdd(v38, v37, (int *)&v38);
            if ( v7 < 0 )
              break;
            v10 = v29 + 1;
            ++v34;
            ++v29;
            if ( v34 >= *(_DWORD *)(a1 + 12) )
              goto LABEL_31;
          }
        }
      }
    }
  }
  return v7;
}
