/*
 * XREFs of Bulk_PrepareStage @ 0x1C000F538
 * Callers:
 *     Bulk_MappingLoop @ 0x1C000E8C4 (Bulk_MappingLoop.c)
 * Callees:
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000E3C8 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C000F614 (Bulk_Stage_EstimateRequiredSegments.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C000F6D4 (Bulk_Stage_EstimateRequiredTrbs.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     TR_AcquireSegments @ 0x1C001A616 (TR_AcquireSegments.c)
 *     Bulk_Stage_AcquireMdl @ 0x1C001A86E (Bulk_Stage_AcquireMdl.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C003FA50 (TR_EnsureInputBufferForTrbs.c)
 *     WPP_RECORDER_SF_DDDqqD @ 0x1C004580C (WPP_RECORDER_SF_DDDqqD.c)
 */

__int64 __fastcall Bulk_PrepareStage(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  char v6; // r14
  unsigned __int16 v8; // cx
  __int64 v9; // r15
  unsigned __int8 *v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r8d
  __int64 v15; // r14
  __int64 v16; // r13
  bool v17; // [rsp+20h] [rbp-88h]
  unsigned int v18; // [rsp+B0h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 360);
  v18 = 0;
  v3 = *v1;
  switch ( *(_DWORD *)(*v1 + 76) )
  {
    case 1:
      v1[8] = *(_QWORD *)(v3 + 88) + *(unsigned int *)(v3 + 112);
      break;
    case 2:
      v1[8] = *(_QWORD *)(v3 + 88) + *(unsigned int *)(v3 + 112);
      v1[9] = *(_QWORD *)(v3 + 96);
      break;
    case 3:
      v8 = *(_WORD *)(*(_QWORD *)(v3 + 48) + 2LL);
      if ( (v8 <= 0x38u || v8 > 0x3Au) && (int)Bulk_Stage_AcquireMdl(v1) < 0 )
      {
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v9 = *v1;
        if ( *((_BYTE *)v1 + 44) )
        {
          IoFreeMdl((PMDL)v1[6]);
          v1[6] = 0LL;
          *((_BYTE *)v1 + 44) = 0;
        }
        v4 = 1;
        goto LABEL_16;
      }
      break;
  }
  v4 = 1;
  v5 = *(_DWORD *)(v3 + 104) - *(_DWORD *)(v3 + 112);
  if ( *(_DWORD *)(v3 + 76) == 3 )
  {
    v11 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 280) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v17 = (*(_BYTE *)(*(_QWORD *)(v3 + 48) + 32LL) & 1) == 0;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v12 + 8) + 136LL))(v12, v1[6], 0LL, v5);
    }
    if ( v5 > v11 )
      v5 = v11;
  }
  *((_DWORD *)v1 + 10) = v5;
  Bulk_Stage_EstimateRequiredTrbs(v1);
  if ( *(_BYTE *)(a1 + 280) && (int)TR_EnsureInputBufferForTrbs(a1, *((unsigned int *)v1 + 21)) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v9 = *v1;
    if ( *((_BYTE *)v1 + 44) )
    {
      IoFreeMdl((PMDL)v1[6]);
      v1[6] = 0LL;
      *((_BYTE *)v1 + 44) = 0;
    }
LABEL_16:
    TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
    TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
    v10 = (unsigned __int8 *)(v9 + 128);
LABEL_18:
    StageQueue_Release(v10, (unsigned __int8 *)v1);
    if ( *(_DWORD *)(v3 + 120) == *(_DWORD *)(v3 + 116) )
    {
      Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v3, 0xC0001000, 1);
    }
    else
    {
      v4 = 4;
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 104);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    return v4;
  }
  Bulk_Stage_EstimateRequiredSegments(v1, &v18);
  v6 = v18;
  if ( !v18 )
    return 0;
  v13 = TR_AcquireSegments(a1, v18, v1 + 1);
  if ( v13 != 259 )
  {
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDqqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v14,
          35,
          v17,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64),
          *(_QWORD *)(v3 + 24),
          (char)v1,
          v6);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v16 = *v1;
      if ( *((_BYTE *)v1 + 44) )
      {
        IoFreeMdl((PMDL)v1[6]);
        v1[6] = 0LL;
        *((_BYTE *)v1 + 44) = 0;
      }
      TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
      TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
      v10 = (unsigned __int8 *)(v16 + 128);
      goto LABEL_18;
    }
    *(_DWORD *)(a1 + 332) = 0;
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v14,
      34,
      v17,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      *(_QWORD *)(v3 + 24),
      (char)v1,
      v6);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v15 = *v1;
  if ( *((_BYTE *)v1 + 44) )
  {
    IoFreeMdl((PMDL)v1[6]);
    v1[6] = 0LL;
    *((_BYTE *)v1 + 44) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v15 + 128), (unsigned __int8 *)v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
