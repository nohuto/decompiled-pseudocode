/*
 * XREFs of _RtlInitializeHeapManager@4 @ 0x4B356A3E
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpHpInitializePerfPolicies@0 @ 0x4B3584BA (_RtlpHpInitializePerfPolicies@0.c)
 *     _RtlpHpOptIntoSegmentHeap@4 @ 0x4B358522 (_RtlpHpOptIntoSegmentHeap@4.c)
 *     _RtlpHpOverrideGCInterval@4 @ 0x4B358711 (_RtlpHpOverrideGCInterval@4.c)
 *     _RtlpGetModifiedProcessCookie@0 @ 0x4B36D769 (_RtlpGetModifiedProcessCookie@0.c)
 *     _RtlHpInitializeHeapManager@0 @ 0x4B37080D (_RtlHpInitializeHeapManager@0.c)
 *     _RtlpInitializeLowFragHeapManager@0 @ 0x4B370FB3 (_RtlpInitializeLowFragHeapManager@0.c)
 *     _RtlHpGlobalsInitialize@0 @ 0x4B375D0E (_RtlHpGlobalsInitialize@0.c)
 */

int __thiscall RtlInitializeHeapManager(void *this)
{
  struct _PEB *v2; // ebx
  void (__thiscall *v3)(_DWORD); // esi
  WORD Subsystem; // ax
  PIMAGE_NT_HEADERS OutHeaders; // [esp+10h] [ebp-8h] BYREF

  RtlHpGlobalsInitialize();
  v2 = NtCurrentPeb();
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || RtlpHpOptIntoSegmentHeap(this) )
  {
    RtlpHpHeapFeatures |= 1u;
    v3 = (void (__thiscall *)(_DWORD))dword_4B3A6D44;
    if ( dword_4B3A6D44
      || (v3 = (void (__thiscall *)(_DWORD))SbSelectProcedure(-1414812757, 0, (int)"kLsE", 1u),
          (dword_4B3A6D44 = (int)v3) != 0) )
    {
      v3(v3);
    }
  }
  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    RtlpHpGCInterval.QuadPart = -10000000LL;
    RtlpHpOverrideGCInterval(this);
  }
  RtlpHpInitializePerfPolicies();
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    RtlpHpHeapFeatures &= ~1u;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      RtlpHeapErrorHandlerThreshold = 2;
    RtlpDisableBreakOnFailureCookie = 0;
  }
  RtlImageNtHeaderEx(3u, v2->ImageBaseAddress, 0LL, &OutHeaders);
  Subsystem = OutHeaders->OptionalHeader.Subsystem;
  if ( (Subsystem == 1 || Subsystem == 2 || Subsystem == 3) && OutHeaders->OptionalHeader.MajorSubsystemVersion >= 6u )
    RtlpDisableBreakOnFailureCookie = _bittest(&RtlHeapProcessFlags, 0xCu) || (RtlpDisableHeapLookaside & 1) != 0
                                    ? RtlpDisableBreakOnFailureCookie
                                    : 0;
  v2->NumberOfHeaps = 0;
  v2->MaximumNumberOfHeaps = 16;
  v2->ProcessHeaps = (void **)&RtlpProcessHeapsListBuffer;
  RtlInitializeCriticalSectionEx(&RtlpProcessHeapsListLock, 0, 0x10000000u);
  RtlpHeapGenerateRandomValue32();
  RtlpHeapKey = RtlpHeapGenerateRandomValue32();
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024;
  }
  RtlpInitializeLowFragHeapManager();
  return RtlHpInitializeHeapManager();
}
