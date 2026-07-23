/*
 * XREFs of RtlInitializeHeapManager @ 0x1800F2654
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1E80 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000A068 (RtlpHeapGenerateRandomValue64.c)
 *     RtlInitializeCriticalSectionEx @ 0x180020BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlGetNtProductType @ 0x18003CBB0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18003CC10 (RtlGetSuiteMask.c)
 *     SbSelectProcedure @ 0x18003E0E0 (SbSelectProcedure.c)
 *     RtlQueryResourcePolicy @ 0x180044700 (RtlQueryResourcePolicy.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800F44C8 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F4708 (RtlpHpOverrideGCInterval.c)
 *     RtlpGetModifiedProcessCookie @ 0x1801081C8 (RtlpGetModifiedProcessCookie.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010B9D4 (RtlpInitializeLowFragHeapManager.c)
 */

__int64 __fastcall RtlInitializeHeapManager(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _PEB *v7; // rdi
  void (*v8)(void); // rax
  int v9; // eax
  BOOLEAN v10; // bl
  int ResourcePolicy; // eax
  int v12; // eax
  int v13; // ecx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF
  int v20; // [rsp+40h] [rbp+18h] BYREF

  RtlpHpHeapGlobals = 0LL;
  qword_18016A690 = 0LL;
  xmmword_18016A670 = 0LL;
  unk_18016A680 = 0LL;
  *(_QWORD *)&RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64(a1, a2, a3);
  *((_QWORD *)&RtlpHpHeapGlobals + 1) = RtlpHeapGenerateRandomValue64(v5, v4, v6);
  *(_QWORD *)&xmmword_18016A670 = &RtlpHeapFailureInfo;
  v7 = NtCurrentPeb();
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) != 0 || (unsigned int)RtlpHpOptIntoSegmentHeap(a1) )
  {
    RtlpHpHeapFeatures |= 1u;
    v8 = (void (*)(void))qword_18016DB68;
    if ( qword_18016DB68
      || (v8 = (void (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 1u),
          (qword_18016DB68 = (__int64)v8) != 0) )
    {
      v8();
    }
  }
  v9 = RtlpHpLfhPerfFlags;
  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 )
  {
    RtlpHpGCInterval.QuadPart = -10000000LL;
    RtlpHpOverrideGCInterval(a1);
    v9 = RtlpHpLfhPerfFlags;
  }
  RtlpHpLfhPerfFlags = v9 | 0x9C;
  v10 = RtlGetNtProductType(&NtProductType);
  ResourcePolicy = RtlQueryResourcePolicy(0, 0, (__int64)&v20, 4LL);
  if ( v10 && NtProductType != NtProductWinNt || ResourcePolicy >= 0 && v20 > 10 )
  {
    RtlpHpLfhPerfFlags |= 0x63u;
    RtlpHpGCInterval.QuadPart = -10000000LL;
  }
  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    RtlpHpHeapFeatures &= ~1u;
  RtlpDisableBreakOnFailureCookie = RtlpGetModifiedProcessCookie();
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100000) != 0 )
  {
    v12 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold <= 1 )
      v12 = 2;
    v13 = 0;
    RtlpHeapErrorHandlerThreshold = v12;
  }
  else
  {
    v13 = RtlpDisableBreakOnFailureCookie;
  }
  v14 = RtlpDisableHeapLookaside & 1;
  v7->MaximumNumberOfHeaps = 16;
  v7->NumberOfHeaps = 0;
  RtlpDisableBreakOnFailureCookie = v14 != 0 ? v13 : 0;
  v7->ProcessHeaps = (void **)&RtlpProcessHeapsListBuffer;
  RtlInitializeCriticalSectionEx(&RtlpProcessHeapsListLock, 0, 0x10000000u);
  RtlpHeapKey = RtlpHeapGenerateRandomValue64(v16, v15, v17);
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    RtlpLowFragHeapGlobalFlags |= 4u;
    RtlpLargestLfhBlock = 1024LL;
  }
  RtlpInitializeLowFragHeapManager();
  return RtlHpInitializeHeapManager();
}
