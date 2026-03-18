/*
 * XREFs of ObCreateObjectEx @ 0x140679FF0
 * Callers:
 *     WmipCreateGuidObject @ 0x1405DC758 (WmipCreateGuidObject.c)
 *     MiFinishCreateSection @ 0x1405FB480 (MiFinishCreateSection.c)
 *     NtCreateTimer2 @ 0x14060EB30 (NtCreateTimer2.c)
 *     ObCreateObject @ 0x14060ECE0 (ObCreateObject.c)
 *     AlpcpCreatePort @ 0x14062C294 (AlpcpCreatePort.c)
 *     IoCreateDevice @ 0x140634290 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140635260 (IoCreateStreamFileObjectEx2.c)
 *     PopCreatePowerRequestObject @ 0x14064DBA8 (PopCreatePowerRequestObject.c)
 *     EtwpAddUmRegEntry @ 0x14066E008 (EtwpAddUmRegEntry.c)
 *     NtCreateEvent @ 0x140679490 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     NtCreateIoCompletion @ 0x1406A7090 (NtCreateIoCompletion.c)
 *     NtCreateTimer @ 0x1406AC2A0 (NtCreateTimer.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x1406B04A0 (NtCreateSemaphore.c)
 *     EtwpRealtimeConnect @ 0x1406C6788 (EtwpRealtimeConnect.c)
 *     NtCreateMutant @ 0x1406CB4F0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x1406E3A00 (NtCreateWaitCompletionPacket.c)
 *     ObpCreateDirectoryObject @ 0x1406F27E0 (ObpCreateDirectoryObject.c)
 *     NtCreatePrivateNamespace @ 0x1406F3DE0 (NtCreatePrivateNamespace.c)
 *     ObCreateSymbolicLink @ 0x1406FB8CC (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x140701EC0 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x14070BE70 (NtCreateRegistryTransaction.c)
 *     EtwpCreateUmReplyObject @ 0x14070FC0C (EtwpCreateUmReplyObject.c)
 *     PsCreateSiloContext @ 0x140710140 (PsCreateSiloContext.c)
 *     PspCreateActivityReference @ 0x14071F118 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140752BDC (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x1407740A4 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407B1368 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407B2F90 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B8EC8 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407B9758 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086CD40 (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x140882A90 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140890840 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FA16C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140902028 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x14093BDA8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ObpFreeObjectNameBuffer @ 0x1406689A8 (ObpFreeObjectNameBuffer.c)
 *     ObpAllocateObject @ 0x140673750 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x140694DC0 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x1408DB7CC (ObpRegisterObject.c)
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
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int Information; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  __int64 v21; // rbx
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
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)&v34, (__int64)v16, 0);
  if ( Information >= 0 )
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
          ObpPushStackInfo(v21, 1, 1u, 0x746C6644u);
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
  return (unsigned int)Information;
}
