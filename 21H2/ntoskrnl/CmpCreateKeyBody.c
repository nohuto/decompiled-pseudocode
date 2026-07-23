/*
 * XREFs of CmpCreateKeyBody @ 0x140713A70
 * Callers:
 *     CmpStartSiloRegistryNamespace @ 0x1406225AC (CmpStartSiloRegistryNamespace.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     CmpTransReferenceTransaction @ 0x1405DEF80 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1405DEFE0 (CmpTransDereferenceTransaction.c)
 *     CmpRecordParseFailure @ 0x1405E99A0 (CmpRecordParseFailure.c)
 *     ObpCaptureObjectCreateInformation @ 0x14064B260 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x140656168 (ObpFreeObjectNameBuffer.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 *     ObpAllocateObject @ 0x140716610 (ObpAllocateObject.c)
 *     ObpRegisterObject @ 0x1408DEF2C (ObpRegisterObject.c)
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
  __int64 v9; // rbx
  ULONG_PTR *v10; // rdi
  signed __int64 v13; // rax
  POBJECT_TYPE *v14; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v17; // rsi
  int Object; // ebp
  int v19; // ecx
  __int64 v20; // rdi
  unsigned int v21; // esi
  int v22; // eax
  ULONG_PTR *v23; // rsi
  char v24; // r14
  unsigned int v25; // r8d
  ULONG_PTR v26; // rcx
  ULONG_PTR v27; // rax
  ULONG_PTR **v28; // rcx
  char v29; // di
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  struct _KPRCB *v39; // rax
  _GENERAL_LOOKASIDE *v40; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v42; // rdx
  _GENERAL_LOOKASIDE *v43; // rcx
  __int16 v44; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+48h] [rbp-60h] BYREF
  __int64 v46; // [rsp+50h] [rbp-58h]
  __int128 v47; // [rsp+58h] [rbp-50h] BYREF

  v9 = 0LL;
  v46 = 0LL;
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
      v36 = CmpTransReferenceTransaction(v9);
      v21 = v36;
      if ( v36 < 0 )
      {
        CmpRecordParseFailure(a3, 131840, v36);
LABEL_47:
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        return v21;
      }
    }
    else
    {
      v46 = a4 + 88;
    }
  }
  v14 = CmKeyObjectType;
  v45 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v44 = 1;
  v47 = 0LL;
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
        v21 = -1073741670;
        goto LABEL_49;
      }
    }
  }
  LODWORD(v17->Next) = CurrentPrcb->Number;
  Object = ObpCaptureObjectCreateInformation(a2, a2, 0LL, &v47, (__int64)v17, 0);
  if ( Object < 0 )
  {
    v39 = KeGetCurrentPrcb();
    v40 = v39->PPLookasideList[4].P;
    ++v40->TotalFrees;
    if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
      || (++v40->FreeMisses,
          v40 = v39->PPLookasideList[4].L,
          ++v40->TotalFrees,
          LOWORD(v40->ListHead.Alignment) < v40->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v40->ListHead, v17);
    }
    else
    {
      ++v40->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v40->FreeEx)(v17);
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
  v19 = *((_DWORD *)v14 + 27);
  HIDWORD(v17[1].Next) = *((_DWORD *)v14 + 26);
  *((_DWORD *)&v17[1].Next + 2) = v19;
  Object = ObpAllocateObject((_DWORD)v17, a2, (_DWORD)v14, (unsigned int)&v47, 104, (__int64)&v45, (__int64)&v44);
  if ( Object < 0 )
  {
LABEL_58:
    if ( *((_QWORD *)&v47 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v47);
    Next = v17[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v17[1].Next, 1);
      v17[2].Next = 0LL;
    }
    v42 = KeGetCurrentPrcb();
    v43 = v42->PPLookasideList[4].P;
    ++v43->TotalFrees;
    if ( LOWORD(v43->ListHead.Alignment) >= v43->Depth
      && (++v43->FreeMisses,
          v43 = v42->PPLookasideList[4].L,
          ++v43->TotalFrees,
          LOWORD(v43->ListHead.Alignment) >= v43->Depth) )
    {
      ++v43->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v43->FreeEx)(v17);
    }
    else
    {
      RtlpInterlockedPushEntrySList(&v43->ListHead, v17);
    }
    goto LABEL_12;
  }
  v20 = v45;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v45);
    ObpPushStackInfo(v20, 1, 1u, 0x746C6644u);
  }
  v10 = (ULONG_PTR *)(v20 + 48);
LABEL_12:
  v21 = Object;
  if ( Object < 0 )
  {
LABEL_49:
    CmpRecordParseFailure(a3, 132096, v21);
    v29 = 1;
    goto LABEL_30;
  }
  memset(v10, 0, 0x68uLL);
  *((_WORD *)v10 + 25) = *(_WORD *)(a3 + 20);
  v10[1] = BugCheckParameter2;
  v10[3] = PsGetCurrentThreadProcessId();
  *((_WORD *)v10 + 2) = 0;
  *((_DWORD *)v10 + 24) = -1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v38 = *(int *)(BugCheckParameter2 + 96);
    *(_DWORD *)v10 = v38;
    *(_QWORD *)(a3 + 56) = v38;
  }
  else
  {
    *(_DWORD *)v10 = 1803104306;
  }
  if ( a4 )
  {
    v37 = v46;
    v10[7] = v9;
    v9 = 0LL;
    v10[8] = v37;
  }
  v10[10] = (ULONG_PTR)(v10 + 9);
  v10[9] = (ULONG_PTR)(v10 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v10 + 24) |= 0x10u;
  v22 = *(_DWORD *)(BugCheckParameter2 + 184);
  if ( (v22 & 0x400000) != 0 )
  {
LABEL_29:
    v21 = 0;
    *a7 = v10;
    v29 = 0;
    *a8 = (v22 & 0x400000) != 0;
  }
  else
  {
    v23 = v10 + 4;
LABEL_21:
    v24 = a5;
    do
    {
      v10[5] = (ULONG_PTR)(v10 + 4);
      v25 = 0;
      *v23 = (ULONG_PTR)v23;
      do
      {
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)(v10[1] + 8LL * v25 + 136),
                (signed __int64)v10,
                0LL) )
          goto LABEL_28;
        ++v25;
      }
      while ( v25 < 4 );
      v26 = v10[1];
      if ( v24 )
      {
        v27 = v26 + 120;
        v28 = *(ULONG_PTR ***)(v26 + 128);
        if ( *v28 != (ULONG_PTR *)v27 )
          __fastfail(3u);
        *v23 = v27;
        v10[5] = (ULONG_PTR)v28;
        *v28 = v23;
        *(_QWORD *)(v27 + 8) = v23;
LABEL_28:
        v22 = *(_DWORD *)(BugCheckParameter2 + 184);
        goto LABEL_29;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 48), 1LL, 17LL) == 17 )
      {
        *(_QWORD *)(v26 + 56) = KeGetCurrentThread();
        a5 = 1;
        goto LABEL_21;
      }
      CmpUnlockKcb(v10[1]);
      CmpLockKcbExclusive(v10[1]);
      v24 = 1;
    }
    while ( !CmpIsKeyStackDeleted(a6, a4) );
    v21 = -1073741444;
    v29 = 1;
  }
LABEL_30:
  if ( v9 )
    CmpTransDereferenceTransaction(v9);
  if ( v29 )
    goto LABEL_47;
  return v21;
}
