/*
 * XREFs of CmpCreateKeyBody @ 0x14060E320
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406E3CDC (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140211210 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405FDCC8 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x14060D260 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x140610D30 (ObpAllocateObject.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpIsKeyStackDeleted @ 0x14061B650 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14061D4F4 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     SeReleaseSecurityDescriptor @ 0x14061F930 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpTransReferenceTransaction @ 0x1406A1680 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1406A16E0 (CmpTransDereferenceTransaction.c)
 *     CmpRecordParseFailure @ 0x1406B34E0 (CmpRecordParseFailure.c)
 *     ObpRegisterObject @ 0x1408E160C (ObpRegisterObject.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        ULONG_PTR **a7,
        bool *a8)
{
  ULONG_PTR v9; // rbx
  ULONG_PTR *v10; // rdi
  signed __int64 v13; // rax
  POBJECT_TYPE *v14; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v17; // rsi
  int Object; // ebp
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  __int64 v22; // rdi
  unsigned int v23; // esi
  int v24; // eax
  ULONG_PTR *v25; // rsi
  char v26; // r14
  unsigned int v27; // r8d
  ULONG_PTR v28; // rcx
  ULONG_PTR v29; // rax
  ULONG_PTR **v30; // rcx
  char v31; // di
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int v38; // eax
  ULONG_PTR v39; // rax
  __int64 v40; // rax
  struct _KPRCB *v41; // rax
  _GENERAL_LOOKASIDE *v42; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v44; // rdx
  _GENERAL_LOOKASIDE *v45; // rcx
  __int16 v46; // [rsp+40h] [rbp-68h] BYREF
  __int64 v47; // [rsp+48h] [rbp-60h] BYREF
  ULONG_PTR v48; // [rsp+50h] [rbp-58h]
  __int128 v49; // [rsp+58h] [rbp-50h] BYREF

  v9 = 0LL;
  v48 = 0LL;
  v10 = 0LL;
  v13 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v13 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v13 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v9 = *(_QWORD *)(a4 + 56);
      v38 = CmpTransReferenceTransaction(v9);
      v23 = v38;
      if ( v38 < 0 )
      {
        CmpRecordParseFailure(a3, 131840LL, (unsigned int)v38);
LABEL_47:
        CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
        return v23;
      }
    }
    else
    {
      v48 = a4 + 88;
    }
  }
  v14 = CmKeyObjectType;
  v47 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v46 = 1;
  v49 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v17 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v17 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v17 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v17 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v17 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v17 )
      {
        v23 = -1073741670;
        goto LABEL_49;
      }
    }
  }
  LODWORD(v17->Next) = CurrentPrcb->Number;
  Object = ObpCaptureObjectCreateInformation(a2, a2, 0LL, &v49, (__int64)v17, 0);
  if ( Object < 0 )
  {
    v41 = KeGetCurrentPrcb();
    v42 = v41->PPLookasideList[4].P;
    ++v42->TotalFrees;
    if ( LOWORD(v42->ListHead.Alignment) < v42->Depth
      || (++v42->FreeMisses,
          v42 = v41->PPLookasideList[4].L,
          ++v42->TotalFrees,
          LOWORD(v42->ListHead.Alignment) < v42->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v42->ListHead, v17);
    }
    else
    {
      ++v42->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v42->FreeEx)(v17);
    }
    goto LABEL_12;
  }
  if ( ((__int64)v17->Next & (_DWORD)v14[9]) != 0 )
  {
    Object = -1073741811;
    goto LABEL_58;
  }
  if ( ((__int64)v17->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Object = -1073741727;
    goto LABEL_58;
  }
  v21 = *((_DWORD *)v14 + 27);
  HIDWORD(v17[1].Next) = *((_DWORD *)v14 + 26);
  *((_DWORD *)&v17[1].Next + 2) = v21;
  Object = ObpAllocateObject((_DWORD)v17, a2, (_DWORD)v14, (unsigned int)&v49, 104, (__int64)&v47, (__int64)&v46);
  if ( Object < 0 )
  {
LABEL_58:
    if ( *((_QWORD *)&v49 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v49);
    Next = v17[2].Next;
    if ( Next )
    {
      LOBYTE(v19) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v17[1].Next), v19, v20);
      v17[2].Next = 0LL;
    }
    v44 = KeGetCurrentPrcb();
    v45 = v44->PPLookasideList[4].P;
    ++v45->TotalFrees;
    if ( LOWORD(v45->ListHead.Alignment) >= v45->Depth
      && (++v45->FreeMisses,
          v45 = v44->PPLookasideList[4].L,
          ++v45->TotalFrees,
          LOWORD(v45->ListHead.Alignment) >= v45->Depth) )
    {
      ++v45->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v45->FreeEx)(v17);
    }
    else
    {
      RtlpInterlockedPushEntrySList(&v45->ListHead, v17);
    }
    goto LABEL_12;
  }
  v22 = v47;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v47);
    ObpPushStackInfo(v22, 1, 1u, 0x746C6644u);
  }
  v10 = (ULONG_PTR *)(v22 + 48);
LABEL_12:
  v23 = Object;
  if ( Object < 0 )
  {
LABEL_49:
    CmpRecordParseFailure(a3, 132096LL, v23);
    v31 = 1;
    goto LABEL_30;
  }
  memset(v10, 0, 0x68uLL);
  *((_WORD *)v10 + 25) = *(_WORD *)(a3 + 20);
  v10[1] = BugCheckParameter2;
  v10[3] = PsGetCurrentThreadProcessId();
  *((_DWORD *)v10 + 24) = -1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v40 = *(int *)(BugCheckParameter2 + 96);
    *(_DWORD *)v10 = v40;
    *(_QWORD *)(a3 + 56) = v40;
  }
  else
  {
    *(_DWORD *)v10 = 1803104306;
  }
  if ( a4 )
  {
    v39 = v48;
    v10[7] = v9;
    v9 = 0LL;
    v10[8] = v39;
  }
  v10[10] = (ULONG_PTR)(v10 + 9);
  v10[9] = (ULONG_PTR)(v10 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v10 + 24) |= 0x10u;
  v24 = *(_DWORD *)(BugCheckParameter2 + 184);
  if ( (v24 & 0x400000) != 0 )
  {
LABEL_29:
    v23 = 0;
    *a7 = v10;
    v31 = 0;
    *a8 = (v24 & 0x400000) != 0;
  }
  else
  {
    v25 = v10 + 4;
LABEL_21:
    v26 = a5;
    do
    {
      v10[5] = (ULONG_PTR)(v10 + 4);
      v27 = 0;
      *v25 = (ULONG_PTR)v25;
      do
      {
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)(v10[1] + 8LL * v27 + 136),
                (signed __int64)v10,
                0LL) )
          goto LABEL_28;
        ++v27;
      }
      while ( v27 < 4 );
      v28 = v10[1];
      if ( v26 )
      {
        v29 = v28 + 120;
        v30 = *(ULONG_PTR ***)(v28 + 128);
        if ( *v30 != (ULONG_PTR *)v29 )
          __fastfail(3u);
        *v25 = v29;
        v10[5] = (ULONG_PTR)v30;
        *v30 = v25;
        *(_QWORD *)(v29 + 8) = v25;
LABEL_28:
        v24 = *(_DWORD *)(BugCheckParameter2 + 184);
        goto LABEL_29;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 48), 1LL, 17LL) == 17 )
      {
        *(_QWORD *)(v28 + 56) = KeGetCurrentThread();
        a5 = 1;
        goto LABEL_21;
      }
      CmpUnlockKcb(v10[1]);
      CmpLockKcbExclusive(v10[1]);
      v26 = 1;
    }
    while ( !(unsigned __int8)CmpIsKeyStackDeleted(a6, a4) );
    v23 = -1073741444;
    v31 = 1;
  }
LABEL_30:
  if ( v9 )
    CmpTransDereferenceTransaction(v9);
  if ( v31 )
    goto LABEL_47;
  return v23;
}
