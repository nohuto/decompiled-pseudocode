/*
 * XREFs of Bulk_ProcessTransferEventWithED0 @ 0x1C000DBF8
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0006860 (Endpoint_TransferEventHandler.c)
 *     Bulk_EP_TransferEventHandler @ 0x1C000BE90 (Bulk_EP_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x1C003F6C0 (TR_TransferEventHandler.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     Bulk_FindStage @ 0x1C000BD10 (Bulk_FindStage.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C000DE20 (Endpoint_HaltedCompletionCode.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000E080 (WPP_RECORDER_SF_dddd.c)
 *     Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C000E178 (Bulk_ProcessTransferEventWithStoppedCompletion.c)
 *     Bulk_Stage_CalculateBytesTransferred @ 0x1C000E20C (Bulk_Stage_CalculateBytesTransferred.c)
 *     WPP_RECORDER_SF_dddqLddi @ 0x1C000E32C (WPP_RECORDER_SF_dddqLddi.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031CC4 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C003F810 (WPP_RECORDER_SF_DDDDD.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C004445C (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0044778 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 */

char __fastcall Bulk_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v5; // rcx
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // edx
  _QWORD *v11; // r10
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+10h] BYREF

  v2 = 0;
  v15 = 0;
  v16 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddqLddi(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      *(unsigned __int8 *)(a1 + 11),
      *(unsigned __int8 *)(a1 + 15),
      *(_DWORD *)(a1 + 8) & 0xFFFFFF);
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) <= 2u && (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) != 0 )
    return 1;
  *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  if ( !Bulk_FindStage(a2, *(_QWORD *)a1, &v16, &v15) )
  {
    if ( !*(_DWORD *)(a2 + 64) )
      Bulk_ValidateED0TrbPointerOnMismatch(a2, a1);
    goto LABEL_19;
  }
  v6 = v16;
  if ( v16 )
  {
    v7 = Bulk_Stage_CalculateBytesTransferred(v5, v16, a1);
    v8 = *(_DWORD *)(v6 + 40);
    if ( v7 <= v8 )
      goto LABEL_8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_QWORD *)(a2 + 48);
      v14 = *(unsigned __int8 *)(v13 + 135);
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v13,
        v14,
        52,
        (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
        v14,
        *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
        *(_DWORD *)(a2 + 64),
        v7,
        v8);
    }
  }
  v7 = 0;
LABEL_8:
  if ( (unsigned __int8)Endpoint_HaltedCompletionCode(*(_QWORD *)(a2 + 56), *(unsigned __int8 *)(a1 + 11)) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    if ( v6 )
      Bulk_ProcessTransferEventWithHaltedCompletion(a2, v6, *(unsigned __int8 *)(a1 + 11), v7);
    return 1;
  }
  if ( (unsigned __int8)(v9 - 26) > 2u )
  {
LABEL_19:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    return v2;
  }
  Bulk_ProcessTransferEventWithStoppedCompletion(a2, v6, v9, v7, v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      v10,
      14,
      53,
      (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
      *(_DWORD *)(a2 + 64),
      *(_DWORD *)(a2 + 352));
  }
  *(_DWORD *)(a2 + 324) |= 8u;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  v11 = *(_QWORD **)(a2 + 56);
  _m_prefetchw(v11 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v11 + 8, 0x10u) & 0x10) != 0 )
  {
    Controller_HwVerifierBreakIfEnabled(
      *v11,
      v11[1],
      v11[3],
      0x2000000,
      (__int64)"Received duplicate Stopped Transfer Events",
      0LL,
      0LL);
  }
  else
  {
    _m_prefetchw(v11 + 4);
    if ( (_InterlockedXor((volatile signed __int32 *)v11 + 8, 8u) & 8) != 0 )
      ESM_AddEvent(v11 + 36, 118);
  }
  return 1;
}
