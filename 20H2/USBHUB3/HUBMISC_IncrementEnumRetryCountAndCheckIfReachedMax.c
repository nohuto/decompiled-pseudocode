/*
 * XREFs of HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002B840
 * Callers:
 *     HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1C001DDD0 (HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0002BC4 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002FCD4 (HUBMISC_VerifierDbgBreak.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  const char *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+30h] [rbp-18h]

  ++*(_DWORD *)(a1 + 32);
  v2 = 4061;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x200u);
  if ( *(_DWORD *)(a1 + 32) <= 3u )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFDFFF);
    *(_DWORD *)(a1 + 2432) = 0;
    v6 = *(void **)(a1 + 2488);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x64334855u);
    memset((void *)(a1 + 2464), 0, 0x68uLL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(_DWORD *)(a1 + 32);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x11u,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
        a1,
        v11);
    }
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      McTemplateK0p_EtwWriteTransfer(
        v7,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RETRY,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    v8 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v8 + 2592LL) & 0x2000) != 0 )
    {
      v4 = v8 + 272;
      v5 = "HubHwVerifierDeviceEnumerationRetry";
      goto LABEL_16;
    }
  }
  else
  {
    v2 = 4089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = *(_DWORD *)(a1 + 32);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x10u,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
        a1,
        v10);
    }
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      McTemplateK0p_EtwWriteTransfer(
        a1,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_MAXIMUM_RETRY_COUNT_REACHED,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    v3 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 2592LL) & 0x1000) != 0 )
    {
      v4 = v3 + 272;
      v5 = "HubHwVerifierDeviceFailedEnumeration";
LABEL_16:
      HUBMISC_VerifierDbgBreak(v5, v4);
    }
  }
  return v2;
}
