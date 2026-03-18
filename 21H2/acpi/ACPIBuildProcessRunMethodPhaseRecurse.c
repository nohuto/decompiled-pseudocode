/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000F200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00309D4 (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  int v2; // edi
  _QWORD *v3; // rbp
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // r15
  _QWORD **v8; // rsi
  int v9; // r12d
  int v10; // r13d
  PSLIST_ENTRY v11; // rdi
  PSLIST_ENTRY *v12; // rax
  _QWORD *v13; // rcx
  char v14; // cl
  void *v15; // rax
  void *v16; // r8
  __int64 v17; // rdx
  _UNKNOWN **v18; // rdx
  signed __int32 v19; // ecx
  KIRQL v20; // bl
  int v21; // edx
  KIRQL v23; // [rsp+90h] [rbp+8h]
  _QWORD *i; // [rsp+98h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 0;
  if ( (v1 & 4) != 0 )
  {
    v5 = v3 + 100;
    v23 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = (_QWORD *)v3[100];
    for ( i = (_QWORD *)*v6; ; i = v13 )
    {
      v7 = 0LL;
      if ( v6 != v5 )
        v7 = (volatile signed __int32 *)(v6 - 102);
      v8 = (_QWORD **)v6;
      if ( v6 == v5 || v2 < 0 )
        break;
      v9 = *(_DWORD *)(a1 + 84);
      v10 = *(_DWORD *)(a1 + 80);
      ++dword_1C0081E54;
      v11 = ExpInterlockedPopEntrySList(&BuildRequestLookAsideList);
      if ( v11
        || (++dword_1C0081E58,
            (v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0081E70)(
                                   (unsigned int)dword_1C0081E64,
                                   (unsigned int)dword_1C0081E6C,
                                   (unsigned int)dword_1C0081E68)) != 0LL) )
      {
        if ( *((_DWORD *)v7 + 183) )
        {
          _InterlockedIncrement(v7 + 183);
          *v11 = 0LL;
          v11[1] = 0LL;
          v11[2] = 0LL;
          v11[3] = 0LL;
          v11[4] = 0LL;
          v11[5] = 0LL;
          v11[6] = 0LL;
          v11[7] = 0LL;
          LODWORD(v11[1].Next) = 1599293264;
          v11[8].Next = (_SLIST_ENTRY *)&AcpiBuildRunMethodList;
          *((_DWORD *)&v11[1].Next + 2) = 3;
          *((_QWORD *)&v11[2].Next + 1) = v7;
          LODWORD(v11[5].Next) = v10;
          HIDWORD(v11[5].Next) = v9;
          HIDWORD(v11[1].Next) = 4108;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          v12 = (PSLIST_ENTRY *)qword_1C0081638;
          if ( *(__int64 **)qword_1C0081638 != &AcpiBuildQueueList )
            __fastfail(3u);
          v11->Next = (_SLIST_ENTRY *)&AcpiBuildQueueList;
          *((_QWORD *)&v11->Next + 1) = v12;
          *v12 = v11;
          qword_1C0081638 = (__int64)v11;
          KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
          v2 = 259;
        }
        else
        {
          ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList, v11);
          v2 = -1073741130;
        }
      }
      else
      {
        v2 = -1073741670;
      }
      v6 = *v8;
      v13 = (_QWORD *)**v8;
      if ( v13 == *v8 )
      {
        v6 = i;
        v13 = (_QWORD *)*i;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v23);
  }
  v14 = 0;
  v15 = &unk_1C006FB8B;
  v16 = &unk_1C006FB8B;
  if ( v3 )
  {
    v17 = v3[1];
    v14 = (char)v3;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v15 = (void *)v3[76];
      if ( (v17 & 0x400000000000LL) != 0 )
        v16 = (void *)v3[77];
    }
  }
  v18 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v18,
      6,
      65,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v2,
      v14,
      (__int64)v15,
      (__int64)v16);
  }
  v19 = *(_DWORD *)(a1 + 32);
  if ( v2 < 0 )
  {
    *(_DWORD *)(a1 + 48) = v2;
    KeBugCheckEx(0xA5u, 3uLL, 0LL, v2, 0LL);
  }
  *(_DWORD *)(a1 + 32) = 2;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v19, 1);
  v20 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v21 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v21;
  if ( (v21 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v21 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v20);
  return (unsigned int)v2;
}
