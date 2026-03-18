/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C00050A0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002EE50 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C000386C (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0003910 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000A580 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000A5D0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000F8D4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C00135E8 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?VidSchiIndependentVidPnAdaptiveVSync@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@I_N2@Z @ 0x1C002B08C (-VidSchiIndependentVidPnAdaptiveVSync@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@I_N2@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002BD4C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqXR1qqqXR5_EtwWriteTransfer @ 0x1C002D7F4 (McTemplateK0pqXR1qqqXR5_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5qQR7_EtwWriteTransfer @ 0x1C002D8C8 (McTemplateK0pqXR1qqqXR5qQR7_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x1C002E644 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C002EC38 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CE98 (VidSchiCompletePendingFlipOnPlane.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // r9
  int v12; // r14d
  unsigned int v13; // r12d
  __int64 v14; // r15
  struct VIDSCH_FLIP_QUEUE *v15; // r15
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // r13d
  unsigned int v19; // eax
  int v20; // r13d
  int v21; // eax
  __int64 v22; // r14
  unsigned int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r15
  void (__fastcall *v29)(_QWORD, _QWORD); // rax
  __int64 v30; // rcx
  unsigned int v31; // r13d
  __int64 v32; // r8
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rax
  bool v40; // zf
  int v41; // eax
  char i; // r9
  int v43; // eax
  char v44; // al
  int v45; // edx
  int v46; // r8d
  _QWORD *v47; // rax
  bool v48; // [rsp+20h] [rbp-E0h]
  bool v49; // [rsp+60h] [rbp-A0h] BYREF
  bool v50; // [rsp+61h] [rbp-9Fh] BYREF
  int v51; // [rsp+64h] [rbp-9Ch]
  int v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-94h]
  int v54; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v55; // [rsp+78h] [rbp-88h]
  int v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+84h] [rbp-7Ch]
  _QWORD v58[2]; // [rsp+88h] [rbp-78h] BYREF
  char v59; // [rsp+98h] [rbp-68h]
  struct VIDSCH_FLIP_QUEUE_ENTRY *v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  __int64 v62[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v63; // [rsp+C0h] [rbp-40h]
  int v64; // [rsp+C4h] [rbp-3Ch]
  struct VIDSCH_FLIP_QUEUE *v65; // [rsp+C8h] [rbp-38h]
  unsigned int v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D4h] [rbp-2Ch]
  __int64 v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  struct _KLOCK_QUEUE_HANDLE v71; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v73[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h]
  _QWORD v76[10]; // [rsp+150h] [rbp+50h] BYREF
  char v77[80]; // [rsp+1A0h] [rbp+A0h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v54 = 0;
  memset(v77, 0, sizeof(v77));
  v3 = *((unsigned int *)a1 + 22);
  v74 = 0LL;
  v75 = 0;
  v4 = 0;
  v51 = 0;
  v53 = v3;
  memset(v73, 0, sizeof(v73));
  if ( (_DWORD)v3 == -1 || (unsigned int)v3 >= *(_DWORD *)(v1 + 40) )
    return;
  _mm_lfence();
  v5 = *(_QWORD *)(v1 + 8 * v3 + 3104);
  v49 = 0;
  v6 = (unsigned int)v3;
  v61 = v3;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 1712), &LockHandle);
  v59 = 0;
  v58[1] = v58;
  v58[0] = v58;
  if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
    goto LABEL_13;
  v8 = *(_QWORD *)(v5 + 33240);
  if ( !v8 )
  {
    *(_QWORD *)(v5 + 33256) = 0LL;
    *(_QWORD *)(v5 + 33240) = 1LL;
    goto LABEL_91;
  }
  v10 = *((_QWORD *)a1 + 10) - *(_QWORD *)(v5 + 33192);
  v9 = *((_QWORD *)a1 + 7) - *(_QWORD *)(v5 + 33200);
  if ( *((_QWORD *)a1 + 10) == *(_QWORD *)(v5 + 33192) )
    goto LABEL_11;
  if ( v8 <= 3 )
  {
    v8 += v10;
    v36 = v9 + *(_QWORD *)(v5 + 33256);
    *(_QWORD *)(v5 + 33240) = v8;
    *(_QWORD *)(v5 + 33256) = v36;
    if ( v8 > 3 )
    {
      v37 = v36 / (v8 - 1);
      v7 = v37 / 0xA;
      *(_QWORD *)(v5 + 33264) = v37 / 0xA;
      _m_prefetchw((const void *)(v5 + 33248));
      while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 33248), v37, *(_QWORD *)(v5 + 33248)) != v37 )
        ;
      v8 = *(_QWORD *)(v5 + 33240);
      goto LABEL_11;
    }
LABEL_91:
    if ( *(_BYTE *)(v1 + 2132) )
      _InterlockedExchange((volatile __int32 *)(v1 + 4 * v3 + 2192), 1);
    else
      _InterlockedExchange((volatile __int32 *)(v1 + 2192), 1);
    goto LABEL_12;
  }
  if ( v10 != 1 )
    v9 /= v10;
  v11 = *(_QWORD *)(v5 + 33264);
  v7 = *(_QWORD *)(v5 + 33248);
  *(_QWORD *)(v5 + 33280) = v9;
  if ( v9 > v7 + v11 || (v7 -= v11, v9 < v7) )
  {
    ++*(_QWORD *)(v5 + 33272);
    *(_QWORD *)(v5 + 33240) = 0LL;
    goto LABEL_91;
  }
LABEL_11:
  if ( v8 <= 3 )
    goto LABEL_91;
LABEL_12:
  *(_QWORD *)(v5 + 33192) = *((_QWORD *)a1 + 10);
  *(_QWORD *)(v5 + 33200) = *((_QWORD *)a1 + 7);
  *(_QWORD *)(v5 + 33208) = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v5 + 33216) = *((_QWORD *)a1 + 9);
LABEL_13:
  if ( *(int *)(v5 + 4) >= 4 || *(_BYTE *)(v1 + 148) )
  {
    v12 = -1;
    v9 = 4673LL;
    v13 = v51;
    while ( v12 != *(_DWORD *)(v1 + 144) )
    {
      v14 = *(_QWORD *)(v1 + 8 * v6 + 3104);
      v50 = 0;
      if ( v12 == -1 )
        v15 = *(struct VIDSCH_FLIP_QUEUE **)(v14 + 24);
      else
        v15 = *(struct VIDSCH_FLIP_QUEUE **)(v14 + 8LL * v12 + 32);
      if ( v15 )
      {
        v16 = *((_DWORD *)v15 + 20);
        if ( v16 )
          *((_DWORD *)v15 + 20) = --v16;
        v17 = v13;
        v7 = 0LL;
        ++v13;
        v51 = 0;
        v52 = 0;
        *((_DWORD *)v73 + v17) = v16;
        v8 = 0LL;
        v18 = *((_DWORD *)v15 + 12);
        LODWORD(v17) = ((unsigned __int8)*((_DWORD *)v15 + 11) - 1) & 0x3F;
        v55 = 0LL;
        if ( v18 != (_DWORD)v17 )
        {
          while ( 1 )
          {
            v60 = (struct VIDSCH_FLIP_QUEUE *)((char *)v15 + 1344 * v18 + 88);
            v19 = *((_DWORD *)v60 + 263);
            if ( v19 > 0xC || !_bittest((const int *)&v9, v19) )
            {
              if ( v19 != 5 && v19 != 15 )
              {
LABEL_25:
                v8 = v55;
                break;
              }
              if ( !*(_BYTE *)(v1 + 148) && !*((_QWORD *)a1 + 14) )
                VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v5, (struct _VIDSCH_GLOBAL *)v1);
              if ( (unsigned int)VidSchiIsExpectedVSyncCookie((struct _VIDSCH_GLOBAL *)v1, v60, a1) )
              {
                v62[0] = v1;
                v65 = v15;
                v66 = v18;
                v30 = *((_QWORD *)v60 + 130);
                v64 = 0;
                v67 = 0;
                v63 = v53;
                v68 = *(_QWORD *)(v5 + 33192);
                v69 = *(_QWORD *)(v5 + 33200);
                v70 = *(_QWORD *)(v5 + 33208);
                v55 = v30;
                v62[1] = v30;
                VidSchiProcessVsyncCompletedFlipEntry(
                  (struct HwQueueStagingList *)v58,
                  v62,
                  (__int64)v77,
                  &v54,
                  &v52,
                  &v49);
                v8 = v55;
                v20 = v52;
                goto LABEL_27;
              }
              LODWORD(v9) = 4673;
            }
            v18 = ((_BYTE)v18 - 1) & 0x3F;
            if ( v18 == (((unsigned __int8)*((_DWORD *)v15 + 11) - 1) & 0x3F) )
              goto LABEL_25;
          }
        }
        v20 = v51;
LABEL_27:
        if ( *(_DWORD *)(v5 + 2340) && *(_BYTE *)(v5 + 66436) )
        {
          VidSchiExecuteNextFlipQueueEntry(
            (struct HwQueueStagingList *)v58,
            (struct _VIDSCH_GLOBAL *)v1,
            &v50,
            v53,
            v15);
          v8 = v55;
        }
        if ( v8 )
        {
          VidSchiCheckPendingDeviceCommand(v8);
          v31 = -v20;
          v32 = v61;
          v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55 + 40) + 24LL)
                                     + 8LL * *(unsigned int *)(*(_QWORD *)(v55 + 32) + 4LL))
                         + 8 * v61
                         + 88);
          _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 8 * v61 + 6352) + 8LL), v31);
          v8 = *(_QWORD *)(v1 + 8 * v32 + 6352);
          *(_DWORD *)v8 += v52;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), v31);
          *(_DWORD *)v7 += v52;
        }
        LODWORD(v3) = v53;
        if ( v50 )
          VidSchiCompletePendingFlipOnPlane((unsigned int)v58, v1, v53, (_DWORD)v15, 9);
        v9 = 4673LL;
      }
      ++v12;
      v6 = (unsigned int)v3;
    }
    v51 = v13;
    v4 = v13;
  }
  if ( bTracingEnabled )
  {
    if ( (*((_BYTE *)a1 + 104) & 1) == 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxqqipqx_EtwWriteTransfer(
        v8,
        v7,
        v9,
        *(_QWORD *)(v1 + 16),
        *((_DWORD *)a1 + 23),
        *((_QWORD *)a1 + 14),
        *((_DWORD *)a1 + 22),
        *((_DWORD *)a1 + 20),
        *((_QWORD *)a1 + 7),
        0,
        0,
        v77[0]);
    memset(v76, 0, sizeof(v76));
    v21 = *((_DWORD *)a1 + 4);
    switch ( v21 )
    {
      case 10:
        v38 = *(_DWORD *)(v1 + 144);
        if ( v38 )
        {
          v8 = (unsigned __int64)v76;
          v9 = v38;
          v7 = (unsigned __int64)a1 + 112;
          do
          {
            v39 = *(_QWORD *)v7;
            v7 += 16LL;
            *(_QWORD *)v8 = v39;
            v8 += 8LL;
            --v9;
          }
          while ( v9 );
        }
        break;
      case 3:
        v76[0] = *((_QWORD *)a1 + 14);
        break;
      case 7:
        v9 = 0xFFFFFFFFLL;
        v7 = *((_DWORD *)a1 + 25) & 0x3FF;
        v40 = !_BitScanForward((unsigned int *)&v41, v7);
        v56 = v41;
        if ( !v40 )
          v9 = (unsigned __int8)v41;
        for ( i = 0; (_DWORD)v7; ++i )
        {
          v57 = 0;
          v76[(char)v9] = *((_QWORD *)a1 + 5 * i + 14);
          v8 = (unsigned __int8)v9;
          v9 = 0xFFFFFFFFLL;
          v7 = ~(1 << v8) & (unsigned int)v7;
          v40 = !_BitScanForward((unsigned int *)&v43, v7);
          v57 = v43;
          if ( !v40 )
            v9 = (unsigned __int8)v43;
        }
        break;
    }
    if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqXR1qqqXR5_EtwWriteTransfer(
          v8,
          v7,
          v9,
          *(_QWORD *)(v1 + 16),
          *(_DWORD *)(v1 + 144),
          (__int64)v76,
          *((_DWORD *)a1 + 22),
          *((_DWORD *)a1 + 20),
          v54,
          (__int64)v77);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqXR1qqqXR5qQR7_EtwWriteTransfer(
        v8,
        v7,
        v9,
        *(_QWORD *)(v1 + 16),
        *(_DWORD *)(v1 + 144),
        (__int64)v76,
        *((_DWORD *)a1 + 22),
        *((_DWORD *)a1 + 20),
        v54,
        (__int64)v77,
        v4,
        (__int64)v73);
    }
  }
  if ( *(_BYTE *)(v1 + 2132) )
  {
    VidSchiIndependentVidPnAdaptiveVSync((struct _VIDSCH_GLOBAL *)v1, a1, v3, v49, v48);
    goto LABEL_52;
  }
  if ( v49 )
    goto LABEL_51;
  if ( *(_BYTE *)(v1 + 45) != 1 || !*(_DWORD *)(v1 + 2324) )
    goto LABEL_52;
  if ( _InterlockedExchange((volatile __int32 *)(v1 + 2192), 0)
    || (v8 = *(unsigned int *)(*(_QWORD *)(v1 + 16) + 2704LL), (_DWORD)v8)
    || *(_DWORD *)(v1 + 732)
    || *(_DWORD *)(v1 + 804)
    || *(_DWORD *)(v1 + 1884) )
  {
LABEL_51:
    *(_DWORD *)(v1 + 2320) = -1;
    *(_DWORD *)(v1 + 2256) = 0;
    goto LABEL_52;
  }
  if ( (*((_BYTE *)a1 + 104) & 1) == 0 )
  {
    v33 = *(_DWORD *)(v1 + 2320);
    if ( v33 == -1 )
    {
      *(_DWORD *)(v1 + 2320) = v3;
    }
    else if ( v33 != (_DWORD)v3 )
    {
      goto LABEL_52;
    }
    v34 = *(_DWORD *)(v1 + 2256);
    if ( v34 != -1 )
    {
      v8 = *(unsigned int *)(v1 + 2324);
      v35 = v34 + 1;
      *(_DWORD *)(v1 + 2256) = v35;
      if ( v35 == (_DWORD)v8 )
      {
        if ( !_InterlockedExchange((volatile __int32 *)(v1 + 2184), 1) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 2152), CriticalWorkQueue);
      }
      else if ( v35 > (unsigned int)v8 )
      {
        *(_DWORD *)(v1 + 2256) = v8 + 1;
      }
    }
LABEL_52:
    if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
      goto LABEL_68;
    v22 = *(_QWORD *)(v1 + 16);
    v23 = *(_DWORD *)(v5 + 33192);
    v24 = *(_QWORD *)(v22 + 2672);
    if ( (unsigned int)v3 >= *(_DWORD *)(v24 + 80) )
      goto LABEL_67;
    v25 = *(_QWORD *)(v24 + 112) + 3968LL * (unsigned int)v3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v25 + 960), &v71);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v44 = DXGADAPTER::NumberOfVSyncWaiter((DXGADAPTER *)v22, v3);
      McTemplateK0qqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v25 + 952),
        v45,
        v46,
        *(_DWORD *)(v25 + 944),
        v23,
        *(_BYTE *)(v25 + 952),
        v44);
    }
    KePulseEvent((PRKEVENT)(v25 + 912), 0, 0);
    if ( !*(_QWORD *)(v25 + 936) || (*(_DWORD *)(v25 + 948) = v23, *(_DWORD *)(v25 + 944) > v23) )
    {
LABEL_66:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
      v22 = *(_QWORD *)(v1 + 16);
LABEL_67:
      ((void (__fastcall *)(unsigned __int64, unsigned __int64, unsigned __int64))DxgCoreInterface[3])(v8, v7, v9);
      ((void (__fastcall *)(_QWORD, _QWORD))DxgCoreInterface[77])(*(_QWORD *)(v22 + 316), *((unsigned int *)a1 + 23));
      goto LABEL_68;
    }
    if ( *(_BYTE *)(v25 + 952) )
    {
      *(_BYTE *)(v25 + 952) = 0;
      if ( *(_QWORD *)(v22 + 2680) )
      {
        v27 = (unsigned int)v3;
        if ( (*(_DWORD *)(v22 + 2544) & 0x10) == 0 )
        {
          v27 = 0LL;
          goto LABEL_63;
        }
        if ( (unsigned int)v3 < 0x10 )
        {
LABEL_63:
          v28 = (unsigned int)v27;
          if ( _InterlockedDecrement((volatile signed __int32 *)(v22 + 4LL * (unsigned int)v27 + 2704)) < 0 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26);
            v47[3] = 275LL;
            v47[4] = 37LL;
            v47[5] = v22;
            v47[6] = *(unsigned int *)(v22 + 4 * v28 + 2704);
            v47[7] = 0LL;
            WdLogEvent5_WdCriticalError(v47);
          }
        }
      }
    }
    KeSetEvent(*(PRKEVENT *)(v25 + 936), 0, 0);
    goto LABEL_66;
  }
LABEL_68:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v58);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)a1 + 104) & 1) == 0 )
  {
    v29 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 3008);
    if ( v29 )
      v29(*(_QWORD *)(v1 + 3024), (unsigned int)v3);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v58);
}
