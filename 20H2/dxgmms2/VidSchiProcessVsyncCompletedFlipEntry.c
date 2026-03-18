/*
 * XREFs of VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0002980
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004640 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000D8D0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F370 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00037A8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C0003E20 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     memset @ 0x1C00185C0 (memset.c)
 */

__int64 __fastcall VidSchiProcessVsyncCompletedFlipEntry(
        struct HwQueueStagingList *a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6)
{
  unsigned int v6; // r13d
  struct HwQueueStagingList *v7; // r10
  unsigned int v8; // ecx
  _DWORD *v9; // rdi
  __int64 v10; // r12
  __int64 v12; // rsi
  int v13; // r11d
  __int64 v14; // r15
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  __int64 v17; // rdi
  unsigned int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int16 v21; // ax
  int v22; // r9d
  int v23; // r8d
  int v24; // edx
  __int64 result; // rax
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // r14
  int v29; // ebp
  LARGE_INTEGER *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // [rsp+40h] [rbp-58h]
  __int64 *v33; // [rsp+48h] [rbp-50h]
  unsigned int v38; // [rsp+D0h] [rbp+38h]

  v6 = *((_DWORD *)a2 + 8);
  v7 = a1;
  v9 = a4;
  v10 = *a2;
  v12 = a2[3];
  v13 = 4673;
  v38 = *((_DWORD *)a2 + 4);
  v8 = v38;
  v14 = *(_QWORD *)(*a2 + 8 * (v38 + 388LL));
  v15 = *(_DWORD *)(v12 + 44);
  v16 = ((_BYTE)v6 + 1) & 0x3F;
  v33 = (__int64 *)(*a2 + 8 * (v38 + 388LL));
  v32 = 0LL;
  if ( v15 != v16 )
  {
    do
    {
      v17 = v12 + 1344LL * v15;
      v18 = *(_DWORD *)(v17 + 1140);
      if ( v18 > 0xC || !_bittest(&v13, v18) )
      {
        *(_QWORD *)(v17 + 1216) = a2[5];
        *(_QWORD *)(v17 + 1200) = a2[6];
        *(_QWORD *)(v17 + 1208) = a2[7];
        v19 = *(_DWORD *)(v17 + 1224);
        *(_DWORD *)(v17 + 1140) = 11;
        if ( (v19 & 0x10) != 0 )
          v20 = (**(_DWORD **)(v17 + 1264) | (**(_DWORD **)(v17 + 1264) >> 10)) & 0x3FF;
        else
          v20 = (unsigned int)((1 << *(_DWORD *)(v10 + 144)) - 1);
        LODWORD(v32) = v20;
        *(_DWORD *)(v14 + 2352) &= ~(_DWORD)v20;
        HIDWORD(v32) = *(_DWORD *)(v17 + 1136);
        if ( (*(_DWORD *)(v17 + 1224) & 0x10) != 0 )
          v21 = *(_WORD *)(v14 + 33160) & (**(_DWORD **)(v17 + 1264) | (**(_DWORD **)(v17 + 1264) >> 10)) & 0x3FF;
        else
          v21 = *(_WORD *)(v14 + 33160);
        VidSchiUnreferenceDisplayingAllocations(
          a1,
          (struct _VIDSCH_GLOBAL *)v20,
          (struct _VIDSCH_PRESENT_INFO *)v14,
          v21);
        VidSchiReferenceDisplayingAllocationsForThisEntry(a1);
        v13 = 4673;
      }
      v15 = ((_BYTE)v15 + 1) & 0x3F;
    }
    while ( v15 != v16 );
    v15 = *(_DWORD *)(v12 + 44);
    v7 = a1;
    v9 = a4;
    v8 = v38;
  }
  v22 = *(_DWORD *)(v12 + 48);
  v23 = ((_BYTE)v6 + 1) & 0x3F;
  v24 = ((_BYTE)v22 + 1) & 0x3F;
  if ( v16 != v24 )
  {
    while ( 1 )
    {
      v31 = *(_DWORD *)(1344LL * v16 + v12 + 1140);
      if ( v31 > 0xC || !_bittest(&v13, v31) )
        break;
      v16 = ((_BYTE)v16 + 1) & 0x3F;
      if ( v16 == v24 )
        goto LABEL_28;
    }
    v23 = v16;
LABEL_28:
    v8 = v38;
  }
  *(_DWORD *)(v12 + 44) = v23;
  if ( v22 == v6 )
    *(_DWORD *)(v12 + 48) = v23;
  result = VidSchiCompleteFlipEntry(v7, v10, v8, v12, v15, v6, 0, 0LL);
  *a5 = result;
  if ( (_DWORD)result )
  {
    v26 = (unsigned int)*v9;
    *(_QWORD *)(a3 + 8 * v26) = v32;
    *v9 = v26 + 1;
    result = (__int64)a6;
    *a6 = 1;
  }
  for ( ; v15 <= v6; v30[8].HighPart = result )
  {
    v27 = *v33;
    v28 = v12 + 1344LL * v15;
    if ( (*(_DWORD *)(v28 + 1224) & 0x10) != 0 )
      v29 = ((unsigned __int16)**(_DWORD **)(v28 + 1264) | (unsigned __int16)(**(_DWORD **)(v28 + 1264) >> 10)) & 0x3FF;
    else
      v29 = (1 << *(_DWORD *)(v10 + 144)) - 1;
    v30 = (LARGE_INTEGER *)(*(_QWORD *)(v27 + 120) + 72LL * *(unsigned int *)(v27 + 128));
    memset(v30, 0, 0x48uLL);
    *(_DWORD *)(v27 + 128) = (*(_DWORD *)(v27 + 128) + 1) & (*(_DWORD *)(v27 + 112) - 1);
    v30->LowPart = 3;
    v30[2].LowPart = v29;
    BYTE4(v30[2].QuadPart) = *(_BYTE *)(v12 + 56);
    v30[3].LowPart = v15;
    v30[1] = KeQueryPerformanceCounter(0LL);
    ++v15;
    LOBYTE(v30[4].LowPart) = (*(_DWORD *)(v28 + 1224) & 0x20) != 0;
    v30[4].HighPart = *(_DWORD *)(v28 + 1140);
    v30[3].HighPart = *(_DWORD *)(v28 + 1144);
    v30[5].HighPart = *(_DWORD *)(v27 + 2356);
    v30[5].LowPart = *(_DWORD *)(v27 + 2352);
    v30[6].LowPart = *(_DWORD *)(v12 + 32);
    v30[6].HighPart = *(_DWORD *)(v12 + 36);
    v30[7].LowPart = *(_DWORD *)(v12 + 40);
    v30[7].HighPart = *(_DWORD *)(v12 + 44);
    v30[8].LowPart = *(_DWORD *)(v12 + 48);
    result = *(unsigned int *)(v12 + 52);
  }
  return result;
}
