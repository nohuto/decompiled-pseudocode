/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1C008D3C0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008CEB0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::ModifyPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int8 *a7)
{
  int v8; // r13d
  __int64 v9; // r14
  unsigned __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // r10
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // eax

  v8 = 0;
  if ( *((_DWORD *)a3 + 15) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v25 = a4;
      v26 = a5;
      v27 = 16 * v25;
      do
      {
        v28 = *((_QWORD *)this + 4);
        v29 = v8 + 1;
        v27 += 16LL;
        if ( (*(_BYTE *)(v28 + v27 - 16) & 1) == 0 )
          v29 = v8;
        v8 = v29;
        *(_QWORD *)(v28 + v27 - 16) = *(_QWORD *)a3;
        --v26;
      }
      while ( v26 );
    }
  }
  else
  {
    v9 = *((_QWORD *)a3 + 4);
    if ( !v9 )
    {
      v10 = a6;
      if ( a4 < a4 + a5 )
      {
        v11 = a5;
        v12 = 16LL * a4;
        do
        {
          v13 = *((_QWORD *)this + 4);
          if ( (*(_BYTE *)(v13 + v12) & 1) != 0 )
            ++v8;
          *(_QWORD *)(v13 + v12) = *(_QWORD *)a3;
          v14 = *((_QWORD *)a3 + 9);
          if ( v14 )
            *(_QWORD *)(v12 + *((_QWORD *)this + 4) + 8) = *((_QWORD *)a3 + 3) + (v10 - *((_QWORD *)a3 + 3)) % v14;
          else
            *(_QWORD *)(v12 + *((_QWORD *)this + 4) + 8) = v10;
          v12 += 16LL;
          v15 = 16LL;
          if ( (*(_DWORD *)this & 0x40) == 0 )
            v15 = 1LL;
          v10 += v15;
          --v11;
        }
        while ( v11 );
      }
      goto LABEL_12;
    }
    v16 = 1LL;
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v16 = 16LL;
    v17 = a6;
    if ( a4 < a4 + a5 )
    {
      v18 = a5;
      v19 = *((unsigned int *)a3 + 10);
      v20 = 16LL * a4;
      while ( 1 )
      {
        v21 = *((_QWORD *)this + 4);
        if ( (*(_BYTE *)(v21 + v20) & 1) != 0 )
          ++v8;
        *(_QWORD *)(v21 + v20) = *(_QWORD *)a3;
        v22 = *((_QWORD *)a3 + 9);
        if ( v22 )
          break;
        v23 = (unsigned int)v17;
        if ( v19 )
          goto LABEL_26;
        v24 = *(_QWORD *)(v9 + 8LL * (unsigned int)v17 + 48);
LABEL_24:
        v17 += v16;
        *(_QWORD *)(v20 + *((_QWORD *)this + 4) + 8) = v24;
        v20 += 16LL;
        if ( !--v18 )
          goto LABEL_12;
      }
      v23 = (unsigned int)*((_QWORD *)a3 + 3) + (unsigned int)((v17 - *((_QWORD *)a3 + 3)) % v22);
      if ( !v19 )
      {
        v24 = *(_QWORD *)(v9 + 8 * v23 + 48);
        goto LABEL_24;
      }
LABEL_26:
      v24 = v23 + v19;
      goto LABEL_24;
    }
  }
LABEL_12:
  *((_DWORD *)this + 1) += a5 - v8;
  if ( v8 )
    *a7 = 1;
}
