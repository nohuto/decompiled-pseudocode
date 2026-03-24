/*
 * XREFs of EtwTraceSiloKernelEvent @ 0x14025A84C
 * Callers:
 *     EtwpTraceImageUnload @ 0x14025A6BC (EtwpTraceImageUnload.c)
 *     EtwpTraceIo @ 0x1403B85F0 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x1403B8EE0 (EtwpTraceFileName.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A7460 (EtwTraceAutoBoostClearFloor.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1405A74EC (EtwTraceAutoBoostSetFloor.c)
 *     EtwTracePageFault @ 0x1405A7B2C (EtwTracePageFault.c)
 *     EtwTraceReadyThread @ 0x1405A7F70 (EtwTraceReadyThread.c)
 *     EtwpProfileInterrupt @ 0x1405A91B0 (EtwpProfileInterrupt.c)
 *     EtwpTraceFileIo @ 0x1405A98E0 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1405A9A30 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405A9FC0 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1405AA300 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405AA3A0 (PerfInfoLogSysCallExit.c)
 *     EtwpWriteProcessEvent @ 0x140602B04 (EtwpWriteProcessEvent.c)
 *     PerfLogImageLoad @ 0x14061A978 (PerfLogImageLoad.c)
 *     EtwTraceThread @ 0x14062955C (EtwTraceThread.c)
 *     EtwpLogProcessPerfCtrs @ 0x140936E18 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x140937B88 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x140937C94 (PerfInfoLogVirtualFree.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceSiloKernelEvent(__int64 a1, int a2, int a3, unsigned int a4, __int16 a5, int a6)
{
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // ebx
  bool v12; // zf
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ecx

  result = EtwpHostSiloState;
  v10 = a4;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4224);
  while ( 1 )
  {
    v12 = !_BitScanForward(&v13, v11);
    if ( v12 )
      break;
    v11 &= v11 - 1;
    v14 = v13;
    result = 32LL * v13;
    v15 = result + EtwpHostSiloState + 4260;
    if ( v15 )
    {
      result = v10 >> 29;
      if ( ((unsigned int)v10 & *(_DWORD *)(v15 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
        result = EtwpLogKernelEvent(
                   a2,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4208),
                   a3,
                   a5,
                   a6);
    }
  }
  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 1272);
    v16 = *(_QWORD *)(result + 864);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 4224);
      while ( 1 )
      {
        v12 = !_BitScanForward(&v20, v17);
        if ( v12 )
          break;
        v18 = v20;
        v17 &= v17 - 1;
        result = 32LL * v20;
        v19 = result + v16 + 4260;
        if ( v19 )
        {
          result = v10 >> 29;
          if ( ((unsigned int)v10 & *(_DWORD *)(v19 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
            result = EtwpLogKernelEvent(a2, v16, *(unsigned __int8 *)(v16 + 2 * v18 + 4208), a3, a5, a6);
        }
      }
    }
  }
  return result;
}
