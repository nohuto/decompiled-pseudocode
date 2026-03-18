/*
 * XREFs of VidSchCreateHwQueue @ 0x1C0041830
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EC80 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F09C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0040144 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwQueue @ 0x1C0042A20 (VidSchTerminateHwQueue.c)
 */

__int64 __fastcall VidSchCreateHwQueue(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r12
  int v8; // edi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  int *v12; // rsi
  int v13; // edx
  char v14; // al
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // r14d
  __int64 v21; // r13
  __int64 v22; // rax
  struct _VIDSCH_QUEUE_PACKET *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+48h] [rbp-38h] BYREF
  int v29; // [rsp+50h] [rbp-30h]
  int v30; // [rsp+54h] [rbp-2Ch]
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int128 v32; // [rsp+60h] [rbp-20h]
  __int64 v33; // [rsp+70h] [rbp-10h]
  __int64 v34; // [rsp+C8h] [rbp+48h]

  v4 = *(_QWORD *)(a2 + 8);
  v8 = 0;
  v34 = *(_QWORD *)(v4 + 32);
  Pool2 = ExAllocatePool2(64LL, 264LL, 1684105558LL);
  v10 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  *(_DWORD *)Pool2 = 1684105558;
  *(_QWORD *)(Pool2 + 48) = a1;
  v12 = (int *)(a3 + 4);
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_QWORD *)(Pool2 + 128) = KeGetCurrentThread();
  if ( (*(_DWORD *)(a2 + 56) & 0x20) != 0 || (v13 = *v12, (*(_BYTE *)(v4 + 48) & 4) != 0 || (*v12 & 1) != 0) )
  {
    v13 = *v12;
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  *(_BYTE *)(v10 + 144) = v14;
  *(_QWORD *)(v10 + 168) = v10 + 160;
  *(_QWORD *)(v10 + 160) = v10 + 160;
  *(_QWORD *)(v10 + 208) = v10 + 160;
  *(_QWORD *)(v10 + 224) = v10 + 216;
  *(_QWORD *)(v10 + 216) = v10 + 216;
  *(_BYTE *)(v10 + 145) = (v13 & 8) != 0;
  *(_QWORD *)(v10 + 248) = v10 + 240;
  *(_QWORD *)(v10 + 240) = v10 + 240;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 120)) == 1 )
    VidSchiIncrementHwContextReference(*(struct VIDSCH_HW_CONTEXT **)(v10 + 40));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v34 + 1728), &LockHandle);
  v15 = *(_QWORD **)(a2 + 232);
  v16 = (_QWORD *)(v10 + 8);
  if ( *v15 != a2 + 224 )
    __fastfail(3u);
  *v16 = a2 + 224;
  *(_QWORD *)(v10 + 16) = v15;
  *v15 = v16;
  *(_QWORD *)(a2 + 232) = v16;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a1 )
  {
    *(_QWORD *)(v10 + 112) = *(_QWORD *)(a1 + 32);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    *(_QWORD *)(v10 + 112) = 0LL;
LABEL_17:
    v19 = *(_DWORD *)(v34 + 152) * ((*(_DWORD *)(v34 + 76) << 6) + ((8 * *(_DWORD *)(v34 + 76) + 231) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v34 + 76) + 111);
    if ( v19 <= 0x460 )
      v19 = 1120;
    v20 = 0;
    v21 = v19;
    do
    {
      v22 = ExAllocatePool2(64LL, v21, 895576406LL);
      v23 = (struct _VIDSCH_QUEUE_PACKET *)v22;
      if ( !v22 )
      {
        WdLogSingleEntry0(3LL);
        v8 = -1073741801;
        goto LABEL_31;
      }
      VidSchiInterlockedInsertTailList(
        (KSPIN_LOCK *)(v34 + 1736),
        v10 + 240,
        (_QWORD *)(v22 + 8),
        (_DWORD *)(v10 + 256));
      VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v10, v23);
      ++v20;
    }
    while ( v20 < 5 );
    if ( !a1 && bTracingEnabled )
    {
      v25 = *(_QWORD *)(v10 + 40);
      v26 = *(_QWORD *)(v25 + 24);
      if ( !v26 || (*(_DWORD *)(v25 + 56) & 0x40) != 0 )
        v26 = *(_QWORD *)(v10 + 40);
      if ( (byte_1C006E941 & 4) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v25, &EventCreateHwQueue, v24, v26, 0LL, v10);
    }
    *a4 = v10;
    return (unsigned int)v8;
  }
  v17 = *v12;
  v18 = *(_QWORD *)(a2 + 48);
  v28 = 0LL;
  v29 = v17;
  v31 = *(_QWORD *)(a3 + 16);
  v30 = *(_DWORD *)(a3 + 8);
  v33 = *(_QWORD *)(a3 + 40);
  v32 = 0LL;
  v8 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))DxgCoreInterface[19])(*(_QWORD *)(v34 + 8), v18, &v28);
  if ( v8 >= 0 )
  {
    *(_QWORD *)(v10 + 112) = v28;
    goto LABEL_17;
  }
LABEL_31:
  VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v10);
  *a4 = 0LL;
  return (unsigned int)v8;
}
