/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C000D200
 * Callers:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0006CD0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0007350 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0009B20 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000AEB0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E658 (VidSchiCompleteRewindPacket.c)
 *     VidSchiUnwaitContext @ 0x1C000E938 (VidSchiUnwaitContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000EC78 (VidSchiSubmitWaitCommand.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000FA04 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C0011254 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchSetNodePowerState @ 0x1C0013270 (VidSchSetNodePowerState.c)
 *     VidSchSuspendResumeDevice @ 0x1C0013A10 (VidSchSuspendResumeDevice.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0015200 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0016770 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C00393C0 (VidSchiReadCommandFromContextQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EB8C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C00366DC (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // r14d
  int v6; // r12d
  int v7; // ebp
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rcx
  bool v13; // zf
  unsigned int v14; // ecx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rsi
  _QWORD *v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // r8
  int v21; // eax
  signed __int32 v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // r9
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  int v31; // eax
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  __int64 *v39; // rax
  _QWORD *v40; // rcx
  unsigned int v41; // r15d
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 *v44; // rsi
  unsigned int v45; // eax
  _QWORD *v46; // rcx
  int v47; // ecx
  int v48; // [rsp+90h] [rbp+18h]

  v48 = a3;
  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  v9 = *(_QWORD *)(v4 + 24);
  if ( bTracingEnabled )
  {
    v10 = *(_QWORD *)(a1 + 56);
    if ( !v10 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v10) = a1;
    if ( (byte_1C006E941 & 2) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(a1, (unsigned int)&EventUpdateContextStatus, a3, v10, a2, a3);
  }
  if ( v7 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 8) != 0
      || (*(_DWORD *)(a1 + 184) & 4) != 0
      || (*(_DWORD *)(a1 + 184) & 0x10) != 0
      || (*(_DWORD *)(a1 + 184) & 0x40) != 0
      || (*(_DWORD *)(a1 + 184) & 0x200) != 0
      || (*(_DWORD *)(a1 + 184) & 0x100) != 0
      || (*(_DWORD *)(a1 + 184) & 0x80u) != 0
      || (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
    {
      WdLogSingleEntry5(0LL, 281LL, 1024LL, v9, v4, a1);
      __debugbreak();
LABEL_94:
      v46 = *(_QWORD **)(v4 + 2624);
      if ( *v46 != v4 + 2616 )
        goto LABEL_69;
      *v3 = v4 + 2616;
      v3[1] = v46;
      *v46 = v3;
      *(_QWORD *)(v4 + 2624) = v3;
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) )
      {
        KeResetEvent((PRKEVENT)(v9 + 2984));
        *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) = 1;
      }
      *(_DWORD *)(a1 + 184) |= 0x200u;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1396LL);
      goto LABEL_45;
    }
    if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
      goto LABEL_45;
    v16 = *(_QWORD *)(a1 + 8);
    v17 = (_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v16 + 8) != a1 + 8 )
      goto LABEL_69;
    v18 = *(_QWORD **)(a1 + 16);
    if ( (_QWORD *)*v18 != v17 )
      goto LABEL_69;
    *v18 = v16;
    *(_QWORD *)(v16 + 8) = v18;
    v19 = *(_DWORD *)(a1 + 404);
    v20 = *(_QWORD *)(v4 + 24);
    a2 = 16LL * v19 + v4 + 2056;
    if ( *(_QWORD *)a2 == a2 )
    {
      a2 = *(unsigned __int16 *)(v4 + 4);
      *(_DWORD *)(v4 + 1768) |= 1 << v19;
      if ( !_bittest64(*(const signed __int64 **)(v20 + 496), a2)
        && ((-1 << *(_DWORD *)(a1 + 404)) & *(_DWORD *)(v4 + 1772)) == 0
        && !*(_DWORD *)(v4 + 2908) )
      {
        RtlSetBitEx(v20 + 488, a2);
      }
    }
    v21 = *(_DWORD *)(v4 + 2884);
    if ( v21 )
    {
LABEL_40:
      *(_DWORD *)(v4 + 2884) = v21 + 1;
      *(_DWORD *)(a1 + 184) |= 1u;
      v22 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0);
      v23 = 16LL * *(unsigned int *)(a1 + 404);
      v13 = v22 == 1;
      v24 = v4 + 2056;
      if ( v13 )
      {
        v32 = (__int64 *)(v23 + v24);
        v33 = *v32;
        if ( *(__int64 **)(*v32 + 8) != v32 )
          goto LABEL_69;
        *v17 = v33;
        *(_QWORD *)(a1 + 16) = v32;
        *(_QWORD *)(v33 + 8) = v17;
        *v32 = (__int64)v17;
      }
      else
      {
        v25 = v23 + v24;
        v26 = *(_QWORD **)(v25 + 8);
        if ( *v26 != v25 )
          goto LABEL_69;
        *v17 = v25;
        *(_QWORD *)(a1 + 16) = v26;
        *v26 = v17;
        *(_QWORD *)(v25 + 8) = v17;
      }
      if ( *(_DWORD *)(a1 + 408) == 1 )
      {
        a2 = a1 + 416;
        v34 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 32LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                        + 216LL);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
        {
          v35 = *v34;
          if ( *(__int64 **)(*v34 + 8) != v34 )
            goto LABEL_69;
          *(_QWORD *)a2 = v35;
          *(_QWORD *)(a1 + 424) = v34;
          *(_QWORD *)(v35 + 8) = a2;
          *v34 = a2;
        }
        else
        {
          v39 = (__int64 *)v34[1];
          if ( (__int64 *)*v39 != v34 )
            goto LABEL_69;
          *(_QWORD *)a2 = v34;
          *(_QWORD *)(a1 + 424) = v39;
          *v39 = a2;
          v34[1] = a2;
        }
      }
      v5 = 1;
      goto LABEL_45;
    }
    if ( !(unsigned __int8)RtlAreBitsClearEx(v9 + 440, 0LL, *(unsigned int *)(v9 + 84))
      || *(_DWORD *)(*(_QWORD *)(v9 + 16) + 160LL) != 1 )
    {
LABEL_39:
      RtlSetBitEx(v9 + 440, *(unsigned __int16 *)(v4 + 4));
      v21 = *(_DWORD *)(v4 + 2884);
      v6 = v48;
      goto LABEL_40;
    }
    v45 = *(_DWORD *)(v4 + 11240);
    if ( v45 != -1 )
    {
      if ( !*(_QWORD *)(v9 + 3080) )
        goto LABEL_91;
      (*(void (__fastcall **)(_QWORD))(v9 + 3080))(*(_QWORD *)(v9 + 3120));
      v45 = *(_DWORD *)(v4 + 11240);
    }
    if ( v45 == -1 )
      goto LABEL_39;
LABEL_91:
    if ( *(_QWORD *)(v9 + 3088) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(v9 + 3088))(*(_QWORD *)(v9 + 3120), v45);
    goto LABEL_39;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v11 + 8) != a1 + 8 )
    goto LABEL_69;
  v12 = *(_QWORD **)(a1 + 16);
  if ( (_QWORD *)*v12 != v3 )
    goto LABEL_69;
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
  {
    v13 = (*(_DWORD *)(v4 + 2884))-- == 1;
    if ( v13 )
      RtlClearBitEx(v9 + 440, *(unsigned __int16 *)(v4 + 4), a3);
    v14 = *(_DWORD *)(a1 + 404);
    if ( *(_QWORD *)(v4 + 16LL * v14 + 2056) == v4 + 16LL * v14 + 2056 )
      *(_DWORD *)(v4 + 1768) &= ~(1 << v14);
    if ( *(_DWORD *)(a1 + 408) == 1 )
    {
      v36 = (_QWORD *)(a1 + 416);
      v37 = *(_QWORD *)(a1 + 416);
      if ( *(_QWORD *)(v37 + 8) != a1 + 416 )
        goto LABEL_69;
      a2 = *(_QWORD *)(a1 + 424);
      if ( *(_QWORD **)a2 != v36 )
        goto LABEL_69;
      *(_QWORD *)a2 = v37;
      *(_QWORD *)(v37 + 8) = a2;
      *(_QWORD *)(a1 + 424) = 0LL;
      *v36 = 0LL;
    }
    *(_DWORD *)(a1 + 184) &= ~1u;
  }
  switch ( v7 )
  {
    case 0:
      v29 = *(_QWORD **)(v4 + 2592);
      if ( *v29 != v4 + 2584 )
        goto LABEL_69;
      *v3 = v4 + 2584;
      *(_QWORD *)(a1 + 16) = v29;
      *v29 = v3;
      *(_QWORD *)(v4 + 2592) = v3;
      *(_DWORD *)(a1 + 184) = 0;
      break;
    case 8:
      *(_DWORD *)(a1 + 184) |= 0x80u;
      v38 = *(_QWORD **)(v4 + 2608);
      if ( *v38 != v4 + 2600 )
        goto LABEL_69;
      *v3 = v4 + 2600;
      *(_QWORD *)(a1 + 16) = v38;
      *v38 = v3;
      *(_QWORD *)(v4 + 2608) = v3;
      break;
    case 9:
      goto LABEL_94;
    case 10:
      v40 = *(_QWORD **)(v4 + 2624);
      if ( *v40 != v4 + 2616 )
        goto LABEL_69;
      *v3 = v4 + 2616;
      *(_QWORD *)(a1 + 16) = v40;
      *v40 = v3;
      *(_QWORD *)(v4 + 2624) = v3;
      if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
      {
        --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1396LL);
        *(_DWORD *)(a1 + 184) &= ~0x200u;
      }
      *(_DWORD *)(a1 + 184) |= 0x100u;
      *(_DWORD *)(a1 + 184) &= ~0x80u;
      v41 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 11240LL);
      if ( v41 != -1 )
      {
        v43 = (__int64 *)(a1 + 664);
        v44 = *(__int64 **)(a1 + 664);
        if ( v44 != (__int64 *)(a1 + 664) )
        {
          do
          {
            v47 = *((_DWORD *)v44 + 12);
            if ( (v47 & 0x10) != 0 )
            {
              if ( *(_QWORD *)(v9 + 3088) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v9 + 3088))(*(_QWORD *)(v9 + 3120), v41);
                v47 = *((_DWORD *)v44 + 12);
                v43 = (__int64 *)(a1 + 664);
              }
              *((_DWORD *)v44 + 12) = v47 & 0xFFFFFFEF;
            }
            v44 = (__int64 *)*v44;
          }
          while ( v44 != v43 );
        }
      }
      v42 = *(_QWORD *)(a1 + 104);
      if ( !*(_DWORD *)(v42 + 1396) )
      {
        *(_BYTE *)(v42 + 1392) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) = 0;
        KeSetEvent((PRKEVENT)(v9 + 2984), 0, 0);
      }
      break;
    case 1:
      v15 = *(_QWORD **)(v4 + 2592);
      if ( *v15 == v4 + 2584 )
      {
        *v3 = v4 + 2584;
        *(_QWORD *)(a1 + 16) = v15;
        *v15 = v3;
        *(_QWORD *)(v4 + 2592) = v3;
        break;
      }
LABEL_69:
      __fastfail(3u);
    default:
      v30 = *(_QWORD **)(v4 + 2576);
      if ( *v30 != v4 + 2568 )
        goto LABEL_69;
      *v3 = v4 + 2568;
      *(_QWORD *)(a1 + 16) = v30;
      *v30 = v3;
      *(_QWORD *)(v4 + 2576) = v3;
      switch ( v7 )
      {
        case 2:
          *(_DWORD *)(a1 + 184) |= 8u;
          break;
        case 3:
          *(_DWORD *)(a1 + 184) |= 0x10u;
          break;
        case 4:
          v31 = *(_DWORD *)(a1 + 184) | 0x20;
LABEL_60:
          *(_DWORD *)(a1 + 184) = v31;
          goto LABEL_45;
        case 7:
          v31 = *(_DWORD *)(a1 + 184) | 0x40;
          goto LABEL_60;
      }
      break;
  }
LABEL_45:
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 188) = v7;
  *(_DWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 316) + 12LL)) = v6;
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 196) = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 316) + 200) = *(_DWORD *)(a1 + 780);
  v13 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 316) = ((unsigned __int8)*(_DWORD *)(a1 + 316) + 1) & 7;
  if ( !v13 )
  {
    v27 = *(_QWORD *)(a1 + 56);
    if ( !v27 || (LODWORD(a2) = *(_DWORD *)(a1 + 112), (a2 & 0x40) != 0) )
      LODWORD(v27) = a1;
    if ( (byte_1C006E941 & 2) != 0 )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 448),
        a2,
        *(_QWORD *)(v4 + 2016),
        v27,
        *(_QWORD *)(a1 + 448),
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(v4 + 2016),
        *(_DWORD *)(a1 + 436),
        3);
  }
  return v5;
}
