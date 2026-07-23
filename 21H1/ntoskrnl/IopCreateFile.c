/*
 * XREFs of IopCreateFile @ 0x14066D230
 * Callers:
 *     IoCreateFile @ 0x14066CF40 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x14066CFE0 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x14066D130 (NtOpenFile.c)
 *     NtCreateFile @ 0x14066D1A0 (NtCreateFile.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066E310 (FsRtlFreeExtraCreateParameter.c)
 *     IoCheckEaBufferValidity @ 0x14066E3E0 (IoCheckEaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        __int64 a3,
        int *a4,
        HANDLE *a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        char *a10,
        SIZE_T NumberOfBytes,
        int a12,
        _SLIST_ENTRY *a13,
        int a14,
        int a15,
        __int16 *Src)
{
  int v17; // esi
  int v18; // r13d
  char v19; // r12
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v23; // rdi
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // rcx
  int v27; // r12d
  __int64 v28; // rcx
  __int64 v29; // rcx
  HANDLE v30; // rbx
  KPROCESSOR_MODE v31; // si
  size_t v32; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v34; // r12d
  void *v35; // rcx
  __int64 v36; // r14
  int v37; // eax
  __int64 **v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // r13
  __int64 v42; // r15
  void (__fastcall *v43)(_QWORD *, _QWORD *); // rax
  __int64 v44; // rcx
  int Next; // ebx
  struct _DMA_ADAPTER *v46; // rcx
  struct _KPRCB *v47; // rdx
  _GENERAL_LOOKASIDE *v48; // rcx
  int v49; // ecx
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // rsi
  __int64 *v53; // rcx
  __int64 *v54; // rdx
  __int64 **v55; // rax
  __int64 v56; // rcx
  PVOID PoolWithQuotaTag; // rax
  int v58; // eax
  _GENERAL_LOOKASIDE *L; // rbx
  PVOID PoolWithTag; // rax
  NTSTATUS v61; // r14d
  struct _KPRCB *v62; // rdx
  _GENERAL_LOOKASIDE *v63; // rcx
  struct _KPRCB *v64; // rdx
  struct _KPRCB *v65; // rdx
  _GENERAL_LOOKASIDE *v66; // rcx
  unsigned int v67; // [rsp+44h] [rbp-54h]
  unsigned __int8 v68; // [rsp+48h] [rbp-50h]
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+58h] [rbp-40h]

  v17 = a9;
  Handle = 0LL;
  v18 = a14;
  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v19 = PreviousMode;
  v68 = v19;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v23 = RtlpInterlockedPopEntrySList(&P->ListHead);
  ListEntry = v23;
  if ( !v23 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v23 = RtlpInterlockedPopEntrySList(&L->ListHead);
    ListEntry = v23;
    if ( !v23 )
    {
      ++L->AllocateMisses;
      v23 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
      ListEntry = v23;
    }
  }
  if ( !v23 )
    return 3221225626LL;
  LODWORD(v23->Next) = CurrentPrcb->Number;
  if ( !v19 && (a14 & 0x200) == 0 )
  {
    v27 = a12;
    goto LABEL_24;
  }
  if ( (a7 & 0xFFFFFFF8) != 0
    || (a6 & 0xFFA50048) != 0
    || a8 > 5
    || (a9 & 0xFF000000) != 0
    || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
    || (a2 & 0x10000) == 0 && (a9 & 0x1000) != 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a2 & 4) != 0 && (a9 & 8) != 0 )
  {
    v24 = KeGetCurrentPrcb();
    v25 = v24->PPLookasideList[8].P;
    ++v25->TotalFrees;
    if ( LOWORD(v25->ListHead.Alignment) >= v25->Depth )
    {
      ++v25->FreeMisses;
      v25 = v24->PPLookasideList[8].L;
      ++v25->TotalFrees;
      if ( LOWORD(v25->ListHead.Alignment) >= v25->Depth )
      {
LABEL_166:
        ++v25->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v23);
        return 3221225485LL;
      }
    }
LABEL_11:
    RtlpInterlockedPushEntrySList(&v25->ListHead, v23);
    return 3221225485LL;
  }
  if ( !IopFailZeroAccessCreate || a2 )
  {
    v27 = a12;
    switch ( a12 )
    {
      case 0:
LABEL_23:
        v18 = a14;
LABEL_24:
        if ( v68 )
        {
          *((_QWORD *)&v23[4].Next + 1) = 0LL;
          v28 = (__int64)a1;
          if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
            v28 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v28 = *(_QWORD *)v28;
          v29 = (__int64)a4;
          if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
            v29 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v29 = *(_DWORD *)v29;
          if ( a5 )
          {
            if ( ((unsigned __int8)a5 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v30 = *a5;
            Handle = v30;
            if ( (__int64)v30 < 0 )
              RtlRaiseStatus(-1073741811);
          }
          else
          {
            v30 = 0LL;
            Handle = 0LL;
          }
          if ( a10 && (_DWORD)NumberOfBytes )
          {
            if ( ((unsigned __int8)a10 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&a10[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
              || &a10[(unsigned int)NumberOfBytes] < a10 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
            *((_QWORD *)&v23[4].Next + 1) = PoolWithQuotaTag;
            LODWORD(v23[5].Next) = NumberOfBytes;
            memmove(PoolWithQuotaTag, a10, (unsigned int)NumberOfBytes);
            v58 = IoCheckEaBufferValidity(
                    *((PFILE_FULL_EA_INFORMATION *)&v23[4].Next + 1),
                    NumberOfBytes,
                    (PULONG)a4 + 2);
            if ( v58 < 0 )
            {
              *a4 = v58;
              RtlRaiseStatus(v58);
            }
            goto LABEL_39;
          }
LABEL_38:
          *((_QWORD *)&v23[4].Next + 1) = 0LL;
          LODWORD(v23[5].Next) = 0;
          goto LABEL_39;
        }
        if ( a9 < 0 )
        {
          a14 = v18 | 0x400;
          v17 = a9 & 0x7FFFFFFF;
        }
        if ( !a5 )
        {
          v30 = Handle;
          goto LABEL_79;
        }
        v30 = *a5;
        if ( (__int64)*a5 >= 0 )
        {
          Handle = *a5;
LABEL_79:
          if ( !a10 || !(_DWORD)NumberOfBytes )
            goto LABEL_38;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
          *((_QWORD *)&v23[4].Next + 1) = PoolWithTag;
          if ( PoolWithTag )
          {
            LODWORD(v23[5].Next) = NumberOfBytes;
            memmove(PoolWithTag, a10, (unsigned int)NumberOfBytes);
            v61 = IoCheckEaBufferValidity(
                    *((PFILE_FULL_EA_INFORMATION *)&v23[4].Next + 1),
                    NumberOfBytes,
                    (PULONG)a4 + 2);
            v67 = v61;
            if ( v61 < 0 )
            {
              ExFreePoolWithTag(*((PVOID *)&v23[4].Next + 1), 0);
              *a4 = v61;
LABEL_70:
              v47 = KeGetCurrentPrcb();
              v48 = v47->PPLookasideList[8].P;
              ++v48->TotalFrees;
              if ( LOWORD(v48->ListHead.Alignment) < v48->Depth
                || (++v48->FreeMisses,
                    v48 = v47->PPLookasideList[8].L,
                    ++v48->TotalFrees,
                    LOWORD(v48->ListHead.Alignment) < v48->Depth) )
              {
                RtlpInterlockedPushEntrySList(&v48->ListHead, v23);
              }
              else
              {
                ++v48->FreeMisses;
                ((void (__fastcall *)(PSLIST_ENTRY))v48->FreeEx)(v23);
              }
              return v67;
            }
LABEL_39:
            LODWORD(v23->Next) = 14155784;
            LODWORD(v23[2].Next) = 0;
            *((_QWORD *)&v23[1].Next + 1) = 0LL;
            *((_QWORD *)&v23[3].Next + 1) = v30;
            LODWORD(v23[4].Next) = v17;
            WORD2(v23[4].Next) = a6;
            HIWORD(v23[4].Next) = a7;
            *((_DWORD *)&v23[5].Next + 2) = a8;
            *((_WORD *)&v23[8].Next + 4) = 0;
            *((_BYTE *)&v23[8].Next + 10) = 0;
            HIDWORD(v23[5].Next) = a14;
            *((_QWORD *)&v23[2].Next + 1) = 0LL;
            v23[3].Next = (_SLIST_ENTRY *)a3;
            *((_DWORD *)&v23[7].Next + 2) = v27;
            v23[8].Next = a13;
            *((_DWORD *)&v23[9].Next + 2) = a15;
            v31 = v68;
            *((_BYTE *)&v23[9].Next + 12) = v68;
            v23[10] = 0LL;
            v23[11] = 0LL;
            v32 = 40LL;
            LOWORD(v23[10].Next) = 40;
            v23[12].Next = (_SLIST_ENTRY *)1;
            if ( Src )
            {
              if ( (unsigned __int64)*Src <= 0x28 )
                v32 = *Src;
              memmove(&v23[10], Src, v32);
            }
            if ( v23[12].Next == (_SLIST_ENTRY *)1 )
              v23[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
            LODWORD(v23[1].Next) = 0;
            *((_QWORD *)&v23->Next + 1) = 0LL;
            CurrentThread = KeGetCurrentThread();
            ++CurrentThread->OtherOperationCount;
            __incgsdword(0x2EE4u);
            v34 = ObOpenObjectByNameEx(
                    a3,
                    (__int64)IoFileObjectType,
                    v68,
                    0LL,
                    a2,
                    (__int64)v23,
                    (__int64)v23[12].Next,
                    &Handle);
            v67 = v34;
            v35 = (void *)*((_QWORD *)&v23[4].Next + 1);
            if ( v35 )
              ExFreePoolWithTag(v35, 0);
            v36 = *((_QWORD *)&v23[10].Next + 1);
            if ( v36 )
            {
              v37 = *(_DWORD *)(v36 + 4);
              if ( (v37 & 0x3F0) != 0 )
              {
                *(_DWORD *)(v36 + 4) = v37 - 16;
LABEL_63:
                *((_QWORD *)&v23[10].Next + 1) = 0LL;
                goto LABEL_64;
              }
              v38 = (__int64 **)(v36 + 8);
              if ( (v37 & 1) == 0 )
              {
                while ( 1 )
                {
                  v39 = *v38;
                  if ( *v38 == (__int64 *)v38 )
                    break;
                  v40 = *v39;
                  if ( (__int64 **)v39[1] != v38 || *(__int64 **)(v40 + 8) != v39 )
                    goto LABEL_156;
                  *v38 = (__int64 *)v40;
                  *(_QWORD *)(v40 + 8) = v38;
                  v39[1] = 0LL;
                  *v39 = 0LL;
                  v41 = v39 + 8;
                  v42 = 0LL;
                  v43 = (void (__fastcall *)(_QWORD, _QWORD))v39[4];
                  if ( v43 )
                    v43(v41, v41 - 6);
                  if ( (*(_DWORD *)(v41 - 3) & 0x20) != 0 && FltMgrCallbacks )
                  {
                    v42 = *(v41 - 1);
                    (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v42, v41);
                  }
                  v44 = *(v41 - 2);
                  if ( v44 )
                  {
                    if ( (*(_DWORD *)(v41 - 3) & 0x40) != 0 )
                    {
                      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v44, v41 - 9);
                    }
                    else
                    {
                      ++*(_DWORD *)(v44 + 28);
                      if ( *(_WORD *)v44 >= *(_WORD *)(v44 + 16) )
                      {
                        ++*(_DWORD *)(v44 + 32);
                        (*(void (__fastcall **)(_QWORD *))(v44 + 56))(v41 - 9);
                      }
                      else
                      {
                        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v44, (PSLIST_ENTRY)(v41 - 9));
                      }
                    }
                  }
                  else
                  {
                    ExFreePoolWithTag(v41 - 9, 0);
                  }
                  if ( v42 )
                    (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v42);
                }
                if ( (*(_DWORD *)(v36 + 4) & 4) != 0 )
                {
                  ++dword_140CDB29C;
                  if ( LOWORD(FsRtlEcpListLookaside.Alignment) >= (unsigned __int16)word_140CDB290 )
                  {
                    ++dword_140CDB2A0;
                    ((void (__fastcall *)(__int64))qword_140CDB2B8)(v36);
                  }
                  else
                  {
                    RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v36);
                  }
                }
                else
                {
                  ExFreePoolWithTag((PVOID)v36, 0);
                }
                v31 = v68;
                goto LABEL_63;
              }
              v52 = *v38;
              while ( v52 != (__int64 *)v38 )
              {
                v53 = v52;
                v52 = (__int64 *)*v52;
                if ( (v53[5] & 1) == 0 )
                {
                  v54 = (__int64 *)*v53;
                  v55 = (__int64 **)v53[1];
                  if ( *(__int64 **)(*v53 + 8) != v53 || *v55 != v53 )
LABEL_156:
                    __fastfail(3u);
                  *v55 = v54;
                  v54[1] = (__int64)v55;
                  v53[1] = 0LL;
                  *v53 = 0LL;
                  FsRtlFreeExtraCreateParameter(v53 + 8);
                }
              }
              v31 = v68;
            }
LABEL_64:
            Next = (int)v23[2].Next;
            if ( v34 >= 0 )
            {
              if ( Next == -1096154543 )
              {
                *(_DWORD *)(*((_QWORD *)&v23->Next + 1) + 80LL) |= 0x40000u;
                *(_DWORD *)(*((_QWORD *)&v23->Next + 1) + 80LL) &= ~0x2000000u;
                *a1 = Handle;
                *((_QWORD *)a4 + 1) = *((_QWORD *)&v23[1].Next + 1);
                *a4 = (int)v23[1].Next;
                v67 = (unsigned int)v23[1].Next;
LABEL_67:
                if ( Next == -1096154543 )
                {
                  v46 = (struct _DMA_ADAPTER *)*((_QWORD *)&v23->Next + 1);
                  if ( v46 )
                    HalPutDmaAdapter(v46);
                }
                goto LABEL_70;
              }
              ObCloseHandle(Handle, v31);
              v34 = -1073741788;
              v67 = -1073741788;
            }
            v49 = (int)v23[1].Next;
            if ( v49 >= 0 )
            {
              v56 = *((_QWORD *)&v23->Next + 1);
              if ( v56 )
              {
                if ( Next == -1096154543 )
                {
                  if ( (*(_DWORD *)(v56 + 80) & 0x40000) == 0 )
                    IopCloseFile(0LL, *((struct _FILE_OBJECT **)&v23->Next + 1), 1LL, 1LL);
                }
                else
                {
                  if ( *(_WORD *)(v56 + 88) )
                  {
                    ExFreePoolWithTag(*(PVOID *)(v56 + 96), 0);
                    v56 = *((_QWORD *)&v23->Next + 1);
                  }
                  *(_QWORD *)(v56 + 8) = 0LL;
                  HalPutDmaAdapter(*((PADAPTER_OBJECT *)&v23->Next + 1));
                }
              }
            }
            else
            {
              v34 = (int)v23[1].Next;
              v67 = v34;
              if ( (v49 & 0xC0000000) == 0x80000000 || v49 == -1073741191 )
              {
                *a4 = v49;
                *((_QWORD *)a4 + 1) = *((_QWORD *)&v23[1].Next + 1);
              }
            }
            if ( v34 == -1073741772 )
            {
              v50 = *((_QWORD *)&v23[1].Next + 1) - 2684354563LL;
              if ( v50 <= 0x16 )
              {
                v51 = 4194817LL;
                if ( _bittest64(&v51, v50) )
                  v67 = -1073741184;
              }
            }
            goto LABEL_67;
          }
          v65 = KeGetCurrentPrcb();
          v66 = v65->PPLookasideList[8].P;
          ++v66->TotalFrees;
          if ( LOWORD(v66->ListHead.Alignment) < v66->Depth
            || (++v66->FreeMisses,
                v66 = v65->PPLookasideList[8].L,
                ++v66->TotalFrees,
                LOWORD(v66->ListHead.Alignment) < v66->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v66->ListHead, v23);
          }
          else
          {
            ++v66->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))v66->FreeEx)(v23);
          }
          return 3221225626LL;
        }
LABEL_145:
        v64 = KeGetCurrentPrcb();
        v25 = v64->PPLookasideList[8].P;
        ++v25->TotalFrees;
        if ( LOWORD(v25->ListHead.Alignment) >= v25->Depth )
        {
          ++v25->FreeMisses;
          v25 = v64->PPLookasideList[8].L;
          ++v25->TotalFrees;
          if ( LOWORD(v25->ListHead.Alignment) >= v25->Depth )
            goto LABEL_166;
        }
        goto LABEL_11;
      case 1:
        if ( !a13
          || ((__int64)a13->Next & 0xFFFFFFFC) != 0
          || HIDWORD(a13->Next) > 1
          || *((_DWORD *)&a13->Next + 2) > 1u
          || (a7 & 4) != 0
          || a8 - 1 > 2 )
        {
          goto LABEL_145;
        }
        break;
      case 2:
        if ( !a13 || (a7 & 0xFFFFFFFD) == 0 || (a7 & 4) != 0 || a8 != 2 )
          goto LABEL_145;
        break;
      default:
        goto LABEL_23;
    }
    if ( (a9 & 0xFFFFFFCD) != 0 )
      goto LABEL_145;
    goto LABEL_23;
  }
  v62 = KeGetCurrentPrcb();
  v63 = v62->PPLookasideList[8].P;
  ++v63->TotalFrees;
  if ( LOWORD(v63->ListHead.Alignment) < v63->Depth
    || (++v63->FreeMisses,
        v63 = v62->PPLookasideList[8].L,
        ++v63->TotalFrees,
        LOWORD(v63->ListHead.Alignment) < v63->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v63->ListHead, v23);
  }
  else
  {
    ++v63->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v63->FreeEx)(v23);
  }
  return 3221225506LL;
}
