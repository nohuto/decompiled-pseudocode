/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C000F16C
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000ED88 (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013ABC (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, char a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  if ( *((_DWORD *)a1 + 244) >= 0x80u )
    VidSchiFlushGpuWorkEntries(a1);
  if ( *((_QWORD *)a1 + 123)
    || (v5 = operator new[](0x400uLL, 0x61616956u, (POOL_TYPE)512), (*((_QWORD *)a1 + 123) = v5) != 0LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( !a2 )
      PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
    *(LARGE_INTEGER *)(*((_QWORD *)a1 + 123) + 8LL * (unsigned int)(*((_DWORD *)a1 + 244))++) = PerformanceCounter;
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6, v8);
    WdLogEvent5_WdAssertion(v9);
  }
}
