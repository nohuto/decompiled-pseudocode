/*
 * XREFs of Isoch_PrepareStage @ 0x1C0008870
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MappingLoop @ 0x1C000A6A0 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1C00084E0 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C0008C60 (WPP_RECORDER_SF_DDqqD.c)
 *     TR_EnsureSegments @ 0x1C0008D50 (TR_EnsureSegments.c)
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C003FA50 (TR_EnsureInputBufferForTrbs.c)
 *     Isoch_GetPacketLength @ 0x1C0042748 (Isoch_GetPacketLength.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C004320C (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqDDD @ 0x1C004401C (WPP_RECORDER_SF_DDqDDD.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x1C0044174 (WPP_RECORDER_SF_DDqqDD.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v3; // rdi
  int v4; // edx
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // r9d
  unsigned __int64 v11; // r9
  struct _MDL *v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // rbp
  unsigned int i; // eax
  unsigned int v16; // esi
  unsigned int v17; // ebp
  unsigned int v18; // r13d
  __int64 v19; // r10
  int v20; // r10d
  __int64 v21; // r15
  __int64 v22; // rbp
  int v23; // edx
  unsigned int v24; // r10d
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // esi
  __int64 *v33; // r15
  int v34; // eax
  int v35; // r8d
  int v36; // ebp
  KIRQL v37; // al
  unsigned int v38; // r8d
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v44; // r8
  __int64 v45; // rsi
  ULONG v46; // r12d
  char *v47; // r15
  struct _MDL *Mdl; // rax
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // rbp
  unsigned int v52; // r11d
  unsigned int v53; // r12d
  int j; // r10d
  int v55; // r15d
  __int64 v56; // r11
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 *v60; // rdx
  int v61; // edx
  int v62; // edx
  __int64 v63; // rsi
  int Irp; // [rsp+20h] [rbp-98h]
  unsigned int v65; // [rsp+C0h] [rbp+8h]

  v1 = *(__int64 **)(a1 + 368);
  v3 = *v1;
  v4 = *(_DWORD *)(*v1 + 108) + *(_DWORD *)(*v1 + 104);
  *((_DWORD *)v1 + 10) = v4;
  v5 = *(_QWORD *)(v3 + 48);
  v6 = *(unsigned __int16 *)(v5 + 2);
  v7 = (unsigned int)(v4 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356) + *(_DWORD *)(v5 + 128);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v8 + 8) + 336LL) & 0x800000000000000LL) != 0 || (*(_DWORD *)(v8 + 100) & 0x800) == 0 )
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
        v45 = *v1;
        if ( *((_BYTE *)v1 + 56) )
        {
          IoFreeMdl((PMDL)v1[8]);
          v1[8] = 0LL;
          *((_BYTE *)v1 + 56) = 0;
        }
        LOBYTE(v44) = 1;
        TR_ReleaseSegments(a1, v1 + 1, v44);
        TR_ReleaseSegments(a1, v1 + 3, 0LL);
        StageQueue_Release(v45 + 128, v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return 2;
      }
    }
  }
  v11 = 0x1C0000000uLL;
  if ( (_DWORD)v6 != 10 )
  {
    switch ( (int)v6 )
    {
      case '9':
      case ':':
        goto LABEL_9;
      default:
        break;
    }
  }
  v12 = *(struct _MDL **)(v3 + 72);
  v13 = *(_DWORD *)(v3 + 88) + *(_DWORD *)(v3 + 92);
  v14 = *(_QWORD *)(v3 + 56);
  for ( i = v12->ByteCount; v13 >= i; i = v12->ByteCount )
  {
    v12 = v12->Next;
    v13 -= i;
  }
  if ( v13 )
  {
    v46 = v12->ByteCount - v13;
    v47 = (char *)v12->StartVa + v12->ByteOffset + v13;
    Mdl = IoAllocateMdl(v47, v46, 0, 0, 0LL);
    v1[8] = (__int64)Mdl;
    if ( !Mdl )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL),
          2u,
          v49,
          0x2Du,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v14 + 56) + 144LL),
          *(_QWORD *)(v3 + 24),
          v1);
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
        v18 = 1;
LABEL_64:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return v18;
      }
LABEL_63:
      v18 = 4;
      *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 96) - *(_DWORD *)(v3 + 104);
      goto LABEL_64;
    }
    *((_BYTE *)v1 + 56) = 1;
    IoBuildPartialMdl(v12, Mdl, v47, v46);
    v11 = 0x1C0000000uLL;
    *(_QWORD *)v1[8] = v12->Next;
  }
  else
  {
    v1[8] = (__int64)v12;
  }
LABEL_9:
  v16 = *(_DWORD *)(v3 + 80) - *(_DWORD *)(v3 + 92) - *(_DWORD *)(v3 + 88);
  v17 = *(_DWORD *)(a1 + 4);
  v18 = 1;
  if ( !*(_BYTE *)(a1 + 280) )
  {
    LOBYTE(Irp) = (*(_DWORD *)(*(_QWORD *)(v3 + 48) + 32LL) & 1) == 0;
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v19 + 8) + 136LL))(v19, v1[8], 0LL, v16);
    v11 = 0x1C0000000uLL;
  }
  if ( v16 > v17 )
  {
    v52 = *(_DWORD *)(a1 + 356);
    v16 = 0;
    v53 = *((_DWORD *)v1 + 10);
    v65 = v52;
    for ( j = v53 / v52; ; ++j )
    {
      v55 = 0;
      if ( v52 )
      {
        do
          v55 += Isoch_GetPacketLength(v3, v53++, v6, v11);
        while ( v56 != 1 );
        v52 = v65;
      }
      if ( v16 + v55 > v17 )
        break;
      v16 += v55;
    }
    v20 = v52 * j;
  }
  else
  {
    v20 = *(_DWORD *)(v3 + 96);
  }
  *((_DWORD *)v1 + 11) = v20 - 1;
  *((_DWORD *)v1 + 13) = v16;
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(_QWORD *)(a1 + 40);
  v23 = (((unsigned __int64)*(unsigned int *)(v21 + 152) + 8190) >> 12) + 1;
  if ( !_bittest64((const signed __int64 *)(v22 + 336), 0x2Fu)
    || (v57 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v57 + 20) != 1)
    || !*(_DWORD *)(v57 + 40) )
  {
    v23 = ((unsigned __int64)*(unsigned int *)(v21 + 152) + 8190) >> 12;
  }
  v24 = v23 + 1;
  if ( *(_WORD *)(*(_QWORD *)(*v1 + 48) + 2LL) == 10 )
  {
LABEL_16:
    if ( *(_DWORD *)(v1[8] + 40) < v16 )
      v24 = v23 + 3;
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
  v25 = *(_DWORD *)(a1 + 196);
  v26 = v25 - *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 432) = v24;
  v27 = v24 * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 1);
  if ( v24 == 3 )
    v28 = v26 % 3;
  else
    v28 = v26 % v24;
  v29 = v26 - v28;
  if ( v27 <= v29 )
  {
    v32 = 0;
  }
  else
  {
    if ( v24 == 3 )
      v30 = v25 % 3;
    else
      v30 = v25 % v24;
    v25 -= v30;
    v31 = v25 - v29 + v27 - 1;
    if ( v25 == 30 )
      v32 = v31 / 0x1E;
    else
      v32 = v31 / v25;
  }
  if ( _bittest64((const signed __int64 *)(v22 + 336), 0x2Fu) )
  {
    v58 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v58 + 20) == 1 )
    {
      if ( *(_DWORD *)(v58 + 40) )
        ++v32;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v21 + 80),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v25,
      v27,
      Irp,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(v21 + 144),
      (char)v1,
      v32,
      v24,
      *((_BYTE *)v1 + 44) - *((_BYTE *)v1 + 40) + 1);
  if ( *(_BYTE *)(a1 + 280)
    && (int)TR_EnsureInputBufferForTrbs(
              a1,
              (unsigned int)(*(_DWORD *)(a1 + 432) * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 3))) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v59 = *v1;
    if ( *((_BYTE *)v1 + 56) )
    {
      IoFreeMdl((PMDL)v1[8]);
      v1[8] = 0LL;
      *((_BYTE *)v1 + 56) = 0;
    }
    v60 = v1 + 1;
    goto LABEL_85;
  }
  if ( !v32 )
    return 0;
  v33 = v1 + 1;
  v34 = TR_EnsureSegments(a1);
  v36 = v34;
  if ( v34 != 259 )
  {
    if ( v34 < 0 )
      goto LABEL_88;
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v38 = 0;
    *(_BYTE *)(a1 + 104) = v37;
    v39 = a1 + 208;
    do
    {
      v40 = *(_QWORD **)v39;
      if ( *(_QWORD *)(*(_QWORD *)v39 + 8LL) != v39
        || (v41 = *v40, *(_QWORD **)(*v40 + 8LL) != v40)
        || (*(_QWORD *)v39 = v41, *(_QWORD *)(v41 + 8) = v39, v42 = *v33, *(__int64 **)(*v33 + 8) != v33) )
      {
        __fastfail(3u);
      }
      *v40 = v42;
      ++v38;
      v40[1] = v33;
      *(_QWORD *)(v42 + 8) = v40;
      *v33 = (__int64)v40;
    }
    while ( v38 < v32 );
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    if ( v36 < 0 )
    {
LABEL_88:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v61 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v61) = 2;
        WPP_RECORDER_SF_DDqqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v61,
          v35,
          49,
          Irp,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v3 + 24),
          (char)v1,
          v32);
      }
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v59 = *v1;
      if ( *((_BYTE *)v1 + 56) )
      {
        IoFreeMdl((PMDL)v1[8]);
        v1[8] = 0LL;
        *((_BYTE *)v1 + 56) = 0;
      }
      v60 = v1 + 1;
LABEL_85:
      TR_ReleaseSegments(a1, v60, 1LL);
      TR_ReleaseSegments(a1, v1 + 3, 0LL);
      StageQueue_Release(v59 + 128, v1);
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
    v62 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v62) = 4;
    WPP_RECORDER_SF_DDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v62,
      v35,
      48,
      Irp,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_QWORD *)(v3 + 24),
      (char)v1,
      v32);
  }
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v63 = *v1;
  if ( *((_BYTE *)v1 + 56) )
  {
    IoFreeMdl((PMDL)v1[8]);
    v1[8] = 0LL;
    *((_BYTE *)v1 + 56) = 0;
  }
  TR_ReleaseSegments(a1, v1 + 1, 1LL);
  TR_ReleaseSegments(a1, v1 + 3, 0LL);
  StageQueue_Release(v63 + 128, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
