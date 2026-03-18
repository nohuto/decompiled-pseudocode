/*
 * XREFs of MiDereferenceEnclaveModule @ 0x1408CE5AC
 * Callers:
 *     MiFreeEnclaveModules @ 0x1408CE5D0 (MiFreeEnclaveModules.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceEnclaveModule(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 8, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
