/*
 * XREFs of VidSchiUpdateContextStatus @ 0x1C0006940
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002A30 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0008090 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0008360 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008B90 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A620 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B930 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000E810 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000F2D8 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000F448 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000F604 (VidSchiCompleteRewindPacket.c)
 *     VidSchiUnwaitContext @ 0x1C0010770 (VidSchiUnwaitContext.c)
 *     VidSchSuspendResumeDevice @ 0x1C0011D00 (VidSchSuspendResumeDevice.c)
 *     ?VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012890 (-VidschiUnselectContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C00308A4 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchSetNodePowerState @ 0x1C0035610 (VidSchSetNodePowerState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0024AB8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C002D2F8 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiUpdateContextStatus(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rdi
  unsigned int v5; // ebp
  int v6; // r12d
  int v7; // esi
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rcx
  bool v13; // zf
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r14
  _QWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  signed __int32 v21; // eax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r9
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  unsigned __int64 *v30; // rcx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned __int64 *v33; // rcx
  _QWORD *v34; // rcx
  unsigned int v35; // r15d
  __int64 v36; // rax
  unsigned __int64 *v37; // rax
  unsigned int v38; // eax
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rcx
  __int64 *v42; // rax
  __int64 *v43; // r14
  int v44; // ecx
  int v45; // [rsp+90h] [rbp+18h]

  v45 = a3;
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
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0pqq_EtwWriteTransfer(a1, (unsigned int)&EventUpdateContextStatus, a3, v10, a2, a3);
  }
  if ( v7 == 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 8) == 0
      && (*(_DWORD *)(a1 + 184) & 4) == 0
      && (*(_DWORD *)(a1 + 184) & 0x10) == 0
      && (*(_DWORD *)(a1 + 184) & 0x40) == 0
      && (*(_DWORD *)(a1 + 184) & 0x200) == 0
      && (*(_DWORD *)(a1 + 184) & 0x100) == 0
      && (*(_DWORD *)(a1 + 184) & 0x80u) == 0
      && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 1) == 0 )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = (_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v16 + 8) != a1 + 8 )
          goto LABEL_69;
        v18 = *(_QWORD **)(a1 + 16);
        if ( (_QWORD *)*v18 != v17 )
          goto LABEL_69;
        *v18 = v16;
        *(_QWORD *)(v16 + 8) = v18;
        v19 = *(unsigned int *)(a1 + 404);
        a3 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(v4 + 16 * (v19 + 128)) == v4 + 16 * (v19 + 128) )
        {
          a2 = *(unsigned __int16 *)(v4 + 4);
          *(_DWORD *)(v4 + 1760) |= 1 << v19;
          if ( !_bittest64(*(const signed __int64 **)(a3 + 488), a2)
            && ((-1 << *(_DWORD *)(a1 + 404)) & *(_DWORD *)(v4 + 1764)) == 0
            && !*(_DWORD *)(v4 + 2892) )
          {
            RtlSetBitEx(a3 + 480);
          }
        }
        v20 = *(_DWORD *)(v4 + 2868);
        if ( !v20 )
        {
          if ( (unsigned __int8)RtlAreBitsClearEx(v9 + 432, 0LL, *(unsigned int *)(v9 + 76))
            && *(_DWORD *)(*(_QWORD *)(v9 + 16) + 160LL) == 1 )
          {
            v38 = *(_DWORD *)(v4 + 11224);
            if ( v38 != -1 && *(_QWORD *)(v9 + 2984) )
            {
              (*(void (__fastcall **)(_QWORD))(v9 + 2984))(*(_QWORD *)(v9 + 3024));
              v38 = *(_DWORD *)(v4 + 11224);
            }
            if ( v38 != -1 && *(_QWORD *)(v9 + 2992) )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2992))(*(_QWORD *)(v9 + 3024), v38);
          }
          RtlSetBitEx(v9 + 432);
          v20 = *(_DWORD *)(v4 + 2868);
          v6 = v45;
        }
        *(_DWORD *)(v4 + 2868) = v20 + 1;
        *(_DWORD *)(a1 + 184) |= 1u;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0);
        v22 = (_QWORD *)(v4 + 16 * (*(unsigned int *)(a1 + 404) + 128LL));
        if ( v21 == 1 )
        {
          v29 = *v22;
          if ( *(_QWORD **)(*v22 + 8LL) != v22 )
            goto LABEL_69;
          *v17 = v29;
          *(_QWORD *)(a1 + 16) = v22;
          *(_QWORD *)(v29 + 8) = v17;
          *v22 = v17;
        }
        else
        {
          v23 = (_QWORD *)v22[1];
          if ( (_QWORD *)*v23 != v22 )
            goto LABEL_69;
          *v17 = v22;
          *(_QWORD *)(a1 + 16) = v23;
          *v23 = v17;
          v22[1] = v17;
        }
        if ( *(_DWORD *)(a1 + 408) == 1 )
        {
          a2 = a1 + 416;
          v30 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 4LL))
                                   + 216LL);
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 1 )
          {
            v31 = *v30;
            if ( *(unsigned __int64 **)(*v30 + 8) != v30 )
              goto LABEL_69;
            *(_QWORD *)a2 = v31;
            *(_QWORD *)(a1 + 424) = v30;
            *(_QWORD *)(v31 + 8) = a2;
            *v30 = a2;
          }
          else
          {
            v37 = (unsigned __int64 *)v30[1];
            if ( (unsigned __int64 *)*v37 != v30 )
              goto LABEL_69;
            *(_QWORD *)a2 = v30;
            *(_QWORD *)(a1 + 424) = v37;
            *v37 = a2;
            v30[1] = a2;
          }
        }
        v5 = 1;
      }
      goto LABEL_45;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v39[3] = 281LL;
    v39[4] = 1024LL;
    v39[5] = v9;
    v39[6] = v4;
    v39[7] = a1;
    WdLogEvent5_WdCriticalError(v39);
    __debugbreak();
LABEL_89:
    *(_DWORD *)(a1 + 184) |= 0x80u;
    v40 = *(_QWORD **)(v4 + 2600);
    if ( *v40 != v4 + 2592 )
      goto LABEL_69;
    *v3 = v4 + 2592;
    v3[1] = v40;
    *v40 = v3;
    *(_QWORD *)(v4 + 2600) = v3;
    goto LABEL_45;
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
    v13 = (*(_DWORD *)(v4 + 2868))-- == 1;
    if ( v13 )
      RtlClearBitEx(v9 + 432, *(unsigned __int16 *)(v4 + 4));
    v14 = *(unsigned int *)(a1 + 404);
    if ( *(_QWORD *)(v4 + 16 * (v14 + 128)) == v4 + 16 * (v14 + 128) )
      *(_DWORD *)(v4 + 1760) &= ~(1 << v14);
    if ( *(_DWORD *)(a1 + 408) == 1 )
    {
      v32 = (_QWORD *)(a1 + 416);
      a2 = *(_QWORD *)(a1 + 416);
      if ( *(_QWORD *)(a2 + 8) != a1 + 416 )
        goto LABEL_69;
      v33 = *(unsigned __int64 **)(a1 + 424);
      if ( (_QWORD *)*v33 != v32 )
        goto LABEL_69;
      *v33 = a2;
      *(_QWORD *)(a2 + 8) = v33;
      *(_QWORD *)(a1 + 424) = 0LL;
      *v32 = 0LL;
    }
    *(_DWORD *)(a1 + 184) &= ~1u;
  }
  switch ( v7 )
  {
    case 0:
      v26 = *(_QWORD **)(v4 + 2584);
      if ( *v26 != v4 + 2576 )
        goto LABEL_69;
      *v3 = v4 + 2576;
      *(_QWORD *)(a1 + 16) = v26;
      *v26 = v3;
      *(_QWORD *)(v4 + 2584) = v3;
      *(_DWORD *)(a1 + 184) = 0;
      break;
    case 8:
      goto LABEL_89;
    case 9:
      v41 = *(_QWORD **)(v4 + 2616);
      if ( *v41 != v4 + 2608 )
        goto LABEL_69;
      *v3 = v4 + 2608;
      *(_QWORD *)(a1 + 16) = v41;
      *v41 = v3;
      *(_QWORD *)(v4 + 2616) = v3;
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) )
      {
        KeResetEvent((PRKEVENT)(v9 + 2888));
        *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) = 1;
      }
      *(_DWORD *)(a1 + 184) |= 0x200u;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1396LL);
      break;
    case 10:
      v34 = *(_QWORD **)(v4 + 2616);
      if ( *v34 != v4 + 2608 )
        goto LABEL_69;
      *v3 = v4 + 2608;
      *(_QWORD *)(a1 + 16) = v34;
      *v34 = v3;
      *(_QWORD *)(v4 + 2616) = v3;
      if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
      {
        --*(_DWORD *)(*(_QWORD *)(a1 + 104) + 1396LL);
        *(_DWORD *)(a1 + 184) &= ~0x200u;
      }
      *(_DWORD *)(a1 + 184) |= 0x100u;
      *(_DWORD *)(a1 + 184) &= ~0x80u;
      v35 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 11224LL);
      if ( v35 != -1 )
      {
        v42 = (__int64 *)(a1 + 664);
        v43 = *(__int64 **)(a1 + 664);
        if ( v43 != (__int64 *)(a1 + 664) )
        {
          do
          {
            v44 = *((_DWORD *)v43 + 12);
            if ( (v44 & 0x10) != 0 )
            {
              a3 = *(_QWORD *)(v9 + 2992);
              if ( a3 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v9 + 2992))(*(_QWORD *)(v9 + 3024), v35);
                v44 = *((_DWORD *)v43 + 12);
                v42 = (__int64 *)(a1 + 664);
              }
              *((_DWORD *)v43 + 12) = v44 & 0xFFFFFFEF;
            }
            v43 = (__int64 *)*v43;
          }
          while ( v43 != v42 );
        }
      }
      v36 = *(_QWORD *)(a1 + 104);
      if ( !*(_DWORD *)(v36 + 1396) )
      {
        *(_BYTE *)(v36 + 1392) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 104) + 1393LL) = 0;
        KeSetEvent((PRKEVENT)(v9 + 2888), 0, 0);
      }
      break;
    case 1:
      v15 = *(_QWORD **)(v4 + 2584);
      if ( *v15 == v4 + 2576 )
      {
        *v3 = v4 + 2576;
        *(_QWORD *)(a1 + 16) = v15;
        *v15 = v3;
        *(_QWORD *)(v4 + 2584) = v3;
        break;
      }
LABEL_69:
      __fastfail(3u);
    default:
      v27 = *(_QWORD **)(v4 + 2568);
      if ( *v27 != v4 + 2560 )
        goto LABEL_69;
      *v3 = v4 + 2560;
      *(_QWORD *)(a1 + 16) = v27;
      *v27 = v3;
      *(_QWORD *)(v4 + 2568) = v3;
      switch ( v7 )
      {
        case 2:
          *(_DWORD *)(a1 + 184) |= 8u;
          break;
        case 3:
          v28 = *(_DWORD *)(a1 + 184) | 0x10;
          goto LABEL_60;
        case 4:
          v28 = *(_DWORD *)(a1 + 184) | 0x20;
LABEL_60:
          *(_DWORD *)(a1 + 184) = v28;
          goto LABEL_45;
        case 7:
          v28 = *(_DWORD *)(a1 + 184) | 0x40;
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
    v24 = *(_QWORD *)(a1 + 56);
    if ( !v24 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v24) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 448),
        a2,
        a3,
        v24,
        *(_QWORD *)(a1 + 448),
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(v4 + 2008),
        *(_DWORD *)(a1 + 436),
        3);
  }
  return v5;
}
