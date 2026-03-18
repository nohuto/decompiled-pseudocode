/*
 * XREFs of Control_ProcessTransferEventWithED1 @ 0x1C0004BB0
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x1C0004B80 (Control_EP_TransferEventHandler.c)
 *     Endpoint_TransferEventHandler @ 0x1C00064C0 (Endpoint_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C003EE40 (TR_TransferEventHandler.c)
 * Callees:
 *     Control_Transfer_CompleteCancelable @ 0x1C0004184 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1C0004E60 (WPP_RECORDER_SF_DDqLDDi.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0004F80 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000D7B0 (WPP_RECORDER_SF_dddd.c)
 *     memmove @ 0x1C0019200 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDiqq @ 0x1C004005C (WPP_RECORDER_SF_DDiqq.c)
 */

__int64 __fastcall Control_ProcessTransferEventWithED1(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  bool v5; // r13
  __int64 v6; // rbx
  unsigned __int8 v8; // r12
  __int64 v9; // r10
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  char v14; // cl
  unsigned int v15; // edi
  int v16; // edx
  __m128i **v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  bool v20; // al
  KSPIN_LOCK *v21; // rcx
  bool v22; // zf
  int v23; // eax
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // edx
  volatile signed __int32 *v29; // r10
  const char *v30; // rax
  void *v31; // rcx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37; // [rsp+28h] [rbp-60h]

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
        WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 19);
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
      WPP_RECORDER_SF_DDiqq(*(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL), HIBYTE(*((_DWORD *)a1 + 3)), v2, 20);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      HIWORD(*((_DWORD *)a1 + 3)) & 0x1F,
      a1[1] & 0xFFFFFF,
      21);
LABEL_5:
  v9 = *(_QWORD *)(v6 + 56);
  v10 = *((_DWORD *)a1 + 3);
  v11 = HIWORD(v10);
  v12 = HIBYTE(v10);
  v13 = v11 & 0x1F;
  v14 = v12;
  if ( v13 != *(_DWORD *)(v9 + 144) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = v12;
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v9 + 80),
      v12,
      14,
      22,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      v37,
      v13);
    v14 = *((_BYTE *)a1 + 15);
  }
  if ( v14 != *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = *((_DWORD *)a1 + 3);
    v27 = HIBYTE(v26);
    LOBYTE(v27) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      v27,
      14,
      23,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      SHIBYTE(v26),
      BYTE2(v26) & 0x1F);
  }
  v15 = a1[1] & 0xFFFFFF;
  if ( v15 > *(_DWORD *)(v4 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
      LOBYTE(v28) = 3;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
        v28,
        14,
        24,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
        *((_BYTE *)a1 + 8),
        *(_DWORD *)(v4 + 104));
    }
    v15 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL);
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
      v16,
      (unsigned int)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      25,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
      *(_QWORD *)(v4 + 24),
      v4);
  }
  if ( !v3 )
  {
    v25 = *(_QWORD *)(v4 + 48);
    *(_DWORD *)(v4 + 108) = v15;
    if ( (*(_DWORD *)(v25 + 32) & 1) != 0 && *(_DWORD *)(v4 + 64) == 2 )
      memmove(*(void **)(v4 + 80), *(const void **)(*(_QWORD *)(v4 + 88) + 16LL), v15);
  }
  v17 = *(__m128i ***)(v6 + 56);
  v18 = *((unsigned __int8 *)a1 + 11);
  if ( ((*v17)[21].m128i_i64[0] & 0x4000000000000000LL) != 0 && (_BYTE)v18 == 0xC7
    || (_mm_srli_si128((*v17)[21], 8).m128i_u8[0] & 0x20) != 0 && (_BYTE)v18 == 0xC6
    || (unsigned __int8)v18 <= 0x24u && (v19 = 0x150000045CLL, _bittest64(&v19, v18)) )
  {
    *(_DWORD *)(v4 + 124) = v18;
    v29 = *(volatile signed __int32 **)(v6 + 56);
    _m_prefetchw((const void *)(v29 + 8));
    if ( (_InterlockedOr(v29 + 8, 0x20u) & 0x20) == 0 )
    {
      v31 = (void *)(v29 + 72);
      goto LABEL_61;
    }
    v30 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_44:
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v29,
      *((_QWORD *)v29 + 1),
      *((_QWORD *)v29 + 3),
      0x2000000,
      (__int64)v30,
      0LL,
      0LL);
    return v8;
  }
  v20 = (unsigned __int8)(v18 - 26) <= 2u;
  v21 = (KSPIN_LOCK *)(v6 + 96);
  if ( v20 )
  {
    *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc(v21);
    v32 = *(_DWORD *)(v4 + 132) + 1;
    *(_DWORD *)(v4 + 132) = v32;
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
      v33 = *(_DWORD *)(v4 + 128) - v32;
    }
    else
    {
      v33 = 0;
    }
    *(_DWORD *)(v6 + 356) = v33;
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
    v29 = *(volatile signed __int32 **)(v6 + 56);
    _m_prefetchw((const void *)(v29 + 8));
    if ( (_InterlockedOr(v29 + 8, 0x10u) & 0x10) == 0 )
    {
      _m_prefetchw((const void *)(v29 + 8));
      if ( (_InterlockedXor(v29 + 8, 8u) & 8) == 0 )
        return v8;
      v31 = (void *)(v29 + 72);
LABEL_61:
      ESM_AddEvent(v31);
      return v8;
    }
    v30 = "Received duplicate Stopped Transfer Events";
    goto LABEL_44;
  }
  *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc(v21);
  ++*(_DWORD *)(v4 + 132);
  if ( v3 )
  {
    v22 = *(_DWORD *)(v4 + 112) == 3;
    *(_DWORD *)(v4 + 124) = *((unsigned __int8 *)a1 + 11);
    if ( !v22 && *(_DWORD *)(v4 + 116) != 3 )
      Control_Transfer_CompleteCancelable((_QWORD *)v6);
  }
  v23 = *(_DWORD *)(v6 + 356);
  if ( v23 )
  {
    v34 = v23 - 1;
    *(_DWORD *)(v6 + 356) = v34;
    if ( !v34 )
      v5 = (*(_BYTE *)(v6 + 352) & 4) != 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
  if ( v5 )
  {
    v35 = *(_QWORD *)(v6 + 56);
    if ( !*(_BYTE *)(v35 + 37)
      || (v36 = *(_QWORD *)(v35 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 20)) == *(_DWORD *)(v36 + 8)) )
    {
      v31 = (void *)(v35 + 288);
      goto LABEL_61;
    }
  }
  return v8;
}
