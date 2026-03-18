/*
 * XREFs of MiDereferenceEnclaveModule @ 0x1408D573C
 * Callers:
 *     MiFreeEnclaveModules @ 0x1408D5760 (MiFreeEnclaveModules.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
