/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x1C003CE00
 * Callers:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C001B554 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C003C910 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0018B1C (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x1C003C2F0 (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     VidSchControlVSyncAdapter @ 0x1C00A3620 (VidSchControlVSyncAdapter.c)
 */

void __fastcall VidSchDestroyPeriodicFrameNotification(_DWORD *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // [rsp+28h] [rbp-19h]
  int v15; // [rsp+40h] [rbp-1h]
  __int64 v16; // [rsp+58h] [rbp+17h] BYREF
  __int64 *v17; // [rsp+60h] [rbp+1Fh]
  char v18; // [rsp+68h] [rbp+27h]
  _QWORD v19[4]; // [rsp+70h] [rbp+2Fh] BYREF
  __int16 v20; // [rsp+90h] [rbp+4Fh]

  if ( (byte_1C006E941 & 2) != 0 )
  {
    v15 = P[6];
    v14 = P[2];
    McTemplateK0pqxxqpp_EtwWriteTransfer(
      (__int64)P,
      &EventDestroyPeriodicFrameNotification,
      a3,
      *(_QWORD *)P,
      v14,
      *((_QWORD *)P + 2),
      *((_QWORD *)P + 6),
      v15,
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
  if ( *((_QWORD *)P + 4) )
  {
    v16 = *((_QWORD *)P + 4);
    v5 = *(_QWORD *)P;
    v17 = 0LL;
    v6 = ((__int64 (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[71])(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + 2792LL),
           &v16);
    if ( v6 < 0 )
    {
      v7 = v6;
      WdLogSingleEntry1(1LL, v6);
      ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Periodic monitored fence failed to destroy KMD notification, Status: 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( (int)VidSchControlVSyncAdapter(*(struct _VIDSCH_GLOBAL **)(*(_QWORD *)P + 8LL)) < 0 )
  {
    v8 = -3;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 2212LL) )
      v9 = P[2];
    else
      v9 = -3;
    WdLogSingleEntry1(1LL, v9);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 2212LL) )
      v8 = P[2];
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Periodic monitored fence failed to release VSync for VidPnSourceID:0x%I64x.",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)(*(_QWORD *)P + 8LL);
  v20 = 0;
  v19[0] = v10 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v19);
  v11 = *(_QWORD *)P;
  v17 = &v16;
  v18 = 0;
  v16 = (__int64)&v16;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL * (unsigned int)P[2] + 3200) + 78592LL)
            + 8LL * (unsigned __int8)P[6]) = 0LL;
  _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(*(_VIDSCH_SYNC_OBJECT **)P, (struct HwQueueStagingList *)&v16, 1);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v16);
  AcquireSpinLock::Release((AcquireSpinLock *)v19);
  VidSchiReleaseSyncObjectReference(*(char **)P, v12);
  v13 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_DWORD *)(v13 + 200) != 6 )
  {
    WdLogSingleEntry1(1LL, 359LL);
    DxgCoreInterface[85](
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetSyncObjectType() == D3DDDI_PERIODIC_MONITORED_FENCE",
      359LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(v13 + 168) = 0LL;
  ExFreePoolWithTag(P, 0x62616956u);
}
