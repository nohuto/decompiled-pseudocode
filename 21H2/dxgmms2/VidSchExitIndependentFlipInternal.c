/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1C00197B0
 * Callers:
 *     VidSchExitIndependentFlip @ 0x1C0019340 (VidSchExitIndependentFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C001AE48 (VidSchiCompletePendingFlipOnPlane.c)
 * Callees:
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C0019AE0 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0019B18 (VidSchiFlushPendingTokenList.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0019BA8 (VidSchiCancelIndependentFlips.c)
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x1C003C55C (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchExitIndependentFlipInternal(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char a5,
        unsigned __int8 a6,
        char *a7,
        _QWORD *a8)
{
  int v8; // r10d
  __int64 v9; // r14
  int v10; // r13d
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  _QWORD *v13; // r11
  unsigned int v14; // eax
  int v15; // r15d
  unsigned int v16; // ecx
  __int64 v17; // r10
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  int v25; // ecx
  __int64 result; // rax
  unsigned int v27; // r12d
  unsigned int v28; // r15d
  unsigned int v29; // edi
  __int64 v30; // rsi
  int v31; // r13d
  int v32; // ecx
  unsigned int v33; // edi
  char v34; // r15
  unsigned int v35; // ebx
  __int64 v36; // rsi
  unsigned int v37; // r8d
  __int64 v38; // r11
  unsigned int v39; // r9d
  unsigned int v40; // r10d
  int v41; // r8d
  __int64 v42; // r12
  unsigned int v43; // r15d
  unsigned int v44; // edi
  unsigned int v45; // ebx
  __int64 v46; // r9
  _DWORD *v47; // rdx
  int v48; // [rsp+68h] [rbp-71h]
  struct _VIDSCH_INDEPENDENT_FLIP_STATE *v49; // [rsp+70h] [rbp-69h]
  unsigned int v50; // [rsp+78h] [rbp-61h] BYREF
  unsigned int v51; // [rsp+7Ch] [rbp-5Dh]
  unsigned int v52; // [rsp+80h] [rbp-59h]
  __int64 v53; // [rsp+88h] [rbp-51h]
  unsigned int v54; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v55; // [rsp+94h] [rbp-45h]
  unsigned int v56; // [rsp+98h] [rbp-41h]
  __int64 v57; // [rsp+A0h] [rbp-39h]
  unsigned int v58; // [rsp+A8h] [rbp-31h] BYREF
  int v59; // [rsp+ACh] [rbp-2Dh]
  unsigned int v60; // [rsp+B0h] [rbp-29h]
  __int64 v61; // [rsp+B8h] [rbp-21h]
  _DWORD v62[4]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-9h]

  v8 = *(_DWORD *)(a2 + 3512);
  v48 = 0;
  v9 = a2;
  v10 = 0;
  *a7 = 0;
  if ( v8 >= 0 )
  {
    v11 = *(_DWORD **)(a2 + 3328);
    do
    {
      if ( *v11 == *a3 && v11[1] == a3[1] )
        break;
      ++v10;
      v11 += 40;
    }
    while ( v10 <= v8 );
    v48 = v10;
  }
  v12 = *(_QWORD *)(v9 + 3328) + 160LL * v10;
  v49 = (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12;
  VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
    (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v50,
    (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
  v14 = v50;
  v15 = 3;
  v16 = v52;
  v17 = a4;
  while ( v14 )
  {
    v18 = v53;
    v19 = v16;
    WdLogSingleEntry4(8LL, *v13, v17, *(unsigned int *)(v53 + 4LL * v16), a6);
    v13 = a3;
    v17 = a4;
    v20 = *(_QWORD *)(v12 + 88);
    v21 = *(_QWORD *)(v9 + 8LL * v51 + 3200) + 144LL + 280LL * *(unsigned int *)(v18 + 4 * v19);
    v22 = 5LL * *(unsigned int *)(v21 + 216);
    *(_QWORD *)(v21 + 8 * v22 + 88) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v21 + 8 * v22 + 56) = 0;
    *(_BYTE *)(v21 + 8 * v22 + 57) = a6;
    *(_QWORD *)(v21 + 8 * v22 + 60) = *(_QWORD *)a3;
    *(_QWORD *)(v21 + 8 * v22 + 72) = a4;
    *(_QWORD *)(v21 + 8 * v22 + 80) = v20;
    *(_DWORD *)(v21 + 216) = (*(_DWORD *)(v21 + 216) + 1) & 3;
    v23 = v50 >> 1 == 0;
    v14 = v50 >> 1;
    v50 >>= 1;
    if ( !v23 )
    {
      do
      {
        if ( (v14 & 1) != 0 )
          break;
        ++v51;
        v14 >>= 1;
      }
      while ( v14 );
      v50 = v14;
    }
    v16 = ++v52;
  }
  v24 = *(_QWORD *)(v12 + 88);
  *(_QWORD *)(v12 + 152) = 0LL;
  ++*(_QWORD *)(v9 + 3504);
  v25 = *(_DWORD *)(v12 + 112);
  *a8 = v24;
  if ( (unsigned int)(v25 - 1) > 1 )
  {
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v54,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v42 = v57;
    v43 = v56;
    v44 = v55;
    v45 = v54;
    while ( v45 )
    {
      result = VidSchiCancelIndependentFlips(
                 (_DWORD)a1,
                 v9,
                 v44,
                 *(_QWORD *)(*(_QWORD *)(v9 + 8LL * v44 + 3200) + 8LL * *(unsigned int *)(v42 + 4LL * v43) + 32),
                 (__int64)a7);
      while ( 1 )
      {
        v45 >>= 1;
        if ( !v45 || (v45 & 1) != 0 )
          break;
        ++v44;
      }
      ++v43;
    }
    *(_DWORD *)(v12 + 112) = 0;
  }
  else
  {
    if ( a6 || v25 != 1 )
      v15 = 0;
    *(_DWORD *)(v12 + 112) = v15;
    *(_WORD *)(v12 + 96) = 0;
    *(_QWORD *)(v12 + 100) = 0LL;
    *(_BYTE *)(v12 + 98) = 0;
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v54,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v27 = v56;
    v28 = v55;
    v29 = v54;
    v30 = v57;
    while ( v29 )
    {
      VidSchiCancelIndependentFlips(
        (_DWORD)a1,
        v9,
        v28,
        *(_QWORD *)(*(_QWORD *)(v9 + 8LL * v28 + 3200) + 8LL * *(unsigned int *)(v30 + 4LL * v27) + 32),
        (__int64)a7);
      result = VidSchiFlushPendingTokenList(a1, (struct _VIDSCH_GLOBAL *)v9);
      while ( 1 )
      {
        v29 >>= 1;
        if ( !v29 || (v29 & 1) != 0 )
          break;
        ++v28;
      }
      ++v27;
    }
    v12 = (__int64)v49;
  }
  v23 = bTracingEnabled == 0;
  v31 = v48;
  *a7 = 0;
  if ( !v23 )
  {
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v58,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v33 = v60;
    v34 = v59;
    v35 = v58;
    v36 = v61;
    while ( v35 )
    {
      if ( (byte_1C006E941 & 1) != 0 )
        result = McTemplateK0txqqqtxtx_EtwWriteTransfer(
                   v32,
                   (unsigned __int8)*a7,
                   v33,
                   0,
                   *(_QWORD *)a3,
                   v34,
                   *(_DWORD *)(v36 + 4LL * v33),
                   a5,
                   *a7,
                   a4,
                   a6,
                   *a8);
      while ( 1 )
      {
        v35 >>= 1;
        if ( !v35 || (v35 & 1) != 0 )
          break;
        ++v34;
      }
      ++v33;
    }
    v12 = (__int64)v49;
    v9 = a2;
    v31 = v48;
  }
  if ( a6 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v62,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v37 = v62[0];
    v38 = v63;
    v39 = v62[2];
    v40 = v62[1];
    while ( v37 )
    {
      *(_DWORD *)(280LL * *(unsigned int *)(v38 + 4LL * v39) + *(_QWORD *)(v9 + 8LL * v40 + 3200) + 180) = -1;
      while ( 1 )
      {
        v37 >>= 1;
        if ( !v37 || (v37 & 1) != 0 )
          break;
        ++v40;
      }
      ++v39;
    }
    result = 0LL;
    *(_QWORD *)v12 = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    if ( v31 == *(_DWORD *)(v9 + 3512) )
    {
      v41 = v31 - 1;
      if ( v31 - 1 >= 0 )
      {
        v46 = v41;
        v47 = (_DWORD *)(*(_QWORD *)(v9 + 3328) + 160LL * v41);
        do
        {
          result = (unsigned int)(*v47 | v47[1]);
          if ( *(_QWORD *)v47 )
            break;
          --v41;
          v47 -= 40;
          --v46;
        }
        while ( v46 >= 0 );
      }
      *(_DWORD *)(v9 + 3512) = v41;
    }
  }
  return result;
}
