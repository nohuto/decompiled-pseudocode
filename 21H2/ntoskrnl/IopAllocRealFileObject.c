/*
 * XREFs of IopAllocRealFileObject @ 0x14072DDC0
 * Callers:
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 * Callees:
 *     IopCheckInitiatorHint @ 0x140280170 (IopCheckInitiatorHint.c)
 *     IoGetSilo @ 0x1402A3FD0 (IoGetSilo.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071CAFC (IopAllocateFoExtensionsOnCreate.c)
 *     ObpFreeObjectNameBuffer @ 0x14071F0D0 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     IopRetrieveTransactionParameters @ 0x14072B200 (IopRetrieveTransactionParameters.c)
 *     ObpAllocateObject @ 0x14072E5D0 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x1407CCD80 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140986424 (ObpRegisterObject.c)
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
        int a9)
{
  struct _KPRCB *CurrentPrcb; // rbp
  POBJECT_TYPE *v10; // rsi
  char v12; // r12
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v14; // r13
  PSLIST_ENTRY v15; // rbx
  int Information; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rbx
  _DWORD *v21; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v27; // rcx
  __int64 v28; // r13
  int v29; // ecx
  int v30; // eax
  _QWORD *v31; // rbx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 Silo; // rax
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  __int16 v42; // [rsp+40h] [rbp-88h] BYREF
  __int64 v43; // [rsp+48h] [rbp-80h] BYREF
  __int128 v44; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v45[3]; // [rsp+60h] [rbp-68h] BYREF
  int v46; // [rsp+78h] [rbp-50h]
  int v47; // [rsp+7Ch] [rbp-4Ch]
  __int128 v48; // [rsp+80h] [rbp-48h]
  char v51; // [rsp+E8h] [rbp+20h]

  v51 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v42 = 0;
  v12 = a4;
  v45[0] = 48LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v14 = a3;
  v47 = 0;
  v45[1] = 0LL;
  v46 = a4;
  ++P->TotalAllocates;
  v45[2] = 0LL;
  v48 = 0LL;
  LOBYTE(v42) = 1;
  v44 = 0LL;
  v43 = 0LL;
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
        Information = -1073741670;
LABEL_56:
        if ( !a8 )
          *(_QWORD *)a1 = 0LL;
        return (unsigned int)Information;
      }
    }
  }
  LODWORD(v15->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(0, a5, (unsigned int)v45, (unsigned int)&v44, (__int64)v15, 0);
  if ( Information < 0 )
  {
    v37 = KeGetCurrentPrcb();
    v38 = v37->PPLookasideList[4].P;
    ++v38->TotalFrees;
    if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
      || (++v38->FreeMisses,
          v38 = v37->PPLookasideList[4].L,
          ++v38->TotalFrees,
          LOWORD(v38->ListHead.Alignment) < v38->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v38->ListHead, v15);
    }
    else
    {
      ++v38->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v38->FreeEx)(v15);
    }
    goto LABEL_56;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_62;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Information = -1073741727;
    goto LABEL_62;
  }
  v19 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v19;
  Information = ObpAllocateObject((_DWORD)v15, a5, (_DWORD)v10, (unsigned int)&v44, 216, (__int64)&v43, (__int64)&v42);
  if ( Information < 0 )
  {
LABEL_62:
    if ( *((_QWORD *)&v44 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v44);
    Next = v15[2].Next;
    if ( Next )
    {
      LOBYTE(v17) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v15[1].Next), v17, v18);
      v15[2].Next = 0LL;
    }
    v40 = KeGetCurrentPrcb();
    v41 = v40->PPLookasideList[4].P;
    ++v41->TotalFrees;
    if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
      || (++v41->FreeMisses,
          v41 = v40->PPLookasideList[4].L,
          ++v41->TotalFrees,
          LOWORD(v41->ListHead.Alignment) < v41->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v41->ListHead, v15);
    }
    else
    {
      ++v41->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v41->FreeEx)(v15);
    }
    goto LABEL_56;
  }
  v20 = v43;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v43);
    ObpPushStackInfo(v20, 1, 1u, 0x746C6644u);
  }
  v21 = (_DWORD *)(v20 + 48);
  memset(v21, 0, 0xD8uLL);
  if ( a8 )
  {
    *((_QWORD *)v21 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v21 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v21 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v21 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v21 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v33 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v33 )
      *((_QWORD *)v21 + 26) = v33;
  }
  else
  {
    if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0
      && PsIsHostSilo(*(_QWORD *)(a7 + 8))
      && ((v27 = *(_QWORD *)(a6 + 40)) == 0 || (Silo = IoGetSilo(v27), PsIsHostSilo(Silo))) )
    {
      v28 = a2;
    }
    else
    {
      v28 = a2;
      Information = IopAllocateFoExtensionsOnCreate((__int64)v21, a2, a6, a7, a9);
    }
    if ( Information >= 0 && a5 )
    {
      if ( (*(_DWORD *)(a6 + 152) & 0x20) == 0
        || (*(_DWORD *)(v28 + 48) & 0x40000) == 0
        && ((v34 = *(unsigned int *)(v28 + 72), (unsigned int)v34 > 0x35)
         || (v35 = 0x20000100100108LL, !_bittest64(&v35, v34)))
        || (Information = IopRetrieveTransactionParameters(v28, a6, a9, (__int64)v21), Information >= 0) )
      {
        if ( (*(_DWORD *)(a6 + 64) & 0x20000) != 0 )
          Information = IopCheckInitiatorHint((__int64)v21, *(_QWORD *)(a6 + 40));
      }
    }
    v14 = a3;
    v12 = v51;
  }
  *(_QWORD *)a1 = v21;
  if ( !*(_BYTE *)(a6 + 138) && !*(_BYTE *)(a6 + 137) )
  {
    if ( (*(_DWORD *)(a6 + 64) & 0x30) != 0 )
    {
      v29 = v21[20] | 2;
      v21[20] = v29;
      if ( (*(_DWORD *)(a6 + 64) & 0x10) != 0 )
        v21[20] = v29 | 4;
    }
    if ( (v21[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v21 + 32), SynchronizationEvent, 0);
      v21[28] = 0;
      *((_QWORD *)v21 + 13) = 0LL;
    }
    v30 = *(_DWORD *)(a6 + 64);
    if ( (v30 & 8) != 0 )
    {
      v21[20] |= 8u;
      v30 = *(_DWORD *)(a6 + 64);
    }
    if ( (v30 & 2) != 0 )
    {
      v21[20] |= 0x10u;
      v30 = *(_DWORD *)(a6 + 64);
    }
    if ( (v30 & 4) != 0 )
    {
      v21[20] |= 0x20u;
      v30 = *(_DWORD *)(a6 + 64);
    }
    if ( (v30 & 0x800) != 0 )
    {
      v21[20] |= 0x100000u;
      v30 = *(_DWORD *)(a6 + 64);
    }
    if ( (v30 & 0x20000) != 0 )
      v21[20] |= 0x2000000u;
  }
  if ( (v12 & 0x40) == 0 )
    v21[20] |= 0x20000u;
  *v21 = 14155781;
  *((_QWORD *)v21 + 8) = *(_QWORD *)(a6 + 40);
  *((_QWORD *)v21 + 1) = v14;
  *((_QWORD *)v21 + 23) = 0LL;
  v31 = v21 + 48;
  v31[1] = v31;
  *v31 = v31;
  return (unsigned int)Information;
}
