/*
 * XREFs of ExpDereferenceHost @ 0x140956CBC
 * Callers:
 *     ExRegisterExtension @ 0x14079DA00 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14079DC20 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140956BD0 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
