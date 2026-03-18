/*
 * XREFs of HalpUnmapVirtualAddress @ 0x1403BF310
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140213908 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x140213AC0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140213C5C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x140215144 (HalpAcpiCheckAndMapTable.c)
 *     HalpHpetDiscover @ 0x1403BD8C8 (HalpHpetDiscover.c)
 *     HalUnmapIoSpace @ 0x140522980 (HalUnmapIoSpace.c)
 *     HalpSfiTimerInitialize @ 0x140522BA0 (HalpSfiTimerInitialize.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14052448C (HalpUsbLegacyStopOhciInterrupt.c)
 *     WdHwDestroyHardwareRegister @ 0x14052CB50 (WdHwDestroyHardwareRegister.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405370FC (HalpIvtProcessDrhdEntry.c)
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A62018 (HalpCheckLowMemoryPreSleep.c)
 *     HalpAcpiTableCacheInit @ 0x140AF9A94 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x1403BF630 (HalpFlushTLB.c)
 */

char *__fastcall HalpUnmapVirtualAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rcx

  result = (char *)((unsigned __int64)(unsigned int)a2 << 12);
  v5 = (unsigned __int64)&result[a1 - 1];
  v6 = (unsigned int)a2;
  if ( a1 >= HalpOriginalHeapStart && v5 >= a1 && v5 <= HalpOriginalHeapEnd )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = (_QWORD *)(8 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    result = (char *)v7;
    if ( (_DWORD)a2 )
    {
      do
      {
        *v8 = 0LL;
        if ( (_BYTE)a3 )
          __invlpg(result);
        result += 4096;
        ++v8;
        --v6;
      }
      while ( v6 );
    }
    if ( !(_BYTE)a3 )
      result = (char *)HalpFlushTLB(v8, a2, a3, v6);
    if ( HalpHeapStart > v7 )
      HalpHeapStart = v7;
  }
  return result;
}
