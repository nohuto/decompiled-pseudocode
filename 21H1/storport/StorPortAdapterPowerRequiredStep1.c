/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x1C003F9C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00166D8 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x1C003C274 (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003D51C (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1C003FAB4 (StorPortAdapterPowerRequiredStep2.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(unsigned __int64 Context, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v5; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5376) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 5088) + 20LL) & 8) != 0 || *(char *)(Context + 108) < 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5376);
      v3[673] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v3 + 1360);
      if ( !v3[671] )
        v3[671] = v3[668];
    }
    v3[672] = 0LL;
  }
  ++*((_DWORD *)v3 + 1358);
  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
  {
    v5 = *((_DWORD *)v3 + 14);
    McTemplateK0pqtx_EtwWriteTransfer(Context, &EventAdapterPowerRequiredStart, a3, *(_QWORD *)v3[636], v5);
  }
  *(_DWORD *)(v3[636] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v3);
  return StorPortAdapterPowerRequiredStep2(v3);
}
