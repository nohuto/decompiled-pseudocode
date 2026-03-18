/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C0006B04
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0003980 (Endpoint_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C0006AE0 (Control_EP_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C003FED4 (TR_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0006218 (Control_Transfer_CompleteCancelable.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0006D5C (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C00084E0 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1C0008F0C (WPP_RECORDER_SF_DDqLDDi.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDiqq @ 0x1C004182C (WPP_RECORDER_SF_DDiqq.c)
 */

char __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r13
  unsigned __int64 v4; // rsi
  bool v5; // r12
  __int64 v6; // rdi
  char v8; // r15
  __int64 v9; // rcx
  void *v10; // r8
  int v11; // edx
  char v12; // cl
  unsigned int v13; // ebx
  int v14; // edx
  int v15; // edx
  KSPIN_LOCK *v16; // rcx
  bool v17; // zf
  int v18; // eax
  __int64 v20; // rax
  int v21; // edx
  int v22; // edx
  _QWORD *v23; // r10
  const char *v24; // rax
  KSPIN_LOCK *v25; // rcx
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx

  v2 = *a1;
  v3 = *a1 & 4;
  v4 = *a1 & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0;
  v6 = a2;
  v8 = 1;
  if ( a2 )
  {
    if ( v4 != *(_QWORD *)(a2 + 344) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), *((_WORD *)a1 + 7) & 0x1F, v2, 19);
      Controller_ReportFatalError(*(_QWORD *)(v6 + 40), 2, 4126, 0, *(_QWORD *)(v6 + 48), *(_QWORD *)(v6 + 56), v6);
      return 0;
    }
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 56);
    if ( v4 != *(_QWORD *)(v6 + 344) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), *((_WORD *)a1 + 7) & 0x1F, v2, 20);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      *((unsigned __int8 *)a1 + 15),
      *((unsigned __int8 *)a1 + 11),
      21);
LABEL_5:
  v9 = *(_QWORD *)(v6 + 56);
  v10 = &WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids;
  v11 = *((_WORD *)a1 + 7) & 0x1F;
  if ( v11 != *(_DWORD *)(v9 + 144) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v9 + 80),
      v11,
      14,
      22,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      *((_BYTE *)a1 + 15),
      *((_BYTE *)a1 + 14) & 0x1F);
    v10 = &WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids;
  }
  v12 = *((_BYTE *)a1 + 15);
  if ( v12 != *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = *((_WORD *)a1 + 7) & 0x1F;
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      v21,
      14,
      23,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      v12,
      *((_BYTE *)a1 + 14) & 0x1F);
  }
  v13 = a1[1] & 0xFFFFFF;
  if ( v13 > *(_DWORD *)(v4 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
      LOBYTE(v22) = 3;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        v22,
        14,
        24,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
        *((_BYTE *)a1 + 8),
        *(_DWORD *)(v4 + 104));
    }
    v13 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      v14,
      (_DWORD)v10,
      25,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
      *(_QWORD *)(v4 + 24),
      v4);
  }
  if ( !v3 )
  {
    v20 = *(_QWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 108) = v13;
    if ( (*(_DWORD *)(v20 + 32) & 1) != 0 && *(_DWORD *)(v4 + 64) == 2 )
      memmove(*(void **)(v4 + 80), *(const void **)(*(_QWORD *)(v4 + 88) + 16LL), v13);
  }
  if ( (unsigned __int8)Endpoint_HaltedCompletionCode(*(_QWORD *)(v6 + 56), *((unsigned __int8 *)a1 + 11)) )
  {
    *(_DWORD *)(v4 + 124) = v15;
    v23 = *(_QWORD **)(v6 + 56);
    _m_prefetchw(v23 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v23 + 8, 0x20u) & 0x20) == 0 )
    {
      v25 = v23 + 36;
      v26 = 154;
      goto LABEL_56;
    }
    v24 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_39:
    Controller_HwVerifierBreakIfEnabled(*v23, v23[1], v23[3], 0x2000000, (__int64)v24, 0LL, 0LL);
    return v8;
  }
  v16 = (KSPIN_LOCK *)(v6 + 96);
  if ( (unsigned __int8)(v15 - 26) <= 2u )
  {
    *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc(v16);
    v27 = *(_DWORD *)(v4 + 132) + 1;
    *(_DWORD *)(v4 + 132) = v27;
    if ( v3 )
    {
      if ( *(_DWORD *)(v4 + 108) == *(_DWORD *)(v4 + 104) )
      {
        *(_DWORD *)(v4 + 124) = 1;
      }
      else if ( *((_BYTE *)a1 + 11) == 28 )
      {
        *(_DWORD *)(v4 + 124) = 28;
      }
      v28 = *(_DWORD *)(v4 + 128) - v27;
    }
    else
    {
      v28 = 0;
    }
    *(_DWORD *)(v6 + 356) = v28;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
    v23 = *(_QWORD **)(v6 + 56);
    _m_prefetchw(v23 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v23 + 8, 0x10u) & 0x10) == 0 )
    {
      _m_prefetchw(v23 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)v23 + 8, 8u) & 8) == 0 )
        return v8;
      v25 = v23 + 36;
      v26 = 118;
LABEL_56:
      ESM_AddEvent(v25, v26);
      return v8;
    }
    v24 = "Received duplicate Stopped Transfer Events";
    goto LABEL_39;
  }
  *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc(v16);
  ++*(_DWORD *)(v4 + 132);
  if ( v3 )
  {
    v17 = *(_DWORD *)(v4 + 112) == 3;
    *(_DWORD *)(v4 + 124) = *((unsigned __int8 *)a1 + 11);
    if ( !v17 && *(_DWORD *)(v4 + 116) != 3 )
      Control_Transfer_CompleteCancelable((_QWORD *)v6);
  }
  v18 = *(_DWORD *)(v6 + 356);
  if ( v18 )
  {
    v29 = v18 - 1;
    *(_DWORD *)(v6 + 356) = v29;
    if ( !v29 )
      v5 = (*(_BYTE *)(v6 + 352) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
  if ( v5 )
  {
    v30 = *(_QWORD *)(v6 + 56);
    if ( !*(_BYTE *)(v30 + 37)
      || (v31 = *(_QWORD *)(v30 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v31 + 20)) == *(_DWORD *)(v31 + 8)) )
    {
      v25 = (KSPIN_LOCK *)(v30 + 288);
      v26 = 150;
      goto LABEL_56;
    }
  }
  return v8;
}
