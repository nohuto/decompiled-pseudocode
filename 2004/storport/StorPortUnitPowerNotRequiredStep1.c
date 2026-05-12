/*
 * XREFs of StorPortUnitPowerNotRequiredStep1 @ 0x1C0040F50
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C00068B0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0007310 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x1C0007340 (RaidIsUnitControlSupported.c)
 *     McTemplateK0pquuutq_EtwWriteTransfer @ 0x1C003CBA0 (McTemplateK0pquuutq_EtwWriteTransfer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003EDC0 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0041038 (StorPortUnitPowerNotRequiredStep2.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep1(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-38h]
  char v6; // [rsp+28h] [rbp-30h]
  char v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
    {
      v4 = *(_QWORD *)(Context + 24);
      v8 = *(_BYTE *)(Context + 98);
      v7 = *(_BYTE *)(Context + 97);
      v6 = *(_BYTE *)(Context + 96);
      v5 = *(_DWORD *)(v4 + 56);
      McTemplateK0pquuutq_EtwWriteTransfer(v4, v2, v3, **(_QWORD **)(Context + 1744), v5, v6, v7, v8);
    }
    RaidUnitReenablePendingTimer(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 816) = 0;
    if ( *(_DWORD *)(Context + 920) && (*(_BYTE *)(Context + 449) & 0x40) != 0 )
      *(_BYTE *)(Context + 1734) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerNotRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
  }
}
