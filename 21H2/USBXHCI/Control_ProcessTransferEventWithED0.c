/*
 * XREFs of Control_ProcessTransferEventWithED0 @ 0x1C0040AA8
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0003980 (Endpoint_TransferEventHandler.c)
 *     Control_EP_TransferEventHandler @ 0x1C0006AE0 (Control_EP_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C003FED4 (TR_TransferEventHandler.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0006D5C (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1C0008F0C (WPP_RECORDER_SF_DDqLDDi.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Control_ProcessTransferEventPointer @ 0x1C00408E8 (Control_ProcessTransferEventPointer.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0040DC4 (Control_ValidateED0TrbPointerOnMismatch.c)
 */

char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  KIRQL v5; // al
  __int64 v6; // rbx
  KIRQL v7; // dl
  size_t v8; // r8
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r10
  const char *v12; // rax
  int v13; // edx
  KIRQL v14; // dl
  __int64 v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  int v19; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v19 = 0;
  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v17) = HIDWORD(a1);
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      *(unsigned __int8 *)(a1 + 15),
      *(unsigned __int8 *)(a1 + 11),
      0x11u,
      v16);
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u && (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) != 0 )
    return 1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v6 = *(_QWORD *)(a2 + 344);
  *(_BYTE *)(a2 + 104) = v5;
  if ( !v6 )
  {
    v7 = v5;
LABEL_34:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v7);
    return v2;
  }
  if ( !Control_ProcessTransferEventPointer(a2, v6, (__int64 *)a1, &v19, (int *)&v18) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    Control_ValidateED0TrbPointerOnMismatch(a2, a1);
    return v2;
  }
  v8 = v18;
  if ( v18 > *(_DWORD *)(v6 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v18;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        3u,
        0xEu,
        0x12u,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
        v17,
        *(_DWORD *)(v6 + 104));
    }
    v8 = 0LL;
    v18 = 0;
  }
  if ( (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(v6 + 48);
    *(_DWORD *)(v6 + 108) = v8;
    if ( (*(_DWORD *)(v9 + 32) & 1) != 0 && *(_DWORD *)(v6 + 64) == 2 )
      memmove(*(void **)(v6 + 80), *(const void **)(*(_QWORD *)(v6 + 88) + 16LL), v8);
  }
  if ( !Endpoint_HaltedCompletionCode(*(__m128i ***)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    if ( (unsigned __int8)(v10 - 26) > 2u )
    {
      v7 = *(_BYTE *)(a2 + 104);
      goto LABEL_34;
    }
    if ( *(_DWORD *)(v6 + 108) == *(_DWORD *)(v6 + 104) )
    {
      *(_DWORD *)(v6 + 124) = 1;
    }
    else if ( (_BYTE)v10 == 28 )
    {
      *(_DWORD *)(v6 + 124) = 28;
    }
    ++*(_DWORD *)(v6 + 132);
    v14 = *(_BYTE *)(a2 + 104);
    *(_DWORD *)(a2 + 356) = v19 - *(_DWORD *)(v6 + 132) + 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v14);
    v11 = *(_QWORD *)(a2 + 56);
    _m_prefetchw((const void *)(v11 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x10u) & 0x10) != 0 )
    {
      v12 = "Received duplicate Stopped Transfer Events";
      goto LABEL_29;
    }
    _m_prefetchw((const void *)(v11 + 32));
    if ( (_InterlockedXor((volatile signed __int32 *)(v11 + 32), 8u) & 8) == 0 )
      return 1;
    v13 = 118;
LABEL_32:
    ESM_AddEvent((KSPIN_LOCK *)(v11 + 288), v13);
    return 1;
  }
  *(_DWORD *)(v6 + 124) = v10;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  v11 = *(_QWORD *)(a2 + 56);
  _m_prefetchw((const void *)(v11 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x20u) & 0x20) == 0 )
  {
    v13 = 154;
    goto LABEL_32;
  }
  v12 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_29:
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD **)v11,
    *(_QWORD *)(v11 + 8),
    *(_QWORD *)(v11 + 24),
    0x2000000LL,
    v12,
    0LL,
    0LL);
  return 1;
}
