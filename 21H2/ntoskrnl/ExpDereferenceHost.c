/*
 * XREFs of ExpDereferenceHost @ 0x140956AEC
 * Callers:
 *     ExRegisterExtension @ 0x14079D800 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14079DA20 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140956A00 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
