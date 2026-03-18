/*
 * XREFs of IopAllocRealFileObject @ 0x140678970
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     IopCheckInitiatorHint @ 0x140278000 (IopCheckInitiatorHint.c)
 *     IoGetSilo @ 0x14027B350 (IoGetSilo.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14065867C (IopAllocateFoExtensionsOnCreate.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ObpFreeObjectNameBuffer @ 0x1406689A8 (ObpFreeObjectNameBuffer.c)
 *     ObpAllocateObject @ 0x140673750 (ObpAllocateObject.c)
 *     IopRetrieveTransactionParameters @ 0x1406792E0 (IopRetrieveTransactionParameters.c)
 *     ObpCaptureObjectCreateInformation @ 0x140694DC0 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x1408DB7CC (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned int a9)
{
  struct _KPRCB *CurrentPrcb; // r14
  POBJECT_TYPE *v10; // rbp
  char v12; // r13
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v14; // r12
  _DWORD *v15; // rbx
  PSLIST_ENTRY v16; // rsi
  unsigned int Number; // eax
  char v18; // r14
  int v19; // edx
  int Information; // edi
  int v21; // ecx
  __int64 v22; // rbx
  int TransactionParameters; // esi
  __int64 v24; // rdi
  unsigned int v25; // r12d
  __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // rbp
  int v29; // ecx
  int v30; // eax
  _QWORD *v31; // rbx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 Silo; // rax
  __int64 v37; // r9
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v43; // rax
  _GENERAL_LOOKASIDE *v44; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v46; // rdx
  _GENERAL_LOOKASIDE *v47; // rcx
  __int64 v48; // [rsp+40h] [rbp-88h] BYREF
  __int128 v49; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v50[3]; // [rsp+58h] [rbp-70h] BYREF
  int v51; // [rsp+70h] [rbp-58h]
  int v52; // [rsp+74h] [rbp-54h]
  __int128 v53; // [rsp+78h] [rbp-50h]
  __int16 v56; // [rsp+E8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v50[0] = 48LL;
  v52 = 0;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v14 = a3;
  v50[1] = 0LL;
  v51 = a4;
  v15 = 0LL;
  v50[2] = 0LL;
  ++P->TotalAllocates;
  v56 = 1;
  v53 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
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
        TransactionParameters = -1073741670;
LABEL_56:
        if ( !a8 )
          *(_QWORD *)a1 = 0LL;
        return (unsigned int)TransactionParameters;
      }
    }
  }
  Number = CurrentPrcb->Number;
  v18 = a5;
  v19 = a5;
  LODWORD(v16->Next) = Number;
  Information = ObpCaptureObjectCreateInformation(0, v19, (unsigned int)v50, (unsigned int)&v49, (__int64)v16, 0);
  if ( Information < 0 )
  {
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
    goto LABEL_9;
  }
  if ( ((__int64)v16->Next & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_65;
  }
  if ( ((__int64)v16->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Information = -1073741727;
    goto LABEL_65;
  }
  v21 = *((_DWORD *)v10 + 27);
  HIDWORD(v16[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v16[1].Next + 2) = v21;
  Information = ObpAllocateObject((int *)v16, v18, (__int64)v10, &v49, 216, &v48, &v56);
  if ( Information < 0 )
  {
LABEL_65:
    if ( *((_QWORD *)&v49 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v49);
    Next = v16[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v16[1].Next, 1);
      v16[2].Next = 0LL;
    }
    v46 = KeGetCurrentPrcb();
    v47 = v46->PPLookasideList[4].P;
    ++v47->TotalFrees;
    if ( LOWORD(v47->ListHead.Alignment) < v47->Depth
      || (++v47->FreeMisses,
          v47 = v46->PPLookasideList[4].L,
          ++v47->TotalFrees,
          LOWORD(v47->ListHead.Alignment) < v47->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v47->ListHead, v16);
    }
    else
    {
      ++v47->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v47->FreeEx)(v16);
    }
    goto LABEL_9;
  }
  v22 = v48;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v48);
    ObpPushStackInfo(v22, 1, 1u, 0x746C6644u);
  }
  v15 = (_DWORD *)(v22 + 48);
LABEL_9:
  TransactionParameters = Information;
  if ( Information < 0 )
    goto LABEL_56;
  memset(v15, 0, 0xD8uLL);
  v24 = a6;
  if ( a8 )
  {
    *((_QWORD *)v15 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v15 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v15 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v15 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v15 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v33 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v33 )
      *((_QWORD *)v15 + 26) = v33;
  }
  else
  {
    v25 = a9;
    v26 = a7;
    if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0
      && PsIsHostSilo(*(_QWORD *)(a7 + 8))
      && ((v27 = *(_QWORD *)(v24 + 40)) == 0 || (Silo = IoGetSilo(v27), PsIsHostSilo(Silo))) )
    {
      v28 = a2;
    }
    else
    {
      v37 = v26;
      v28 = a2;
      TransactionParameters = IopAllocateFoExtensionsOnCreate((__int64)v15, a2, v24, v37, v25);
    }
    if ( TransactionParameters >= 0 )
    {
      if ( v18 )
      {
        if ( (*(_DWORD *)(v24 + 152) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(v28 + 48) & 0x40000) != 0
            || (v34 = *(unsigned int *)(v28 + 72), (unsigned int)v34 <= 0x35)
            && (v35 = 0x20000100100108LL, _bittest64(&v35, v34)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(v28, v24, v25, v15);
          }
        }
      }
      if ( TransactionParameters >= 0 && v18 && (*(_DWORD *)(v24 + 64) & 0x20000) != 0 )
        TransactionParameters = IopCheckInitiatorHint((__int64)v15, *(_QWORD *)(v24 + 40));
    }
    v14 = a3;
  }
  *(_QWORD *)a1 = v15;
  if ( !*(_BYTE *)(v24 + 138) && !*(_BYTE *)(v24 + 137) )
  {
    if ( (*(_DWORD *)(v24 + 64) & 0x30) != 0 )
    {
      v29 = v15[20] | 2;
      v15[20] = v29;
      if ( (*(_DWORD *)(v24 + 64) & 0x10) != 0 )
        v15[20] = v29 | 4;
    }
    if ( (v15[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v15 + 32), SynchronizationEvent, 0);
      v15[28] = 0;
      *((_QWORD *)v15 + 13) = 0LL;
    }
    v30 = *(_DWORD *)(v24 + 64);
    if ( (v30 & 8) != 0 )
    {
      v15[20] |= 8u;
      v30 = *(_DWORD *)(v24 + 64);
    }
    if ( (v30 & 2) != 0 )
    {
      v15[20] |= 0x10u;
      v30 = *(_DWORD *)(v24 + 64);
    }
    if ( (v30 & 4) != 0 )
    {
      v15[20] |= 0x20u;
      v30 = *(_DWORD *)(v24 + 64);
    }
    if ( (v30 & 0x800) != 0 )
    {
      v15[20] |= 0x100000u;
      v30 = *(_DWORD *)(v24 + 64);
    }
    if ( (v30 & 0x20000) != 0 )
      v15[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v15[20] |= 0x20000u;
  *v15 = 14155781;
  *((_QWORD *)v15 + 8) = *(_QWORD *)(v24 + 40);
  *((_QWORD *)v15 + 1) = v14;
  *((_QWORD *)v15 + 23) = 0LL;
  v31 = v15 + 48;
  v31[1] = v31;
  *v31 = v31;
  return (unsigned int)TransactionParameters;
}
