/*
 * XREFs of ObCreateObjectEx @ 0x140704810
 * Callers:
 *     AlpcpCreatePort @ 0x1405E0F24 (AlpcpCreatePort.c)
 *     EtwpAddUmRegEntry @ 0x1405EAD90 (EtwpAddUmRegEntry.c)
 *     PopCreatePowerRequestObject @ 0x14062BBB0 (PopCreatePowerRequestObject.c)
 *     WmipCreateGuidObject @ 0x14063F798 (WmipCreateGuidObject.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     NtCreateTimer @ 0x14064CD60 (NtCreateTimer.c)
 *     NtCreateWaitCompletionPacket @ 0x140693F90 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x14069C0FC (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x14069C2D0 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x1406A1B60 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1406AC26C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406B3300 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x1406B88C8 (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x1406BD240 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x1406BE000 (NtCreateRegistryTransaction.c)
 *     NtCreateTimer2 @ 0x1406D4930 (NtCreateTimer2.c)
 *     ObCreateObject @ 0x1406D4AE0 (ObCreateObject.c)
 *     NtCreateMutant @ 0x1406DDC40 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x1406E4E80 (NtCreatePrivateNamespace.c)
 *     NtCreateEvent @ 0x140703CD0 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x140703E00 (SepDuplicateToken.c)
 *     NtCreateSemaphore @ 0x140705010 (NtCreateSemaphore.c)
 *     MiFinishCreateSection @ 0x140705C20 (MiFinishCreateSection.c)
 *     PsCreateSiloContext @ 0x140715B10 (PsCreateSiloContext.c)
 *     IoCreateDevice @ 0x14071B4E0 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14071BF10 (IoCreateStreamFileObjectEx2.c)
 *     PspCreateActivityReference @ 0x140731498 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140764A8C (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x140786484 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C36A8 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407C5210 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CBA48 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407CC2B4 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE0C (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x140885B80 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140893900 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FD52C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140905438 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3A8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x140656440 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x14065C750 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x140661348 (ObpFreeObjectNameBuffer.c)
 *     ObpAllocateObject @ 0x1406FF230 (ObpAllocateObject.c)
 *     ObpRegisterObject @ 0x1408DEDCC (ObpRegisterObject.c)
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
