/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F5A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004C858 (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  int v2; // edi
  _QWORD *v3; // rbp
  _QWORD *v5; // r14
  __int64 v6; // r15
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD **v9; // rsi
  int v10; // r12d
  int v11; // r13d
  PSLIST_ENTRY v12; // rdi
  PSLIST_ENTRY *v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  char v16; // cl
  void *v17; // rax
  void *v18; // r8
  __int64 v19; // rdx
  _UNKNOWN **v20; // rdx
  signed __int32 v21; // ecx
  KIRQL v22; // bl
  int v23; // edx
  _QWORD *v25; // [rsp+58h] [rbp-60h]
  KIRQL v26; // [rsp+68h] [rbp-50h]
  _QWORD *v27; // [rsp+C0h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 0;
  if ( (v1 & 4) != 0 )
  {
    v5 = v3 + 95;
    v6 = 0LL;
    v26 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v7 = *(_QWORD **)v3[95];
    v8 = v3[95] - 776LL;
    v27 = v7;
    if ( (_QWORD *)*v5 != v5 )
      v6 = v3[95] - 776LL;
    while ( 1 )
    {
      v25 = v7;
      v9 = (_QWORD **)(v8 + 776);
      if ( (_QWORD *)(v8 + 776) == v5 || v2 < 0 )
        break;
      v10 = *(_DWORD *)(a1 + 84);
      v11 = *(_DWORD *)(a1 + 80);
      ++BuildRequestLookAsideList.L.TotalAllocates;
      v12 = ExpInterlockedPopEntrySList(&BuildRequestLookAsideList.L.ListHead);
      if ( v12
        || (++BuildRequestLookAsideList.L.AllocateMisses,
            (v12 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BuildRequestLookAsideList.L.AllocateEx)(
                                   (unsigned int)BuildRequestLookAsideList.L.Type,
                                   BuildRequestLookAsideList.L.Size,
                                   BuildRequestLookAsideList.L.Tag)) != 0LL) )
      {
        if ( *(_DWORD *)(v6 + 692) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 692));
          memset(v12, 0, 0x88uLL);
          LODWORD(v12[1].Next) = 1599293264;
          v12[8].Next = (_SLIST_ENTRY *)&AcpiBuildRunMethodList;
          *((_DWORD *)&v12[1].Next + 2) = 3;
          *((_QWORD *)&v12[2].Next + 1) = v6;
          LODWORD(v12[5].Next) = v11;
          HIDWORD(v12[5].Next) = v10;
          HIDWORD(v12[1].Next) = 4108;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          v13 = (PSLIST_ENTRY *)qword_1C0082418;
          if ( *(__int64 **)qword_1C0082418 != &AcpiBuildQueueList )
            __fastfail(3u);
          v12->Next = (_SLIST_ENTRY *)&AcpiBuildQueueList;
          *((_QWORD *)&v12->Next + 1) = v13;
          *v13 = v12;
          qword_1C0082418 = (__int64)v12;
          KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
          v14 = v25;
          v2 = 259;
          v5 = v3 + 95;
        }
        else
        {
          ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v12);
          v14 = v27;
          v2 = -1073741130;
        }
      }
      else
      {
        v14 = v27;
        v2 = -1073741670;
      }
      v15 = *v9;
      if ( (_QWORD *)**v9 == *v9 )
      {
        v15 = v14;
        v7 = (_QWORD *)*v14;
      }
      else
      {
        v7 = (_QWORD *)**v9;
      }
      v27 = v7;
      v8 = (__int64)(v15 - 97);
      v6 = 0LL;
      if ( (_QWORD *)(v8 + 776) != v5 )
        v6 = v8;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v26);
  }
  v16 = 0;
  v17 = &unk_1C00701BA;
  v18 = &unk_1C00701BA;
  if ( v3 )
  {
    v19 = v3[1];
    v16 = (char)v3;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v17 = (void *)v3[71];
      if ( (v19 & 0x400000000000LL) != 0 )
        v18 = (void *)v3[72];
    }
  }
  v20 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v20,
      6,
      65,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v2,
      v16,
      (__int64)v17,
      (__int64)v18);
  }
  v21 = *(_DWORD *)(a1 + 32);
  if ( v2 < 0 )
  {
    *(_DWORD *)(a1 + 48) = v2;
    KeBugCheckEx(0xA5u, 3uLL, 0LL, v2, 0LL);
  }
  *(_DWORD *)(a1 + 32) = 2;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v21, 1);
  v22 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v23 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v23;
  if ( (v23 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v23 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v22);
  return (unsigned int)v2;
}
