/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C0006860
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0004BB0 (Control_ProcessTransferEventWithED1.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BEB4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DBF8 (Bulk_ProcessTransferEventWithED0.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C000DE20 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0019120 (Control_ProcessTransferEventWithED0.c)
 *     WPP_RECORDER_SF_ddi @ 0x1C0019704 (WPP_RECORDER_SF_ddi.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C003AF14 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C003C004 (WPP_RECORDER_SF_ddqL.c)
 *     TR_TransferEventHandler @ 0x1C0040320 (TR_TransferEventHandler.c)
 */

char __fastcall Endpoint_TransferEventHandler(__int64 a1, __int64 a2, signed __int64 a3)
{
  __m128i *v3; // r10
  char v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  signed __int64 v9; // rdx
  __int64 v10; // rbp
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // esi
  int v14; // r8d
  int v15; // edx
  int v16; // edx
  int v17; // r8d
  __m128i *v18; // r10
  int v19; // r9d
  int v20; // edx
  const char *v21; // rax
  int v22; // edx
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+28h] [rbp-30h]
  char v26; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(__m128i **)a2;
  v26 = 0;
  if ( (_mm_srli_si128(v3[21], 8).m128i_u8[0] & 4) != 0 && *(_BYTE *)(a1 + 11) == 2 )
  {
    LODWORD(v8) = *(_DWORD *)(a1 + 12);
    if ( (v8 & 4) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LOBYTE(v8) = WPP_RECORDER_SF_ddqL(*(_QWORD *)(a2 + 80), a2, a3, 87);
      return v8;
    }
  }
  v6 = *(_BYTE *)(a1 + 11);
  if ( ((v3[21].m128i_i64[0] & 0x4000000000000000LL) == 0 || v6 != -57)
    && ((_mm_srli_si128(v3[21], 8).m128i_u8[0] & 0x20) == 0 || v6 != -58)
    && ((unsigned __int8)(v6 + 64) <= 0x1Fu || v6 == 5 || v6 == 33) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_ddd(
        v3[4].m128i_i64[1],
        v22,
        13,
        88,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + 135LL),
        *(_DWORD *)(a2 + 144),
        v6);
      v3 = *(__m128i **)a2;
    }
    Controller_HwVerifierBreakIfEnabled(
      (_DWORD)v3,
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 24),
      2048,
      (__int64)"Unrecognized completion code in Transfer Event TRB",
      0LL,
      a2 + 184);
    LOBYTE(v8) = Controller_ReportFatalError(
                   *(_QWORD *)a2,
                   2,
                   4112,
                   *(unsigned __int8 *)(a1 + 11),
                   *(_QWORD *)(a2 + 16),
                   a2,
                   0LL);
    return v8;
  }
  if ( !*(_BYTE *)(a2 + 37) )
  {
    v7 = *(_QWORD *)(a2 + 88);
    if ( v7 )
    {
      LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 32) + 88LL))(a1);
    }
    else
    {
      v8 = *(_DWORD *)a1 & 3;
      if ( (*(_DWORD *)a1 & 3) != 0 )
      {
        if ( v8 > 1 )
        {
          if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
            LOBYTE(v8) = Bulk_ProcessTransferEventWithED1(a1, 0LL);
          else
            LOBYTE(v8) = Bulk_ProcessTransferEventWithED0(a1, 0LL);
        }
      }
      else if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
      {
        LOBYTE(v8) = Control_ProcessTransferEventWithED1((__int64 *)a1, 0LL);
      }
      else
      {
        LOBYTE(v8) = Control_ProcessTransferEventWithED0(a1, 0LL);
      }
    }
    return v8;
  }
  v9 = *(_QWORD *)a1;
  v10 = *(_QWORD *)(a2 + 136);
  if ( *(_QWORD *)a1 )
  {
    v12 = *(_QWORD *)(v10 + 32);
    a3 = *(_QWORD *)(v12 + 24);
    if ( v9 < a3 || v9 >= a3 + *(unsigned int *)(v12 + 44) )
    {
      v13 = 1;
      if ( *(_DWORD *)(v10 + 8) )
      {
        while ( 1 )
        {
          LOBYTE(v8) = TR_TransferEventHandler(
                         a1,
                         *(_QWORD *)(104LL * (unsigned int)(v13 - 1) + *(_QWORD *)(a2 + 136) + 48));
          if ( (_BYTE)v8 )
            break;
          if ( (unsigned int)++v13 > *(_DWORD *)(v10 + 8) )
            goto LABEL_36;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = (_BYTE)WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v15 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
            LOBYTE(v15) = 5;
            LOBYTE(v8) = WPP_RECORDER_SF_ddd(
                           *(_QWORD *)(a2 + 80),
                           v15,
                           13,
                           91,
                           (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
                           *(_BYTE *)(*(_QWORD *)(a2 + 16) + 135LL),
                           *(_DWORD *)(a2 + 144),
                           (unsigned __int8)v13 + 1);
          }
        }
        return v8;
      }
LABEL_36:
      if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v9, a3, 92);
        }
        v25 = a2;
        v14 = 4126;
        v24 = *(_QWORD *)(a2 + 16);
      }
      else
      {
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 2;
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(a2 + 80),
              v9,
              13,
              93,
              (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a2 + 16) + 135LL),
              *(_DWORD *)(a2 + 144));
          }
          goto LABEL_63;
        }
        LOBYTE(v8) = Endpoint_Stream_IsTransferEventLikelyDuplicate(a1, a2, &v26);
        if ( (_BYTE)v8 )
        {
          v18 = *(__m128i **)a2;
          if ( (*(_QWORD *)(*(_QWORD *)a2 + 336LL) & 0x4000000000LL) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v8;
            v19 = 94;
          }
          else
          {
            if ( !v26 || (LOBYTE(v8) = *(_BYTE *)(a1 + 11) - 26, (unsigned __int8)v8 > 2u) )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v16) = 2;
                WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v16, v17, 96);
                v18 = *(__m128i **)a2;
              }
              LOBYTE(v8) = Controller_ReportFatalError((_DWORD)v18, 2, 4128, 0, *(_QWORD *)(a2 + 16), a2, 0LL);
              return v8;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v8;
            v19 = 95;
          }
          LOBYTE(v16) = 3;
          LOBYTE(v8) = WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v16, v17, v19);
          return v8;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v16, v17, 97);
        }
        v25 = a2;
        v14 = 4127;
        v24 = *(_QWORD *)(a2 + 16);
      }
      LOBYTE(v8) = Controller_ReportFatalError(*(_QWORD *)a2, 2, v14, 0, v24, v25, 0LL);
      return v8;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 90;
      goto LABEL_32;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 89;
LABEL_32:
    WPP_RECORDER_SF_ddqL(*(_QWORD *)(a2 + 80), *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL), a3, v11);
  }
LABEL_63:
  LOBYTE(v8) = Endpoint_HaltedCompletionCode(a2, *(unsigned __int8 *)(a1 + 11));
  if ( (_BYTE)v8 )
  {
    _m_prefetchw((const void *)(a2 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x20u) & 0x20) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 136) + 24LL) = v20;
      _InterlockedOr((volatile signed __int32 *)(a2 + 32), 4u);
      LOBYTE(v8) = ESM_AddEvent((PVOID)(a2 + 288));
      return v8;
    }
    v21 = "Received duplicate Transfer Event TRB with Halted Completion Code";
    goto LABEL_67;
  }
  if ( (unsigned __int8)(v20 - 26) > 2u )
    return v8;
  _m_prefetchw((const void *)(a2 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x10u) & 0x10) != 0 )
  {
    v21 = "Received duplicate Stopped Transfer Events";
LABEL_67:
    LOBYTE(v8) = Controller_HwVerifierBreakIfEnabled(
                   *(_QWORD *)a2,
                   *(_QWORD *)(a2 + 8),
                   *(_QWORD *)(a2 + 24),
                   0x2000000,
                   (__int64)v21,
                   0LL,
                   0LL);
    return v8;
  }
  _m_prefetchw((const void *)(a2 + 32));
  LOBYTE(v8) = _InterlockedXor((volatile signed __int32 *)(a2 + 32), 8u);
  if ( (v8 & 8) != 0 )
    LOBYTE(v8) = ESM_AddEvent((PVOID)(a2 + 288));
  return v8;
}
