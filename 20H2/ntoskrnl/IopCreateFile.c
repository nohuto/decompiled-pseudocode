/*
 * XREFs of IopCreateFile @ 0x1405FBD80
 * Callers:
 *     IoCreateFileEx @ 0x1405FA7E0 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x1405FBC80 (NtOpenFile.c)
 *     NtCreateFile @ 0x1405FBCF0 (NtCreateFile.c)
 *     IoCreateFile @ 0x1406CC6C0 (IoCreateFile.c)
 * Callees:
 *     IopUpdateOtherOperationCount @ 0x14020A4D0 (IopUpdateOtherOperationCount.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentSilo @ 0x140211160 (PsGetCurrentSilo.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     IopCleanupExtraCreateParameters @ 0x1405FD2A4 (IopCleanupExtraCreateParameters.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     IoCheckEaBufferValidity @ 0x1406C6810 (IoCheckEaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        int a2,
        _SLIST_ENTRY *a3,
        int *a4,
        HANDLE *a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        ULONG *Src,
        SIZE_T NumberOfBytes,
        int a12,
        _SLIST_ENTRY *a13,
        int a14,
        int a15,
        __int16 *a16)
{
  int v16; // r15d
  unsigned __int8 v17; // r13
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v21; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HANDLE v28; // rbx
  PVOID PoolWithQuotaTag; // rax
  int v30; // eax
  int *v31; // r14
  int v32; // ecx
  PVOID PoolWithTag; // rax
  struct _KPRCB *v34; // rdx
  _GENERAL_LOOKASIDE *v35; // rcx
  NTSTATUS v36; // esi
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  size_t v39; // r8
  int v40; // ebx
  void *v41; // rcx
  int Next; // esi
  int v43; // ecx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  struct _DMA_ADAPTER *v47; // rcx
  char v48; // r14
  char v49; // al
  struct _KPRCB *v50; // rsi
  _GENERAL_LOOKASIDE *v51; // rbx
  _GENERAL_LOOKASIDE *v52; // rbx
  struct _KPRCB *v53; // rdx
  _GENERAL_LOOKASIDE *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  HANDLE v57; // rbx
  unsigned __int64 v58; // rcx
  __int16 v59; // dx
  struct _KPRCB *v60; // rdx
  _GENERAL_LOOKASIDE *v61; // rcx
  unsigned __int64 v62; // rsi
  ULONG v63; // r14d
  struct _KPRCB *v64; // rdx
  _GENERAL_LOOKASIDE *v65; // rcx
  unsigned __int64 v66; // rax
  PVOID v67; // rax
  int *v68; // r13
  int v69; // eax
  int v70; // ecx
  unsigned __int64 v71; // rcx
  __int16 v72; // dx
  ULONG *v73; // r14
  ULONG v74; // esi
  PVOID v75; // rax
  NTSTATUS v76; // esi
  struct _KPRCB *v77; // rdx
  _GENERAL_LOOKASIDE *v78; // rcx
  size_t v79; // r8
  int v80; // ebx
  void *v81; // rcx
  int v82; // esi
  int v83; // ecx
  __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  struct _DMA_ADAPTER *v87; // rcx
  unsigned int v88; // [rsp+40h] [rbp-78h]
  unsigned int v89; // [rsp+44h] [rbp-74h]
  unsigned __int8 v90; // [rsp+5Ch] [rbp-5Ch]
  HANDLE Handle; // [rsp+60h] [rbp-58h] BYREF
  HANDLE v92; // [rsp+68h] [rbp-50h] BYREF
  char *v93; // [rsp+70h] [rbp-48h]
  int v98; // [rsp+128h] [rbp+70h]
  int v99; // [rsp+128h] [rbp+70h]

  v16 = a9;
  if ( EnableFeatureServicing_40524482 != 1
    && (!EnableFeatureServicing_40524482 || !FeatureServicing_40524482_EnableKey()) )
  {
    Handle = 0LL;
    v17 = 0;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( (a14 & 0x100) == 0 )
      v17 = PreviousMode;
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v21 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v21 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v21 )
      {
        ++L->AllocateMisses;
        v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                              (unsigned int)L->Type,
                              L->Size,
                              L->Tag);
      }
    }
    if ( !v21 )
      return 3221225626LL;
    LODWORD(v21->Next) = CurrentPrcb->Number;
    if ( !v17 && (a14 & 0x200) == 0 )
      goto LABEL_49;
    if ( (a6 & 0xFFA50048) != 0
      || (a7 & 0xFFFFFFF8) != 0
      || a8 > 5
      || (a9 & 0xFF000000) != 0
      || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
      || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
      || (a9 & 0x30) == 0x30
      || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
      || (a9 & 0x100100) == 0x100100
      || (a9 & 0x10100) == 0x10100
      || (a9 & 0x110000) == 0x110000
      || (a9 & 8) != 0 && (a2 & 4) != 0 )
    {
      goto LABEL_40;
    }
    if ( !IopFailZeroAccessCreate || a2 )
    {
      if ( !a12 )
        goto LABEL_49;
      if ( a12 == 1 )
      {
        if ( !a13
          || ((__int64)a13->Next & 0xFFFFFFFC) != 0
          || HIDWORD(a13->Next) > 1
          || *((_DWORD *)&a13->Next + 2) > 1u
          || (a7 & 4) != 0
          || a8 - 1 > 2
          || (a9 & 0xFFFFFFCD) != 0 )
        {
          goto LABEL_40;
        }
        goto LABEL_49;
      }
      if ( a12 != 2 || a13 && (a7 & 4) == 0 && (a7 & 0xFFFFFFFD) != 0 && a8 == 2 && (a9 & 0xFFFFFFCD) == 0 )
      {
LABEL_49:
        if ( v17 )
        {
          *((_QWORD *)&v21[4].Next + 1) = 0LL;
          v26 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
            v26 = (__int64)a1;
          *(_QWORD *)v26 = *(_QWORD *)v26;
          v27 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
            v27 = (__int64)a4;
          *(_DWORD *)v27 = *(_DWORD *)v27;
          if ( a5 )
          {
            if ( ((unsigned __int8)a5 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v28 = *a5;
            Handle = v28;
            if ( (__int64)v28 < 0 )
              RtlRaiseStatus(-1073741811);
          }
          else
          {
            v28 = 0LL;
            Handle = 0LL;
          }
          if ( Src && (_DWORD)NumberOfBytes )
          {
            if ( ((unsigned __int8)Src & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)Src + (unsigned int)NumberOfBytes > 0x7FFFFFFF0000LL
              || (ULONG *)((char *)Src + (unsigned int)NumberOfBytes) < Src )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
            *((_QWORD *)&v21[4].Next + 1) = PoolWithQuotaTag;
            LODWORD(v21[5].Next) = NumberOfBytes;
            memmove(PoolWithQuotaTag, Src, (unsigned int)NumberOfBytes);
            v30 = IoCheckEaBufferValidity(
                    *((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1),
                    NumberOfBytes,
                    (PULONG)a4 + 2);
            if ( v30 < 0 )
            {
              *a4 = v30;
              RtlRaiseStatus(v30);
            }
            v31 = a4;
            v32 = a14;
            goto LABEL_92;
          }
          v32 = a14;
LABEL_91:
          v31 = a4;
          LODWORD(v21[5].Next) = 0;
          *((_QWORD *)&v21[4].Next + 1) = 0LL;
          goto LABEL_92;
        }
        v16 = a9 & 0x7FFFFFFF;
        if ( a9 >= 0 )
          v16 = a9;
        v32 = a14 | 0x400;
        if ( a9 >= 0 )
          v32 = a14;
        v98 = v32;
        if ( a5 )
        {
          v28 = *a5;
          if ( (__int64)*a5 < 0 )
            goto LABEL_40;
          Handle = *a5;
        }
        else
        {
          v28 = Handle;
        }
        if ( !Src || !(_DWORD)NumberOfBytes )
          goto LABEL_91;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
        *((_QWORD *)&v21[4].Next + 1) = PoolWithTag;
        if ( PoolWithTag )
        {
          LODWORD(v21[5].Next) = NumberOfBytes;
          memmove(PoolWithTag, Src, (unsigned int)NumberOfBytes);
          v31 = a4;
          v36 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
          v88 = v36;
          if ( v36 < 0 )
          {
            ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
            *a4 = v36;
LABEL_86:
            v37 = KeGetCurrentPrcb();
            v38 = v37->PPLookasideList[8].P;
            ++v38->TotalFrees;
            if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
              || (++v38->FreeMisses,
                  v38 = v37->PPLookasideList[8].L,
                  ++v38->TotalFrees,
                  LOWORD(v38->ListHead.Alignment) < v38->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v38->ListHead, v21);
              return v88;
            }
            else
            {
              ++v38->FreeMisses;
              ((void (__fastcall *)(PSLIST_ENTRY))v38->FreeEx)(v21);
              return v88;
            }
          }
          v32 = v98;
LABEL_92:
          LODWORD(v21->Next) = 14680072;
          LODWORD(v21[2].Next) = 0;
          *((_QWORD *)&v21[1].Next + 1) = 0LL;
          *((_QWORD *)&v21[3].Next + 1) = v28;
          LODWORD(v21[4].Next) = v16;
          WORD2(v21[4].Next) = a6;
          HIWORD(v21[4].Next) = a7;
          *((_DWORD *)&v21[5].Next + 2) = a8;
          *((_WORD *)&v21[8].Next + 4) = 0;
          *((_BYTE *)&v21[8].Next + 10) = 0;
          HIDWORD(v21[5].Next) = v32;
          *((_QWORD *)&v21[2].Next + 1) = 0LL;
          v21[3].Next = a3;
          *((_DWORD *)&v21[7].Next + 2) = a12;
          v21[8].Next = a13;
          *((_DWORD *)&v21[9].Next + 2) = a15;
          *((_BYTE *)&v21[9].Next + 12) = v17;
          v21[10] = 0LL;
          v21[11] = 0LL;
          LOWORD(v21[10].Next) = 40;
          v21[12].Next = (_SLIST_ENTRY *)1;
          if ( a16 )
          {
            v39 = *a16;
            if ( v39 > 0x28 )
              v39 = 40LL;
            memmove(&v21[10], a16, v39);
          }
          if ( v21[12].Next == (_SLIST_ENTRY *)1 )
            v21[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
          LODWORD(v21[1].Next) = 0;
          *((_QWORD *)&v21->Next + 1) = 0LL;
          IopUpdateOtherOperationCount();
          v40 = ObOpenObjectByNameEx(a3, IoFileObjectType, v17, 0LL, a2, v21, v21[12].Next, &Handle);
          v88 = v40;
          v41 = (void *)*((_QWORD *)&v21[4].Next + 1);
          if ( v41 )
            ExFreePoolWithTag(v41, 0);
          IopCleanupExtraCreateParameters(v21);
          Next = (int)v21[2].Next;
          if ( v40 >= 0 )
          {
            if ( Next == -1096154543 )
            {
              *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
              *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
              *a1 = Handle;
              *((_QWORD *)v31 + 1) = *((_QWORD *)&v21[1].Next + 1);
              *v31 = (int)v21[1].Next;
              v88 = (unsigned int)v21[1].Next;
LABEL_119:
              if ( Next == -1096154543 )
              {
                v47 = (struct _DMA_ADAPTER *)*((_QWORD *)&v21->Next + 1);
                if ( v47 )
                  HalPutDmaAdapter(v47);
              }
              goto LABEL_86;
            }
            ObCloseHandle(Handle, v17);
            v40 = -1073741788;
            v88 = -1073741788;
          }
          v43 = (int)v21[1].Next;
          if ( v43 >= 0 )
          {
            v44 = *((_QWORD *)&v21->Next + 1);
            if ( v44 )
            {
              if ( Next == -1096154543 )
              {
                if ( (*(_DWORD *)(v44 + 80) & 0x40000) == 0 )
                  IopCloseFile(0LL, *((_QWORD *)&v21->Next + 1), 1LL);
              }
              else
              {
                if ( *(_WORD *)(v44 + 88) )
                {
                  ExFreePoolWithTag(*(PVOID *)(v44 + 96), 0);
                  v44 = *((_QWORD *)&v21->Next + 1);
                }
                *(_QWORD *)(v44 + 8) = 0LL;
                HalPutDmaAdapter(*((PADAPTER_OBJECT *)&v21->Next + 1));
              }
            }
          }
          else
          {
            v40 = (int)v21[1].Next;
            v88 = v40;
            if ( (v43 & 0xC0000000) == 0x80000000 || v43 == -1073741191 )
            {
              *v31 = v43;
              *((_QWORD *)v31 + 1) = *((_QWORD *)&v21[1].Next + 1);
            }
          }
          if ( v40 == -1073741772 )
          {
            v45 = *((_QWORD *)&v21[1].Next + 1) - 2684354563LL;
            if ( v45 <= 0x16 )
            {
              v46 = 4194817LL;
              if ( _bittest64(&v46, v45) )
                v88 = -1073741184;
            }
          }
          goto LABEL_119;
        }
        goto LABEL_79;
      }
LABEL_40:
      v23 = KeGetCurrentPrcb();
      v24 = v23->PPLookasideList[8].P;
      ++v24->TotalFrees;
      if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
        || (++v24->FreeMisses,
            v24 = v23->PPLookasideList[8].L,
            ++v24->TotalFrees,
            LOWORD(v24->ListHead.Alignment) < v24->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v24->ListHead, v21);
        return 3221225485LL;
      }
      else
      {
        ++v24->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v21);
        return 3221225485LL;
      }
    }
    goto LABEL_149;
  }
  v93 = 0LL;
  v92 = 0LL;
  v48 = 0;
  v49 = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v48 = v49;
  v90 = v48;
  v50 = KeGetCurrentPrcb();
  v51 = v50->PPLookasideList[8].P;
  ++v51->TotalAllocates;
  v21 = RtlpInterlockedPopEntrySList(&v51->ListHead);
  if ( !v21 )
  {
    ++v51->AllocateMisses;
    v52 = v50->PPLookasideList[8].L;
    ++v52->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&v52->ListHead);
    if ( !v21 )
    {
      ++v52->AllocateMisses;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v52->AllocateEx)(
                            (unsigned int)v52->Type,
                            v52->Size,
                            v52->Tag);
    }
  }
  if ( !v21 )
    return 3221225626LL;
  LODWORD(v21->Next) = v50->Number;
  if ( v48 || (a14 & 0x200) != 0 )
  {
    if ( (a6 & 0xFFA50048) != 0
      || (a7 & 0xFFFFFFF8) != 0
      || a8 > 5
      || (a9 & 0xEF000000) != 0
      || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
      || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
      || (a9 & 0x30) == 0x30
      || (a9 & 0x41) == 1 && ((a9 & 0xEF5E0ACC) != 0 || a8 - 1 > 2)
      || (a9 & 0x100100) == 0x100100
      || (a9 & 0x10100) == 0x10100
      || (a9 & 0x110000) == 0x110000
      || (a9 & 8) != 0 && (a2 & 4) != 0 )
    {
      goto LABEL_40;
    }
    if ( IopFailZeroAccessCreate && !a2 )
    {
LABEL_149:
      v53 = KeGetCurrentPrcb();
      v54 = v53->PPLookasideList[8].P;
      ++v54->TotalFrees;
      if ( LOWORD(v54->ListHead.Alignment) < v54->Depth
        || (++v54->FreeMisses,
            v54 = v53->PPLookasideList[8].L,
            ++v54->TotalFrees,
            LOWORD(v54->ListHead.Alignment) < v54->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v54->ListHead, v21);
        return 3221225506LL;
      }
      else
      {
        ++v54->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v54->FreeEx)(v21);
        return 3221225506LL;
      }
    }
    if ( a12 )
    {
      if ( a12 == 1 )
      {
        if ( !a13
          || ((__int64)a13->Next & 0xFFFFFFFC) != 0
          || HIDWORD(a13->Next) > 1
          || *((_DWORD *)&a13->Next + 2) > 1u
          || (a7 & 4) != 0
          || a8 - 1 > 2
          || (a9 & 0xFFFFFFCD) != 0 )
        {
          goto LABEL_40;
        }
      }
      else if ( a12 == 2 && (!a13 || (a7 & 4) != 0 || (a7 & 0xFFFFFFFD) == 0 || a8 != 2 || (a9 & 0xFFFFFFCD) != 0) )
      {
        goto LABEL_40;
      }
    }
  }
  if ( !v48 )
  {
    v16 = a9 & 0x7FFFFFFF;
    if ( a9 >= 0 )
      v16 = a9;
    v70 = a14 | 0x400;
    if ( a9 >= 0 )
      v70 = a14;
    v99 = v70;
    if ( a5 )
    {
      v57 = *a5;
      if ( (__int64)*a5 < 0 )
        goto LABEL_40;
      v92 = *a5;
    }
    else
    {
      v57 = v92;
    }
    if ( (v16 & 0x10000000) != 0 )
    {
      v71 = PsGetCurrentProcess()[1].AffinityPadding[10];
      if ( v71 && ((v72 = *(_WORD *)(v71 + 8), v72 == 332) || v72 == 452) )
      {
        if ( (unsigned int)NumberOfBytes < 0x10 )
          goto LABEL_40;
        *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)Src;
        v73 = (ULONG *)(int)Src[2];
        v93 = (char *)v73;
        v74 = Src[3];
        v70 = v99;
      }
      else
      {
        if ( (unsigned int)NumberOfBytes < 0x18 )
          goto LABEL_40;
        *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)Src;
        v73 = (ULONG *)*((_QWORD *)Src + 1);
        v93 = (char *)v73;
        v74 = Src[4];
        v70 = v99;
      }
    }
    else
    {
      *((_QWORD *)&v21[13].Next + 1) = 0LL;
      v73 = Src;
      v93 = (char *)Src;
      v74 = NumberOfBytes;
    }
    if ( v73 && v74 )
    {
      v75 = ExAllocatePoolWithTag(NonPagedPoolNx, v74, 0x61456F49u);
      *((_QWORD *)&v21[4].Next + 1) = v75;
      if ( !v75 )
      {
LABEL_79:
        v34 = KeGetCurrentPrcb();
        v35 = v34->PPLookasideList[8].P;
        ++v35->TotalFrees;
        if ( LOWORD(v35->ListHead.Alignment) < v35->Depth
          || (++v35->FreeMisses,
              v35 = v34->PPLookasideList[8].L,
              ++v35->TotalFrees,
              LOWORD(v35->ListHead.Alignment) < v35->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v35->ListHead, v21);
        }
        else
        {
          ++v35->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v35->FreeEx)(v21);
        }
        return 3221225626LL;
      }
      LODWORD(v21[5].Next) = v74;
      memmove(v75, v73, v74);
      v68 = a4;
      v76 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), v74, (PULONG)a4 + 2);
      v89 = v76;
      if ( v76 < 0 )
      {
        ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
        *a4 = v76;
LABEL_239:
        v77 = KeGetCurrentPrcb();
        v78 = v77->PPLookasideList[8].P;
        ++v78->TotalFrees;
        if ( LOWORD(v78->ListHead.Alignment) < v78->Depth
          || (++v78->FreeMisses,
              v78 = v77->PPLookasideList[8].L,
              ++v78->TotalFrees,
              LOWORD(v78->ListHead.Alignment) < v78->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v78->ListHead, v21);
          return v89;
        }
        else
        {
          ++v78->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v78->FreeEx)(v21);
          return v89;
        }
      }
      v70 = v99;
LABEL_246:
      LODWORD(v21->Next) = 14680072;
      LODWORD(v21[2].Next) = 0;
      *((_QWORD *)&v21[1].Next + 1) = 0LL;
      *((_QWORD *)&v21[3].Next + 1) = v57;
      LODWORD(v21[4].Next) = v16 & 0xFFFFFF;
      WORD2(v21[4].Next) = a6;
      HIWORD(v21[4].Next) = a7;
      *((_DWORD *)&v21[5].Next + 2) = a8;
      *((_WORD *)&v21[8].Next + 4) = 0;
      *((_BYTE *)&v21[8].Next + 10) = 0;
      HIDWORD(v21[5].Next) = v70;
      *((_QWORD *)&v21[2].Next + 1) = 0LL;
      v21[3].Next = a3;
      *((_DWORD *)&v21[7].Next + 2) = a12;
      v21[8].Next = a13;
      *((_DWORD *)&v21[9].Next + 2) = a15;
      *((_BYTE *)&v21[9].Next + 12) = v90;
      v21[10] = 0LL;
      v21[11] = 0LL;
      LOWORD(v21[10].Next) = 40;
      v21[12].Next = (_SLIST_ENTRY *)1;
      if ( a16 )
      {
        v79 = *a16;
        if ( v79 > 0x28 )
          v79 = 40LL;
        memmove(&v21[10], a16, v79);
      }
      if ( v21[12].Next == (_SLIST_ENTRY *)1 )
        v21[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
      LODWORD(v21[1].Next) = 0;
      *((_QWORD *)&v21->Next + 1) = 0LL;
      IopUpdateOtherOperationCount();
      v80 = ObOpenObjectByNameEx(a3, IoFileObjectType, v90, 0LL, a2, v21, v21[12].Next, &v92);
      v89 = v80;
      v81 = (void *)*((_QWORD *)&v21[4].Next + 1);
      if ( v81 )
        ExFreePoolWithTag(v81, 0);
      IopCleanupExtraCreateParameters(v21);
      v82 = (int)v21[2].Next;
      if ( v80 >= 0 )
      {
        if ( v82 == -1096154543 )
        {
          *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
          *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
          *a1 = v92;
          *((_QWORD *)v68 + 1) = *((_QWORD *)&v21[1].Next + 1);
          *v68 = (int)v21[1].Next;
          v89 = (unsigned int)v21[1].Next;
LABEL_273:
          if ( v82 == -1096154543 )
          {
            v87 = (struct _DMA_ADAPTER *)*((_QWORD *)&v21->Next + 1);
            if ( v87 )
              HalPutDmaAdapter(v87);
          }
          goto LABEL_239;
        }
        ObCloseHandle(v92, v90);
        v80 = -1073741788;
        v89 = -1073741788;
      }
      v83 = (int)v21[1].Next;
      if ( v83 >= 0 )
      {
        v84 = *((_QWORD *)&v21->Next + 1);
        if ( v84 )
        {
          if ( v82 == -1096154543 )
          {
            if ( (*(_DWORD *)(v84 + 80) & 0x40000) == 0 )
              IopCloseFile(0LL, *((_QWORD *)&v21->Next + 1), 1LL);
          }
          else
          {
            if ( *(_WORD *)(v84 + 88) )
            {
              ExFreePoolWithTag(*(PVOID *)(v84 + 96), 0);
              v84 = *((_QWORD *)&v21->Next + 1);
            }
            *(_QWORD *)(v84 + 8) = 0LL;
            HalPutDmaAdapter(*((PADAPTER_OBJECT *)&v21->Next + 1));
          }
        }
      }
      else
      {
        v80 = (int)v21[1].Next;
        v89 = v80;
        if ( (v83 & 0xC0000000) == 0x80000000 || v83 == -1073741191 )
        {
          *v68 = v83;
          *((_QWORD *)v68 + 1) = *((_QWORD *)&v21[1].Next + 1);
        }
      }
      if ( v80 == -1073741772 )
      {
        v85 = *((_QWORD *)&v21[1].Next + 1) - 2684354563LL;
        if ( v85 <= 0x16 )
        {
          v86 = 4194817LL;
          if ( _bittest64(&v86, v85) )
            v89 = -1073741184;
        }
      }
      goto LABEL_273;
    }
    *((_QWORD *)&v21[4].Next + 1) = 0LL;
LABEL_245:
    v68 = a4;
    LODWORD(v21[5].Next) = 0;
    goto LABEL_246;
  }
  v55 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v55 = (__int64)a1;
  *(_QWORD *)v55 = *(_QWORD *)v55;
  v56 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v56 = (__int64)a4;
  *(_DWORD *)v56 = *(_DWORD *)v56;
  if ( a5 )
  {
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v57 = *a5;
    v92 = v57;
    if ( (__int64)v57 < 0 )
      RtlRaiseStatus(-1073741811);
  }
  else
  {
    v57 = 0LL;
    v92 = 0LL;
  }
  if ( (a9 & 0x10000000) == 0 )
  {
    *((_QWORD *)&v21[13].Next + 1) = 0LL;
    v62 = (unsigned __int64)Src;
    v93 = (char *)Src;
    v63 = NumberOfBytes;
LABEL_208:
    *((_QWORD *)&v21[4].Next + 1) = 0LL;
    if ( v62 && v63 )
    {
      if ( (v62 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v66 = v63 + v62;
      if ( v66 > 0x7FFFFFFF0000LL || v66 < v62 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v67 = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v63, 0x61456F49u);
      *((_QWORD *)&v21[4].Next + 1) = v67;
      LODWORD(v21[5].Next) = v63;
      memmove(v67, (const void *)v62, v63);
      v68 = a4;
      v69 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), v63, (PULONG)a4 + 2);
      if ( v69 < 0 )
      {
        *a4 = v69;
        RtlRaiseStatus(v69);
      }
      v70 = a14;
      goto LABEL_246;
    }
    v70 = a14;
    goto LABEL_245;
  }
  v58 = PsGetCurrentProcess()[1].AffinityPadding[10];
  if ( v58 )
  {
    v59 = *(_WORD *)(v58 + 8);
    if ( v59 == 332 || v59 == 452 )
    {
      if ( (_DWORD)NumberOfBytes )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Src + (unsigned int)NumberOfBytes > 0x7FFFFFFF0000LL
          || (ULONG *)((char *)Src + (unsigned int)NumberOfBytes) < Src )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      if ( (unsigned int)NumberOfBytes < 0x10 )
      {
        v60 = KeGetCurrentPrcb();
        v61 = v60->PPLookasideList[8].P;
        ++v61->TotalFrees;
        if ( LOWORD(v61->ListHead.Alignment) < v61->Depth
          || (++v61->FreeMisses,
              v61 = v60->PPLookasideList[8].L,
              ++v61->TotalFrees,
              LOWORD(v61->ListHead.Alignment) < v61->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v61->ListHead, v21);
        }
        else
        {
          ++v61->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v61->FreeEx)(v21);
        }
        return 3221225485LL;
      }
      *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)Src;
      v62 = (int)Src[2];
      v93 = (char *)v62;
      v63 = Src[3];
      goto LABEL_208;
    }
  }
  if ( (_DWORD)NumberOfBytes )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Src + (unsigned int)NumberOfBytes > 0x7FFFFFFF0000LL
      || (ULONG *)((char *)Src + (unsigned int)NumberOfBytes) < Src )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)NumberOfBytes >= 0x18 )
  {
    *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)Src;
    v62 = *((_QWORD *)Src + 1);
    v93 = (char *)v62;
    v63 = Src[4];
    goto LABEL_208;
  }
  v64 = KeGetCurrentPrcb();
  v65 = v64->PPLookasideList[8].P;
  ++v65->TotalFrees;
  if ( LOWORD(v65->ListHead.Alignment) < v65->Depth
    || (++v65->FreeMisses,
        v65 = v64->PPLookasideList[8].L,
        ++v65->TotalFrees,
        LOWORD(v65->ListHead.Alignment) < v65->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v65->ListHead, v21);
  }
  else
  {
    ++v65->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v65->FreeEx)(v21);
  }
  return 3221225485LL;
}
