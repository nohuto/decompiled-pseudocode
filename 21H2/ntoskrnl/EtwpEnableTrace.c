/*
 * XREFs of EtwpEnableTrace @ 0x140789EA4
 * Callers:
 *     EtwEnableTrace @ 0x140789DE0 (EtwEnableTrace.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14079484C (EtwpEnableAutoLoggerProvider.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpEnableTrace(
        __int64 a1,
        __int128 *a2,
        _OWORD *a3,
        __int16 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        int a9,
        const void **a10,
        const void **a11,
        void *Src,
        size_t Size,
        void *a14,
        size_t a15,
        void *a16,
        size_t a17,
        __int64 a18)
{
  const void **v18; // r15
  int v21; // r11d
  int v22; // r10d
  unsigned int v23; // r9d
  const void **v24; // r8
  int v25; // eax
  const void **v26; // r12
  unsigned int v27; // edx
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // eax
  int v31; // r8d
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // ebx
  int v36; // esi
  unsigned int v37; // esi
  char *PoolWithTag; // rax
  char *v39; // r14
  __int128 v40; // xmm0
  unsigned int v41; // ebx
  unsigned int v43; // eax
  char *v44; // rdi
  unsigned int v45; // ebp
  char *v46; // rsi
  unsigned int i; // r13d
  unsigned int j; // r15d
  __int64 v49; // rbx
  int v50; // ecx
  unsigned int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rbx
  size_t v54; // r8
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rbx
  __int64 v59; // rcx

  v18 = a10;
  v21 = 0;
  v22 = 120;
  if ( a10 )
  {
    v23 = 0;
    v24 = a10;
    do
    {
      v25 = *(unsigned __int16 *)v24;
      if ( (_WORD)v25 && v24[1] )
      {
        if ( (unsigned __int16)v25 > 0x400u )
          return (unsigned int)-1073741811;
        ++v21;
        v22 += v25 + 2;
      }
      ++v23;
      v24 += 2;
    }
    while ( v23 < 4 );
  }
  v26 = a11;
  if ( a11 )
  {
    v27 = 0;
    v28 = (__int64)a11;
    do
    {
      if ( *(_QWORD *)v28 )
      {
        v43 = *(unsigned __int16 *)(*(_QWORD *)v28 + 2LL);
        if ( (_WORD)v43 )
        {
          if ( v43 > 0x40 )
            return (unsigned int)-1073741811;
          ++v21;
          v22 += 2 * v43 + 4;
        }
      }
      ++v27;
      v28 += 8LL;
    }
    while ( v27 < 2 );
  }
  v29 = v21 + 1;
  if ( !(_DWORD)Size )
    v29 = v21;
  v30 = v22 + Size;
  if ( !(_DWORD)Size )
    v30 = v22;
  v31 = v29 + 1;
  if ( !(_DWORD)a15 )
    v31 = v29;
  v32 = v30 + a15;
  if ( !(_DWORD)a15 )
    v32 = v30;
  v33 = v31 + 1;
  if ( !(_DWORD)a17 )
    v33 = v31;
  v34 = v32 + a17;
  if ( !(_DWORD)a17 )
    v34 = v32;
  v35 = v33 + 1;
  if ( !a18 )
    v35 = v33;
  v36 = v34 + 24;
  if ( !a18 )
    v36 = v34;
  v37 = 16 * v35 + v36;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v37, 0x74777445u);
  v39 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v37);
    *(_DWORD *)v39 = 3;
    *((_DWORD *)v39 + 1) = v37;
    if ( a3 )
      *(_OWORD *)(v39 + 56) = *a3;
    v40 = *a2;
    *((_DWORD *)v39 + 18) = a5;
    v39[76] = a6;
    *((_QWORD *)v39 + 12) = a8;
    *((_QWORD *)v39 + 11) = a7;
    *((_DWORD *)v39 + 20) = a9;
    *((_WORD *)v39 + 39) = a4;
    *((_DWORD *)v39 + 29) = v35;
    *(_OWORD *)(v39 + 40) = v40;
    if ( v35 )
    {
      v44 = v39 + 120;
      v45 = 0;
      v46 = &v39[16 * v35 + 120];
      for ( i = 0; i < 4; ++i )
      {
        if ( *(_WORD *)v18 && v18[1] )
        {
          if ( i )
          {
            if ( i == 1 )
            {
              *(_DWORD *)&v44[16 * v45 + 12] = -2147483632;
            }
            else if ( i == 2 )
            {
              *(_DWORD *)&v44[16 * v45 + 12] = -2147483616;
            }
            else
            {
              *(_DWORD *)&v44[16 * v45 + 12] = -2147450880;
            }
          }
          else
          {
            *(_DWORD *)&v44[16 * v45 + 12] = -2147483640;
          }
          v53 = 2LL * v45;
          v54 = (unsigned int)*(unsigned __int16 *)v18 + 2;
          *(_DWORD *)&v44[8 * v53 + 8] = v54;
          *(_QWORD *)&v44[8 * v53] = v46 - v39;
          memmove(v46, v18[1], v54);
          v55 = *(unsigned int *)&v44[16 * v45++ + 8];
          v46 += v55;
        }
        v18 += 2;
      }
      for ( j = 0; j < 2; ++j )
      {
        if ( *v26 && *((_WORD *)*v26 + 1) )
        {
          if ( j )
            *(_DWORD *)&v44[16 * v45 + 12] = -2147479552;
          else
            *(_DWORD *)&v44[16 * v45 + 12] = -2147483136;
          v49 = 2LL * v45;
          v50 = *((unsigned __int16 *)*v26 + 1);
          *(_QWORD *)&v44[8 * v49] = v46 - v39;
          v51 = 2 * v50 + 4;
          *(_DWORD *)&v44[8 * v49 + 8] = v51;
          memmove(v46, *v26, v51);
          v52 = *(unsigned int *)&v44[16 * v45++ + 8];
          v46 += v52;
        }
        ++v26;
      }
      if ( (_DWORD)Size )
      {
        v56 = 2LL * v45;
        *(_DWORD *)&v44[8 * v56 + 8] = Size;
        *(_DWORD *)&v44[8 * v56 + 12] = -2147482624;
        *(_QWORD *)&v44[8 * v56] = v46 - v39;
        memmove(v46, Src, (unsigned int)Size);
        v46 += *(unsigned int *)&v44[16 * v45++ + 8];
      }
      if ( (_DWORD)a15 )
      {
        v57 = 2LL * v45;
        *(_DWORD *)&v44[8 * v57 + 8] = a15;
        *(_DWORD *)&v44[8 * v57 + 12] = -2147475456;
        *(_QWORD *)&v44[8 * v57] = v46 - v39;
        memmove(v46, a14, (unsigned int)a15);
        v46 += *(unsigned int *)&v44[16 * v45++ + 8];
      }
      if ( (_DWORD)a17 )
      {
        v58 = 2LL * v45;
        *(_DWORD *)&v44[8 * v58 + 8] = a17;
        *(_DWORD *)&v44[8 * v58 + 12] = 0x80000000;
        *(_QWORD *)&v44[8 * v58] = v46 - v39;
        memmove(v46, a16, (unsigned int)a17);
        v46 += *(unsigned int *)&v44[16 * v45++ + 8];
      }
      if ( a18 )
      {
        v59 = 2LL * v45;
        *(_DWORD *)&v44[8 * v59 + 12] = -2147467264;
        *(_DWORD *)&v44[8 * v59 + 8] = 24;
        *(_QWORD *)&v44[8 * v59] = v46 - v39;
        *(_OWORD *)v46 = *(_OWORD *)a18;
        *((_QWORD *)v46 + 2) = *(_QWORD *)(a18 + 16);
      }
    }
    v41 = EtwpEnableGuid(a1, (__int64)v39, 0);
    ExFreePoolWithTag(v39, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v41;
}
