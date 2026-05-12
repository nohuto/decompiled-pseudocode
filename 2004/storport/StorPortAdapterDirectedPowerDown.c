/*
 * XREFs of StorPortAdapterDirectedPowerDown @ 0x1C003F1E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x1C003C7AC (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003DAEC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C003F314 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerDown(_DWORD *Context, __int64 a2, __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
  {
    v5 = Context[14];
    McTemplateK0pqtq_EtwWriteTransfer(
      (__int64)Context,
      &EventAdapterDirectedPowerDownStart,
      a3,
      **((_QWORD **)Context + 636),
      v5);
  }
  *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)Context);
  return StorPortAdapterDirectedPowerDownRequestD3(Context);
}
