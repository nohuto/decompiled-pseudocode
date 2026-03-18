/*
 * XREFs of ObCreateObjectEx @ 0x140601B80
 * Callers:
 *     IoCreateDevice @ 0x1405D91C0 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405D9BF0 (IoCreateStreamFileObjectEx2.c)
 *     AlpcpCreatePort @ 0x1405E84C4 (AlpcpCreatePort.c)
 *     EtwpAddUmRegEntry @ 0x1405F3230 (EtwpAddUmRegEntry.c)
 *     NtCreateEvent @ 0x140601020 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     WmipCreateGuidObject @ 0x140668338 (WmipCreateGuidObject.c)
 *     MiFinishCreateSection @ 0x14067F9E0 (MiFinishCreateSection.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x140684EE0 (NtCreateSemaphore.c)
 *     PsCreateSiloContext @ 0x1406A0E20 (PsCreateSiloContext.c)
 *     NtCreateWaitCompletionPacket @ 0x1406BA7F0 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x1406C01A8 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406C0380 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x1406C5B80 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1406CE1FC (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406D5520 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1406DD3F0 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x1406DDFB0 (NtCreateRegistryTransaction.c)
 *     NtCreateTimer @ 0x1406F8AA0 (NtCreateTimer.c)
 *     NtCreateTimer2 @ 0x14070AB40 (NtCreateTimer2.c)
 *     ObCreateObject @ 0x14070ACF0 (ObCreateObject.c)
 *     EtwpRealtimeConnect @ 0x1407121C8 (EtwpRealtimeConnect.c)
 *     NtCreateMutant @ 0x140713620 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x14071B370 (NtCreatePrivateNamespace.c)
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 *     PspCreateActivityReference @ 0x14072D168 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1407617BC (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x1407826A4 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407BF2A8 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407C0EE0 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407C7758 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407C7FE8 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408725DC (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x1408885E0 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140896330 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FFD7C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140907C88 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x140941BD8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1405FDCC8 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectCreateInformation @ 0x14060D260 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x140610D30 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x14061F930 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     ObpRegisterObject @ 0x1408E160C (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        __int64 a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int Information; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // ecx
  int Object; // edi
  __int64 v23; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  struct _KPRCB *v33; // rax
  _GENERAL_LOOKASIDE *v34; // r8
  __int64 v35; // [rsp+30h] [rbp-48h]
  __int128 v36; // [rsp+40h] [rbp-38h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  a5 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v36 = 0LL;
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
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)&v36, (__int64)v16, 0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Object = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v20 = a7;
      if ( !a7 )
        v20 = a2[26];
      v21 = a8;
      if ( !a8 )
        v21 = a2[27];
      HIDWORD(v16[1].Next) = v20;
      v35 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v21;
      Object = ObpAllocateObject((_DWORD)v16, a4, (_DWORD)a2, (unsigned int)&v36, a6, (__int64)&a5, v35);
      if ( Object >= 0 )
      {
        v23 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v23, 1, 1u, 0x746C6644u);
        }
        *a9 = v23 + 48;
        return (unsigned int)Object;
      }
    }
    else
    {
      Object = -1073741727;
    }
    if ( *((_QWORD *)&v36 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v36);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v18, v19);
      v16[2].Next = 0LL;
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
    return (unsigned int)Object;
  }
  v33 = KeGetCurrentPrcb();
  v34 = v33->PPLookasideList[4].P;
  ++v34->TotalFrees;
  if ( LOWORD(v34->ListHead.Alignment) < v34->Depth
    || (++v34->FreeMisses,
        v34 = v33->PPLookasideList[4].L,
        ++v34->TotalFrees,
        LOWORD(v34->ListHead.Alignment) < v34->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v34->ListHead, v16);
  }
  else
  {
    ++v34->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v34->FreeEx)(v16);
  }
  return (unsigned int)Information;
}
