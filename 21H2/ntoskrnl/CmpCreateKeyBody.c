/*
 * XREFs of CmpCreateKeyBody @ 0x14072E210
 * Callers:
 *     CmpStartSiloRegistryNamespace @ 0x140690978 (CmpStartSiloRegistryNamespace.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     CmpTransReferenceTransaction @ 0x14067F7A4 (CmpTransReferenceTransaction.c)
 *     CmpRecordParseFailure @ 0x14068038C (CmpRecordParseFailure.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC (CmpDereferenceKeyControlBlockUnsafe.c)
 *     ObpFreeObjectNameBuffer @ 0x14071F0D0 (ObpFreeObjectNameBuffer.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14072E5D0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     ObpCaptureObjectCreateInformation @ 0x1407CCD80 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140986424 (ObpRegisterObject.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7,
        bool *a8)
{
  char v8; // r13
  signed __int64 v12; // rax
  POBJECT_TYPE *v13; // rsi
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v16; // rbx
  int Information; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rbx
  _DWORD *v22; // rbx
  int v23; // eax
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v29; // rbp
  _QWORD *v30; // rdi
  unsigned int i; // r8d
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  bool v35; // dl
  char v36; // bl
  __int64 v38; // rax
  __int64 v39; // rax
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  __int16 v45; // [rsp+40h] [rbp-68h] BYREF
  __int64 v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+50h] [rbp-58h] BYREF
  __int64 v48; // [rsp+58h] [rbp-50h]
  __int128 v49; // [rsp+60h] [rbp-48h] BYREF

  v46 = 0LL;
  v8 = a5 & 1;
  v48 = 0LL;
  v12 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( !v12 )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( v12 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v46 = *(_QWORD *)(a4 + 56);
      v23 = CmpTransReferenceTransaction(v46);
      Information = v23;
      if ( v23 < 0 )
      {
        CmpRecordParseFailure(a3, 131840, v23);
LABEL_47:
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
        return (unsigned int)Information;
      }
    }
    else
    {
      v48 = a4 + 88;
    }
  }
  v13 = CmKeyObjectType;
  v47 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = 1;
  v49 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v16 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v16 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v16 )
      {
        Information = -1073741670;
LABEL_49:
        CmpRecordParseFailure(a3, 132096, Information);
        v29 = v46;
        v36 = 1;
        goto LABEL_35;
      }
    }
  }
  LODWORD(v16->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0, (unsigned int)&v49, (__int64)v16, 0);
  if ( Information < 0 )
  {
    v40 = KeGetCurrentPrcb();
    v41 = v40->PPLookasideList[4].P;
    ++v41->TotalFrees;
    if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
      || (++v41->FreeMisses,
          v41 = v40->PPLookasideList[4].L,
          ++v41->TotalFrees,
          LOWORD(v41->ListHead.Alignment) < v41->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v41->ListHead, v16);
    }
    else
    {
      ++v41->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v41->FreeEx)(v16);
    }
    goto LABEL_49;
  }
  if ( ((__int64)v16->Next & (_DWORD)v13[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_57;
  }
  if ( ((__int64)v16->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Information = -1073741727;
    goto LABEL_57;
  }
  v20 = *((_DWORD *)v13 + 27);
  HIDWORD(v16[1].Next) = *((_DWORD *)v13 + 26);
  *((_DWORD *)&v16[1].Next + 2) = v20;
  Information = ObpAllocateObject((_DWORD)v16, a2, (_DWORD)v13, (unsigned int)&v49, 112, (__int64)&v47, (__int64)&v45);
  if ( Information < 0 )
  {
LABEL_57:
    if ( *((_QWORD *)&v49 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v49);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v18, v19);
      v16[2].Next = 0LL;
    }
    v43 = KeGetCurrentPrcb();
    v44 = v43->PPLookasideList[4].P;
    ++v44->TotalFrees;
    if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
      || (++v44->FreeMisses,
          v44 = v43->PPLookasideList[4].L,
          ++v44->TotalFrees,
          LOWORD(v44->ListHead.Alignment) < v44->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v44->ListHead, v16);
    }
    else
    {
      ++v44->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v44->FreeEx)(v16);
    }
    goto LABEL_49;
  }
  v21 = v47;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v47);
    ObpPushStackInfo(v21, 1, 1u, 0x746C6644u);
  }
  v22 = (_DWORD *)(v21 + 48);
  memset(v22, 0, 0x70uLL);
  *((_WORD *)v22 + 25) = *(_WORD *)(a3 + 20);
  *((_QWORD *)v22 + 1) = BugCheckParameter2;
  *((_QWORD *)v22 + 3) = PsGetCurrentThreadProcessId();
  *((_WORD *)v22 + 2) = 0;
  v22[24] = -1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
    v39 = *(int *)(BugCheckParameter2 + 96);
    *v22 = v39;
    *(_QWORD *)(a3 + 56) = v39;
  }
  else
  {
    *v22 = 1803104306;
  }
  v29 = v46;
  if ( a4 )
  {
    v38 = v48;
    *((_QWORD *)v22 + 7) = v46;
    v29 = 0LL;
    *((_QWORD *)v22 + 8) = v38;
  }
  *((_QWORD *)v22 + 10) = v22 + 18;
  *((_QWORD *)v22 + 9) = v22 + 18;
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v22 + 24) |= 0x10u;
  if ( (a5 & 2) == 0 || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0 )
  {
LABEL_34:
    v35 = (*(_DWORD *)(BugCheckParameter2 + 184) & 0x400000) != 0;
    *a7 = v22;
    v36 = 0;
    Information = 0;
    *a8 = v35;
  }
  else
  {
    v30 = v22 + 8;
    do
    {
      while ( 1 )
      {
        *((_QWORD *)v22 + 5) = v22 + 8;
        *v30 = v30;
        for ( i = 0; i < 4; ++i )
        {
          if ( !_InterlockedCompareExchange64(
                  (volatile signed __int64 *)(*((_QWORD *)v22 + 1) + 8LL * i + 136),
                  (signed __int64)v22,
                  0LL) )
            goto LABEL_33;
        }
        v32 = *((_QWORD *)v22 + 1);
        if ( ((v8 + 1) & 2) != 0 )
        {
          v33 = v32 + 120;
          v34 = *(_QWORD **)(v32 + 128);
          if ( *v34 != v33 )
            __fastfail(3u);
          *v30 = v33;
          *((_QWORD *)v22 + 5) = v34;
          *v34 = v30;
          *(_QWORD *)(v33 + 8) = v30;
LABEL_33:
          *((_WORD *)v22 + 24) |= 0x40u;
          goto LABEL_34;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 48), 1LL, 17LL) != 17 )
          break;
        v8 = 1;
        *(_QWORD *)(v32 + 56) = KeGetCurrentThread();
      }
      CmpUnlockKcb(*((_QWORD *)v22 + 1));
      CmpLockKcbExclusive(*((_QWORD *)v22 + 1));
      v8 = 1;
    }
    while ( !CmpIsKeyStackDeleted(a6) );
    Information = -1073741444;
    CmpRecordParseFailure(a3, 132352, -1073741444);
    v36 = 1;
  }
LABEL_35:
  if ( v29 )
    ObfDereferenceObject((PVOID)(v29 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( v36 )
    goto LABEL_47;
  return (unsigned int)Information;
}
