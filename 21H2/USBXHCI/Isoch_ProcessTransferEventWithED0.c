/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x1C000AB84
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0006DC0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Isoch_Stage_CompleteTD @ 0x1C00070C0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C000A880 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x1C000AC54 (WPP_RECORDER_SF_DDLDDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0041D04 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C00424C0 (Isoch_FindTrbMatch.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0043454 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C0043E08 (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLi @ 0x1C0043F04 (WPP_RECORDER_SF_DDLi.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // si
  __int64 v5; // rdi
  int v7; // edx
  int v8; // r8d
  KIRQL v10; // dl
  KSPIN_LOCK *v11; // rcx
  KIRQL v12; // dl
  _QWORD *v13; // r10
  unsigned __int8 *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rcx
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
      ((void (__fastcall *)(__int64, _QWORD))qword_1C0062830)(
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
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_BYTE *)(v5 + 104) = v10;
  if ( (*(_DWORD *)(v5 + 328) & 0x40) == 0 )
  {
    Isoch_FindTrbMatch(v5, a1, (unsigned int)&v17, (unsigned int)&v21, (__int64)&v19);
    v11 = (KSPIN_LOCK *)(v5 + 96);
    v12 = *(_BYTE *)(v5 + 104);
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
    {
      KeReleaseSpinLock(v11, v12);
      v14 = v17;
      if ( !v17 )
        return v4;
      v15 = *(_QWORD *)v17;
      Isoch_CompleteStaleTransfers(v5, *(_QWORD *)v17);
      Isoch_Transfer_CompleteStaleStages(v16, v15, v14);
      Isoch_Stage_CompleteTD(v14, *(unsigned __int8 *)(a1 + 11), v19, 0, &v18, &v20);
    }
    else
    {
      *(_DWORD *)(v5 + 328) |= 0x40u;
      KeReleaseSpinLock(v11, v12);
      if ( v17 )
        Isoch_Stage_CompleteTD(v17, *(unsigned __int8 *)(a1 + 11), v19, 0, &v18, &v20);
      v13 = *(_QWORD **)(v5 + 56);
      _m_prefetchw(v13 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v13 + 8, 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *v13,
          v13[1],
          v13[3],
          0x2000000,
          (__int64)"Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw(v13 + 4);
        if ( (_InterlockedXor((volatile signed __int32 *)v13 + 8, 8u) & 8) != 0 )
          ESM_AddEvent(v13 + 36, 118);
      }
    }
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v10);
  return v4;
}
