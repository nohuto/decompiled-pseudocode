/*
 * XREFs of NdisMAllocateSharedMemory @ 0x1C0024830
 * Callers:
 *     ?ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z @ 0x1C005FC70 (-ndisMQueuedAllocateSharedHandler@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C0018F6C (WPP_RECORDER_SF_qLq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMAllocateSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID *VirtualAddress,
        PNDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v8; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  __int64 v14; // r9
  __int64 (__fastcall *v15)(PNDIS_PHYSICAL_ADDRESS, __int64, PNDIS_PHYSICAL_ADDRESS, __int64); // r10
  __int64 v16; // r14
  int v17; // edx
  __int64 v18; // rax
  ULONG_PTR v19; // rbp
  ULONG_PTR v20; // rbp
  __int64 v21; // [rsp+30h] [rbp-38h]
  PNDIS_PHYSICAL_ADDRESS PhysicalAddressa; // [rsp+90h] [rbp+28h]

  BugCheckParameter4 = *((_QWORD *)MiniportAdapterHandle + 63);
  v8 = Length;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x1Cu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)MiniportAdapterHandle,
      Length);
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 4) == 0 )
  {
    if ( !BugCheckParameter4 )
      goto LABEL_17;
    PhysicalAddressa = *(PNDIS_PHYSICAL_ADDRESS *)(BugCheckParameter4 + 24);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql >= 2u )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 482),
        "Allocating Shared Memory at raised IRQL");
      KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v8, CurrentIrql);
    }
    v12 = 72;
    if ( (unsigned int)v8 >= 0x48 )
      v12 = v8;
    if ( v12 + ndisDmaAlignment + 8 < v12 )
    {
LABEL_17:
      *VirtualAddress = 0LL;
      return;
    }
    v13 = (v12 + ndisDmaAlignment - 1) & ~(ndisDmaAlignment - 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
    v15 = *(__int64 (__fastcall **)(PNDIS_PHYSICAL_ADDRESS, __int64, PNDIS_PHYSICAL_ADDRESS, __int64))(PhysicalAddressa[1].QuadPart + 16);
    v16 = Cached != 0 ? 4 : 0;
    if ( *(_DWORD *)(v16 + BugCheckParameter4 + 104) < v13 )
    {
      LOBYTE(v14) = Cached;
      if ( (unsigned __int64)v13 + 8 >= 0x1000 )
      {
        *VirtualAddress = (PVOID)v15(PhysicalAddressa, v13, PhysicalAddress, v14);
LABEL_12:
        if ( *VirtualAddress )
          _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter4 + 72));
        goto LABEL_14;
      }
      v18 = v15(
              PhysicalAddressa,
              4096LL,
              (PNDIS_PHYSICAL_ADDRESS)(BugCheckParameter4 + (Cached != 0 ? 120LL : 112LL)),
              v14);
      *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 88) = v18;
      if ( !v18 )
      {
        *(_DWORD *)(v16 + BugCheckParameter4 + 104) = 0;
        *VirtualAddress = 0LL;
LABEL_14:
        ExReleaseResourceLite(&SharedMemoryResource);
        KeLeaveCriticalRegion();
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            0x15u,
            0x1Fu,
            (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
            (char)MiniportAdapterHandle,
            v13,
            *VirtualAddress);
        return;
      }
      *(_DWORD *)(v18 + 4092) = 0;
      *(_DWORD *)(v18 + 4088) = 1752384590;
      *(_DWORD *)(v16 + BugCheckParameter4 + 104) = 4088;
    }
    v19 = *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 88);
    if ( *(_DWORD *)(v19 + 4088) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 482),
        "Overwrote past allocated shared memory");
      KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v19, BugCheckParameter4);
    }
    ++*(_DWORD *)(v19 + 4092);
    v20 = v19 - *(unsigned int *)(v16 + BugCheckParameter4 + 104);
    *VirtualAddress = (PVOID)(v20 + 4088);
    PhysicalAddress->QuadPart = *(_QWORD *)((Cached != 0 ? 8 : 0) + BugCheckParameter4 + 112)
                              + (((_DWORD)v20 + 4088) & 0xFFF);
    *(_DWORD *)(v16 + BugCheckParameter4 + 104) -= v13;
    goto LABEL_12;
  }
  *VirtualAddress = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v8;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x1Du,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)MiniportAdapterHandle,
      v21);
  }
}
