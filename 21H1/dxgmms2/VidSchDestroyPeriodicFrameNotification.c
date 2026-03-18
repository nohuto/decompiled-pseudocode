/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x1C0034160
 * Callers:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002F320 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C0033CE0 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BF88 (VidSchiReleaseSyncObjectReference.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C00142F4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x1C00338AC (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     VidSchControlVSyncAdapter @ 0x1C0087C50 (VidSchControlVSyncAdapter.c)
 */

void __fastcall VidSchDestroyPeriodicFrameNotification(_DWORD *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // [rsp+28h] [rbp-19h]
  int v25; // [rsp+40h] [rbp-1h]
  __int64 v26; // [rsp+58h] [rbp+17h] BYREF
  __int64 *v27; // [rsp+60h] [rbp+1Fh]
  char v28; // [rsp+68h] [rbp+27h]
  _QWORD v29[4]; // [rsp+70h] [rbp+2Fh] BYREF
  __int16 v30; // [rsp+90h] [rbp+4Fh]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
  {
    v25 = P[6];
    v24 = P[2];
    McTemplateK0pqxxqpp_EtwWriteTransfer(
      (__int64)P,
      &EventDestroyPeriodicFrameNotification,
      a3,
      *(_QWORD *)P,
      v24,
      *((_QWORD *)P + 2),
      *((_QWORD *)P + 6),
      v25,
      *((_QWORD *)P + 4),
      *((_QWORD *)P + 5));
  }
  v4 = *((_QWORD *)P + 5);
  if ( v4 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    ExDeleteTimer(v4, a2, a3, 0LL);
  }
  v5 = *((_QWORD *)P + 4);
  if ( v5 )
  {
    v27 = 0LL;
    v26 = v5;
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[66])(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 16LL) + 2672LL),
           &v26);
    v10 = v6;
    if ( v6 < 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9);
      *(_QWORD *)(v11 + 24) = v10;
      WdLogEvent5_WdAssertion(v11);
    }
  }
  if ( (int)VidSchControlVSyncAdapter(*(struct _VIDSCH_GLOBAL **)(*(_QWORD *)P + 8LL)) < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12, v14);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 2132LL) )
      v16 = P[2];
    else
      v16 = -3;
    *(_QWORD *)(v15 + 24) = v16;
    WdLogEvent5_WdAssertion(v15);
  }
  v17 = *(_QWORD *)(*(_QWORD *)P + 8LL);
  v30 = 0;
  v29[0] = v17 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v29);
  v18 = *(_QWORD *)P;
  v27 = &v26;
  v28 = 0;
  v26 = (__int64)&v26;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL * (unsigned int)P[2] + 3104) + 66448LL)
            + 8LL * (unsigned __int8)P[6]) = 0LL;
  _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(*(_VIDSCH_SYNC_OBJECT **)P, (struct HwQueueStagingList *)&v26, 1);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v26);
  AcquireSpinLock::Release((AcquireSpinLock *)v29);
  VidSchiReleaseSyncObjectReference(*(char **)P);
  v22 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_DWORD *)(v22 + 192) != 6 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = 351LL;
    WdLogEvent5_WdAssertion(v23);
  }
  *(_QWORD *)(v22 + 160) = 0LL;
  ExFreePoolWithTag(P, 0x62616956u);
}
