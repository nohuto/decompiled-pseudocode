/*
 * XREFs of StorPortUnitDirectedPowerUp @ 0x1C0040080
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C00063F0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006D20 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0006D50 (RaidIsUnitControlSupported.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x1C003C698 (McTemplateK0pquuutx_EtwWriteTransfer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003E7F0 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1C0040230 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     RaidNotifyPoAboutAdaptiveD3Engagement @ 0x1C0057668 (RaidNotifyPoAboutAdaptiveD3Engagement.c)
 */

void __fastcall StorPortUnitDirectedPowerUp(__int64 Context)
{
  __int64 v2; // r8
  _QWORD *v3; // r9
  int v4; // ecx
  unsigned __int64 v5; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    v3 = *(_QWORD **)(Context + 1744);
    v4 = *((_DWORD *)v3 + 8);
    if ( (v4 & 0x300) == 0x300 )
    {
      if ( (*(_BYTE *)(Context + 451) & 4) == 0 )
      {
        RaidNotifyPoAboutAdaptiveD3Engagement(Context);
        v3 = *(_QWORD **)(Context + 1744);
      }
      PoFxReportDevicePoweredOn(*v3);
    }
    else
    {
      if ( *(_QWORD *)(Context + 2088) )
      {
        if ( (v4 & 0x80u) != 0 || *(char *)(*(_QWORD *)(Context + 24) + 108LL) < 0 )
        {
          v5 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 2088);
          *(_QWORD *)(Context + 2096) += v5 / 0x2710;
          if ( v5 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(Context + 2072);
          if ( !*(_QWORD *)(Context + 2080) )
            *(_QWORD *)(Context + 2080) = *(_QWORD *)(*(_QWORD *)(Context + 24) + 5344LL);
        }
        *(_QWORD *)(Context + 2088) = 0LL;
        v3 = *(_QWORD **)(Context + 1744);
      }
      ++*(_DWORD *)(Context + 2064);
      if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
        McTemplateK0pquuutx_EtwWriteTransfer(
          *(_QWORD *)(Context + 24),
          &EventUnitDirectedPowerUpStart,
          v2,
          *v3,
          *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
          *(_BYTE *)(Context + 96),
          *(_BYTE *)(Context + 97),
          *(_BYTE *)(Context + 98));
      RaidUnitReenablePendingTimer(Context, 0);
      *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) |= 8u;
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
      StorPortUnitDirectedPowerUpRequestD0((PVOID)Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
    }
  }
}
