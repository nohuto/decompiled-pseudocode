/*
 * XREFs of ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x1C03849D0
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C031BDD4 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::EndTransaction(
        DXGVIRTUALMACHINE *this,
        struct DXGKVMB_GUEST_TRANSACTION *a2,
        union _LARGE_INTEGER *a3)
{
  NTSTATUS v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct DXGKVMB_GUEST_TRANSACTION *v9; // rax
  struct DXGKVMB_GUEST_TRANSACTION **v10; // rdx

  if ( g_DisableTransactionTimeout )
    a3 = 0LL;
  v5 = KeWaitForSingleObject((char *)a2 + 24, Executive, 0, 0, a3);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 344));
  if ( v5 == 258 )
  {
    if ( !KeReadStateEvent((PRKEVENT)a2 + 1) )
    {
      WdLogSingleEntry1(2LL, 126LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Timeout occurred while waiting for guest transaction",
        126LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_6:
      LODWORD(v8) = -1073741823;
      goto LABEL_7;
    }
  }
  else if ( v5 )
  {
    goto LABEL_6;
  }
  v8 = *((int *)a2 + 12);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = *((_QWORD *)a2 + 2);
  if ( (int)v8 < 0 )
  {
    WdLogSingleEntry2(2LL, *((_QWORD *)a2 + 2), v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Transaction %I64u returned an error from the guest, Status=0x%.8x",
      *((_QWORD *)a2 + 2),
      v8,
      0LL,
      0LL,
      0LL);
  }
LABEL_7:
  v9 = *(struct DXGKVMB_GUEST_TRANSACTION **)a2;
  if ( *(struct DXGKVMB_GUEST_TRANSACTION **)(*(_QWORD *)a2 + 8LL) != a2
    || (v10 = (struct DXGKVMB_GUEST_TRANSACTION **)*((_QWORD *)a2 + 1), *v10 != a2) )
  {
    __fastfail(3u);
  }
  *v10 = v9;
  *((_QWORD *)v9 + 1) = v10;
  *((_QWORD *)this + 44) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 344, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
