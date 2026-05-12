/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C003F700
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00166D8 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x1C003C1DC (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003D51C (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C003F780 (StorPortAdapterPowerNotRequiredStep2.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_DWORD *Context, __int64 a2, __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
  {
    v5 = Context[14];
    McTemplateK0pqtq_EtwWriteTransfer(
      (__int64)Context,
      &EventAdapterPowerNotRequiredStart,
      a3,
      **((_QWORD **)Context + 636),
      v5);
  }
  *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)Context);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
