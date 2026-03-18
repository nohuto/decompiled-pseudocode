/*
 * XREFs of ObCreateObjectEx @ 0x140601F10
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1405F4F98 (EtwpAddUmRegEntry.c)
 *     NtCreateEvent @ 0x1406013B0 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     MiFinishCreateSection @ 0x1406304C0 (MiFinishCreateSection.c)
 *     NtCreateTimer2 @ 0x140643D60 (NtCreateTimer2.c)
 *     ObCreateObject @ 0x140643F10 (ObCreateObject.c)
 *     AlpcpCreatePort @ 0x140649E44 (AlpcpCreatePort.c)
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 *     NtCreateMutant @ 0x140679390 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x14067DC90 (NtCreatePrivateNamespace.c)
 *     WmipCreateGuidObject @ 0x140682008 (WmipCreateGuidObject.c)
 *     NtCreateWaitCompletionPacket @ 0x1406C4090 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1406C7A00 (NtCreateTimer.c)
 *     ObpCreateDirectoryObject @ 0x1406D1820 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1406D7F7C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406DF130 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1406E71C0 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x1406E8070 (NtCreateRegistryTransaction.c)
 *     EtwpCreateUmReplyObject @ 0x1406EC0EC (EtwpCreateUmReplyObject.c)
 *     PsCreateSiloContext @ 0x1406EC620 (PsCreateSiloContext.c)
 *     NtCreateIoCompletion @ 0x1406F0D20 (NtCreateIoCompletion.c)
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140702350 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x140702940 (IoCreateDevice.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x140706360 (NtCreateSemaphore.c)
 *     PspCreateActivityReference @ 0x14071D498 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x14074E54C (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x140771C94 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407AE208 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407AFE20 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B5D58 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407B65E8 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086B9F0 (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x140881770 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x14088F520 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408F8E7C (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140900D38 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x14093AB08 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     SeReleaseSecurityDescriptor @ 0x1405E2F00 (SeReleaseSecurityDescriptor.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405EB880 (ObpCaptureObjectCreateInformation.c)
 *     ObpAllocateObject @ 0x1405FB670 (ObpAllocateObject.c)
 *     ObpFreeObjectNameBuffer @ 0x1406136C8 (ObpFreeObjectNameBuffer.c)
 *     ObpRegisterObject @ 0x1408DA45C (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        char a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
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
  int v17; // esi
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
      ObpFreeObjectNameBuffer(&v34);
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
