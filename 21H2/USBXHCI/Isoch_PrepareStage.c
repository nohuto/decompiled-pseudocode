/*
 * XREFs of Isoch_PrepareStage @ 0x1C00038C0
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0001D7C (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqqD @ 0x1C0003CC0 (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0004F80 (WPP_RECORDER_SF_DDqq.c)
 *     TR_EnsureSegments @ 0x1C00098D0 (TR_EnsureSegments.c)
 *     StageQueue_Release @ 0x1C000C574 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000C5AC (TR_ReleaseSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C003F23C (TR_EnsureInputBufferForTrbs.c)
 *     Isoch_GetPacketLength @ 0x1C0041848 (Isoch_GetPacketLength.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0042800 (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqDDD @ 0x1C0043880 (WPP_RECORDER_SF_DDqDDD.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x1C00439D8 (WPP_RECORDER_SF_DDqqDD.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v3; // rdi
  int v4; // edx
  __int64 v5; // r9
  int v6; // r8d
  unsigned int v7; // r10d
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // r9d
  struct _MDL *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rbp
  unsigned int i; // eax
  unsigned int v15; // esi
  unsigned int v16; // ebp
  unsigned int v17; // r13d
  __int64 v18; // r10
  int v19; // r10d
  __int64 v20; // r15
  __int64 v21; // rbp
  int v22; // edx
  unsigned int v23; // r10d
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // esi
  __int64 *v32; // r15
  int v33; // eax
  int v34; // r8d
  int v35; // ebp
  KIRQL v36; // al
  unsigned int v37; // r8d
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v43; // r8
  __int64 v44; // rsi
  ULONG v45; // r12d
  char *v46; // r15
  struct _MDL *Mdl; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // r8
  __int64 v51; // rbp
  unsigned int v52; // r10d
  unsigned int v53; // r12d
  int j; // r15d
  int v55; // r11d
  int PacketLength; // eax
  int v57; // r11d
  __int64 v58; // r10
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 *v62; // rdx
  int v63; // edx
  int v64; // edx
  __int64 v65; // rsi
  int Irp; // [rsp+20h] [rbp-98h]
  unsigned int v67; // [rsp+C0h] [rbp+8h]

  v1 = *(__int64 **)(a1 + 368);
  v3 = *v1;
  v4 = *(_DWORD *)(*v1 + 108) + *(_DWORD *)(*v1 + 104);
  *((_DWORD *)v1 + 10) = v4;
  v5 = *(_QWORD *)(v3 + 48);
  v6 = *(unsigned __int16 *)(v5 + 2);
  v7 = (unsigned int)(v4 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356) + *(_DWORD *)(v5 + 128);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v8 + 8) + 336LL) & 0x800000000000000LL) != 0 || (*(_DWORD *)(v8 + 104) & 0x800) == 0 )
  {
    v9 = *(_DWORD *)(a1 + 328);
    if ( (v9 & 0x20) != 0 )
    {
      v10 = *(_DWORD *)(a1 + 364);
      if ( v7 != v10 + 1 && ((v9 & 0x10) != 0 || *(_DWORD *)(a1 + 376)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqqDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            v6,
            v10);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v44 = *v1;
        if ( *((_BYTE *)v1 + 56) )
        {
          IoFreeMdl((PMDL)v1[8]);
          v1[8] = 0LL;
          *((_BYTE *)v1 + 56) = 0;
        }
        LOBYTE(v43) = 1;
        TR_ReleaseSegments(a1, v1 + 1, v43);
        TR_ReleaseSegments(a1, v1 + 3, 0LL);
        StageQueue_Release(v44 + 128, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return 2;
      }
    }
  }
  if ( v6 != 10 )
  {
    switch ( v6 )
    {
      case '9':
      case ':':
        goto LABEL_9;
      default:
        break;
    }
  }
  v11 = *(struct _MDL **)(v3 + 72);
  v12 = *(_DWORD *)(v3 + 88) + *(_DWORD *)(v3 + 92);
  v13 = *(_QWORD *)(v3 + 56);
  for ( i = v11->ByteCount; v12 >= i; i = v11->ByteCount )
  {
    v11 = v11->Next;
    v12 -= i;
  }
  if ( v12 )
  {
    v45 = v11->ByteCount - v12;
    v46 = (char *)v11->StartVa + v11->ByteOffset + v12;
    Mdl = IoAllocateMdl(v46, v45, 0, 0, 0LL);
    v1[8] = (__int64)Mdl;
    if ( !Mdl )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v49 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
        LOBYTE(v49) = 2;
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
          v49,
          v48,
          45,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
          *(_QWORD *)(v3 + 24),
          (char)v1);
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v51 = *v1;
      if ( *((_BYTE *)v1 + 56) )
      {
        IoFreeMdl((PMDL)v1[8]);
        v1[8] = 0LL;
        *((_BYTE *)v1 + 56) = 0;
      }
      LOBYTE(v50) = 1;
      TR_ReleaseSegments(a1, v1 + 1, v50);
      TR_ReleaseSegments(a1, v1 + 3, 0LL);
      StageQueue_Release(v51 + 128, v1);
      if ( *(_DWORD *)(v3 + 112) == *(_DWORD *)(v3 + 116) )
      {
        Isoch_Transfer_CompleteCancelable(a1, v3, -1, -1073737728, 0, 0);
        v17 = 1;
LABEL_64:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return v17;
      }
LABEL_63:
      v17 = 4;
      *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 96) - *(_DWORD *)(v3 + 104);
      goto LABEL_64;
    }
    *((_BYTE *)v1 + 56) = 1;
    IoBuildPartialMdl(v11, Mdl, v46, v45);
    *(_QWORD *)v1[8] = v11->Next;
  }
  else
  {
    v1[8] = (__int64)v11;
  }
LABEL_9:
  v15 = *(_DWORD *)(v3 + 80) - *(_DWORD *)(v3 + 92) - *(_DWORD *)(v3 + 88);
  v16 = *(_DWORD *)(a1 + 4);
  v17 = 1;
  if ( !*(_BYTE *)(a1 + 280) )
  {
    LOBYTE(Irp) = (*(_DWORD *)(*(_QWORD *)(v3 + 48) + 32LL) & 1) == 0;
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v18 + 8) + 136LL))(v18, v1[8], 0LL, v15);
  }
  if ( v15 > v16 )
  {
    v52 = *(_DWORD *)(a1 + 356);
    v15 = 0;
    v53 = *((_DWORD *)v1 + 10);
    v67 = v52;
    for ( j = v53 / v52; ; ++j )
    {
      v55 = 0;
      if ( v52 )
      {
        do
        {
          PacketLength = Isoch_GetPacketLength(v3, v53);
          v55 = PacketLength + v57;
          ++v53;
        }
        while ( v58 != 1 );
        v52 = v67;
      }
      if ( v15 + v55 > v16 )
        break;
      v15 += v55;
    }
    v19 = j * v52;
  }
  else
  {
    v19 = *(_DWORD *)(v3 + 96);
  }
  *((_DWORD *)v1 + 11) = v19 - 1;
  *((_DWORD *)v1 + 13) = v15;
  v20 = *(_QWORD *)(a1 + 56);
  v21 = *(_QWORD *)(a1 + 40);
  v22 = (((unsigned __int64)*(unsigned int *)(v20 + 152) + 8190) >> 12) + 1;
  if ( (*(_QWORD *)(v21 + 336) & 0x800000000000LL) == 0
    || (v59 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v59 + 20) != 1)
    || !*(_DWORD *)(v59 + 40) )
  {
    v22 = ((unsigned __int64)*(unsigned int *)(v20 + 152) + 8190) >> 12;
  }
  v23 = v22 + 1;
  if ( *(_WORD *)(*(_QWORD *)(*v1 + 48) + 2LL) == 10 )
  {
LABEL_16:
    if ( *(_DWORD *)(v1[8] + 40) < v15 )
      v23 = v22 + 3;
  }
  else
  {
    switch ( *(_WORD *)(*(_QWORD *)(*v1 + 48) + 2LL) )
    {
      case '9':
      case ':':
        break;
      default:
        goto LABEL_16;
    }
  }
  v24 = *(_DWORD *)(a1 + 196);
  v25 = v24 - *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 432) = v23;
  v26 = v23 * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 1);
  if ( v23 == 3 )
    v27 = v25 % 3;
  else
    v27 = v25 % v23;
  v28 = v25 - v27;
  if ( v26 <= v28 )
  {
    v31 = 0;
  }
  else
  {
    if ( v23 == 3 )
      v29 = v24 % 3;
    else
      v29 = v24 % v23;
    v24 -= v29;
    v30 = v24 - v28 + v26 - 1;
    if ( v24 == 30 )
      v31 = v30 / 0x1E;
    else
      v31 = v30 / v24;
  }
  if ( (*(_QWORD *)(v21 + 336) & 0x800000000000LL) != 0 )
  {
    v60 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v60 + 20) == 1 )
    {
      if ( *(_DWORD *)(v60 + 40) )
        ++v31;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v20 + 80),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v24,
      v26,
      Irp,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(v20 + 144),
      (char)v1,
      v31,
      v23,
      *((_BYTE *)v1 + 44) - *((_BYTE *)v1 + 40) + 1);
  if ( *(_BYTE *)(a1 + 280)
    && (int)TR_EnsureInputBufferForTrbs(
              a1,
              (unsigned int)(*(_DWORD *)(a1 + 432) * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 3))) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v61 = *v1;
    if ( *((_BYTE *)v1 + 56) )
    {
      IoFreeMdl((PMDL)v1[8]);
      v1[8] = 0LL;
      *((_BYTE *)v1 + 56) = 0;
    }
    v62 = v1 + 1;
    goto LABEL_85;
  }
  if ( !v31 )
    return 0;
  v32 = v1 + 1;
  v33 = TR_EnsureSegments(a1);
  v35 = v33;
  if ( v33 != 259 )
  {
    if ( v33 < 0 )
      goto LABEL_88;
    v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v37 = 0;
    *(_BYTE *)(a1 + 104) = v36;
    v38 = a1 + 208;
    do
    {
      v39 = *(_QWORD **)v38;
      if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != v38
        || (v40 = *v39, *(_QWORD **)(*v39 + 8LL) != v39)
        || (*(_QWORD *)v38 = v40, *(_QWORD *)(v40 + 8) = v38, v41 = *v32, *(__int64 **)(*v32 + 8) != v32) )
      {
        __fastfail(3u);
      }
      *v39 = v41;
      ++v37;
      v39[1] = v32;
      *(_QWORD *)(v41 + 8) = v39;
      *v32 = (__int64)v39;
    }
    while ( v37 < v31 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v35 < 0 )
    {
LABEL_88:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v63 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v63) = 2;
        WPP_RECORDER_SF_DDqqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v63,
          v34,
          49,
          Irp,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v3 + 24),
          (char)v1,
          v31);
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v61 = *v1;
      if ( *((_BYTE *)v1 + 56) )
      {
        IoFreeMdl((PMDL)v1[8]);
        v1[8] = 0LL;
        *((_BYTE *)v1 + 56) = 0;
      }
      v62 = v1 + 1;
LABEL_85:
      TR_ReleaseSegments(a1, v62, 1LL);
      TR_ReleaseSegments(a1, v1 + 3, 0LL);
      StageQueue_Release(v61 + 128, v1);
      if ( *(_DWORD *)(v3 + 112) == *(_DWORD *)(v3 + 116) )
      {
        Isoch_Transfer_CompleteCancelable(a1, v3, -1, -1073737728, 0, 0);
        goto LABEL_64;
      }
      goto LABEL_63;
    }
    *(_DWORD *)(a1 + 336) = 0;
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v64 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v64) = 4;
    WPP_RECORDER_SF_DDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v64,
      v34,
      48,
      Irp,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_QWORD *)(v3 + 24),
      (char)v1,
      v31);
  }
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v65 = *v1;
  if ( *((_BYTE *)v1 + 56) )
  {
    IoFreeMdl((PMDL)v1[8]);
    v1[8] = 0LL;
    *((_BYTE *)v1 + 56) = 0;
  }
  TR_ReleaseSegments(a1, v1 + 1, 1LL);
  TR_ReleaseSegments(a1, v1 + 3, 0LL);
  StageQueue_Release(v65 + 128, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
