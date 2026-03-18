/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x1C0042BE8
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0001EE0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_Stage_CompleteTD @ 0x1C00021E0 (Isoch_Stage_CompleteTD.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0041A64 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C0042220 (Isoch_FindTrbMatch.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0042F00 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C00436A8 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C004416C (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x1C0044268 (WPP_RECORDER_SF_DDLDDi.c)
 *     WPP_RECORDER_SF_DDLi @ 0x1C00443C8 (WPP_RECORDER_SF_DDLi.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // si
  __int64 v5; // rdi
  int v7; // edx
  int v8; // r8d
  KIRQL v9; // dl
  KSPIN_LOCK *v10; // rcx
  KIRQL v11; // dl
  __int64 v12; // r10
  unsigned __int8 *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int8 *v17; // [rsp+60h] [rbp-18h] BYREF
  char v18; // [rsp+B0h] [rbp+38h] BYREF
  int v19; // [rsp+B8h] [rbp+40h] BYREF
  int v20; // [rsp+C0h] [rbp+48h] BYREF
  int v21; // [rsp+C8h] [rbp+50h] BYREF

  v4 = 0;
  v5 = a2;
  v20 = 0;
  v19 = 0;
  v21 = 0;
  v18 = 0;
  v17 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *(unsigned __int8 *)(a1 + 15);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL), v7, *(unsigned __int8 *)(a1 + 11), 40);
  }
  v8 = *(unsigned __int8 *)(a1 + 11);
  if ( (unsigned __int8)v8 >= 0xEu )
  {
    if ( (unsigned __int8)v8 <= 0xFu )
    {
      Isoch_ProcessTransferRingEmptyEvent(v5, a1);
      return v4;
    }
    if ( (_BYTE)v8 == 20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDLi(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
          v8,
          a4);
      ((void (__fastcall *)(__int64, _QWORD))qword_1C0062810)(
        UcxDriverGlobals,
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 24LL));
      if ( !*(_QWORD *)a1 )
        return v4;
    }
    else if ( (_BYTE)v8 == 23 )
    {
      ++*(_DWORD *)(v5 + 264);
      if ( !*(_QWORD *)a1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_DDL(*(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL), a2, *(unsigned __int8 *)(a1 + 11), 41);
        }
        return v4;
      }
    }
  }
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_BYTE *)(v5 + 104) = v9;
  if ( (*(_DWORD *)(v5 + 328) & 0x40) == 0 )
  {
    Isoch_FindTrbMatch(v5, (signed __int64 *)a1, (__int64 *)&v17, &v21, &v19);
    v10 = (KSPIN_LOCK *)(v5 + 96);
    v11 = *(_BYTE *)(v5 + 104);
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
    {
      KeReleaseSpinLock(v10, v11);
      v13 = v17;
      if ( !v17 )
        return v4;
      v14 = *(_QWORD *)v17;
      Isoch_CompleteStaleTransfers(v5, *(__int64 ****)v17);
      Isoch_Transfer_CompleteStaleStages(v15, v14, v13);
      Isoch_Stage_CompleteTD(v13, *(unsigned __int8 *)(a1 + 11), v19, 0, &v18, &v20);
    }
    else
    {
      *(_DWORD *)(v5 + 328) |= 0x40u;
      KeReleaseSpinLock(v10, v11);
      if ( v17 )
        Isoch_Stage_CompleteTD(v17, *(unsigned __int8 *)(a1 + 11), v19, 0, &v18, &v20);
      v12 = *(_QWORD *)(v5 + 56);
      _m_prefetchw((const void *)(v12 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v12,
          *(_QWORD *)(v12 + 8),
          *(_QWORD *)(v12 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v12 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v12 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((KSPIN_LOCK *)(v12 + 288), 118);
      }
    }
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v9);
  return v4;
}
