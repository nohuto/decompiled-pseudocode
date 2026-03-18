/*
 * XREFs of ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0011148
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000F070 (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0017B68 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiAddGpuWorkEntry(struct _VIDSCH_CONTEXT *a1, char a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v5; // rax

  if ( *((_DWORD *)a1 + 246) >= 0x80u )
    VidSchiFlushGpuWorkEntries(a1);
  if ( *((_QWORD *)a1 + 124) || (v5 = operator new[](1024LL, 0x61616956u, 64LL), (*((_QWORD *)a1 + 124) = v5) != 0LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( !a2 )
      PerformanceCounter.QuadPart |= 0x8000000000000000uLL;
    *(LARGE_INTEGER *)(*((_QWORD *)a1 + 124) + 8LL * (unsigned int)(*((_DWORD *)a1 + 246))++) = PerformanceCounter;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate GpuWorkRecords for long haul logging",
      458LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
