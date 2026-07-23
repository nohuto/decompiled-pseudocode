/*
 * XREFs of MiInitializeBootDefaults @ 0x140A7260C
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
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
    byte_140C4EF1D = 1;
    dword_140CFB17C = 0;
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
      if ( KernelVerifier == 1 )
        MiFlags = v6 | 2;
    }
    if ( MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
    if ( (MiFlags & 1) != 0 && (MmVerifierData & 0x400000) == 0 )
    {
      MmLargePageDriverBufferLength = -1;
      MmProtectFreedNonPagedPool = 1;
    }
  }
  v4 = MiFlags | 8;
  MiFlags |= 8u;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v4 | 0x40;
  Dpc.TargetInfoAsUlong = 275;
  Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch;
  Dpc.DeferredContext = 0LL;
  qword_140C4DE70 = (__int64)&qword_140C4DE68;
  qword_140C4DE68 = (__int64)&qword_140C4DE68;
  qword_140C4DE60 = -10000000LL * dword_140CFB194;
  Dpc.DpcData = 0LL;
  Dpc.ProcessorHistory = 0LL;
  qword_140C4CD10 = 0LL;
  qword_140C4CD98 = 0LL;
  dword_140C4E86C = 5;
  qword_140C4E880 = 0LL;
  SpinLock = 0LL;
  qword_140C4C9D0 = 0LL;
  qword_140C4C9E8 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140C4C9E8 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
