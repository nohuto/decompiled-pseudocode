/*
 * XREFs of ExpDereferenceHost @ 0x14095210C
 * Callers:
 *     ExRegisterExtension @ 0x1407A6A00 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407A6C20 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140952020 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
