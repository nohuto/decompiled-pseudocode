/*
 * XREFs of MiInitializeBootDefaults @ 0x140B2DC08
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  int v6; // eax

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_140C53445 = 1;
    dword_140D051BC = 0;
    MEMORY[0xFFFFF780000002EC] = 1;
  }
  else
  {
    v1 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v3, MmPageValidationFrequency) )
      v1 = 1 << v3;
    MmPageValidationFrequency = v1;
    if ( v1 )
    {
      MiFlags |= 0x80u;
      MmPageValidationFrequency = v1 - 1;
    }
    if ( MmVerifierData )
    {
      v6 = MiFlags | 1;
      MiFlags |= 1u;
      if ( KernelVerifier )
        MiFlags = v6 | 2;
    }
    if ( MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
    if ( (MiFlags & 1) != 0 && (VfRuleClasses & 0x400000) == 0 )
    {
      MmLargePageDriverBufferLength = -1;
      MmProtectFreedNonPagedPool = 1;
    }
  }
  v4 = MiFlags | 8;
  MiFlags |= 8u;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v4 | 0x40;
  stru_140C52E20.TargetInfoAsUlong = 275;
  stru_140C52E20.DeferredRoutine = (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch;
  stru_140C52E20.DeferredContext = 0LL;
  qword_140C50660 = (__int64)&qword_140C50658;
  qword_140C50658 = (__int64)&qword_140C50658;
  qword_140C50650 = -10000000LL * dword_140D051D4;
  stru_140C52E20.DpcData = 0LL;
  stru_140C52E20.ProcessorHistory = 0LL;
  qword_140C4F490 = 0LL;
  qword_140C4F508 = 0LL;
  dword_140C52B6C = 5;
  qword_140C52B80 = 0LL;
  SpinLock = 0LL;
  BugCheckParameter2 = 0LL;
  qword_140C4F128 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140C4F128 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
