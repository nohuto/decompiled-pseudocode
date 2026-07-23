/*
 * XREFs of ObCreateObjectEx @ 0x14071BBF0
 * Callers:
 *     NtCreateWaitCompletionPacket @ 0x1405F34F0 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1405FB2BC (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1405FB490 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x140601A90 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14060A95C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406124D0 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x140617EC8 (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x14061C450 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x14061D260 (NtCreateRegistryTransaction.c)
 *     WmipCreateGuidObject @ 0x1406345A8 (WmipCreateGuidObject.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     NtCreateTimer @ 0x140641B80 (NtCreateTimer.c)
 *     PopCreatePowerRequestObject @ 0x140670788 (PopCreatePowerRequestObject.c)
 *     NtCreateTimer2 @ 0x1406ABC10 (NtCreateTimer2.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     NtCreateMutant @ 0x1406B4F20 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x1406BC160 (NtCreatePrivateNamespace.c)
 *     PsCreateSiloContext @ 0x1406C4160 (PsCreateSiloContext.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406C9360 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 *     AlpcpCreatePort @ 0x1406D0684 (AlpcpCreatePort.c)
 *     EtwpAddUmRegEntry @ 0x1406DA4F0 (EtwpAddUmRegEntry.c)
 *     NtCreateEvent @ 0x14071B0B0 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     NtCreateSemaphore @ 0x14071C3F0 (NtCreateSemaphore.c)
 *     MiFinishCreateSection @ 0x14071D000 (MiFinishCreateSection.c)
 *     PspCreateActivityReference @ 0x140731658 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140764C4C (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x140786644 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3BC8 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407C5730 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CBBB8 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407CC424 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FF6C (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x140885CE0 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140893A60 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FD68C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140905598 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x14093F578 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     ObpCaptureObjectCreateInformation @ 0x14064B260 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x140656168 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x140716610 (ObpAllocateObject.c)
 *     ObpRegisterObject @ 0x1408DEF2C (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        char a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
        char *a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  char *v21; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v29; // rdx
  _GENERAL_LOOKASIDE *v30; // rcx
  struct _KPRCB *v31; // rax
  _GENERAL_LOOKASIDE *v32; // r8
  _BYTE *v33; // [rsp+30h] [rbp-48h]
  __int128 v34; // [rsp+40h] [rbp-38h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  a5 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v34 = 0LL;
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
        return 3221225626LL;
    }
  }
  LODWORD(v16->Next) = CurrentPrcb->Number;
  v17 = ObpCaptureObjectCreateInformation(a1, a4, a3, &v34, (__int64)v16, 0);
  if ( v17 >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      v20 = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v18 = a7;
      if ( !a7 )
        v18 = a2[26];
      v19 = a8;
      if ( !a8 )
        v19 = a2[27];
      HIDWORD(v16[1].Next) = v18;
      v33 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v19;
      v20 = ObpAllocateObject((int *)v16, a4, (__int64)a2, &v34, a6, &a5, v33);
      if ( v20 >= 0 )
      {
        v21 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo((__int64)v21, 1, 1u, 0x746C6644u);
        }
        *a9 = v21 + 48;
        return (unsigned int)v20;
      }
    }
    else
    {
      v20 = -1073741727;
    }
    if ( *((_QWORD *)&v34 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v34);
    Next = v16[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v16[1].Next, 1);
      v16[2].Next = 0LL;
    }
    v29 = KeGetCurrentPrcb();
    v30 = v29->PPLookasideList[4].P;
    ++v30->TotalFrees;
    if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
      || (++v30->FreeMisses,
          v30 = v29->PPLookasideList[4].L,
          ++v30->TotalFrees,
          LOWORD(v30->ListHead.Alignment) < v30->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v30->ListHead, v16);
    }
    else
    {
      ++v30->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v30->FreeEx)(v16);
    }
    return (unsigned int)v20;
  }
  v31 = KeGetCurrentPrcb();
  v32 = v31->PPLookasideList[4].P;
  ++v32->TotalFrees;
  if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
    || (++v32->FreeMisses,
        v32 = v31->PPLookasideList[4].L,
        ++v32->TotalFrees,
        LOWORD(v32->ListHead.Alignment) < v32->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v32->ListHead, v16);
  }
  else
  {
    ++v32->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v32->FreeEx)(v16);
  }
  return (unsigned int)v17;
}
