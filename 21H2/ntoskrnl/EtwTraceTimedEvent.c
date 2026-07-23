/*
 * XREFs of EtwTraceTimedEvent @ 0x14022D15C
 * Callers:
 *     KeDisableTimer2 @ 0x14026DE70 (KeDisableTimer2.c)
 *     KiFinalizeTimer2Disablement @ 0x14026E19C (KiFinalizeTimer2Disablement.c)
 *     KiProcessExpiredTimerList @ 0x1402EC2F0 (KiProcessExpiredTimerList.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     IopTimerDispatch @ 0x1405010B0 (IopTimerDispatch.c)
 *     EtwTraceCpuCacheFlush @ 0x1405A77F4 (EtwTraceCpuCacheFlush.c)
 *     EtwpTraceFltTimedIo @ 0x1405A9C20 (EtwpTraceFltTimedIo.c)
 *     PerfInfoLogInterruptHv @ 0x1405AA370 (PerfInfoLogInterruptHv.c)
 *     PerfInfoLogIpiReceive @ 0x1405AA3C0 (PerfInfoLogIpiReceive.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceTimedEvent(__int16 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  bool v9; // zf
  unsigned __int64 i; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+38h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+44h] [rbp-34h]
  __int64 v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+54h] [rbp-24h]

  result = EtwpHostSiloState;
  v16 = a3;
  v17 = a4;
  v18 = 0;
  v8 = *(_DWORD *)(EtwpHostSiloState + 4224);
  v9 = !_BitScanForward((unsigned int *)&a3, v8);
  for ( i = a2; !v9; v9 = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    result = 32 * a3;
    v11 = 32 * a3 + EtwpHostSiloState + 4260;
    if ( v11 )
    {
      result = i >> 29;
      if ( ((unsigned int)i & *(_DWORD *)(v11 + 4 * (i >> 29)) & 0x1FFFFFFF) != 0 )
      {
        v12 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4209);
        v15 = 0;
        v14 = 8;
        v13 = a6 + 8 * (v12 - 1);
        result = EtwpLogKernelEvent(
                   (unsigned int)&v13,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4208),
                   2,
                   a1,
                   a5);
      }
    }
  }
  return result;
}
