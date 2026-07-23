/*
 * XREFs of HalFlushAdapterBuffersEx @ 0x1403A2E80
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x1403A2D70 (HalPutScatterGatherListV3.c)
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14039FB08 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404B782C (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushDriverMdl @ 0x1404B793C (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404B797C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFreeLa @ 0x1404B7B38 (HalpDmaFreeLa.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaControllerFlushChannel @ 0x1404CE850 (HalpDmaControllerFlushChannel.c)
 */

__int64 __fastcall HalFlushAdapterBuffersEx(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        ULONG a5,
        char a6)
{
  bool v7; // zf
  __int64 v8; // r14
  __int64 *v9; // rsi
  struct _MDL *v11; // rbx
  ULONG v12; // ebp
  unsigned __int64 v13; // rax
  __int64 v15; // rdx
  struct _MDL *Next; // rbp
  ULONG v17; // r9d
  int v18; // ebx
  int AdapterCacheAlignment; // eax
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  char v22; // r8
  char v23; // r13
  PMDL v24; // r12
  struct _MDL *v25; // rbx
  ULONG v26; // edx
  ULONG v27; // ecx
  unsigned __int64 v28; // r9
  PMDL Mdl; // [rsp+40h] [rbp-48h] BYREF
  char v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h] BYREF

  v7 = *(_DWORD *)(a1 + 512) == 2;
  v8 = a3;
  v9 = a2;
  v30 = 0;
  Mdl = 0LL;
  v31 = 0LL;
  if ( v7 )
  {
    v15 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 40) = v15;
    HalpDmaFreeLa(a1, v15, a3 + 32);
  }
  v11 = *(struct _MDL **)(a1 + 544);
  if ( v11 )
  {
    do
    {
      Next = v11->Next;
      if ( (v11->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v11->MappedSystemVa, v11);
      IoFreeMdl(v11);
      v11 = Next;
    }
    while ( Next );
  }
  v12 = a5;
  *(_QWORD *)(a1 + 544) = 0LL;
  if ( !v12 )
  {
    if ( !*(_BYTE *)(a1 + 433) )
      HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372));
    return 0LL;
  }
  if ( !v9 )
    return 3221225485LL;
  do
  {
    v13 = *((unsigned int *)v9 + 10);
    if ( a4 < v13 )
      break;
    v9 = (__int64 *)*v9;
    a4 -= v13;
  }
  while ( v9 );
  if ( !v9 )
    return 3221225485LL;
  if ( !*(_BYTE *)(a1 + 433) )
    HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372));
  if ( !*(_BYTE *)(a1 + 432) )
    return 0LL;
  if ( v8 )
  {
    v17 = *(_DWORD *)(v8 + 16);
    if ( *v9
      || (v18 = *((_DWORD *)v9 + 11),
          AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1, a2, a3),
          ((AdapterCacheAlignment - 1) & (unsigned int)v20) != 0)
      && v21 >= (v20 & 0xFFFFFFFFFFFFF000uLL) )
    {
      v12 = v17;
    }
    else
    {
      v12 = (-AdapterCacheAlignment & (v21 + AdapterCacheAlignment - 1)) - v18 - a4;
      if ( v12 > v17 )
        v12 = v17;
    }
  }
  HalpDmaCheckMdlAccessibility(a1, v9, (unsigned int)a4, v12, &v30, &Mdl);
  v22 = v30;
  v23 = a6;
  if ( v30 )
  {
    v24 = Mdl;
    if ( !a6 )
      HalpDmaFlushDriverMdl((ULONG_PTR)Mdl);
    if ( v24 )
    {
      do
      {
        v25 = v24->Next;
        IoFreeMdl(v24);
        v24 = v25;
      }
      while ( v25 );
    }
    if ( !v8 )
      return 0LL;
    v22 = v30;
LABEL_35:
    *(_QWORD *)(v8 + 56) = v8;
    while ( v12 )
    {
      v26 = v12;
      if ( !v9 )
        break;
      v27 = v12;
      if ( *((_DWORD *)v9 + 10) - (int)a4 <= v12 )
        v27 = *((_DWORD *)v9 + 10) - a4;
      v28 = a4 + v9[4] + *((unsigned int *)v9 + 11);
      v12 -= v27;
      if ( v12 && !*v9 )
      {
        v27 = v26;
        v12 = 0;
      }
      if ( *(_BYTE *)(a1 + 434) )
        HalpDmaFlushScatterTransferV3(a1, (_DWORD)v9, v8, v28, v27, v23, v22, (__int64)&v31);
      else
        HalpDmaFlushContiguousTransferV3(a1, (_DWORD)v9, v8, v28, v27, v23, v22, (__int64)&v31);
      LODWORD(v8) = v31;
      a4 = 0LL;
      v9 = (__int64 *)*v9;
      v22 = v30;
    }
    return 0LL;
  }
  if ( v8 )
    goto LABEL_35;
  return 3221225473LL;
}
