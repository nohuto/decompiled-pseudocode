/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0013978
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C001304C (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00112F8 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, __int64 a2, int a3)
{
  char v3; // di
  LARGE_INTEGER PerformanceCounter; // rax
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax

  v3 = a2;
  if ( *((_DWORD *)a1 + 244) >= 0x80u )
    VidSchiFlushGpuWorkEntries(a1, a2, a3);
  if ( *((_QWORD *)a1 + 123)
    || (v6 = operator new[](0x400uLL, 0x61616956u, (POOL_TYPE)512), (*((_QWORD *)a1 + 123) = v6) != 0LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( !v3 )
      PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
    *(LARGE_INTEGER *)(*((_QWORD *)a1 + 123) + 8LL * (unsigned int)(*((_DWORD *)a1 + 244))++) = PerformanceCounter;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7, v9);
    WdLogEvent5_WdAssertion(v10);
  }
}
