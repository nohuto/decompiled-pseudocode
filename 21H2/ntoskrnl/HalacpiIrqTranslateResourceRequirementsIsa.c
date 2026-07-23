/*
 * XREFs of HalacpiIrqTranslateResourceRequirementsIsa @ 0x1407C0FF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1403C56C0 (HalpIsInterruptTypeSecondary.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalacpiIrqTranslateResourceRequirementsIsa(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  __int64 v7; // rbp
  unsigned int v10; // r13d
  unsigned int v11; // esi
  SIZE_T v12; // r15
  char *v13; // rax
  char *v14; // r14
  unsigned int v15; // ecx
  unsigned __int16 v16; // dx
  char v17; // r12
  int v18; // r15d
  char *v19; // r9
  unsigned int v20; // ecx
  unsigned int v21; // eax
  int v22; // r8d
  _BYTE *v23; // rax
  _BYTE *v24; // r15
  unsigned int *v25; // r8
  unsigned int v26; // edx
  unsigned int v27; // r10d
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v32; // eax
  PVOID PoolWithTag; // rax
  _OWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  _DWORD *v39; // r9
  __int64 v40; // r11
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-48h]
  char *v42; // [rsp+28h] [rbp-40h]
  __int16 v43; // [rsp+78h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  v7 = 0LL;
  v10 = 0;
  if ( v5 + 0x100000 <= 0xFFFFE )
    goto LABEL_29;
  v11 = *(_DWORD *)(a2 + 12);
  if ( v11 + 0x100000 <= 0xFFFFE )
    return 3221225473LL;
  if ( HalpIsInterruptTypeSecondary(0, v5) && HalpIsInterruptTypeSecondary(0, v11) )
  {
LABEL_29:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206C6148u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *a4 = 1;
      v34 = (_OWORD *)*a5;
      *v34 = *(_OWORD *)a2;
      v34[1] = *(_OWORD *)(a2 + 16);
      return 0LL;
    }
    return 3221225626LL;
  }
  v12 = 32 * (v11 - v5 + 3);
  NumberOfBytes = v12;
  v13 = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x206C6148u);
  v42 = v13;
  v14 = v13;
  if ( !v13 )
    return 3221225626LL;
  memset(v13, 0, (unsigned int)v12);
  v15 = *(_DWORD *)(a2 + 8);
  if ( v15 > 2 || (v32 = *(_DWORD *)(a2 + 12), v32 < 2) )
  {
    v7 = 1LL;
    *(_OWORD *)v14 = *(_OWORD *)a2;
    *((_OWORD *)v14 + 1) = *(_OWORD *)(a2 + 16);
  }
  else
  {
    if ( v15 < 2 )
    {
      v7 = 1LL;
      *(_OWORD *)v14 = *(_OWORD *)a2;
      *((_OWORD *)v14 + 1) = *(_OWORD *)(a2 + 16);
      *((_DWORD *)v14 + 2) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v14 + 3) = 1;
      v32 = *(_DWORD *)(a2 + 12);
    }
    if ( v32 > 2 )
    {
      v35 = 32LL * (unsigned int)v7;
      v7 = (unsigned int)(v7 + 1);
      *(_OWORD *)&v14[v35] = *(_OWORD *)a2;
      *(_OWORD *)&v14[v35 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v14[v35 + 12] = *(_DWORD *)(a2 + 12);
      *(_DWORD *)&v14[v35 + 8] = 3;
    }
    if ( *(_DWORD *)(a2 + 8) > 9u || *(_DWORD *)(a2 + 12) < 9u )
    {
      v36 = 32LL * (unsigned int)v7;
      v7 = (unsigned int)(v7 + 1);
      *(_OWORD *)&v14[v36] = *(_OWORD *)a2;
      *(_OWORD *)&v14[v36 + 16] = *(_OWORD *)(a2 + 16);
      *(_DWORD *)&v14[v36 + 8] = 9;
      *(_DWORD *)&v14[v36 + 12] = 9;
    }
  }
  v16 = word_140C4A04E;
  v17 = 0;
  v43 = word_140C4A04E;
  v18 = 0;
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      v19 = &v14[32 * v18];
      v20 = *((_DWORD *)v19 + 3);
      if ( v20 >= 0x10 )
        break;
      v21 = *((_DWORD *)v19 + 2);
      if ( v21 >= 0x10 )
        break;
      v22 = v16;
      if ( v20 >= v16 && v21 <= v16 )
      {
        if ( v17 )
        {
          v6 = -1073741595;
          goto LABEL_24;
        }
        v17 = 1;
        if ( v21 < v16 )
        {
          v37 = 32LL * (unsigned int)v7;
          LODWORD(v7) = v7 + 1;
          *(_DWORD *)&v14[v37 + 8] = v21;
          *(_DWORD *)&v14[v37 + 12] = v16 - 1;
          v20 = *((_DWORD *)v19 + 3);
        }
        if ( v20 > v16 )
        {
          v38 = 32LL * (unsigned int)v7;
          LODWORD(v7) = v7 + 1;
          *(_DWORD *)&v14[v38 + 8] = v22 + 1;
          *(_DWORD *)&v14[v38 + 12] = *((_DWORD *)v19 + 3);
        }
        memmove(&v14[32 * v18], v19 + 32, 32LL * (unsigned int)(v7 - v18));
        v16 = v43;
        v7 = (unsigned int)(v7 - 1);
      }
      if ( ++v18 >= (unsigned int)v7 )
        goto LABEL_12;
    }
    v6 = -1073741823;
  }
  else
  {
LABEL_12:
    v23 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x206C6148u);
    v24 = v23;
    if ( v23 )
    {
      memset(v23, 0, NumberOfBytes);
      if ( (_DWORD)v7 )
      {
        v25 = (unsigned int *)(v14 + 12);
        do
        {
          v26 = *(v25 - 1);
          v27 = *v25;
          do
          {
            v28 = v26;
            if ( v26 < v27 )
            {
              v39 = (_DWORD *)HalpPicVectorRedirect + v26;
              do
              {
                v40 = v26 + 1;
                if ( *v39 + 1 != *((_DWORD *)HalpPicVectorRedirect + v40) )
                  break;
                ++v39;
                ++v26;
              }
              while ( (unsigned int)v40 < v27 );
            }
            v29 = 32LL * v10;
            *(_OWORD *)&v24[v29] = *(_OWORD *)a2;
            *(_OWORD *)&v24[v29 + 16] = *(_OWORD *)(a2 + 16);
            if ( v10 )
              v24[v29] = 8;
            ++v10;
            *(_DWORD *)&v24[v29 + 8] = *((_DWORD *)HalpPicVectorRedirect + v28);
            v30 = v26++;
            *(_DWORD *)&v24[v29 + 12] = *((_DWORD *)HalpPicVectorRedirect + v30);
          }
          while ( v26 <= v27 );
          v25 += 8;
          --v7;
        }
        while ( v7 );
        v14 = v42;
      }
      *a4 = v10;
      if ( v10 )
        *a5 = v24;
      else
        ExFreePoolWithTag(v24, 0);
    }
    else
    {
      v6 = -1073741670;
    }
  }
LABEL_24:
  ExFreePoolWithTag(v14, 0);
  return v6;
}
