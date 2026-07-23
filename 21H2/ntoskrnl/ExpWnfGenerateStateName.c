/*
 * XREFs of ExpWnfGenerateStateName @ 0x14069D860
 * Callers:
 *     NtCreateWnfStateName @ 0x14069D180 (NtCreateWnfStateName.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407333C4 (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(__int64 *a1, int a2, int a3, char a4)
{
  char v5; // si
  __int64 CurrentServerSilo; // rbx
  volatile signed __int64 *CurrentServerSiloGlobals; // rax
  __int64 v10; // r8
  signed __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  signed __int64 v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v17[0] = 0LL;
  v5 = a3;
  if ( (unsigned int)(a3 - 4) > 1 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    CurrentServerSiloGlobals = (volatile signed __int64 *)PsGetCurrentServerSiloGlobals(v16, v15);
  }
  else
  {
    CurrentServerSilo = HalSystemVectorDispatchEntry();
    CurrentServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(CurrentServerSilo);
  }
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = ExpWnfAllocateNextPersistentNameSequence(CurrentServerSilo, v17, v10, CurrentServerSiloGlobals + 114);
    if ( (int)result < 0 )
      return result;
    v13 = v17[0];
  }
  else
  {
    do
    {
      v11 = _InterlockedExchangeAdd64(CurrentServerSiloGlobals + 120, 1uLL);
      v12 = v11 == -1;
      v13 = v11 + 1;
      v17[0] = v13;
    }
    while ( v12 );
  }
  if ( (v13 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = (16 * ((v13 << 7) | a2 & 3)) | (a4 != 0 ? 0x400 : 0) | ((v5 & 0xF) << 6) & 0x7FEu | 1;
  return 0LL;
}
