/*
 * XREFs of HalpUnmapVirtualAddress @ 0x1403BAE90
 * Callers:
 *     HalpAcpiGetRsdt @ 0x14025EE38 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x14025EFF0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14025F18C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x14025FC74 (HalpAcpiCheckAndMapTable.c)
 *     HalpHpetDiscover @ 0x1403B148C (HalpHpetDiscover.c)
 *     HalUnmapIoSpace @ 0x1404D3C80 (HalUnmapIoSpace.c)
 *     HalpSfiTimerInitialize @ 0x1404D3EA0 (HalpSfiTimerInitialize.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1404D59AC (HalpUsbLegacyStopOhciInterrupt.c)
 *     WdHwDestroyHardwareRegister @ 0x1404DCAA4 (WdHwDestroyHardwareRegister.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E58CC (HalpIvtProcessDrhdEntry.c)
 *     HalpAcpiPostSleep @ 0x14099833C (HalpAcpiPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409AB1CC (HalpCheckLowMemoryPreSleep.c)
 *     HalpAcpiTableCacheInit @ 0x140A63070 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x1403BB1B0 (HalpFlushTLB.c)
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
