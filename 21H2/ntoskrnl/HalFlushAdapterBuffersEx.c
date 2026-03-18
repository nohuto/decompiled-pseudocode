/*
 * XREFs of HalFlushAdapterBuffersEx @ 0x140516D80
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x140511A58 (HalPutScatterGatherListV3.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x14045693C (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaCheckMdlAccessibility @ 0x140503D4C (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x140504048 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushDriverMdl @ 0x140504158 (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x140504198 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFreeLa @ 0x140504358 (HalpDmaFreeLa.c)
 *     HalpDmaControllerFlushChannel @ 0x1405192A0 (HalpDmaControllerFlushChannel.c)
 */

__int64 __fastcall HalFlushAdapterBuffersEx(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, ULONG a5, char a6)
{
  bool v7; // zf
  __int64 v8; // r15
  struct _MDL *v11; // rbx
  struct _MDL *Next; // rbp
  ULONG v13; // ebp
  unsigned __int64 v14; // rax
  ULONG v16; // r9d
  int v17; // ebx
  int AdapterCacheAlignment; // eax
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // r8
  char v23; // r13
  PMDL v24; // r12
  struct _MDL *v25; // rbx
  ULONG v26; // edx
  unsigned int v27; // ecx
  __int64 v28; // r9
  PMDL Mdl; // [rsp+40h] [rbp-48h] BYREF
  char v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h] BYREF

  v7 = *(_DWORD *)(a1 + 512) == 3;
  v8 = a3;
  v30 = 0;
  Mdl = 0LL;
  v31 = 0LL;
  if ( v7 )
    HalpDmaFreeLa(a1, (__int64 *)(a3 + 24));
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
  v13 = a5;
  *(_QWORD *)(a1 + 544) = 0LL;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( !a2 )
        return 3221225485LL;
      v14 = *(unsigned int *)(a2 + 40);
      if ( a4 < v14 )
        break;
      a2 = *(_QWORD *)a2;
      a4 -= v14;
    }
    if ( !*(_BYTE *)(a1 + 433) )
      HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372));
    if ( !*(_BYTE *)(a1 + 432) )
      return 0LL;
    if ( v8 )
    {
      v16 = *(_DWORD *)(v8 + 16);
      if ( *(_QWORD *)a2
        || (v17 = *(_DWORD *)(a2 + 44),
            AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1),
            ((AdapterCacheAlignment - 1) & (unsigned int)v19) != 0)
        && v20 >= (v19 & 0xFFFFFFFFFFFFF000uLL) )
      {
        v13 = v16;
      }
      else
      {
        v13 = (-AdapterCacheAlignment & (v20 + AdapterCacheAlignment - 1)) - v17 - a4;
        if ( v13 > v16 )
          v13 = v16;
      }
    }
    HalpDmaCheckMdlAccessibility(a1, (__int64 *)a2, a4, v13, &v30, &Mdl);
    LOBYTE(v22) = v30;
    v23 = a6;
    if ( v30 )
    {
      v24 = Mdl;
      if ( !a6 )
        HalpDmaFlushDriverMdl(Mdl, 1, v22, v21);
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
      LOBYTE(v22) = v30;
    }
    else if ( !v8 )
    {
      return 3221225473LL;
    }
    *(_QWORD *)(v8 + 56) = v8;
    while ( v13 )
    {
      v26 = v13;
      if ( !a2 )
        break;
      v27 = v13;
      if ( *(_DWORD *)(a2 + 40) - (int)a4 <= v13 )
        v27 = *(_DWORD *)(a2 + 40) - a4;
      v28 = a4 + *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
      v13 -= v27;
      if ( v13 && !*(_QWORD *)a2 )
      {
        v27 = v26;
        v13 = 0;
      }
      if ( *(_BYTE *)(a1 + 434) )
        HalpDmaFlushScatterTransferV3(a1, a2, v8, v28, v27, v23, v22, &v31);
      else
        HalpDmaFlushContiguousTransferV3(a1, a2, v8, v28, v27, v23, v22, &v31);
      v8 = v31;
      a4 = 0LL;
      a2 = *(_QWORD *)a2;
      LOBYTE(v22) = v30;
    }
  }
  else if ( !*(_BYTE *)(a1 + 433) )
  {
    HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372));
  }
  return 0LL;
}
