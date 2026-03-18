/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C0003C20
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C0003910 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DF80 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000F8D4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAUVIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C002BE90 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiCancelIndependentFlips @ 0x1C002F270 (VidSchiCancelIndependentFlips.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F6A0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003160C (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CF18 (VidSchiCompletePendingFlipOnPlane.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00028DC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiSignalFlipEvents @ 0x1C00043E0 (VidSchiSignalFlipEvents.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C00046E0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BF88 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C0010770 (VidSchiUnwaitContext.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0013730 (VidSchiPropagatePresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002CF20 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     McTemplateK0pxqqpqx_EtwWriteTransfer @ 0x1C002EA1C (McTemplateK0pxqqpqx_EtwWriteTransfer.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0032024 (VidSchiTryEnterIndependentFlip.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8)
{
  __int64 v9; // rbp
  __int64 v10; // r10
  unsigned int v11; // edx
  __int64 v12; // r8
  unsigned int v13; // edi
  unsigned int v14; // r12d
  unsigned int v15; // r14d
  __int64 v16; // r13
  __int64 v17; // rsi
  unsigned int v18; // ecx
  int v19; // r11d
  __int64 v20; // rdx
  int v21; // eax
  int v22; // r8d
  __int64 v23; // r15
  unsigned int v24; // r15d
  struct _SLIST_ENTRY *v25; // rcx
  int v26; // edx
  unsigned int v27; // r15d
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v28; // r9
  unsigned int i; // r15d
  _DWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  bool v33; // zf
  int v34; // eax
  char v35; // cl
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  char v40; // si
  __int64 v41; // rdx
  __int64 v42; // r15
  _QWORD *v43; // rbx
  int j; // esi
  _QWORD *v45; // rcx
  int v46; // edx
  __int64 v47; // r14
  int v48; // ebx
  _QWORD **v49; // r15
  _QWORD *v50; // rax
  _QWORD **v51; // rax
  _QWORD *v52; // rcx
  int v54; // r8d
  unsigned __int8 v55; // cf
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  struct _SLIST_ENTRY *v59; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v60; // r8
  bool v61; // r15
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // eax
  char v65; // cl
  __int64 v66; // rdx
  int v67; // r9d
  __int64 v68; // r8
  __int64 v69; // rcx
  void (__fastcall *v70)(_QWORD, __int64, __int64, __int64); // rax
  _QWORD *v71; // rcx
  _QWORD *v72; // rdx
  _QWORD *v73; // rcx
  _QWORD *v74; // rdx
  __int64 v75; // [rsp+60h] [rbp-C8h]
  unsigned int v76; // [rsp+68h] [rbp-C0h]
  __int64 v77; // [rsp+70h] [rbp-B8h]
  PSLIST_ENTRY *v78; // [rsp+78h] [rbp-B0h]
  __int64 v79; // [rsp+78h] [rbp-B0h]
  char v80; // [rsp+98h] [rbp-90h]
  __int64 v81; // [rsp+A0h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v82; // [rsp+B0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-60h] BYREF
  BOOL v85; // [rsp+138h] [rbp+10h]
  __int64 v87; // [rsp+148h] [rbp+20h]

  v87 = a4;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 796) )
    return 0LL;
  v77 = a3;
  v9 = *(_QWORD *)(a2 + 3104 + 8LL * a3);
  v10 = a3;
  v81 = a2 + 3104 + 8LL * a3;
  if ( !a4 )
    return 0LL;
  v11 = a5;
  v12 = 4673LL;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    v16 = 0LL;
    v17 = a4 + 1344LL * v11;
    v18 = *(_DWORD *)(v17 + 1140);
    if ( v18 > 0xC || !_bittest((const int *)&v12, v18) )
      v16 = *(_QWORD *)(v17 + 1128);
    v19 = a7;
    v85 = 1;
    switch ( a7 )
    {
      case 0:
        if ( v18 - 10 > 1 )
          break;
        goto LABEL_11;
      case 9:
      case 6:
        if ( v18 > 0xC || (v55 = _bittest((const int *)&v12, v18), v54 = 0, !v55) )
          v54 = 1;
        if ( a7 == 9 )
        {
          v85 = v18 == 5 || v18 == 15;
        }
        else if ( v18 == 5 || v18 == 15 || v18 == 13 )
        {
          v54 = 0;
        }
        if ( v18 - 7 <= 1 )
        {
          if ( *(_BYTE *)(v17 + 1165) )
            ++*(_QWORD *)(v16 + 8 * v10 + 376);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 800));
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 2344));
          if ( *(_DWORD *)(v17 + 1140) == 8 && !*(_BYTE *)(v17 + 1165) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v10 + 1444));
            v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v16 + 32) + 4LL))
                            + 8 * v10
                            + 88);
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v10 + 6352) + 8LL));
            _InterlockedIncrement((volatile signed __int32 *)(v56 + 8));
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 728));
            v57 = a2;
            if ( *(_BYTE *)(a2 + 2132) )
              v57 = a2 + 4 * v10;
            _InterlockedIncrement((volatile signed __int32 *)(v57 + 732));
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 1572));
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 4 * v10 + 1508));
            v11 = a5;
          }
        }
LABEL_107:
        if ( v54 )
        {
LABEL_11:
          v20 = *(_QWORD *)(v17 + 1264);
          v21 = *(_DWORD *)(v17 + 1224);
          v75 = v20;
          *(_DWORD *)(v17 + 1140) = a7;
          if ( (v21 & 0x10) != 0 )
          {
            v22 = ((unsigned __int16)*(_DWORD *)v20 | (unsigned __int16)(*(_DWORD *)v20 >> 10)) & 0x3FF;
          }
          else
          {
            v22 = (1 << *(_DWORD *)(a2 + 144)) - 1;
            v75 = v20;
          }
          v76 = v22;
          if ( a7 == 9 )
          {
            v75 = v20;
            if ( v85 )
            {
              *(_DWORD *)(v9 + 2352) &= ~v22;
              v20 = *(_QWORD *)(v17 + 1264);
              v75 = v20;
            }
          }
          v23 = *(_QWORD *)(v17 + 1248);
          if ( v23 )
          {
            v79 = *(_QWORD *)(v20 + 200);
            v75 = v20;
            if ( v79 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 16), &v82);
              v58 = v79;
              _InterlockedIncrement((volatile signed __int32 *)(v79 + 12));
              v59 = *(struct _SLIST_ENTRY **)(v23 + 8);
              if ( v59 )
              {
                CRefCountedBuffer::RefCountedBufferRelease(v59);
                v58 = v79;
              }
              *(_QWORD *)(v23 + 8) = v58;
              KeReleaseInStackQueuedSpinLock(&v82);
              v20 = *(_QWORD *)(v17 + 1264);
              v19 = a7;
              v75 = v20;
            }
            *(_QWORD *)(v17 + 1248) = 0LL;
          }
          v24 = 0;
          if ( *(_DWORD *)(a2 + 144) )
          {
            do
            {
              v78 = (PSLIST_ENTRY *)(v20 + v24 * ((8 * *(_DWORD *)(v20 + 8) + 199) & 0xFFFFFFF8) + 200LL);
              if ( *v78 )
              {
                CRefCountedBuffer::RefCountedBufferRelease(*v78);
                v20 = v75;
                *v78 = 0LL;
              }
              ++v24;
            }
            while ( v24 < *(_DWORD *)(a2 + 144) );
            v19 = a7;
          }
          v25 = *(struct _SLIST_ENTRY **)(v17 + 1256);
          if ( v25 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v25);
            v19 = a7;
            *(_QWORD *)(v17 + 1256) = 0LL;
          }
          if ( !v19 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 1720), &LockHandle);
            if ( (*(_DWORD *)(v17 + 1224) & 0x20) == 0 )
              *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4 * v77 + 508) = *(_DWORD *)(v17 + 1144);
            *(_QWORD *)(*(_QWORD *)(v9 + 16) + 8 * v77 + 576) = *(_QWORD *)(v17 + 1216);
            *(_QWORD *)(*(_QWORD *)(v9 + 16) + 8 * v77 + 704) = *(_QWORD *)(v17 + 1200);
            *(_QWORD *)(*(_QWORD *)(v9 + 16) + 8 * v77 + 832) = *(_QWORD *)(v17 + 1208);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v19 = a7;
          }
          v26 = *(_DWORD *)(v17 + 1224);
          if ( (v26 & 0x20) != 0 )
          {
            v60 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1240);
            if ( v60 )
            {
              v61 = 1;
              if ( v19 )
              {
                if ( v19 == 9 )
                {
                  v61 = v85;
                }
                else if ( v19 == 6 )
                {
                  v62 = 0LL;
                  if ( *(_QWORD *)(v17 + 1392) )
                    v62 = v17 + 1392;
                  VidSchiPropagatePresentHistoryToken(
                    (struct _VIDSCH_GLOBAL *)a2,
                    *(PKSPIN_LOCK *)(v17 + 1232),
                    v60,
                    1,
                    (*(_DWORD *)(v17 + 1224) & 0x40) != 0,
                    0,
                    0,
                    *(_QWORD *)(v17 + 1248),
                    *(_QWORD *)(v17 + 1264),
                    0LL,
                    v62,
                    1);
                  v60 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v17 + 1240);
                  v26 = *(_DWORD *)(v17 + 1224);
                }
                else
                {
                  v61 = 0;
                }
              }
              v63 = 0LL;
              if ( *(_QWORD *)(v17 + 1392) )
                v63 = v17 + 1392;
              VidSchiPropagatePresentHistoryToken(
                (struct _VIDSCH_GLOBAL *)a2,
                *(PKSPIN_LOCK *)(v17 + 1232),
                v60,
                v61,
                (v26 & 0x40) != 0,
                0,
                0,
                *(_QWORD *)(v17 + 1248),
                *(_QWORD *)(v17 + 1264),
                0LL,
                v63,
                0);
              v19 = a7;
            }
          }
          if ( bTracingEnabled && v19 )
          {
            v33 = !_BitScanForward((unsigned int *)&v64, v76);
            v65 = -1;
            if ( !v33 )
              v65 = v64;
            v80 = v65;
            if ( v16 )
            {
              v66 = *(_QWORD *)(v16 + 8);
              v67 = *(_DWORD *)(a2 + 2456);
              if ( !v66 )
                LODWORD(v66) = v16;
            }
            else
            {
              LOBYTE(v67) = 0;
              LODWORD(v66) = 0;
            }
            v68 = *(_QWORD *)(v17 + 1264);
            v27 = a3;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              v69 = *(_DWORD *)(v68 + 4) * ((8 * *(_DWORD *)(v68 + 8) + 199) & 0xFFFFFFF8);
              McTemplateK0pxqqpqx_EtwWriteTransfer(
                v69,
                v66,
                v68,
                *(_QWORD *)(a2 + 16),
                *(_QWORD *)(v69 + v68 + 40),
                a3,
                *(_DWORD *)(v17 + 1144),
                v66,
                v67,
                v80);
              v19 = a7;
            }
          }
          else
          {
            v27 = a3;
          }
          v28 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v17 + 1264);
          if ( (*(_DWORD *)v28 & 0x3FF) != 0 )
          {
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)a1,
              (struct _VIDSCH_GLOBAL *)a2,
              v27,
              v28,
              *(_DWORD *)(v17 + 1168),
              *(_DWORD *)(v17 + 1172),
              1,
              v19 != 0);
            if ( v16 )
              VidSchiCheckPendingDeviceCommand(v16);
          }
          for ( i = 0; i < *(_DWORD *)(v17 + 1180); ++i )
          {
            v30 = *(_DWORD **)(v17 + 8 * (i + 11LL));
            if ( (*(_DWORD *)(v17 + 1224) & 0x4000) != 0 )
            {
              if ( v30 )
              {
                VidSchiReleaseSyncObjectReference(v30);
                *(_QWORD *)(v17 + 8 * (i + 11LL)) = 0LL;
              }
            }
            else if ( v30 )
            {
              --v30[198];
            }
          }
          ++v14;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 1572), 0xFFFFFFFF);
          v10 = v77;
          if ( *(_BYTE *)(a2 + 2132) )
            v31 = a2 + 4 * v77;
          else
            v31 = a2;
          _InterlockedDecrement((volatile signed __int32 *)(v31 + 732));
          _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 728), 0xFFFFFFFF);
          _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 4 * v77 + 1508), 0xFFFFFFFF);
          if ( (*(_DWORD *)(v17 + 1224) & 0x10) != 0 )
            v32 = ((unsigned __int16)**(_DWORD **)(v17 + 1264) | (unsigned __int16)(**(_DWORD **)(v17 + 1264) >> 10)) & 0x3FF;
          else
            v32 = (unsigned int)((1 << *(_DWORD *)(a2 + 144)) - 1);
          v33 = !_BitScanForward((unsigned int *)&v34, v32);
          v35 = -1;
          v36 = (unsigned int)v32;
          if ( !v33 )
            v35 = v34;
          if ( (_DWORD)v32 )
          {
            do
            {
              --*(_DWORD *)(216LL * v35 + *(_QWORD *)(a2 + 8 * v77 + 3104) + 180);
              v37 = 1 << v35;
              v35 = -1;
              v36 = ~v37 & (unsigned int)v36;
              v33 = !_BitScanForward((unsigned int *)&v37, v36);
              if ( !v33 )
                v35 = v37;
            }
            while ( (_DWORD)v36 );
          }
          v15 |= v32;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 4 * v77 + 1444), 0xFFFFFFFF);
          --*(_DWORD *)(v16 + 1576);
          v38 = *(unsigned int *)(*(_QWORD *)(a2 + 8 * v77 + 3104) + 33288LL);
          if ( (_DWORD)v38 != -1 )
          {
            v70 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 2976);
            if ( v70 )
            {
              v70(*(_QWORD *)(a2 + 3024), v38, v32, v36);
              v10 = v77;
            }
          }
          a4 = v87;
          v11 = a5;
          v19 = a7;
          *(_DWORD *)(v87 + 52) = a5;
        }
LABEL_50:
        v12 = 4673LL;
        break;
      case 12:
        if ( v18 - 2 <= 1 )
        {
          v54 = (*(_DWORD *)(v17 + 1224) >> 5) & 1;
          if ( v54 )
          {
            *(_DWORD *)(a4 + 40) = ((_BYTE)v11 + 1) & 0x3F;
            goto LABEL_107;
          }
          goto LABEL_50;
        }
        if ( (v18 == 5 || v18 == 15) && (*(_DWORD *)(v17 + 1224) & 0x20) != 0 && a8 )
          *a8 = 1;
        break;
    }
    if ( v11 == a6 )
      break;
    v11 = ((_BYTE)v11 + 1) & 0x3F;
    a5 = v11;
  }
  if ( v14 )
  {
    v33 = !_BitScanForward((unsigned int *)&v39, v15);
    if ( v33 )
      LOBYTE(v39) = -1;
    if ( v15 )
    {
      v12 = v81;
      do
      {
        v40 = v39;
        v41 = *(int *)(216LL * (unsigned int)(char)v39 + *(_QWORD *)v12 + 172);
        if ( (int)v41 > -1 && *(_DWORD *)(152 * v41 + *(_QWORD *)(a2 + 3232) + 112) == 1 )
        {
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)a1, (struct _VIDSCH_GLOBAL *)a2, a3, (char)v39);
          v12 = v81;
        }
        v15 &= ~(1 << v40);
        v33 = !_BitScanForward((unsigned int *)&v39, v15);
        if ( v33 )
          LOBYTE(v39) = -1;
      }
      while ( v15 );
      v19 = a7;
    }
  }
  *(_DWORD *)(a2 + 796) -= v14;
  *(_DWORD *)(v9 + 2340) -= v14;
  _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 800), -v14);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 2344), -v14);
  if ( !v19
    && _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 66432), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(a2 + 2368), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 24LL));
    *(_QWORD *)(a2 + 2328) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 2336), CriticalWorkQueue);
  }
  v42 = *(_QWORD *)(v9 + 16);
  if ( v42 )
  {
    v43 = *(_QWORD **)(v42 + 72);
    for ( j = 0; v43 != (_QWORD *)(v42 + 72); j |= v46 )
    {
      v45 = v43 - 3;
      v46 = 0;
      if ( (v43[20] & 0x10) != 0 )
      {
        *((_DWORD *)v45 + 46) &= ~0x10u;
        v46 = (unsigned __int8)VidSchiUnwaitContext(v45, 21374LL, v12);
      }
      v43 = (_QWORD *)*v43;
    }
    v47 = *(_QWORD *)(v42 + 32);
    v48 = 0;
    v49 = (_QWORD **)(v47 + 3416);
    while ( 1 )
    {
      v50 = *v49;
      if ( *v49 == v49 )
        break;
      if ( (_QWORD **)v50[1] != v49 || (v71 = (_QWORD *)*v50, *(_QWORD **)(*v50 + 8LL) != v50) )
LABEL_157:
        __fastfail(3u);
      *v49 = v71;
      v71[1] = v49;
      v50[1] = 0LL;
      *v50 = 0LL;
      v48 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v50 - 5));
    }
    v51 = (_QWORD **)(v47 + 3432);
    while ( 1 )
    {
      v52 = *v51;
      if ( *v51 == v51 )
        break;
      if ( (_QWORD **)v52[1] != v51 )
        goto LABEL_157;
      v72 = (_QWORD *)*v52;
      if ( *(_QWORD **)(*v52 + 8LL) != v52 )
        goto LABEL_157;
      *v51 = v72;
      v72[1] = v51;
      *v52 = 0LL;
      v52[1] = 0LL;
      v73 = v52 + 19;
      if ( !*v73 )
      {
        v74 = *(_QWORD **)(a1 + 8);
        if ( *v74 != a1 )
          goto LABEL_157;
        *v73 = a1;
        v73[1] = v74;
        *v74 = v73;
        *(_QWORD *)(a1 + 8) = v73;
        *(_BYTE *)(a1 + 16) = 0;
      }
    }
    v13 = j | v48;
  }
  VidSchiSignalFlipEvents(v9, v13, 0LL);
  return v14;
}
