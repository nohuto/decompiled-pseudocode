/*
 * XREFs of Control_ProcessTransferEventWithED0 @ 0x1C0019120
 * Callers:
 *     Control_EP_TransferEventHandler @ 0x1C0004B80 (Control_EP_TransferEventHandler.c)
 *     Endpoint_TransferEventHandler @ 0x1C0006860 (Endpoint_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C0040320 (TR_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqLDDi @ 0x1C0004E60 (WPP_RECORDER_SF_DDqLDDi.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C000DE20 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000E080 (WPP_RECORDER_SF_dddd.c)
 *     Control_ProcessTransferEventPointer @ 0x1C00192AC (Control_ProcessTransferEventPointer.c)
 *     memmove @ 0x1C001BD00 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x1C0040B24 (Control_ValidateED0TrbPointerOnMismatch.c)
 */

char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  KIRQL v5; // al
  __int64 v6; // rbx
  size_t v7; // r8
  int v8; // edx
  _QWORD *v9; // r10
  int v10; // edx
  KIRQL v12; // dl
  int v13; // edx
  __int64 v14; // rax
  const char *v15; // rax
  KIRQL v16; // dl
  size_t Size; // [rsp+90h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v18 = 0;
  LODWORD(Size) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqLDDi(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      *(unsigned __int8 *)(a1 + 15),
      *(unsigned __int8 *)(a1 + 11),
      17);
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u && (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) != 0 )
    return 1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v6 = *(_QWORD *)(a2 + 344);
  *(_BYTE *)(a2 + 104) = v5;
  if ( !v6 )
  {
    v12 = v5;
    goto LABEL_36;
  }
  if ( !(unsigned __int8)Control_ProcessTransferEventPointer(a2, v6, a1, (unsigned int)&v18, (__int64)&Size) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    Control_ValidateED0TrbPointerOnMismatch(a2, a1);
    return v2;
  }
  v7 = (unsigned int)Size;
  if ( (unsigned int)Size > *(_DWORD *)(v6 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v13,
        14,
        18,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
        Size,
        *(_DWORD *)(v6 + 104));
    }
    v7 = 0LL;
    LODWORD(Size) = 0;
  }
  if ( (_DWORD)v7 )
  {
    v14 = *(_QWORD *)(v6 + 48);
    *(_DWORD *)(v6 + 108) = v7;
    if ( (*(_DWORD *)(v14 + 32) & 1) != 0 && *(_DWORD *)(v6 + 64) == 2 )
      memmove(*(void **)(v6 + 80), *(const void **)(*(_QWORD *)(v6 + 88) + 16LL), v7);
  }
  if ( !Endpoint_HaltedCompletionCode(*(__m128i ***)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    if ( (unsigned __int8)(v8 - 26) <= 2u )
    {
      if ( *(_DWORD *)(v6 + 108) == *(_DWORD *)(v6 + 104) )
      {
        *(_DWORD *)(v6 + 124) = 1;
      }
      else if ( (_BYTE)v8 == 28 )
      {
        *(_DWORD *)(v6 + 124) = 28;
      }
      ++*(_DWORD *)(v6 + 132);
      v16 = *(_BYTE *)(a2 + 104);
      *(_DWORD *)(a2 + 356) = v18 - *(_DWORD *)(v6 + 132) + 1;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v16);
      v9 = *(_QWORD **)(a2 + 56);
      _m_prefetchw(v9 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v9 + 8, 0x10u) & 0x10) == 0 )
      {
        _m_prefetchw(v9 + 4);
        if ( (_InterlockedXor((volatile signed __int32 *)v9 + 8, 8u) & 8) == 0 )
          return 1;
        v10 = 118;
        goto LABEL_11;
      }
      v15 = "Received duplicate Stopped Transfer Events";
LABEL_32:
      Controller_HwVerifierBreakIfEnabled(*v9, v9[1], v9[3], 0x2000000, (__int64)v15, 0LL, 0LL);
      return 1;
    }
    v12 = *(_BYTE *)(a2 + 104);
LABEL_36:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v12);
    return v2;
  }
  *(_DWORD *)(v6 + 124) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  v9 = *(_QWORD **)(a2 + 56);
  _m_prefetchw(v9 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v9 + 8, 0x20u) & 0x20) != 0 )
  {
    v15 = "Received duplicate Transfer Event TRB with Halted Completion Code";
    goto LABEL_32;
  }
  v10 = 154;
LABEL_11:
  ESM_AddEvent(v9 + 36, v10);
  return 1;
}
