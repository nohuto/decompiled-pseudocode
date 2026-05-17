/*
 * XREFs of _RtlGuardCheckImageBase@8 @ 0x4B2BC5F3
 * Callers:
 *     _LdrpResolveForwarder@16 @ 0x4B2ED6C1 (_LdrpResolveForwarder@16.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 * Callees:
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 */

int __fastcall RtlGuardCheckImageBase(unsigned int a1)
{
  int result; // eax
  int v3; // [esp+10h] [ebp-10h] BYREF
  int v4; // [esp+14h] [ebp-Ch]
  int v5; // [esp+18h] [ebp-8h]
  int v6; // [esp+1Ch] [ebp-4h]

  result = LdrControlFlowGuardEnforced();
  if ( result )
  {
    if ( a1 < dword_4B3A9374[0]
      || (result = dword_4B3A9374[0] + dword_4B3A9378[0], a1 >= dword_4B3A9374[0] + dword_4B3A9378[0]) )
    {
      result = RtlpxLookupFunctionTable(a1, &v3);
    }
    else
    {
      v3 = dword_4B3A9370[0];
      v4 = dword_4B3A9370[1];
      v5 = dword_4B3A9370[2];
      v6 = dword_4B3A9370[3];
    }
    if ( v4 != a1 )
      __fastfail(0x18u);
  }
  return result;
}
