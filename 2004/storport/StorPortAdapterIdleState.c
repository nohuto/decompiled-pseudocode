/*
 * XREFs of StorPortAdapterIdleState @ 0x1C003F900
 * Callers:
 *     <none>
 * Callees:
 *     StorUpdateCrashDumpPowerReady @ 0x1C0011C18 (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003621C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003DA68 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 */

NTSTATUS __fastcall StorPortAdapterIdleState(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // edi
  unsigned __int64 v6; // rcx
  bool v7; // sf
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // eax
  NTSTATUS result; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v3 = a3;
  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      a1,
      &EventAdapterIdleStateStart,
      a3,
      **(_QWORD **)(a1 + 5088),
      *(_DWORD *)(a1 + 56),
      a2,
      a3);
  if ( v3 )
  {
    v7 = *(char *)(a1 + 108) < 0;
    v8 = *(_QWORD *)(a1 + 5088);
    *(_QWORD *)(a1 + 5392) = MEMORY[0xFFFFF78000000008];
    v9 = *(_DWORD *)(v8 + 20);
    if ( v7 )
      v10 = v9 | 0x10;
    else
      v10 = v9 & 0xFFFFFFEF;
    *(_DWORD *)(v8 + 20) = v10;
  }
  else
  {
    ++*(_DWORD *)(a1 + 5428);
    if ( *(_QWORD *)(a1 + 5392) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) & 0x10) != 0 || *(char *)(a1 + 108) < 0 )
      {
        v6 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 5392);
        *(_QWORD *)(a1 + 5400) += v6 / 0x2710;
        if ( v6 / 0x2710 >= 0x2710 )
          ++*(_DWORD *)(a1 + 5436);
      }
      *(_QWORD *)(a1 + 5392) = 0LL;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 16LL) = v3;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
  {
    if ( *(_DWORD *)(a1 + 96) && *(_QWORD *)(a1 + 5144) )
      StorUpdateCrashDumpPowerReady(a1);
    RaidAdapterSendPoFxIdleStateToMiniport(a1);
  }
  result = PoFxCompleteIdleState(**(_QWORD **)(a1 + 5088), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0068841 & 1) != 0 )
    {
      LODWORD(v16) = v3;
      LODWORD(v15) = a2;
      LODWORD(v14) = *(_DWORD *)(a1 + 56);
      return McTemplateK0pqqq_EtwWriteTransfer(
               v12,
               &EventAdapterIdleStateStop,
               v13,
               **(_QWORD **)(a1 + 5088),
               v14,
               v15,
               v16);
    }
  }
  return result;
}
