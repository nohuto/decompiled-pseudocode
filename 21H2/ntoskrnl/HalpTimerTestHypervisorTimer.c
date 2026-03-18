/*
 * XREFs of HalpTimerTestHypervisorTimer @ 0x14050E088
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403BACF8 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     HalpSetTimer @ 0x140354420 (HalpSetTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x1403AEF08 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpTimerUnmapInterrupt @ 0x14050D048 (HalpTimerUnmapInterrupt.c)
 */

__int64 __fastcall HalpTimerTestHypervisorTimer(__int64 a1, bool *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  __int64 v7; // r9
  int v8; // esi
  __int64 v9; // r9
  char v10; // si
  unsigned int v11; // edi
  __int64 v12; // r9
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  while ( 1 )
  {
    v15 = 0LL;
    *((_QWORD *)&v14 + 1) = (unsigned __int16)(KiProcessorIndexToNumberMappingTable[0] >> 6);
    *(_QWORD *)&v14 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v6 = HalpTimerConfigureInterrupt(a1, 0xD4u, 15, a4, -1LL, 0, &v14, (__int64)xHalQueryIoPortAccessSupported);
    if ( v6 < 0 )
      break;
    *(_DWORD *)(a1 + 64) = 0;
    HalpInterruptSetIdtEntry(0xD4u, (int)HalpTimerHypervisorInterruptStub, 15, v7, -1LL);
    v8 = 0;
    while ( 1 )
    {
      v6 = HalpSetTimer(a1, 3u, 0x2710uLL, 1, &v15);
      if ( v6 >= 0 )
        break;
      if ( (unsigned int)++v8 >= 0xA )
      {
        (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 72));
        HalpInterruptSetIdtEntry(0xD4u, (int)xHalQueryIoPortAccessSupported, 15, v9, -1LL);
        goto LABEL_17;
      }
    }
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      KeStallExecutionProcessor(0x3E8u);
      ++v11;
      if ( *(_DWORD *)(a1 + 64) )
        break;
      if ( v11 >= 0x64 )
        goto LABEL_11;
    }
    v10 = 1;
LABEL_11:
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 72));
    HalpInterruptSetIdtEntry(0xD4u, (int)xHalQueryIoPortAccessSupported, 15, v12, -1LL);
    if ( v10 )
    {
      *a2 = (*(_DWORD *)(a1 + 184) & 0x10) != 0;
      v6 = 0;
      break;
    }
    if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 || (*(_DWORD *)(a1 + 224) & 0xB00) == 0 )
    {
      v6 = -1073741823;
      break;
    }
    HalpTimerUnmapInterrupt((_DWORD *)a1, 212, 0, 0);
    *(_DWORD *)(a1 + 224) &= ~0x400u;
  }
LABEL_17:
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
    HalpTimerUnmapInterrupt((_DWORD *)a1, 212, 0, 0);
  return (unsigned int)v6;
}
