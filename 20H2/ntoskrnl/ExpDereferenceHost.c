/*
 * XREFs of ExpDereferenceHost @ 0x14095926C
 * Callers:
 *     ExRegisterExtension @ 0x1407A8D60 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407A8F80 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x140959180 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
