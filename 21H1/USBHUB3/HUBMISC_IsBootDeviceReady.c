/*
 * XREFs of HUBMISC_IsBootDeviceReady @ 0x1C00305AC
 * Callers:
 *     HUBBOOT_IsBootDeviceReady @ 0x1C003D5F0 (HUBBOOT_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C0006034 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C00307FC (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 */

char __fastcall HUBMISC_IsBootDeviceReady(__int64 a1)
{
  char v1; // r14
  unsigned __int16 v3; // r9
  __int64 v4; // rcx
  unsigned __int16 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v9 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2352LL) & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 101;
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
LABEL_25:
      WPP_RECORDER_SF_(v4, 4u, 5u, v3, (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
    }
LABEL_26:
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 1336LL), 0xFFFFFFF7);
    HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(a1);
    return 1;
  }
  *(_DWORD *)(a1 + 2240) = 0;
  if ( (int)HUBHTX_GetPortStatusForBootDevice(a1, &v9) >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 1636) & 0x400) == 0 || (v9 & 0x10000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v6 + 1424) == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v7 = *(_QWORD *)(v6 + 1432);
        v5 = 104;
        goto LABEL_30;
      }
      if ( (v9 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_26;
        v3 = 105;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 1456) & 0x800) == 0 || (v9 & 0x1E0) != 0xC0 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v6 + 1336), 0xFFFFFFF7);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_31;
          v5 = 108;
          goto LABEL_29;
        }
        if ( (*(_DWORD *)(v6 + 1336) & 8) == 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v6 + 1336), 8u);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_31;
          v5 = 106;
          goto LABEL_29;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_26;
        v3 = 107;
      }
      v4 = *(_QWORD *)(v6 + 1432);
      goto LABEL_25;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v5 = 103;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v5 = 102;
  }
LABEL_29:
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
LABEL_30:
  WPP_RECORDER_SF_(v7, 4u, 5u, v5, (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
LABEL_31:
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 2240), 1) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x6Du,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
    return 1;
  }
  return v1;
}
