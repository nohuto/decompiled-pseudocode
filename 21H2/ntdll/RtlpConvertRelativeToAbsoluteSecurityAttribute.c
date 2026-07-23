/*
 * XREFs of RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA420
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x180044608 (RtlStringCbLengthW.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall RtlpConvertRelativeToAbsoluteSecurityAttribute(
        unsigned int *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // r15
  int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // r11d
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int *v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // ebp
  __int64 v21; // rcx
  unsigned int v22; // r11d
  int v23; // eax
  unsigned int v24; // r8d
  _DWORD *v25; // rcx
  unsigned int v26; // r14d
  unsigned __int16 v27; // ax
  char *v28; // rdx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned int v31; // ebp
  unsigned int v32; // r12d
  char *v33; // r14
  unsigned int *v34; // rcx
  unsigned int v35; // r13d
  unsigned int v36; // eax
  __int64 v37; // r15
  unsigned int v38; // ecx
  unsigned __int64 v39; // rax
  unsigned int v40; // ebp
  unsigned int v41; // r12d
  char *v42; // r14
  unsigned __int64 v43; // r13
  __int64 v44; // r15
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v51; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2;
  v51 = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( a2 < *a1 )
    return (unsigned int)-1073741705;
  v10 = a2 - *a1;
  if ( v10 < 4 )
    return (unsigned int)-1073741705;
  v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v10, &v51);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = v51 + 2;
  if ( (int)v51 + 2 < (unsigned int)v51 )
    return (unsigned int)-1073741675;
  if ( (int)v51 + 5 < (unsigned int)(v51 + 2) )
    return (unsigned int)-1073741675;
  v12 = ((v51 + 5) & 0xFFFFFFFC) + 32;
  if ( v12 < 0x20 )
    return (unsigned int)-1073741675;
  v13 = a1[3];
  if ( (unsigned __int64)(4 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v13) )
    return (unsigned int)-1073741705;
  v14 = *((_WORD *)a1 + 2);
  if ( !v14 )
    goto LABEL_49;
  if ( v14 <= 2u )
    goto LABEL_42;
  switch ( v14 )
  {
    case 3u:
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + 8 * (_DWORD)v13 < v12 )
        return (unsigned int)-1073741675;
      v12 += 8 * v13;
      v20 = 0;
      if ( (_DWORD)v13 )
      {
        while ( 1 )
        {
          v21 = a1[v20 + 4];
          if ( (unsigned int)v5 < (unsigned int)v21 || (unsigned int)(v5 - v21) < 2 )
            return (unsigned int)-1073741705;
          v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + v21), (unsigned int)(v5 - v21), &v51);
          if ( v9 < 0 )
            return (unsigned int)v9;
          if ( (int)v51 + 2 < (unsigned int)v51
            || (int)v51 + 5 < (unsigned int)(v51 + 2)
            || (((_DWORD)v51 + 5) & 0xFFFFFFFC) + v22 < v22 )
          {
            return (unsigned int)-1073741675;
          }
          ++v20;
          v12 = ((v51 + 5) & 0xFFFFFFFC) + v22;
          if ( v20 >= a1[3] )
            goto LABEL_49;
        }
      }
      goto LABEL_49;
    case 5u:
      goto LABEL_19;
    case 6u:
LABEL_42:
      v23 = 8 * v13;
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v23 + v12 < v12 )
        return (unsigned int)-1073741675;
      v12 += v23;
      v24 = 0;
      if ( (_DWORD)v13 )
      {
        v25 = a1 + 4;
        while ( (unsigned int)v5 >= *v25 && (unsigned int)(v5 - *v25) >= 8 )
        {
          ++v24;
          ++v25;
          if ( v24 >= (unsigned int)v13 )
            goto LABEL_49;
        }
        return (unsigned int)-1073741705;
      }
      goto LABEL_49;
  }
  if ( v14 != 16 )
    goto LABEL_49;
LABEL_19:
  v15 = 16 * v13;
  if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF || v15 + v12 < v12 )
    return (unsigned int)-1073741675;
  v12 += v15;
  v16 = 0;
  if ( (_DWORD)v13 )
  {
    v17 = a1 + 4;
    do
    {
      v18 = *v17;
      if ( (unsigned int)v5 < (unsigned int)v18 || (unsigned int)(v5 - v18) < 4 )
        return (unsigned int)-1073741705;
      v19 = *(unsigned int *)((char *)a1 + v18);
      if ( (int)v18 + 4 < (unsigned int)v18 )
        return (unsigned int)-1073741675;
      if ( (int)v5 - ((int)v18 + 4) < v19 )
        return (unsigned int)-1073741705;
      if ( v19 + 3 < v19 || ((v19 + 3) & 0xFFFFFFFC) + v12 < v12 )
        return (unsigned int)-1073741675;
      ++v16;
      ++v17;
      v12 += (v19 + 3) & 0xFFFFFFFC;
    }
    while ( v16 < (unsigned int)v13 );
  }
LABEL_49:
  if ( *a4 < v12 )
  {
    *a4 = v12;
    return (unsigned int)-1073741789;
  }
  if ( !a3 )
    return (unsigned int)-1073741811;
  *a4 = v12;
  memset(a3, 0, v12);
  *((_WORD *)a3 + 4) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 5) = *((_WORD *)a1 + 3);
  *((_DWORD *)a3 + 3) = a1[2];
  *((_DWORD *)a3 + 4) = a1[3];
  if ( v11 >= 0xFFFFFFE0 || v11 + 35 < v11 + 32 )
    return (unsigned int)-1073741675;
  v26 = (v11 + 35) & 0xFFFFFFFC;
  memmove(a3 + 4, (char *)a1 + *a1, v11);
  v27 = *((_WORD *)a3 + 4);
  v28 = (char *)a3 + v26;
  *a3 = a3 + 4;
  if ( !v27 )
    return (unsigned int)-1073741705;
  if ( v27 > 2u )
  {
    if ( v27 == 3 )
    {
      v38 = *((_DWORD *)a3 + 4);
      v39 = 8LL * v38;
      if ( v39 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v40 = v39 + v26;
      if ( (unsigned int)v39 + v26 < v26 )
        return (unsigned int)-1073741675;
      v41 = 0;
      v42 = (char *)a3 + v40;
      a3[3] = v28;
      if ( !v38 )
        return 0;
      v43 = v5;
      while ( 1 )
      {
        v44 = v41;
        v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + a1[v41 + 4]), v43, &v51);
        if ( v9 < 0 )
          return (unsigned int)v9;
        v45 = v51 + 2;
        if ( (int)v51 + 2 < (unsigned int)v51 )
          return (unsigned int)-1073741675;
        v46 = v45 + v40;
        if ( v45 + v40 < v40 || v46 + 3 < v46 )
          return (unsigned int)-1073741675;
        v40 = (v46 + 3) & 0xFFFFFFFC;
        memmove(v42, (char *)a1 + a1[v41++ + 4], v45);
        *(_QWORD *)(a3[3] + 8 * v44) = v42;
        v42 = (char *)a3 + v40;
        if ( v41 >= *((_DWORD *)a3 + 4) )
          return 0;
      }
    }
    if ( v27 == 5 )
    {
LABEL_60:
      v29 = *((_DWORD *)a3 + 4);
      v30 = 16LL * v29;
      if ( v30 <= 0xFFFFFFFF )
      {
        v31 = v30 + v26;
        if ( (unsigned int)v30 + v26 >= v26 )
        {
          v32 = 0;
          v33 = (char *)a3 + v31;
          a3[3] = v28;
          if ( v29 )
          {
            do
            {
              v34 = &a1[v32];
              v35 = *(unsigned int *)((char *)a1 + v34[4]);
              v36 = v31 + v35;
              if ( v31 + v35 < v31 || v36 + 3 < v36 )
                return (unsigned int)-1073741675;
              v37 = 2LL * v32;
              v31 = (v36 + 3) & 0xFFFFFFFC;
              *(_QWORD *)(a3[3] + 16LL * v32) = 0LL;
              if ( v35 )
              {
                memmove(v33, (char *)a1 + v34[4] + 4, v35);
                *(_QWORD *)(a3[3] + 16LL * v32) = v33;
              }
              ++v32;
              v33 = (char *)a3 + v31;
              *(_DWORD *)(a3[3] + 8 * v37 + 8) = v35;
            }
            while ( v32 < *((_DWORD *)a3 + 4) );
          }
          return 0;
        }
      }
      return (unsigned int)-1073741675;
    }
    if ( v27 != 6 )
    {
      if ( v27 == 16 )
        goto LABEL_60;
      return (unsigned int)-1073741705;
    }
  }
  v47 = *((_DWORD *)a3 + 4);
  v48 = 8LL * v47;
  if ( v48 > 0xFFFFFFFF || v26 + (unsigned int)v48 < v26 )
    return (unsigned int)-1073741675;
  a3[3] = v28;
  v9 = 0;
  if ( v47 )
  {
    do
    {
      v49 = v4++;
      *(_QWORD *)(a3[3] + 8 * v49) = *(_QWORD *)((char *)a1 + a1[v49 + 4]);
    }
    while ( v4 < *((_DWORD *)a3 + 4) );
  }
  return (unsigned int)v9;
}
