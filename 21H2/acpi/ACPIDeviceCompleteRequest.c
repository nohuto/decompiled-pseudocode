/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x1C000AA40
 * Callers:
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C000C598 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerDpc @ 0x1C000F880 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0022A98 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessInvalid @ 0x1C0050240 (ACPIDevicePowerProcessInvalid.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIPowerScheduleDpc @ 0x1C0008120 (ACPIPowerScheduleDpc.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00309D4 (ExFreeToNPagedLookasideList.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00623F0 (ACPIDereferenceWaitWakePowerRequest.c)
 */

void __fastcall ACPIDeviceCompleteRequest(struct _SLIST_ENTRY *Entry)
{
  __int64 v1; // rdi
  const char *v2; // rax
  _SLIST_ENTRY *Next; // rbp
  char v4; // r8
  const char *v6; // rdx
  __int64 v7; // rcx
  struct _SLIST_ENTRY *v8; // rsi
  _SLIST_ENTRY *v9; // rax
  struct _SLIST_ENTRY *v10; // rsi
  _SLIST_ENTRY *v11; // rdx
  int v12; // eax
  int v13; // ecx
  KIRQL v14; // al
  _SLIST_ENTRY *v15; // rdx
  KIRQL v16; // r8
  PVOID *v17; // rcx
  struct _SLIST_ENTRY **p_Next; // rdx
  PVOID *v19; // rax
  __int64 v20; // rcx
  _SLIST_ENTRY *v21; // rdx
  _SLIST_ENTRY *v22; // rcx
  _SLIST_ENTRY **v23; // r8
  _SLIST_ENTRY *v24; // r8
  _SLIST_ENTRY **v25; // rcx
  _SLIST_ENTRY *v26; // rax
  _SLIST_ENTRY **v27; // rcx
  _SLIST_ENTRY *v28; // rax
  _SLIST_ENTRY *v29; // r8
  _SLIST_ENTRY **v30; // rcx
  KIRQL v31; // si
  _SLIST_ENTRY *v32; // rcx
  struct _SLIST_ENTRY **v33; // rax
  struct _SLIST_ENTRY **v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rcx

  v1 = *((_QWORD *)&Entry[2].Next + 1);
  v2 = (const char *)&unk_1C006FB8B;
  Next = Entry[12].Next;
  v4 = 0;
  v6 = (const char *)&unk_1C006FB8B;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x12u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      (char)Entry,
      (char)Entry[16].Next,
      v4,
      v2,
      v6);
  if ( ((__int64)Entry[3].Next & 0xFFFFFFFD) == 0 )
  {
    v8 = Entry + 4;
    while ( 1 )
    {
      v9 = v8->Next;
      if ( v8->Next == v8 )
        break;
      v21 = v9 - 1;
      v22 = v9[-1].Next;
      if ( *(&v22->Next + 1) != &v9[-1] )
        goto LABEL_49;
      v23 = (_SLIST_ENTRY **)*((_QWORD *)&v21->Next + 1);
      if ( *v23 != v21 )
        goto LABEL_49;
      *v23 = v22;
      *((_QWORD *)&v22->Next + 1) = v23;
      *((_QWORD *)&v21->Next + 1) = v21;
      v21->Next = v21;
      v24 = v9->Next;
      if ( *(&v9->Next->Next + 1) != v9 )
        goto LABEL_49;
      v25 = (_SLIST_ENTRY **)*((_QWORD *)&v9->Next + 1);
      if ( *v25 != v9 )
        goto LABEL_49;
      *v25 = v24;
      *((_QWORD *)&v24->Next + 1) = v25;
      *((_QWORD *)&v9->Next + 1) = v9;
      v9->Next = v9;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v21);
    }
    v10 = Entry + 5;
    while ( 1 )
    {
      v11 = v10->Next;
      if ( v10->Next == v10 )
        break;
      v26 = v11->Next;
      if ( *(&v11->Next->Next + 1) != v11 )
        goto LABEL_49;
      v27 = (_SLIST_ENTRY **)*((_QWORD *)&v11->Next + 1);
      if ( *v27 != v11 )
        goto LABEL_49;
      *v27 = v26;
      *((_QWORD *)&v26->Next + 1) = v27;
      v28 = v11 + 1;
      *((_QWORD *)&v11->Next + 1) = v11;
      v11->Next = v11;
      v29 = v11[1].Next;
      if ( *(&v29->Next + 1) != &v11[1] )
        goto LABEL_49;
      v30 = (_SLIST_ENTRY **)*((_QWORD *)&v11[1].Next + 1);
      if ( *v30 != v28 )
        goto LABEL_49;
      *v30 = v29;
      *((_QWORD *)&v29->Next + 1) = v30;
      *((_QWORD *)&v11[1].Next + 1) = v11 + 1;
      v28->Next = v28;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v11);
    }
    v12 = *(_DWORD *)(v1 + 384);
    if ( v12 )
    {
      if ( !BYTE4(Entry[3].Next) && SLODWORD(Entry[16].Next) < 0 )
      {
        v31 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        *((_QWORD *)&Entry[6].Next + 1) = *(unsigned int *)(v1 + 384);
        BYTE4(Entry[3].Next) = 1;
        v32 = Entry->Next;
        if ( *(&Entry->Next->Next + 1) == Entry )
        {
          v33 = (struct _SLIST_ENTRY **)*((_QWORD *)&Entry->Next + 1);
          if ( *v33 == Entry )
          {
            *v33 = v32;
            *((_QWORD *)&v32->Next + 1) = v33;
            v34 = (struct _SLIST_ENTRY **)qword_1C0081328;
            if ( *(__int64 **)qword_1C0081328 == &AcpiPowerQueueList )
            {
              Entry->Next = (_SLIST_ENTRY *)&AcpiPowerQueueList;
              *((_QWORD *)&Entry->Next + 1) = v34;
              *v34 = Entry;
              qword_1C0081328 = (__int64)Entry;
              ACPIPowerScheduleDpc();
              KeReleaseSpinLock(&AcpiPowerQueueLock, v31);
              return;
            }
          }
        }
        goto LABEL_49;
      }
      if ( v12 < *((_DWORD *)&Entry[6].Next + 2) )
        LODWORD(Entry[16].Next) = 0;
    }
    v13 = *((_DWORD *)&Entry[3].Next + 2);
    if ( (v13 & 0x2000000) != 0 )
    {
      *((_DWORD *)&Entry[3].Next + 2) = v13 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
  }
  if ( Next )
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))Next)(v1, *((_QWORD *)&Entry[12].Next + 1), LODWORD(Entry[16].Next));
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v15 = Entry->Next;
  v16 = v14;
  if ( *(&Entry->Next->Next + 1) != Entry )
    goto LABEL_49;
  v17 = (PVOID *)*((_QWORD *)&Entry->Next + 1);
  if ( *v17 != Entry )
    goto LABEL_49;
  *v17 = v15;
  *((_QWORD *)&v15->Next + 1) = v17;
  p_Next = &Entry[1].Next->Next;
  if ( p_Next[1] != &Entry[1] )
    goto LABEL_49;
  v19 = (PVOID *)*((_QWORD *)&Entry[1].Next + 1);
  if ( *v19 != &Entry[1] )
    goto LABEL_49;
  *v19 = p_Next;
  p_Next[1] = (struct _SLIST_ENTRY *)v19;
  if ( LODWORD(Entry[3].Next) == 4 )
    goto LABEL_26;
  v20 = *(_QWORD *)(v1 + 584);
  if ( v20 == v1 + 584 )
  {
    *(_QWORD *)(v1 + 576) = 0LL;
    goto LABEL_26;
  }
  v35 = (_QWORD *)(v20 - 16);
  v36 = (_QWORD *)qword_1C0081328;
  if ( *(__int64 **)qword_1C0081328 != &AcpiPowerQueueList )
LABEL_49:
    __fastfail(3u);
  *v35 = &AcpiPowerQueueList;
  v35[1] = v36;
  *v36 = v35;
  qword_1C0081328 = (__int64)v35;
  *(_QWORD *)(v1 + 576) = v35;
LABEL_26:
  KeReleaseSpinLock(&AcpiPowerQueueLock, v16);
  if ( LODWORD(Entry[3].Next) == 2 )
  {
    ACPIDereferenceWaitWakePowerRequest(Entry);
  }
  else
  {
    ++dword_1C0081FDC;
    if ( ExQueryDepthSList(&RequestLookAsideList) < (unsigned __int16)word_1C0081FD0 )
    {
      ExpInterlockedPushEntrySList(&RequestLookAsideList, Entry);
    }
    else
    {
      ++dword_1C0081FE0;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))qword_1C0081FF8)(Entry);
    }
  }
}
