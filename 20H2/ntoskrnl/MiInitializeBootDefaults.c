/*
 * XREFs of MiInitializeBootDefaults @ 0x140A7468C
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     strstr @ 0x1403D0F10 (strstr.c)
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
    byte_140C4ED5D = 1;
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
  stru_140C4E848.TargetInfoAsUlong = 275;
  stru_140C4E848.DeferredRoutine = (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch;
  stru_140C4E848.DeferredContext = 0LL;
  qword_140C4DCB0 = (__int64)&qword_140C4DCA8;
  qword_140C4DCA8 = (__int64)&qword_140C4DCA8;
  qword_140C4DCA0 = -10000000LL * dword_140CFB194;
  stru_140C4E848.DpcData = 0LL;
  stru_140C4E848.ProcessorHistory = 0LL;
  qword_140C4CB50 = 0LL;
  qword_140C4CBD8 = 0LL;
  dword_140C4E6AC = 5;
  qword_140C4E6C0 = 0LL;
  qword_140C4ECC0 = 0LL;
  qword_140C4C810 = 0LL;
  qword_140C4C828 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140C4C828 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
