/*
 * XREFs of PnpProcessRelation @ 0x14073766C
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x140737330 (PnpBuildRemovalRelationList.c)
 *     PnpProcessRelation @ 0x14073766C (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x1407378D0 (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x140737958 (PnpProcessBusRelations.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PnpProcessRelation @ 0x14073766C (PnpProcessRelation.c)
 *     PnpProcessDependencyRelations @ 0x1407378D0 (PnpProcessDependencyRelations.c)
 *     PnpProcessBusRelations @ 0x140737958 (PnpProcessBusRelations.c)
 *     IopAddRelationToList @ 0x140737A28 (IopAddRelationToList.c)
 *     PipClearDevNodeFlags @ 0x140746C34 (PipClearDevNodeFlags.c)
 *     PnpQueryDeviceRelations @ 0x1407470F8 (PnpQueryDeviceRelations.c)
 *     IopIsRelationInList @ 0x1408B286C (IopIsRelationInList.c)
 *     IopMergeRelationLists @ 0x1408B2888 (IopMergeRelationLists.c)
 *     IopRemoveRelationFromList @ 0x1408B29F4 (IopRemoveRelationFromList.c)
 *     IopCancelPendingEject @ 0x1408B2AD8 (IopCancelPendingEject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProcessRelation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3)
{
  __int64 v5; // rbx
  unsigned int v7; // esi
  ULONG_PTR v10; // r12
  int v11; // eax
  ULONG_PTR BugCheckParameter4; // r14
  __int64 result; // rax
  int v14; // ecx
  _QWORD *v15; // rcx
  unsigned int v16; // r14d
  struct _DMA_ADAPTER *v17; // rsi
  _DMA_OPERATIONS *DmaOperations; // rcx
  unsigned __int8 (__fastcall *v19)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8); // rcx
  int v20; // r12d
  int v21; // ecx
  _DMA_OPERATIONS *v22; // rcx
  void (__fastcall **p_FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // rcx
  unsigned __int8 (__fastcall *FlushAdapterBuffers)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8); // rcx
  unsigned __int16 *v25; // rdi
  _DMA_OPERATIONS *v26; // rdx
  _WORD *v27; // rcx
  __int64 v28; // rcx
  _WORD *v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // r14d
  struct _DMA_ADAPTER *v32; // rsi
  _DMA_OPERATIONS *v33; // rcx
  unsigned __int8 (__fastcall *v34)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8); // rcx
  _DMA_OPERATIONS *v35; // rcx
  void (__fastcall **v36)(_DMA_ADAPTER *, void *, unsigned int); // rcx
  unsigned __int8 (__fastcall *v37)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8); // rcx
  unsigned __int16 *v38; // rdi
  _DMA_OPERATIONS *v39; // rdx
  _WORD *v40; // rcx
  __int64 v41; // rcx
  _WORD *v42; // rcx
  __int64 v43; // rcx
  __int64 *v44; // rsi
  __int64 v45; // rcx
  ULONG_PTR v46; // r8
  __int64 v47; // rcx
  _WORD *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  ULONG_PTR v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  ULONG_PTR v64; // r8
  __int64 v65; // rcx
  _WORD *v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rcx
  ULONG_PTR v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rdx
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  int v82; // [rsp+80h] [rbp+18h]

  v82 = a3;
  v5 = 0LL;
  P[0] = 0LL;
  v7 = a3;
  if ( (a2 & 0xFFFFFFFB) == 0 )
  {
    v21 = *(_DWORD *)(a1 + 300);
    if ( (unsigned int)(v21 - 782) <= 1 || v21 == 788 )
    {
      *(_DWORD *)a4 = 13;
    }
    else
    {
      if ( *(int *)(a1 + 656) <= 0 && ((v21 - 785) & 0xFFFFFFFD) != 0 )
      {
        if ( (unsigned int)(v21 - 778) <= 1 )
          return 3221225488LL;
        goto LABEL_3;
      }
      *(_DWORD *)a4 = 5;
    }
    RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(a1 + 40));
    return 3221225473LL;
  }
  if ( *(_DWORD *)(a1 + 300) == 788 )
    return 0LL;
LABEL_3:
  v10 = BugCheckParameter3;
  v11 = IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), a3, 0LL);
  BugCheckParameter4 = v11;
  if ( v11 )
  {
    if ( v11 == -1073741771 )
    {
      LODWORD(BugCheckParameter4) = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
    }
    else if ( v11 != -1073741670 )
    {
      v64 = *(_QWORD *)(a1 + 32);
      if ( v64 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 32), (PVOID)*(unsigned __int16 *)(v64 + 2));
        v64 = *(_QWORD *)(a1 + 32);
        v65 = *(_QWORD *)(v64 + 8);
        if ( v65 )
        {
          IoAddTriageDumpDataBlock(v65, (PVOID)(unsigned int)*(__int16 *)(v65 + 2));
          v64 = *(_QWORD *)(a1 + 32);
          v66 = (_WORD *)(*(_QWORD *)(v64 + 8) + 56LL);
          if ( *v66 )
          {
            IoAddTriageDumpDataBlock((ULONG)v66, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            v64 = *(_QWORD *)(a1 + 32);
          }
        }
        if ( v64 )
          v67 = *(_QWORD *)(*(_QWORD *)(v64 + 312) + 40LL);
        else
          v67 = 0LL;
        if ( v67 )
        {
          if ( v64 )
            v68 = *(_QWORD *)(*(_QWORD *)(v64 + 312) + 40LL);
          else
            v68 = 0LL;
          if ( v64 )
            v69 = *(_QWORD *)(*(_QWORD *)(v64 + 312) + 40LL);
          else
            LODWORD(v69) = 0;
          IoAddTriageDumpDataBlock(v69, (PVOID)0x310);
          if ( *(_WORD *)(v68 + 40) )
          {
            IoAddTriageDumpDataBlock(v68 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v68 + 48), (PVOID)*(unsigned __int16 *)(v68 + 40));
          }
          v70 = *(_QWORD *)(a1 + 32);
          if ( v70 )
            v71 = *(_QWORD *)(*(_QWORD *)(v70 + 312) + 40LL);
          else
            v71 = 0LL;
          if ( *(_WORD *)(v71 + 56) )
          {
            if ( v70 )
              v72 = *(_QWORD *)(*(_QWORD *)(v70 + 312) + 40LL);
            else
              LODWORD(v72) = 0;
            IoAddTriageDumpDataBlock(v72 + 56, (PVOID)2);
            v73 = *(_QWORD *)(a1 + 32);
            if ( v73 )
              v74 = *(_QWORD *)(*(_QWORD *)(v73 + 312) + 40LL);
            else
              v74 = 0LL;
            if ( v73 )
              v75 = *(_QWORD *)(*(_QWORD *)(v73 + 312) + 40LL);
            else
              v75 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v75 + 64), (PVOID)*(unsigned __int16 *)(v74 + 56));
            v70 = *(_QWORD *)(a1 + 32);
          }
          if ( v70 )
            v76 = *(_QWORD *)(*(_QWORD *)(v70 + 312) + 40LL);
          else
            v76 = 0LL;
          v64 = v70;
          if ( *(_QWORD *)(v76 + 16) )
          {
            v77 = v70 ? *(_QWORD *)(*(_QWORD *)(v70 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v77 + 16) + 56LL) )
            {
              if ( v70 )
                v78 = *(_QWORD *)(*(_QWORD *)(v70 + 312) + 40LL);
              else
                v78 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v78 + 16) + 56, (PVOID)2);
              v79 = *(_QWORD *)(a1 + 32);
              if ( v79 )
                v80 = *(_QWORD *)(*(_QWORD *)(v79 + 312) + 40LL);
              else
                v80 = 0LL;
              if ( v79 )
                v5 = *(_QWORD *)(*(_QWORD *)(v79 + 312) + 40LL);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v5 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v80 + 16) + 56LL));
              v64 = *(_QWORD *)(a1 + 32);
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 7uLL, v64, BugCheckParameter3, BugCheckParameter4);
    }
    return (unsigned int)BugCheckParameter4;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x80000) != 0 )
  {
    v44 = (__int64 *)IopPendingEjects;
    if ( (__int64 *)IopPendingEjects == &IopPendingEjects )
      goto LABEL_80;
    while ( 1 )
    {
      v45 = v44[8];
      if ( v45 )
      {
        if ( (unsigned __int8)IopIsRelationInList(v45, *(_QWORD *)(a1 + 32)) )
          break;
      }
      v44 = (__int64 *)*v44;
      if ( v44 == &IopPendingEjects )
        goto LABEL_79;
    }
    if ( a2 == 4 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(BugCheckParameter3, *(_QWORD *)(a1 + 32));
      IopCancelPendingEject(v44);
      IopMergeRelationLists(BugCheckParameter3, v44[8], 0LL);
      if ( v82 == 2 )
        IopAddRelationToList(BugCheckParameter3, *(_QWORD *)(a1 + 32), 2LL, 0LL);
LABEL_79:
      if ( v44 != &IopPendingEjects )
        return (unsigned int)BugCheckParameter4;
LABEL_80:
      v46 = *(_QWORD *)(a1 + 32);
      if ( v46 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 32), (PVOID)*(unsigned __int16 *)(v46 + 2));
        v46 = *(_QWORD *)(a1 + 32);
        v47 = *(_QWORD *)(v46 + 8);
        if ( v47 )
        {
          IoAddTriageDumpDataBlock(v47, (PVOID)(unsigned int)*(__int16 *)(v47 + 2));
          v46 = *(_QWORD *)(a1 + 32);
          v48 = (_WORD *)(*(_QWORD *)(v46 + 8) + 56LL);
          if ( *v48 )
          {
            IoAddTriageDumpDataBlock((ULONG)v48, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 56LL));
            v46 = *(_QWORD *)(a1 + 32);
          }
        }
        if ( v46 )
          v49 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
        else
          v49 = 0LL;
        if ( v49 )
        {
          if ( v46 )
            v50 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
          else
            v50 = 0LL;
          if ( v46 )
            v51 = *(_QWORD *)(*(_QWORD *)(v46 + 312) + 40LL);
          else
            LODWORD(v51) = 0;
          IoAddTriageDumpDataBlock(v51, (PVOID)0x310);
          if ( *(_WORD *)(v50 + 40) )
          {
            IoAddTriageDumpDataBlock(v50 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v50 + 48), (PVOID)*(unsigned __int16 *)(v50 + 40));
          }
          v52 = *(_QWORD *)(a1 + 32);
          if ( v52 )
            v53 = *(_QWORD *)(*(_QWORD *)(v52 + 312) + 40LL);
          else
            v53 = 0LL;
          if ( *(_WORD *)(v53 + 56) )
          {
            if ( v52 )
              v54 = *(_QWORD *)(*(_QWORD *)(v52 + 312) + 40LL);
            else
              LODWORD(v54) = 0;
            IoAddTriageDumpDataBlock(v54 + 56, (PVOID)2);
            v55 = *(_QWORD *)(a1 + 32);
            if ( v55 )
              v56 = *(_QWORD *)(*(_QWORD *)(v55 + 312) + 40LL);
            else
              v56 = 0LL;
            if ( v55 )
              v57 = *(_QWORD *)(*(_QWORD *)(v55 + 312) + 40LL);
            else
              v57 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v57 + 64), (PVOID)*(unsigned __int16 *)(v56 + 56));
            v52 = *(_QWORD *)(a1 + 32);
          }
          if ( v52 )
            v58 = *(_QWORD *)(*(_QWORD *)(v52 + 312) + 40LL);
          else
            v58 = 0LL;
          v46 = v52;
          if ( *(_QWORD *)(v58 + 16) )
          {
            v59 = v52 ? *(_QWORD *)(*(_QWORD *)(v52 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v59 + 16) + 56LL) )
            {
              if ( v52 )
                v60 = *(_QWORD *)(*(_QWORD *)(v52 + 312) + 40LL);
              else
                v60 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v60 + 16) + 56, (PVOID)2);
              v61 = *(_QWORD *)(a1 + 32);
              if ( v61 )
                v62 = *(_QWORD *)(*(_QWORD *)(v61 + 312) + 40LL);
              else
                v62 = 0LL;
              if ( v61 )
                v63 = *(_QWORD *)(*(_QWORD *)(v61 + 312) + 40LL);
              else
                v63 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v63 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v62 + 16) + 56LL));
              v46 = *(_QWORD *)(a1 + 32);
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 6uLL, v46, 0LL, 0LL);
    }
    if ( a2 )
    {
      LODWORD(BugCheckParameter4) = IopRemoveRelationFromList(v44[8], *(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x80000LL);
      goto LABEL_79;
    }
    return 3221225473LL;
  }
  result = PnpProcessBusRelations(a1, a2, v7, a4, BugCheckParameter3);
  if ( (int)result >= 0 )
  {
    v14 = *(_DWORD *)(a1 + 300);
    if ( (unsigned int)(v14 - 782) <= 1 )
      v14 = *(_DWORD *)(a1 + 304);
    if ( ((unsigned int)(v14 - 775) <= 1 || (unsigned int)(v14 - 778) <= 1)
      && (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 3LL, 0LL, P) >= 0 )
    {
      v15 = P[0];
      if ( P[0] )
      {
        v16 = 0;
        if ( *(_DWORD *)P[0] )
        {
          do
          {
            v17 = (struct _DMA_ADAPTER *)v15[v16 + 1];
            DmaOperations = v17[19].DmaOperations;
            if ( ((__int64)DmaOperations->AllocateAdapterChannel & 2) != 0
              || (v19 = DmaOperations->FlushAdapterBuffers) == 0LL
              || !*((_QWORD *)v19 + 2) )
            {
              IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)v17->Size);
              v22 = v17->DmaOperations;
              if ( v22 )
              {
                IoAddTriageDumpDataBlock((ULONG)v22, (PVOID)(unsigned int)SHIWORD(v22->Size));
                p_FreeMapRegisters = &v17->DmaOperations->FreeMapRegisters;
                if ( *(_WORD *)p_FreeMapRegisters )
                {
                  IoAddTriageDumpDataBlock((ULONG)p_FreeMapRegisters, (PVOID)2);
                  IoAddTriageDumpDataBlock(
                    (ULONG)v17->DmaOperations->MapTransfer,
                    (PVOID)LOWORD(v17->DmaOperations->FreeMapRegisters));
                }
              }
              FlushAdapterBuffers = v17[19].DmaOperations->FlushAdapterBuffers;
              if ( FlushAdapterBuffers )
              {
                v25 = (unsigned __int16 *)((char *)FlushAdapterBuffers + 40);
                IoAddTriageDumpDataBlock((ULONG)FlushAdapterBuffers, (PVOID)0x310);
                if ( *v25 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v25, (PVOID)2);
                  IoAddTriageDumpDataBlock(*((_QWORD *)v25 + 1), (PVOID)*v25);
                }
                v26 = v17[19].DmaOperations;
                v27 = (_WORD *)((char *)v26->FlushAdapterBuffers + 56);
                if ( *v27 )
                {
                  IoAddTriageDumpDataBlock((ULONG)v27, (PVOID)2);
                  IoAddTriageDumpDataBlock(
                    *((_QWORD *)v17[19].DmaOperations->FlushAdapterBuffers + 8),
                    (PVOID)*((unsigned __int16 *)v17[19].DmaOperations->FlushAdapterBuffers + 28));
                  v26 = v17[19].DmaOperations;
                }
                v28 = *((_QWORD *)v26->FlushAdapterBuffers + 2);
                if ( v28 )
                {
                  v29 = (_WORD *)(v28 + 56);
                  if ( *v29 )
                  {
                    IoAddTriageDumpDataBlock((ULONG)v29, (PVOID)2);
                    v30 = *((_QWORD *)v17[19].DmaOperations->FlushAdapterBuffers + 2);
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v30 + 64), (PVOID)*(unsigned __int16 *)(v30 + 56));
                  }
                }
              }
              KeBugCheckEx(0xCAu, 0xBuLL, (ULONG_PTR)v17, 3uLL, 0LL);
            }
            v20 = PnpProcessRelation((int)v19, a2, 0, a4, v10);
            HalPutDmaAdapter(v17);
            v15 = P[0];
            if ( v20 < 0 )
              goto LABEL_36;
            v10 = BugCheckParameter3;
          }
          while ( ++v16 < *(_DWORD *)P[0] );
        }
        ExFreePoolWithTag(v15, 0);
      }
    }
    if ( a2 - 5 > 1 )
    {
      if ( a2 )
      {
        if ( (int)PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 1LL, 0LL, P) >= 0 )
        {
          v15 = P[0];
          if ( P[0] )
          {
            v31 = 0;
            if ( *(_DWORD *)P[0] )
            {
              while ( 1 )
              {
                v32 = (struct _DMA_ADAPTER *)v15[v31 + 1];
                v33 = v32[19].DmaOperations;
                if ( ((__int64)v33->AllocateAdapterChannel & 2) != 0
                  || (v34 = v33->FlushAdapterBuffers) == 0LL
                  || !*((_QWORD *)v34 + 2) )
                {
                  IoAddTriageDumpDataBlock((ULONG)v32, (PVOID)v32->Size);
                  v35 = v32->DmaOperations;
                  if ( v35 )
                  {
                    IoAddTriageDumpDataBlock((ULONG)v35, (PVOID)(unsigned int)SHIWORD(v35->Size));
                    v36 = &v32->DmaOperations->FreeMapRegisters;
                    if ( *(_WORD *)v36 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v36, (PVOID)2);
                      IoAddTriageDumpDataBlock(
                        (ULONG)v32->DmaOperations->MapTransfer,
                        (PVOID)LOWORD(v32->DmaOperations->FreeMapRegisters));
                    }
                  }
                  v37 = v32[19].DmaOperations->FlushAdapterBuffers;
                  if ( v37 )
                  {
                    v38 = (unsigned __int16 *)((char *)v37 + 40);
                    IoAddTriageDumpDataBlock((ULONG)v37, (PVOID)0x310);
                    if ( *v38 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v38, (PVOID)2);
                      IoAddTriageDumpDataBlock(*((_QWORD *)v38 + 1), (PVOID)*v38);
                    }
                    v39 = v32[19].DmaOperations;
                    v40 = (_WORD *)((char *)v39->FlushAdapterBuffers + 56);
                    if ( *v40 )
                    {
                      IoAddTriageDumpDataBlock((ULONG)v40, (PVOID)2);
                      IoAddTriageDumpDataBlock(
                        *((_QWORD *)v32[19].DmaOperations->FlushAdapterBuffers + 8),
                        (PVOID)*((unsigned __int16 *)v32[19].DmaOperations->FlushAdapterBuffers + 28));
                      v39 = v32[19].DmaOperations;
                    }
                    v41 = *((_QWORD *)v39->FlushAdapterBuffers + 2);
                    if ( v41 )
                    {
                      v42 = (_WORD *)(v41 + 56);
                      if ( *v42 )
                      {
                        IoAddTriageDumpDataBlock((ULONG)v42, (PVOID)2);
                        v43 = *((_QWORD *)v32[19].DmaOperations->FlushAdapterBuffers + 2);
                        IoAddTriageDumpDataBlock(*(_QWORD *)(v43 + 64), (PVOID)*(unsigned __int16 *)(v43 + 56));
                      }
                    }
                  }
                  KeBugCheckEx(0xCAu, 0xBuLL, (ULONG_PTR)v32, 1uLL, 0LL);
                }
                v20 = PnpProcessRelation((int)v34, a2, 0, a4, v10);
                HalPutDmaAdapter(v32);
                v15 = P[0];
                if ( v20 < 0 )
                  break;
                v10 = BugCheckParameter3;
                if ( ++v31 >= *(_DWORD *)P[0] )
                  goto LABEL_56;
              }
LABEL_36:
              ExFreePoolWithTag(v15, 0);
              return (unsigned int)v20;
            }
LABEL_56:
            ExFreePoolWithTag(v15, 0);
          }
        }
      }
    }
    result = PnpProcessDependencyRelations(a1, a2, v82 != 0, a4, BugCheckParameter3);
    if ( (int)result >= 0 )
    {
      LODWORD(BugCheckParameter4) = 0;
      return (unsigned int)BugCheckParameter4;
    }
  }
  return result;
}
