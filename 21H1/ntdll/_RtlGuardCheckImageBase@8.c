/*
 * XREFs of _RtlGuardCheckImageBase@8 @ 0x4B2BC5F3
 * Callers:
 *     _LdrpResolveForwarder@16 @ 0x4B2ED6C1 (_LdrpResolveForwarder@16.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 * Callees:
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 */

char __thiscall RtlGuardCheckImageBase(PVOID BaseAddress)
{
  int v2; // eax
  PVOID v4; // [esp+14h] [ebp-Ch]

  LOBYTE(v2) = LdrControlFlowGuardEnforced();
  if ( v2 )
  {
    if ( (unsigned int)BaseAddress < dword_4B3A9374[0]
      || (LOBYTE(v2) = LOBYTE(dword_4B3A9374[0]) + LOBYTE(dword_4B3A9378[0]),
          (unsigned int)BaseAddress >= dword_4B3A9374[0] + dword_4B3A9378[0]) )
    {
      LOBYTE(v2) = RtlpxLookupFunctionTable(BaseAddress);
    }
    else
    {
      v4 = (PVOID)dword_4B3A9370[1];
    }
    if ( v4 != BaseAddress )
      __fastfail(0x18u);
  }
  return v2;
}
