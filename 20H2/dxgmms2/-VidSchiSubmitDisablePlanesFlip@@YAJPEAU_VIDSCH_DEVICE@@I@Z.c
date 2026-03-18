/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BFB0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0001924 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009DB0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000D8D0 (VidSchiExecuteMmIoFlip.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018300 (memmove.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0029B6C (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0029EA0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C002CCB8 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     VidSchIsVSyncEnabled @ 0x1C00644B0 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r14d
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _SLIST_ENTRY *v10; // r12
  __int64 v11; // rax
  void (__fastcall *v12)(_QWORD); // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  bool v15; // zf
  int v16; // eax
  char v17; // cl
  __int64 v18; // rdi
  __int64 v19; // rbx
  void *v20; // rcx
  unsigned int v21; // r8d
  __int64 v23; // [rsp+30h] [rbp-49h]
  struct _SLIST_ENTRY *v24[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-31h] BYREF
  char v26; // [rsp+58h] [rbp-21h]
  _QWORD v27[4]; // [rsp+60h] [rbp-19h] BYREF
  __int16 v28; // [rsp+80h] [rbp+7h]
  char v29; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v30; // [rsp+E8h] [rbp+6Fh]
  int v31; // [rsp+F0h] [rbp+77h]
  int v32; // [rsp+F8h] [rbp+7Fh]

  v30 = a2;
  v2 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v5 = a2;
  v6 = *(_QWORD *)(v2 + 8LL * a2 + 3104);
  if ( !v6 )
    return 0LL;
  v23 = *(_QWORD *)(v6 + 24);
  if ( !v23 )
    return 0LL;
  v7 = *(_QWORD *)(v2 + 16);
  v24[0] = 0LL;
  v24[1] = *(struct _SLIST_ENTRY **)(v7 + 2704);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v24);
  if ( v24[0] )
  {
    v10 = v24[0] + 36;
    if ( !*((_BYTE *)&v24[0][21].Next + 12) )
      v10 = v24[0] + 30;
    LODWORD(v10->Next) ^= (LODWORD(v10->Next) ^ (((1 << *(_DWORD *)(v2 + 144)) - 1) << 10)) & 0xFFC00;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 728), 1u);
    v11 = 732LL;
    if ( *(_BYTE *)(v2 + 2132) )
      v11 = 4 * v5 + 732;
    _InterlockedAdd((volatile signed __int32 *)(v11 + v2), 1u);
    _InterlockedAdd((volatile signed __int32 *)a1 + 393, 1u);
    _InterlockedAdd((volatile signed __int32 *)a1 + v5 + 377, 1u);
    VidSchIsVSyncEnabled(v2, v30);
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 8 * v5 + 3104) + 33288LL) != -1 )
    {
      v12 = *(void (__fastcall **)(_QWORD))(v2 + 2960);
      if ( v12 )
        v12(*(_QWORD *)(v2 + 3024));
    }
    v28 = 0;
    v27[0] = v2 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v27);
    v26 = 0;
    v25[1] = v25;
    v25[0] = v25;
    _InterlockedAdd((volatile signed __int32 *)a1 + v5 + 361, 1u);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 4) + 4LL))
                    + 8 * v5
                    + 88);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v5 + 6352) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    ++*(_DWORD *)(v2 + 796);
    ++*((_DWORD *)a1 + 394);
    ++*(_DWORD *)(v6 + 2340);
    v14 = ((unsigned __int16)LODWORD(v10->Next) | (unsigned __int16)(LODWORD(v10->Next) >> 10)) & 0x3FF;
    v15 = !_BitScanForward((unsigned int *)&v16, v14);
    v31 = v16;
    while ( 1 )
    {
      v17 = -1;
      if ( !v15 )
        v17 = v16;
      if ( !v14 )
        break;
      ++*(_DWORD *)(216LL * v17 + *(_QWORD *)(v2 + 8 * v5 + 3104) + 180);
      v14 &= ~(1 << v17);
      v15 = !_BitScanForward((unsigned int *)&v16, v14);
      v32 = v16;
    }
    v18 = *(unsigned int *)(v23 + 32);
    v19 = v23 + 1344 * v18;
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v19 + 88));
    *(_DWORD *)(v19 + 1224) |= 0x190u;
    v20 = *(void **)(v19 + 1264);
    *(_QWORD *)(v19 + 1128) = a1;
    *(_DWORD *)(v19 + 1160) = 0;
    memmove(v20, v10, *((unsigned int *)&v10->Next + 3));
    *(_DWORD *)(v23 + 32) = ((_BYTE)v18 + 1) & 0x3F;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 800));
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 2344));
    v21 = v30;
    *(_DWORD *)(v19 + 1140) = 4;
    v29 = 0;
    VidSchiExecuteMmIoFlip((struct HwQueueStagingList *)v25, v2, v21, v23, v18, &v29);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v25);
    AcquireSpinLock::Release((AcquireSpinLock *)v27);
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v9 + 24) = 20943LL;
    WdLogEvent5_WdLowResource(v9);
    v3 = -1073741801;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v24);
  return v3;
}
