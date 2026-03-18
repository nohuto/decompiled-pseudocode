/*
 * XREFs of ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00E0E00
 * Callers:
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00E1224 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     memmove @ 0x1C001D980 (memmove.c)
 *     ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C00A4420 (-BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::WriteDmaBufferToMinidump(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned __int64 a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        unsigned int a15,
        unsigned int a16)
{
  unsigned __int8 *v16; // r10
  struct _VIDMM_DMA_BUFFER *v17; // r15
  unsigned __int64 v19; // r11
  size_t v20; // r13
  unsigned __int64 v21; // rdi
  unsigned int v22; // esi
  unsigned int v23; // edx
  int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // r12d
  unsigned int v27; // ebx
  size_t v28; // rbp
  size_t v29; // r14
  unsigned __int64 v30; // r8
  unsigned int v31; // r13d
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r9d
  unsigned int v37; // edx
  unsigned int v38; // esi
  unsigned int *v39; // rcx
  int v40; // r12d
  unsigned int v41; // eax
  unsigned int v42; // r9d
  unsigned __int64 v43; // rdx
  unsigned int v44; // ecx
  unsigned __int64 v45; // r8
  unsigned int v46; // esi
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // ecx
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdi
  unsigned __int8 *v54; // r12
  unsigned __int8 *v55; // rsi
  size_t v56; // rbx
  unsigned __int64 v57; // rbp
  unsigned __int64 v58; // rbp
  void *Src; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v60; // [rsp+28h] [rbp-60h]
  size_t v61; // [rsp+30h] [rbp-58h]
  unsigned int v65; // [rsp+A8h] [rbp+20h]
  int v66; // [rsp+B0h] [rbp+28h]
  unsigned int v67; // [rsp+B8h] [rbp+30h]
  unsigned int v68; // [rsp+C0h] [rbp+38h]

  v16 = a3;
  v17 = a2;
  if ( a4 < 0x48 )
    return 0LL;
  v19 = *((_QWORD *)a2 + 5);
  v20 = a4 - 72;
  v21 = a16;
  v66 = 0;
  v22 = 0;
  v23 = a13;
  v24 = 0;
  v25 = a12;
  v26 = 0;
  v27 = -1;
  v68 = 0;
  v28 = 0LL;
  v65 = 0;
  v29 = 0LL;
  v67 = 0;
  LODWORD(Src) = 0;
  v30 = v20;
  v60 = -1;
  v61 = v20;
  if ( v20 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v21 )
      {
        v32 = 64LL;
        if ( v30 < 0x40 )
          v32 = v30;
        if ( v32 >= v21 )
        {
          v33 = v21;
        }
        else
        {
          v33 = 64LL;
          if ( v30 < 0x40 )
            v33 = v30;
        }
        v21 -= v33;
        v29 += v33;
        v30 -= v33;
        if ( !v19 )
          goto LABEL_49;
      }
      else if ( !v19 )
      {
        goto LABEL_50;
      }
      v34 = 1024LL;
      if ( v30 < 0x400 )
        v34 = v30;
      if ( v34 >= v19 )
      {
        v35 = v19;
      }
      else
      {
        v35 = 1024LL;
        if ( v30 < 0x400 )
          v35 = v30;
      }
      v28 += v35;
      v19 -= v35;
      v30 -= v35;
      if ( v23 )
      {
        v36 = 0;
        v37 = a12;
        if ( a12 < a13 )
        {
          v38 = v67;
          v39 = (unsigned int *)(*((_QWORD *)v17 + 15) + 8 * (3LL * a12 + 2));
          do
          {
            v40 = v36;
            if ( *v39 < v28 )
            {
              LODWORD(Src) = v37;
              v41 = v37;
              if ( !v36 )
                v36 = 1;
              if ( v40 )
                v41 = v38;
              v38 = v41;
            }
            ++v37;
            v39 += 6;
          }
          while ( v37 < a13 );
          v17 = a2;
          v67 = v38;
          v26 = v38;
          v22 = v68;
        }
        v42 = v26;
        v43 = v30 / 0x18;
        v44 = (_DWORD)Src - v26 - v22 + 1;
        if ( (unsigned int)(v30 / 0x18) >= v44 )
          v43 = v44;
        v22 += v43;
        v68 = v22;
        v45 = v30 - 24 * v43;
        if ( v26 <= (unsigned int)Src )
        {
          v46 = v66;
          do
          {
            v47 = *(_DWORD *)(*((_QWORD *)v17 + 15) + 24LL * v42);
            v48 = v47;
            if ( v27 < v47 )
              v48 = v27;
            v27 = v48;
            if ( v46 > v47 )
              v47 = v46;
            ++v42;
            v46 = v47;
          }
          while ( v42 <= (unsigned int)Src );
          v17 = a2;
          v31 = v47;
          v22 = v68;
          v26 = v67;
        }
        v49 = *((_DWORD *)v17 + 13) - 1;
        if ( v31 < v49 )
          v49 = v31;
        v66 = v49;
        v31 = v49;
        v50 = v49 - v27 - v65 + 1;
        v51 = v45 / 0x18;
        if ( (unsigned int)(v45 / 0x18) >= v50 )
          v51 = v50;
        v24 = v51 + v65;
        v65 += v51;
        v52 = 3 * v51;
        v23 = a13;
        v30 = v45 - 8 * v52;
      }
LABEL_49:
      if ( !v30 )
      {
LABEL_50:
        v16 = a3;
        v20 = v61;
        v25 = a12;
        v60 = v27;
        break;
      }
    }
  }
  *(_QWORD *)v16 = a8;
  *((_QWORD *)v16 + 1) = a9;
  *((_DWORD *)v16 + 4) = a16;
  *((_DWORD *)v16 + 5) = a10;
  *((_DWORD *)v16 + 6) = a11;
  *((_DWORD *)v16 + 7) = v25;
  *((_DWORD *)v16 + 8) = v23;
  *((_DWORD *)v16 + 9) = a14;
  *((_DWORD *)v16 + 10) = a15;
  *((_DWORD *)v16 + 11) = v29;
  v53 = 72LL;
  *((_DWORD *)v16 + 12) = 0;
  *((_DWORD *)v16 + 13) = v28;
  *((_DWORD *)v16 + 14) = v26;
  v54 = v16 + 72;
  *((_DWORD *)v16 + 15) = v22;
  v55 = v16 + 72;
  *((_DWORD *)v16 + 16) = v27;
  v56 = v20;
  *((_DWORD *)v16 + 17) = v24;
  if ( v29 && v29 <= v20 )
  {
    memmove(v16 + 72, *((const void **)v17 + 16), v29);
    v53 = v29 + 72;
    v55 = &v54[v29];
    v56 = v20 - v29;
  }
  if ( v28 && v28 <= v56 )
  {
    Src = 0LL;
    VIDMM_DMA_POOL::BeginCPUAccess(this, v17, &Src);
    memmove(v55, Src, v28);
    v55 += v28;
    v53 += v28;
    v56 -= v28;
  }
  v57 = 24LL * v68;
  if ( v68 && v57 <= v56 )
  {
    memmove(v55, (const void *)(*((_QWORD *)v17 + 15) + 24LL * v67), 24LL * v68);
    v55 += v57;
    v53 += v57;
    v56 -= v57;
  }
  v58 = 24LL * v65;
  if ( v65 )
  {
    if ( v58 <= v56 )
    {
      memmove(v55, (const void *)(*((_QWORD *)v17 + 14) + 24LL * v60), 24LL * v65);
      v53 += v58;
    }
  }
  return v53;
}
