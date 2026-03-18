/*
 * XREFs of HalpUnmapVirtualAddress @ 0x1403B75C0
 * Callers:
 *     HalpAcpiGetRsdt @ 0x1402F8608 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x1402F87C0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x1402F895C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x1402F8C98 (HalpAcpiCheckAndMapTable.c)
 *     HalpHpetDiscover @ 0x1403A7DDC (HalpHpetDiscover.c)
 *     HalUnmapIoSpace @ 0x1404D0230 (HalUnmapIoSpace.c)
 *     HalpSfiTimerInitialize @ 0x1404D0450 (HalpSfiTimerInitialize.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1404D1F6C (HalpUsbLegacyStopOhciInterrupt.c)
 *     WdHwDestroyHardwareRegister @ 0x1404D9004 (WdHwDestroyHardwareRegister.c)
 *     HalpIvtProcessDrhdEntry @ 0x1404E1D7C (HalpIvtProcessDrhdEntry.c)
 *     HalpAcpiPostSleep @ 0x14099138C (HalpAcpiPostSleep.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A442C (HalpCheckLowMemoryPreSleep.c)
 *     HalpAcpiTableCacheInit @ 0x140A5CC70 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x1403B78E0 (HalpFlushTLB.c)
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
