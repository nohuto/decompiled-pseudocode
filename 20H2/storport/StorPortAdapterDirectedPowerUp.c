/*
 * XREFs of StorPortAdapterDirectedPowerUp @ 0x1C0040480
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00189E0 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x1C003D768 (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003EA0C (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x1C004064C (StorPortAdapterDirectedPowerUpRequestD0.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerUp(unsigned __int64 Context, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v5; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5456) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 5088) + 20LL) & 8) != 0 || *(char *)(Context + 108) < 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5376);
      v3[683] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v3 + 1360);
      if ( !v3[681] )
        v3[681] = v3[668];
    }
    v3[682] = 0LL;
  }
  ++*((_DWORD *)v3 + 1358);
  if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
  {
    v5 = *((_DWORD *)v3 + 14);
    McTemplateK0pqtx_EtwWriteTransfer(Context, &EventAdapterDirectedPowerUpStart, a3, *(_QWORD *)v3[636], v5);
  }
  *(_DWORD *)(v3[636] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v3);
  return StorPortAdapterDirectedPowerUpRequestD0(v3);
}
