/*
 * XREFs of ExpDereferenceHost @ 0x1409534AC
 * Callers:
 *     ExRegisterExtension @ 0x140799A30 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140799C50 (ExRegisterHost.c)
 *     ExUnregisterExtension @ 0x1409533C0 (ExUnregisterExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDereferenceHost(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
