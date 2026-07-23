/*
 * XREFs of _RtlpConvertRelativeToAbsoluteSecurityAttribute@16 @ 0x4B34BDB0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlStringCbLengthW@12 @ 0x4B3475AA (_RtlStringCbLengthW@12.c)
 */

int __stdcall RtlpConvertRelativeToAbsoluteSecurityAttribute(unsigned int *a1, unsigned int a2, char *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  unsigned int v6; // ecx
  unsigned __int16 v7; // ax
  unsigned int *v8; // eax
  unsigned int v9; // ecx
  unsigned int *v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int *v14; // edi
  int v15; // edx
  unsigned int v16; // esi
  char *v17; // eax
  unsigned __int16 v18; // cx
  int v19; // ecx
  _DWORD *v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  bool v23; // cf
  int *v24; // eax
  int v25; // ecx
  int v26; // edx
  size_t v28; // [esp-4h] [ebp-38h]
  size_t v29; // [esp-4h] [ebp-38h]
  size_t v30; // [esp-4h] [ebp-38h]
  void *Src; // [esp+Ch] [ebp-28h]
  void *Srca; // [esp+Ch] [ebp-28h]
  char *Srcb; // [esp+Ch] [ebp-28h]
  int v34; // [esp+10h] [ebp-24h]
  int *v35; // [esp+10h] [ebp-24h]
  unsigned int v36; // [esp+10h] [ebp-24h]
  int v37; // [esp+10h] [ebp-24h]
  int *v38; // [esp+10h] [ebp-24h]
  unsigned int v39; // [esp+14h] [ebp-20h]
  int *v40; // [esp+14h] [ebp-20h]
  unsigned int v41; // [esp+18h] [ebp-1Ch] BYREF
  size_t v42; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v43; // [esp+24h] [ebp-10h] BYREF
  size_t Size; // [esp+28h] [ebp-Ch] BYREF
  unsigned int v45; // [esp+30h] [ebp-4h] BYREF

  v4 = 0;
  v42 = 0LL;
  v43 = 0;
  v41 = 0;
  v45 = 20;
  Size = 20LL;
  if ( !a1 || !a4 )
    return -1073741811;
  if ( a2 < 0x14 )
    return -1073741705;
  v6 = *a1;
  if ( a2 < *a1 || a2 - v6 < 4 )
    return -1073741705;
  v5 = RtlStringCbLengthW((char *)a1 + v6, &v43);
  if ( v5 < 0 )
    return v5;
  v5 = RtlULongPtrAdd(v43, 2, (int *)&v42 + 1);
  if ( v5 < 0 )
    return v5;
  v5 = RtlULongPtrAdd(HIDWORD(v42), 3, (int *)&Size + 1);
  if ( v5 < 0 )
    return v5;
  HIDWORD(Size) &= 0xFFFFFFFC;
  v5 = RtlULongPtrAdd(0x14u, SHIDWORD(Size), (int *)&Size);
  if ( v5 < 0 )
    return v5;
  v34 = 4 * a1[3];
  Src = (void *)((unsigned __int64)a1[3] >> 30);
  v5 = RtlULongLongToUInt((int *)&v41, v34, (int)Src);
  if ( v5 < 0 )
    return v5;
  if ( a2 - 16 < v41 )
    return -1073741705;
  v7 = *((_WORD *)a1 + 2);
  if ( !v7 )
    goto LABEL_50;
  if ( v7 <= 2u )
  {
LABEL_43:
    v5 = RtlULongLongToUInt((int *)&Size + 1, 8 * a1[3], (unsigned __int64)a1[3] >> 29);
    if ( v5 < 0 )
      return v5;
    v5 = RtlULongPtrAdd(Size, SHIDWORD(Size), (int *)&Size);
    if ( v5 < 0 )
      return v5;
    v12 = a1[3];
    v13 = 0;
    if ( v12 )
    {
      v14 = a1 + 4;
      while ( a2 >= *v14 && a2 - *v14 >= 8 )
      {
        ++v13;
        ++v14;
        if ( v13 >= v12 )
          goto LABEL_50;
      }
      return -1073741705;
    }
    goto LABEL_50;
  }
  if ( v7 != 3 )
  {
    if ( v7 == 5 )
    {
LABEL_19:
      v5 = RtlULongLongToUInt((int *)&Size + 1, 8 * a1[3], (unsigned __int64)a1[3] >> 29);
      if ( v5 < 0 )
        return v5;
      v5 = RtlULongPtrAdd(Size, SHIDWORD(Size), (int *)&Size);
      if ( v5 < 0 )
        return v5;
      v39 = 0;
      if ( a1[3] )
      {
        v8 = a1 + 4;
        v35 = (int *)(a1 + 4);
        while ( 1 )
        {
          v9 = *v8;
          v41 = v9;
          if ( a2 < v9 || a2 - v9 < 4 )
            return -1073741705;
          Srca = *(void **)((char *)a1 + v9);
          HIDWORD(Size) = Srca;
          v5 = RtlULongPtrAdd(v9, 4, (int *)&v41);
          if ( v5 < 0 )
            return v5;
          if ( a2 - v41 < (unsigned int)Srca )
            return -1073741705;
          v5 = RtlULongPtrAdd((unsigned int)Srca, 3, (int *)&Size + 1);
          if ( v5 < 0 )
            return v5;
          HIDWORD(Size) &= 0xFFFFFFFC;
          v5 = RtlULongPtrAdd(Size, SHIDWORD(Size), (int *)&Size);
          if ( v5 < 0 )
            return v5;
          v8 = (unsigned int *)(v35 + 1);
          ++v39;
          ++v35;
          if ( v39 >= a1[3] )
            goto LABEL_50;
        }
      }
      goto LABEL_50;
    }
    if ( v7 != 6 )
    {
      if ( *((_WORD *)a1 + 2) != 16 )
        goto LABEL_50;
      goto LABEL_19;
    }
    goto LABEL_43;
  }
  v5 = RtlULongLongToUInt((int *)&Size + 1, v34, (int)Src);
  if ( v5 < 0 )
    return v5;
  v5 = RtlULongPtrAdd(Size, SHIDWORD(Size), (int *)&Size);
  if ( v5 < 0 )
    return v5;
  v36 = 0;
  if ( a1[3] )
  {
    v10 = a1 + 4;
    v40 = (int *)(a1 + 4);
    do
    {
      v11 = *v10;
      if ( a2 < *v10 || a2 - v11 < 2 )
        return -1073741705;
      v5 = RtlStringCbLengthW((char *)a1 + v11, &v43);
      if ( v5 < 0 )
        return v5;
      v5 = RtlULongPtrAdd(v43, 2, (int *)&Size + 1);
      if ( v5 < 0 )
        return v5;
      v5 = RtlULongPtrAdd(HIDWORD(Size), 3, (int *)&Size + 1);
      if ( v5 < 0 )
        return v5;
      HIDWORD(Size) &= 0xFFFFFFFC;
      v5 = RtlULongPtrAdd(Size, SHIDWORD(Size), (int *)&Size);
      if ( v5 < 0 )
        return v5;
      v10 = (unsigned int *)(v40 + 1);
      ++v36;
      ++v40;
    }
    while ( v36 < a1[3] );
  }
LABEL_50:
  if ( *a4 < (unsigned int)Size )
  {
    *a4 = Size;
    return -1073741789;
  }
  if ( !a3 )
    return -1073741811;
  LODWORD(v28) = Size;
  *a4 = Size;
  memset(a3, 0, v28);
  v15 = HIDWORD(v42);
  *((_WORD *)a3 + 2) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 3) = *((_WORD *)a1 + 3);
  *((_DWORD *)a3 + 2) = a1[2];
  *((_DWORD *)a3 + 3) = a1[3];
  v5 = RtlULongPtrAdd(0x14u, v15, (int *)&v45);
  if ( v5 < 0 )
    return v5;
  v5 = RtlULongPtrAdd(v45, 3, (int *)&v45);
  if ( v5 < 0 )
    return v5;
  LODWORD(v29) = HIDWORD(v42);
  v17 = (char *)a1 + *a1;
  v45 &= 0xFFFFFFFC;
  v16 = v45;
  memcpy(a3 + 20, v17, v29);
  v18 = *((_WORD *)a3 + 2);
  *(_DWORD *)a3 = a3 + 20;
  HIDWORD(v42) = &a3[v16];
  if ( !v18 )
    return -1073741705;
  if ( v18 <= 2u )
  {
LABEL_80:
    v5 = RtlULongLongToUInt(
           (int *)&Size + 1,
           8 * *((_DWORD *)a3 + 3),
           (unsigned __int64)*((unsigned int *)a3 + 3) >> 29);
    if ( v5 >= 0 )
    {
      v5 = RtlULongPtrAdd(v45, SHIDWORD(Size), (int *)&v45);
      if ( v5 >= 0 )
      {
        *((_DWORD *)a3 + 4) = HIDWORD(v42);
        if ( *((_DWORD *)a3 + 3) )
        {
          v24 = (int *)(a1 + 4);
          v38 = (int *)(a1 + 4);
          do
          {
            v25 = *v24;
            v26 = *((_DWORD *)a3 + 4);
            *(_DWORD *)(v26 + 8 * v4) = *(unsigned int *)((char *)a1 + *v24);
            *(_DWORD *)(v26 + 8 * v4++ + 4) = *(unsigned int *)((char *)a1 + v25 + 4);
            v24 = ++v38;
          }
          while ( v4 < *((_DWORD *)a3 + 3) );
        }
      }
    }
    return v5;
  }
  if ( v18 != 3 )
  {
    if ( v18 == 5 )
    {
LABEL_61:
      v5 = RtlULongLongToUInt(
             (int *)&Size + 1,
             8 * *((_DWORD *)a3 + 3),
             (unsigned __int64)*((unsigned int *)a3 + 3) >> 29);
      if ( v5 >= 0 )
      {
        v5 = RtlULongPtrAdd(v45, SHIDWORD(Size), (int *)&v45);
        if ( v5 >= 0 )
        {
          *((_DWORD *)a3 + 4) = HIDWORD(v42);
          v43 = 0;
          HIDWORD(v42) = &a3[v45];
          if ( *((_DWORD *)a3 + 3) )
          {
            v19 = (int)a1;
            v20 = a1 + 4;
            LODWORD(Size) = a1 + 4;
            do
            {
              v37 = *(_DWORD *)(v19 + *v20);
              v5 = RtlULongPtrAdd(v45, v37, (int *)&v45);
              if ( v5 < 0 )
                break;
              v5 = RtlULongPtrAdd(v45, 3, (int *)&v45);
              if ( v5 < 0 )
                break;
              v21 = *((_DWORD *)a3 + 4);
              v22 = v43;
              v45 &= 0xFFFFFFFC;
              *(_DWORD *)(v21 + 8 * v43) = 0;
              if ( v37 )
              {
                LODWORD(v30) = v37;
                memcpy((void *)HIDWORD(v42), (char *)a1 + *(_DWORD *)Size + 4, v30);
                v22 = v43;
                *(_DWORD *)(*((_DWORD *)a3 + 4) + 8 * v43) = HIDWORD(v42);
              }
              *(_DWORD *)(*((_DWORD *)a3 + 4) + 8 * v22 + 4) = v37;
              HIDWORD(v42) = &a3[v45];
              v20 = (_DWORD *)(Size + 4);
              v43 = v22 + 1;
              v23 = v22 + 1 < *((_DWORD *)a3 + 3);
              v19 = (int)a1;
              LODWORD(Size) = Size + 4;
            }
            while ( v23 );
          }
        }
      }
      return v5;
    }
    if ( v18 != 6 )
    {
      if ( v18 == 16 )
        goto LABEL_61;
      return -1073741705;
    }
    goto LABEL_80;
  }
  v5 = RtlULongLongToUInt((int *)&Size + 1, 4 * *((_DWORD *)a3 + 3), (unsigned __int64)*((unsigned int *)a3 + 3) >> 30);
  if ( v5 >= 0 )
  {
    v5 = RtlULongPtrAdd(v45, SHIDWORD(Size), (int *)&v45);
    if ( v5 >= 0 )
    {
      *((_DWORD *)a3 + 4) = HIDWORD(v42);
      HIDWORD(v42) = &a3[v45];
      if ( *((_DWORD *)a3 + 3) )
      {
        do
        {
          Srcb = (char *)a1 + a1[v4 + 4];
          v5 = RtlStringCbLengthW(Srcb, &v43);
          if ( v5 < 0 )
            break;
          v5 = RtlULongPtrAdd(v43, 2, (int *)&v42);
          if ( v5 < 0 )
            break;
          v5 = RtlULongPtrAdd(v45, v42, (int *)&v45);
          if ( v5 < 0 )
            break;
          v5 = RtlULongPtrAdd(v45, 3, (int *)&v45);
          if ( v5 < 0 )
            break;
          LODWORD(v30) = v42;
          v45 &= 0xFFFFFFFC;
          memcpy((void *)HIDWORD(v42), Srcb, v30);
          *(_DWORD *)(*((_DWORD *)a3 + 4) + 4 * v4++) = HIDWORD(v42);
          HIDWORD(v42) = &a3[v45];
        }
        while ( v4 < *((_DWORD *)a3 + 3) );
      }
    }
  }
  return v5;
}
