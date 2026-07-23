/*
 * XREFs of MiCaptureImageCfgContext @ 0x1406C1AA0
 * Callers:
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiFreeImageCfgContext @ 0x1402A37F0 (MiFreeImageCfgContext.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiLogRelocationRva @ 0x1406C1F24 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiCaptureImageCfgContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        int *a10,
        __int64 a11)
{
  unsigned int v12; // esi
  int v13; // ebx
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  unsigned int v16; // r8d
  unsigned __int64 v17; // r14
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned int v22; // r13d
  unsigned __int64 v23; // r9
  unsigned int v24; // r8d
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  size_t v27; // r14
  size_t v28; // rdi
  char *Pool; // rax
  unsigned int v31; // ecx
  unsigned __int64 v32; // rdx
  int v33; // ecx
  unsigned __int64 v34; // [rsp+30h] [rbp-58h]
  char *v35; // [rsp+40h] [rbp-48h]
  unsigned int v40; // [rsp+B8h] [rbp+30h]

  v12 = 0;
  v13 = 0;
  *a10 = 0;
  v14 = a11;
  *(_OWORD *)a11 = 0LL;
  *(_OWORD *)(a11 + 16) = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( *(_WORD *)(a7 + 48) == 523 )
  {
    v17 = *(_QWORD *)(a8 + 128);
    v18 = *(_DWORD *)(a8 + 136);
    v40 = v18;
    v19 = *(_DWORD *)(a8 + 144);
    v20 = v19 & 0x4000;
    if ( (v19 & 0x4000) != 0 && a9 >= 0xB0 )
    {
      v15 = *(_QWORD *)(a8 + 160);
      v16 = *(_DWORD *)(a8 + 168);
    }
    v21 = *(_QWORD *)(a8 + 120);
  }
  else
  {
    v17 = *(unsigned int *)(a8 + 80);
    v18 = *(_DWORD *)(a8 + 84);
    v40 = v18;
    v19 = *(_DWORD *)(a8 + 88);
    v20 = v19 & 0x4000;
    if ( (v19 & 0x4000) != 0 && a9 >= 0x70 )
    {
      v15 = *(unsigned int *)(a8 + 104);
      v16 = *(_DWORD *)(a8 + 108);
    }
    v21 = *(unsigned int *)(a8 + 76);
  }
  v34 = v21;
  if ( (v19 & 0x400) != 0 && v17 )
  {
    v22 = (v19 >> 28) + 4;
    if ( v17 >= a4 && v18 && v18 < 0xFFFFFFFF / v22 )
    {
      if ( v20 && v15 )
      {
        if ( v15 < a4 || !v16 || v16 >= 0xFFFFFFFF / v22 )
        {
          v13 = -1073741819;
          dword_140C4CC88 = 10;
          goto LABEL_32;
        }
        v23 = v15 - a4;
        v24 = v22 * v16;
        v25 = v23 + v24;
        if ( v25 <= v23 || (v26 = a7, v25 > *(unsigned int *)(a7 + 16)) || v24 + 4 < v24 )
        {
          v13 = -1073741819;
          dword_140C4CC88 = 11;
          goto LABEL_32;
        }
      }
      else
      {
        v26 = a7;
      }
      v27 = v17 - a4;
      v28 = v18 * v22;
      if ( v28 + v27 <= v27 || v28 + v27 > *(unsigned int *)(v26 + 16) || (int)v28 + 4 < (unsigned int)v28 )
      {
        v13 = -1073741819;
        dword_140C4CC88 = 5;
      }
      else
      {
        Pool = (char *)MiAllocatePool(256, (unsigned int)v28, 0x5443694Du);
        v35 = Pool;
        if ( !Pool )
        {
          v13 = -1073741670;
          dword_140C4CC88 = 6;
LABEL_31:
          v14 = a11;
          goto LABEL_32;
        }
        memmove(Pool, (const void *)(v27 + a3), v28);
        if ( a2 )
          MiLogRelocationRva((unsigned int)v27, (unsigned int)v28, a2, a1);
        v31 = 0;
        if ( (_DWORD)v28 )
        {
          while ( 1 )
          {
            v32 = *(unsigned int *)&v35[v31];
            if ( v32 >= a5 )
              break;
            if ( v31 && (unsigned int)v32 < v12 )
            {
              dword_140C4CC88 = 9;
              goto LABEL_45;
            }
            v12 = *(_DWORD *)&v35[v31];
            v31 += v22;
            if ( v31 >= (unsigned int)v28 )
              goto LABEL_46;
          }
          dword_140C4CC88 = 8;
LABEL_45:
          v13 = -1073741701;
        }
LABEL_46:
        if ( v13 < 0 )
          goto LABEL_31;
        if ( v34 )
        {
          if ( v34 < a4 || v34 >= a4 + a5 )
          {
            v13 = -1073741701;
            dword_140C4CC88 = 10;
            goto LABEL_31;
          }
          v14 = a11;
          *(_DWORD *)(a11 + 24) = v34 - a4;
        }
        else
        {
          v14 = a11;
        }
        v33 = *a10 | 1;
        *a10 = v33;
        if ( (*(_WORD *)(a7 + 60) & 0x4000) != 0 )
        {
          v33 |= 2u;
          *a10 = v33;
        }
        if ( (v19 & 0x8000) != 0 )
        {
          v33 |= 0x10u;
          *a10 = v33;
        }
        if ( (v19 & 0x4000) != 0 )
        {
          v33 |= 8u;
          *a10 = v33;
        }
        if ( (v19 & 0x100000) != 0 )
        {
          v33 |= 0x20u;
          *a10 = v33;
        }
        if ( (v19 & 0x400000) != 0 )
          *a10 = v33 | 0x40;
        *(_DWORD *)v14 = v19;
        *(_QWORD *)(v14 + 8) = v35;
        *(_DWORD *)(v14 + 16) = v40;
        *(_DWORD *)(v14 + 20) = v22;
      }
    }
    else
    {
      v13 = -1073741819;
      dword_140C4CC88 = 4;
    }
  }
LABEL_32:
  if ( v13 < 0 )
    MiFreeImageCfgContext(v14);
  return (unsigned int)v13;
}
