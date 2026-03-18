/*
 * XREFs of ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C00B0DB0
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B0BE0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x1C0014A2C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_SEGMENT::InitializeForwardProgressMdl(VIDMM_SEGMENT *this)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v5; // rax
  int LogicalMemory; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx

  v2 = operator new(24LL, 0x35336956u, 256LL);
  *((_QWORD *)this + 33) = v2;
  if ( !v2 )
  {
    _InterlockedIncrement(&dword_1C006E804);
    WdLogSingleEntry1(6LL, 681LL);
LABEL_9:
    DxgkLogInternalTriageEvent(v8, 262145LL);
    return (unsigned int)-1073741801;
  }
  *(_QWORD *)(*((_QWORD *)this + 33) + 8LL) = MmAllocatePagesForMdl(
                                                0LL,
                                                *(PHYSICAL_ADDRESS *)((char *)this + 120),
                                                0LL,
                                                0x10000uLL);
  v3 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C006E7D0);
    WdLogSingleEntry1(6LL, 696LL);
    goto LABEL_9;
  }
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v5 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, int))VirtualMemoryInterface + 5))(
         v3,
         0LL,
         2LL,
         0LL,
         0,
         1073741856);
  *((_QWORD *)this + 32) = v5;
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C006E800);
    WdLogSingleEntry1(6LL, 711LL);
    goto LABEL_9;
  }
  LogicalMemory = SysMmAllocateLogicalMemory(
                    *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
                    0x10000LL,
                    *((const void **)this + 33),
                    (void **)this + 61);
  if ( LogicalMemory < 0 )
  {
    _InterlockedIncrement(&dword_1C006E800);
    WdLogSingleEntry1(6LL, 723LL);
    DxgkLogInternalTriageEvent(v9, 262145LL);
  }
  else
  {
    return 0;
  }
  return (unsigned int)LogicalMemory;
}
