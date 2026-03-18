/*
 * XREFs of EtwTraceTimedEvent @ 0x14033BE50
 * Callers:
 *     KeDisableTimer2 @ 0x1402755A0 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x140275850 (KiFinalizeTimer2Disablement.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x140281580 (KiProcessExpiredTimerList.c)
 *     HvcallFastExtended @ 0x14038D940 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038DB00 (HvcallInitiateHypercall.c)
 *     IopTimerDispatch @ 0x1404FBCE0 (IopTimerDispatch.c)
 *     EtwTraceCpuCacheFlush @ 0x1405A20F4 (EtwTraceCpuCacheFlush.c)
 *     EtwpTraceFltTimedIo @ 0x1405A4520 (EtwpTraceFltTimedIo.c)
 *     PerfInfoLogInterruptHv @ 0x1405A4C70 (PerfInfoLogInterruptHv.c)
 *     PerfInfoLogIpiReceive @ 0x1405A4CC0 (PerfInfoLogIpiReceive.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall EtwTraceTimedEvent(
        unsigned __int16 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  bool v8; // zf
  unsigned __int64 i; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+44h] [rbp-34h]
  __int64 v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+50h] [rbp-28h]
  int v17; // [rsp+54h] [rbp-24h]

  v15 = a3;
  v16 = a4;
  v17 = 0;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4224);
  v8 = !_BitScanForward((unsigned int *)&a3, v7);
  for ( i = a2; !v8; v8 = !_BitScanForward((unsigned int *)&a3, v7) )
  {
    v7 &= v7 - 1;
    v10 = 32 * a3 + EtwpHostSiloState + 4260;
    if ( v10 )
    {
      if ( ((unsigned int)i & *(_DWORD *)(v10 + 4 * (i >> 29)) & 0x1FFFFFFF) != 0 )
      {
        v11 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4209);
        v14 = 0;
        v13 = 8;
        v12 = a6 + 8 * (v11 - 1);
        EtwpLogKernelEvent(
          (__int64)&v12,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4208),
          2u,
          a1,
          a5);
      }
    }
  }
}
