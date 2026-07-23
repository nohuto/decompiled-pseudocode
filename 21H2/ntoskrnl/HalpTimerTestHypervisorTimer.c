/*
 * XREFs of HalpTimerTestHypervisorTimer @ 0x1404C1D6C
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8E94 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     HalpSetTimer @ 0x1402F2BCC (HalpSetTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x1403A27FC (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpTimerUnmapInterrupt @ 0x1404C07C8 (HalpTimerUnmapInterrupt.c)
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
  int v13; // eax
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  while ( 1 )
  {
    v16 = 0LL;
    *((_QWORD *)&v15 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    *(_QWORD *)&v15 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v6 = HalpTimerConfigureInterrupt(a1, 0xFBu, 15, a4, -1LL, 0, &v15, (__int64)xHalQueryIoPortAccessSupported);
    if ( v6 < 0 )
      break;
    *(_DWORD *)(a1 + 64) = 0;
    HalpInterruptSetIdtEntry(0xFBu, (int)HalpTimerHypervisorInterruptStub, 15, v7, -1LL);
    v8 = 0;
    while ( 1 )
    {
      v6 = HalpSetTimer(a1, 3u, 0x2710uLL, 1, &v16);
      if ( v6 >= 0 )
        break;
      if ( (unsigned int)++v8 >= 0xA )
      {
        (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 72));
        HalpInterruptSetIdtEntry(0xFBu, (int)xHalQueryIoPortAccessSupported, 15, v9, -1LL);
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
    HalpInterruptSetIdtEntry(0xFBu, (int)xHalQueryIoPortAccessSupported, 15, v12, -1LL);
    v13 = *(_DWORD *)(a1 + 184) & 0x10;
    if ( v10 )
    {
      v6 = 0;
      *a2 = v13 != 0;
      break;
    }
    if ( !v13 || (*(_DWORD *)(a1 + 224) & 0xB00) == 0 )
    {
      v6 = -1073741823;
      break;
    }
    HalpTimerUnmapInterrupt(a1, 251, 0, 0);
    *(_DWORD *)(a1 + 224) &= ~0x400u;
  }
LABEL_17:
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
    HalpTimerUnmapInterrupt(a1, 251, 0, 0);
  return (unsigned int)v6;
}
