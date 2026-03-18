/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x1402A8CA4
 * Callers:
 *     EtwpTraceImageUnload @ 0x1402A8D68 (EtwpTraceImageUnload.c)
 *     EtwpTraceIo @ 0x1403B43D0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403B4CC0 (EtwpTraceFileName.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A18A0 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1405A192C (EtwTraceAutoBoostSetFloor.c)
 *     EtwTracePageFault @ 0x1405A1F6C (EtwTracePageFault.c)
 *     EtwTraceReadyThread @ 0x1405A23B0 (EtwTraceReadyThread.c)
 *     EtwpProfileInterrupt @ 0x1405A35F0 (EtwpProfileInterrupt.c)
 *     EtwpTraceFileIo @ 0x1405A3D20 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1405A3E70 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405A4400 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405A4740 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405A47E0 (PerfInfoLogSysCallExit.c)
 *     EtwpWriteProcessEvent @ 0x1405D85C4 (EtwpWriteProcessEvent.c)
 *     PerfLogImageLoad @ 0x1406387BC (PerfLogImageLoad.c)
 *     EtwTraceThread @ 0x140700C44 (EtwTraceThread.c)
 *     EtwpLogProcessPerfCtrs @ 0x14093256C (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409332E8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409333F4 (PerfInfoLogVirtualFree.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwTraceSiloKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebx
  bool v11; // zf
  unsigned int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ecx

  v9 = a4;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4224);
  while ( 1 )
  {
    v11 = !_BitScanForward(&v12, v10);
    if ( v11 )
      break;
    v10 &= v10 - 1;
    v13 = v12;
    v14 = 32LL * v12 + EtwpHostSiloState + 4260;
    if ( v14 )
    {
      if ( ((unsigned int)v9 & *(_DWORD *)(v14 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
        EtwpLogKernelEvent(a2, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4208), a3, a5, a6);
    }
  }
  if ( a1 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 864LL);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 4224);
      while ( 1 )
      {
        v11 = !_BitScanForward(&v19, v16);
        if ( v11 )
          break;
        v17 = v19;
        v16 &= v16 - 1;
        v18 = 32LL * v19 + v15 + 4260;
        if ( v18 && ((unsigned int)v9 & *(_DWORD *)(v18 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
          EtwpLogKernelEvent(a2, v15, *(unsigned __int8 *)(v15 + 2 * v17 + 4208), a3, a5, a6);
      }
    }
  }
}
