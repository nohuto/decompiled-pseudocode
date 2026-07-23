/*
 * XREFs of IopAllocRealFileObject @ 0x14071A4C0
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     PsIsSystemThread @ 0x140230130 (PsIsSystemThread.c)
 *     IopCheckInitiatorHint @ 0x1402722F0 (IopCheckInitiatorHint.c)
 *     IoGetSilo @ 0x1402F7080 (IoGetSilo.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     ObpCaptureObjectCreateInformation @ 0x14064B260 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x140656168 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406F68FC (IopAllocateFoExtensionsOnCreate.c)
 *     ObpAllocateObject @ 0x140716610 (ObpAllocateObject.c)
 *     IopRetrieveTransactionParameters @ 0x14071AF00 (IopRetrieveTransactionParameters.c)
 *     ObpRegisterObject @ 0x1408DEF2C (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned int a9)
{
  struct _KPRCB *CurrentPrcb; // rbp
  POBJECT_TYPE *v10; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  _DWORD *v14; // rbx
  PSLIST_ENTRY v15; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int TransactionParameters; // esi
  int v22; // ebp
  struct _KPRCB *v23; // rax
  _GENERAL_LOOKASIDE *v24; // r8
  int v25; // ecx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v27; // rdx
  _GENERAL_LOOKASIDE *v28; // rcx
  char *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 Silo; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // ecx
  int v36; // eax
  __int16 v38; // [rsp+40h] [rbp-88h] BYREF
  char *v39; // [rsp+48h] [rbp-80h] BYREF
  __int128 v40; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v41[3]; // [rsp+60h] [rbp-68h] BYREF
  int v42; // [rsp+78h] [rbp-50h]
  int v43; // [rsp+7Ch] [rbp-4Ch]
  __int128 v44; // [rsp+80h] [rbp-48h]
  char v46; // [rsp+E8h] [rbp+20h]

  v46 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v38 = 0;
  v41[0] = 48LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v14 = 0LL;
  v43 = 0;
  v41[1] = 0LL;
  v42 = a4;
  ++P->TotalAllocates;
  v41[2] = 0LL;
  v44 = 0LL;
  LOBYTE(v38) = 1;
  v40 = 0LL;
  v39 = 0LL;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v15 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v15 )
      {
        TransactionParameters = -1073741670;
        goto LABEL_28;
      }
    }
  }
  LODWORD(v15->Next) = CurrentPrcb->Number;
  v22 = ObpCaptureObjectCreateInformation(0, a5, (__int64)v41, &v40, (__int64)v15, 0);
  if ( v22 < 0 )
  {
    v23 = KeGetCurrentPrcb();
    v24 = v23->PPLookasideList[4].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
      || (++v24->FreeMisses,
          v24 = v23->PPLookasideList[4].L,
          ++v24->TotalFrees,
          LOWORD(v24->ListHead.Alignment) < v24->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v24->ListHead, v15);
    }
    else
    {
      ++v24->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v15);
    }
    goto LABEL_27;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    v22 = -1073741811;
LABEL_16:
    if ( *((_QWORD *)&v40 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v40);
    Next = v15[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v15[1].Next, 1);
      v15[2].Next = 0LL;
    }
    v27 = KeGetCurrentPrcb();
    v28 = v27->PPLookasideList[4].P;
    ++v28->TotalFrees;
    if ( LOWORD(v28->ListHead.Alignment) < v28->Depth
      || (++v28->FreeMisses,
          v28 = v27->PPLookasideList[4].L,
          ++v28->TotalFrees,
          LOWORD(v28->ListHead.Alignment) < v28->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v28->ListHead, v15);
    }
    else
    {
      ++v28->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v28->FreeEx)(v15);
    }
    goto LABEL_27;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    v22 = -1073741727;
    goto LABEL_16;
  }
  v25 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v25;
  v22 = ObpAllocateObject((int *)v15, a5, (__int64)v10, &v40, 216, &v39, &v38);
  if ( v22 < 0 )
    goto LABEL_16;
  v29 = v39;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v39);
    ObpPushStackInfo((__int64)v29, 1, 1u, 0x746C6644u);
  }
  v14 = v29 + 48;
LABEL_27:
  TransactionParameters = v22;
  if ( v22 < 0 )
  {
LABEL_28:
    if ( !a8 )
      *(_QWORD *)a1 = 0LL;
    return (unsigned int)TransactionParameters;
  }
  memset(v14, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v14 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v14 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v14 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v14 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v14 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v30 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v30 )
      *((_QWORD *)v14 + 26) = v30;
  }
  else
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x47) != 0
      || !PsIsHostSilo(*(_QWORD *)(a7 + 8))
      || (v31 = *(_QWORD *)(a6 + 40)) != 0 && (Silo = IoGetSilo(v31), !PsIsHostSilo(Silo)) )
    {
      TransactionParameters = IopAllocateFoExtensionsOnCreate((__int64)v14, a2, a6, a7, a9);
    }
    if ( TransactionParameters >= 0 )
    {
      if ( a5 )
      {
        if ( (*(_DWORD *)(a6 + 152) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(a2 + 48) & 0x40000) != 0
            || (v33 = *(unsigned int *)(a2 + 72), (unsigned int)v33 <= 0x35)
            && (v34 = 0x20000100100108LL, _bittest64(&v34, v33)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(a2, a6, a9, v14);
          }
        }
      }
      if ( TransactionParameters >= 0
        && a5
        && !PsIsSystemThread(KeGetCurrentThread())
        && (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
      {
        TransactionParameters = IopCheckInitiatorHint((__int64)v14, *(_QWORD *)(a6 + 40));
      }
    }
  }
  *(_QWORD *)a1 = v14;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v35 = v14[20] | 2;
      v14[20] = v35;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v14[20] = v35 | 4;
    }
    if ( (v14[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v14 + 32), SynchronizationEvent, 0);
      v14[28] = 0;
      *((_QWORD *)v14 + 13) = 0LL;
    }
    v36 = *(_DWORD *)(a6 + 64);
    if ( (v36 & 8) != 0 )
    {
      v14[20] |= 8u;
      v36 = *(_DWORD *)(a6 + 64);
    }
    if ( (v36 & 2) != 0 )
    {
      v14[20] |= 0x10u;
      v36 = *(_DWORD *)(a6 + 64);
    }
    if ( (v36 & 4) != 0 )
    {
      v14[20] |= 0x20u;
      v36 = *(_DWORD *)(a6 + 64);
    }
    if ( (v36 & 0x800) != 0 )
    {
      v14[20] |= 0x100000u;
      v36 = *(_DWORD *)(a6 + 64);
    }
    if ( (v36 & 0x20000) != 0 )
      v14[20] |= 0x2000000u;
  }
  if ( (v46 & 0x40) == 0 )
    v14[20] |= 0x20000u;
  *v14 = 14155781;
  *((_QWORD *)v14 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v14 + 1) = a3;
  *((_QWORD *)v14 + 25) = v14 + 48;
  *((_QWORD *)v14 + 24) = v14 + 48;
  *((_QWORD *)v14 + 23) = 0LL;
  return (unsigned int)TransactionParameters;
}
