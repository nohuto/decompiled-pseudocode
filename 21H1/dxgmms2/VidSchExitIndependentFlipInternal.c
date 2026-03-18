/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1C0034A1C
 * Callers:
 *     VidSchExitIndependentFlip @ 0x1C0034920 (VidSchExitIndependentFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CF18 (VidSchiCompletePendingFlipOnPlane.c)
 * Callees:
 *     VidSchiCancelIndependentFlips @ 0x1C002F270 (VidSchiCancelIndependentFlips.c)
 *     VidSchiFlushPendingTokenList @ 0x1C002FBD8 (VidSchiFlushPendingTokenList.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C0032A58 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x1C0033A10 (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
 */

void __fastcall VidSchExitIndependentFlipInternal(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char a5,
        unsigned __int8 a6,
        char *a7,
        _QWORD *a8)
{
  int v8; // r13d
  int v9; // r10d
  __int64 v10; // r14
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // r15d
  unsigned __int8 v17; // r9
  unsigned int v18; // ebx
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // r12
  unsigned int v27; // r15d
  unsigned int v28; // edi
  unsigned int v29; // ebx
  unsigned int v30; // r12d
  unsigned int v31; // r15d
  unsigned int v32; // edi
  __int64 v33; // rsi
  int v34; // r13d
  __int64 v35; // rcx
  unsigned int v36; // edi
  char v37; // r15
  unsigned int v38; // ebx
  __int64 v39; // rsi
  unsigned int v40; // r8d
  __int64 v41; // r11
  unsigned int v42; // r9d
  unsigned int v43; // r10d
  int v44; // r8d
  __int64 v45; // r9
  _QWORD *v46; // rdx
  int v47; // [rsp+68h] [rbp-91h]
  struct _VIDSCH_INDEPENDENT_FLIP_STATE *v48; // [rsp+70h] [rbp-89h]
  unsigned int v49; // [rsp+78h] [rbp-81h] BYREF
  unsigned int v50; // [rsp+7Ch] [rbp-7Dh]
  unsigned int v51; // [rsp+80h] [rbp-79h]
  __int64 v52; // [rsp+88h] [rbp-71h]
  _DWORD v53[4]; // [rsp+90h] [rbp-69h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-59h]
  _DWORD v55[4]; // [rsp+A8h] [rbp-51h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-41h]
  unsigned int v57; // [rsp+C0h] [rbp-39h] BYREF
  int v58; // [rsp+C4h] [rbp-35h]
  unsigned int v59; // [rsp+C8h] [rbp-31h]
  __int64 v60; // [rsp+D0h] [rbp-29h]
  _DWORD v61[4]; // [rsp+D8h] [rbp-21h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-11h]

  v8 = 0;
  v9 = *(_DWORD *)(a2 + 3408);
  v10 = a2;
  v47 = 0;
  *a7 = 0;
  if ( v9 >= 0 )
  {
    v11 = *(_DWORD **)(a2 + 3232);
    do
    {
      if ( *v11 == *a3 && v11[1] == a3[1] )
        break;
      ++v8;
      v11 += 38;
    }
    while ( v8 <= v9 );
    v47 = v8;
  }
  v12 = *(_QWORD *)(v10 + 3232) + 152LL * v8;
  v48 = (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12;
  VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
    (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v49,
    (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
  v15 = v49;
  v16 = 3;
  v17 = a6;
  v18 = v51;
  while ( v15 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v14, v13);
    v20 = v18;
    v21 = v52;
    v19[3] = *(_QWORD *)a3;
    v19[4] = a4;
    v19[5] = *(unsigned int *)(v21 + 4 * v20);
    v19[6] = a6;
    WdLogEvent5_WdPresentTokenEvent(v19);
    v17 = a6;
    v13 = *(_QWORD *)(v12 + 88);
    v22 = *(_QWORD *)(v10 + 8LL * v50 + 3104) + 136LL + 216LL * *(unsigned int *)(v21 + 4 * v20);
    v14 = 5LL * *(unsigned int *)(v22 + 208);
    *(_QWORD *)(v22 + 8 * v14 + 80) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v22 + 8 * v14 + 48) = 0;
    *(_BYTE *)(v22 + 8 * v14 + 49) = a6;
    *(_QWORD *)(v22 + 8 * v14 + 52) = *(_QWORD *)a3;
    *(_QWORD *)(v22 + 8 * v14 + 64) = a4;
    *(_QWORD *)(v22 + 8 * v14 + 72) = v13;
    *(_DWORD *)(v22 + 208) = (*(_DWORD *)(v22 + 208) + 1) & 3;
    v23 = v49 >> 1 == 0;
    v15 = v49 >> 1;
    v49 >>= 1;
    if ( !v23 )
    {
      do
      {
        if ( (v15 & 1) != 0 )
          break;
        ++v50;
        v15 >>= 1;
      }
      while ( v15 );
      v49 = v15;
    }
    v18 = ++v51;
  }
  v24 = *(_QWORD *)(v12 + 88);
  ++*(_QWORD *)(v10 + 3400);
  v25 = *(_DWORD *)(v12 + 112);
  *a8 = v24;
  if ( (unsigned int)(v25 - 1) <= 1 )
  {
    if ( v17 || v25 != 1 )
      v16 = 0;
    *(_DWORD *)(v12 + 112) = v16;
    *(_WORD *)(v12 + 96) = 0;
    *(_DWORD *)(v12 + 100) = 0;
    *(_DWORD *)(v12 + 104) = 0;
    *(_BYTE *)(v12 + 98) = 0;
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v55,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v30 = v55[2];
    v31 = v55[1];
    v32 = v55[0];
    v33 = v56;
    while ( v32 )
    {
      VidSchiCancelIndependentFlips(
        (__int64)a1,
        v10,
        v31,
        *(_QWORD *)(*(_QWORD *)(v10 + 8LL * v31 + 3104) + 8LL * *(unsigned int *)(v33 + 4LL * v30) + 32),
        a7);
      VidSchiFlushPendingTokenList(a1, (struct _VIDSCH_GLOBAL *)v10, v31, *(_DWORD *)(v33 + 4LL * v30));
      while ( 1 )
      {
        v32 >>= 1;
        if ( !v32 || (v32 & 1) != 0 )
          break;
        ++v31;
      }
      ++v30;
    }
    v12 = (__int64)v48;
  }
  else
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v53,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v26 = v54;
    v27 = v53[2];
    v28 = v53[1];
    v29 = v53[0];
    while ( v29 )
    {
      VidSchiCancelIndependentFlips(
        (__int64)a1,
        v10,
        v28,
        *(_QWORD *)(*(_QWORD *)(v10 + 8LL * v28 + 3104) + 8LL * *(unsigned int *)(v26 + 4LL * v27) + 32),
        a7);
      while ( 1 )
      {
        v29 >>= 1;
        if ( !v29 || (v29 & 1) != 0 )
          break;
        ++v28;
      }
      ++v27;
    }
    *(_DWORD *)(v12 + 112) = 0;
  }
  v23 = bTracingEnabled == 0;
  v34 = v47;
  *a7 = 0;
  if ( !v23 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v57,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v36 = v59;
    v37 = v58;
    v38 = v57;
    v39 = v60;
    while ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0txqqqtxtx_EtwWriteTransfer(
          v35,
          (unsigned __int8)*a7,
          v36,
          0,
          *(_QWORD *)a3,
          v37,
          *(_DWORD *)(v39 + 4LL * v36),
          a5,
          *a7,
          a4,
          a6,
          *a8);
      while ( 1 )
      {
        v38 >>= 1;
        if ( !v38 || (v38 & 1) != 0 )
          break;
        ++v37;
      }
      ++v36;
    }
    v12 = (__int64)v48;
    v10 = a2;
    v34 = v47;
  }
  if ( a6 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v61,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v40 = v61[0];
    v41 = v62;
    v42 = v61[2];
    v43 = v61[1];
    while ( v40 )
    {
      *(_DWORD *)(216LL * *(unsigned int *)(v41 + 4LL * v42) + *(_QWORD *)(v10 + 8LL * v43 + 3104) + 172) = -1;
      while ( 1 )
      {
        v40 >>= 1;
        if ( !v40 || (v40 & 1) != 0 )
          break;
        ++v43;
      }
      ++v42;
    }
    *(_QWORD *)v12 = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    if ( v34 == *(_DWORD *)(v10 + 3408) )
    {
      v44 = v34 - 1;
      if ( v34 - 1 >= 0 )
      {
        v45 = v44;
        v46 = (_QWORD *)(*(_QWORD *)(v10 + 3232) + 152LL * v44);
        do
        {
          if ( *v46 )
            break;
          --v44;
          v46 -= 19;
          --v45;
        }
        while ( v45 >= 0 );
      }
      *(_DWORD *)(v10 + 3408) = v44;
    }
  }
}
