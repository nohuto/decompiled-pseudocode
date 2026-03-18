/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C0003980
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006B04 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0006D5C (Endpoint_HaltedCompletionCode.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000AE90 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000E0D4 (Bulk_ProcessTransferEventWithED1.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C003A650 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     WPP_RECORDER_SF_ddi @ 0x1C003B904 (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C003BA08 (WPP_RECORDER_SF_ddqL.c)
 *     TR_TransferEventHandler @ 0x1C003FED4 (TR_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0040AA8 (Control_ProcessTransferEventWithED0.c)
 */

char __fastcall Endpoint_TransferEventHandler(__int64 a1, __int64 a2, signed __int64 a3)
{
  __m128i *v3; // r10
  char v6; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rbp
  signed __int64 v10; // rdx
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
  char v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+30h] [rbp-28h]
  char v28; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(__m128i **)a2;
  v28 = 0;
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
  if ( (!_bittest64(v3[21].m128i_i64, 0x3Eu) || v6 != -57)
    && ((_mm_srli_si128(v3[21], 8).m128i_u8[0] & 0x20) == 0 || v6 != -58)
    && ((unsigned __int8)(v6 + 64) <= 0x1Fu || v6 == 5 || v6 == 33) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = *(_DWORD *)(a2 + 144);
      v22 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 135LL);
      v26 = v22;
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_ddd(
        v3[4].m128i_i64[1],
        v22,
        13,
        88,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v26,
        v27,
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
        LOBYTE(v8) = Control_ProcessTransferEventWithED1(a1, 0LL);
      }
      else
      {
        LOBYTE(v8) = Control_ProcessTransferEventWithED0(a1, 0LL);
      }
    }
    return v8;
  }
  v9 = *(_QWORD *)(a2 + 136);
  v10 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v12 = *(_QWORD *)(v9 + 32);
    a3 = *(_QWORD *)(v12 + 24);
    if ( v10 < a3 || v10 >= a3 + *(unsigned int *)(v12 + 44) )
    {
      v13 = 1;
      if ( *(_DWORD *)(v9 + 8) )
      {
        while ( 1 )
        {
          LOBYTE(v8) = TR_TransferEventHandler(
                         a1,
                         *(_QWORD *)(104LL * (unsigned int)(v13 - 1) + *(_QWORD *)(a2 + 136) + 48));
          if ( (_BYTE)v8 )
            break;
          if ( (unsigned int)++v13 > *(_DWORD *)(v9 + 8) )
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
                           (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
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
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_ddi(*(_QWORD *)(a2 + 80), v10, a3, 92);
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
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(a2 + 80),
              v10,
              13,
              93,
              (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
              *(_BYTE *)(*(_QWORD *)(a2 + 16) + 135LL),
              *(_DWORD *)(a2 + 144));
          }
          goto LABEL_63;
        }
        LOBYTE(v8) = Endpoint_Stream_IsTransferEventLikelyDuplicate(a1, a2, &v28);
        if ( (_BYTE)v8 )
        {
          v18 = *(__m128i **)a2;
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)a2 + 336LL), 0x26u) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v8;
            v19 = 94;
          }
          else
          {
            if ( !v28 || (LOBYTE(v8) = *(_BYTE *)(a1 + 11) - 26, (unsigned __int8)v8 > 2u) )
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
LABEL_70:
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
  if ( (unsigned __int8)(v20 - 26) > 2u )
    return v8;
  _m_prefetchw((const void *)(a2 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x10u) & 0x10) != 0 )
  {
    v21 = "Received duplicate Stopped Transfer Events";
    goto LABEL_70;
  }
  _m_prefetchw((const void *)(a2 + 32));
  LOBYTE(v8) = _InterlockedXor((volatile signed __int32 *)(a2 + 32), 8u);
  if ( (v8 & 8) != 0 )
    LOBYTE(v8) = ESM_AddEvent((PVOID)(a2 + 288));
  return v8;
}
