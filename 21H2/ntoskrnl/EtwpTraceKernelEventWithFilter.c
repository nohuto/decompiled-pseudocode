/*
 * XREFs of EtwpTraceKernelEventWithFilter @ 0x14062FC2C
 * Callers:
 *     EtwTraceObjectOperation @ 0x14062DD68 (EtwTraceObjectOperation.c)
 *     EtwTraceDuplicateHandle @ 0x1409E1FA0 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1409E2AC8 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1409E3B48 (EtwpTraceHandle.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpTraceKernelEventWithFilter(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  bool i; // zf

  v8 = a3 & *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&a3, v8); !i; i = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    EtwpLogKernelEvent(a1, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4232), a2, a4, a5);
  }
}
