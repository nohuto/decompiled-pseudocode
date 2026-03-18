/*
 * XREFs of HalpHvSetMachineCheckRecoveryState @ 0x14050F040
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x14051C22C (HalpMemoryErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x14051C2D8 (HalpMemoryErrorDeferredRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvSetMachineCheckRecoveryState(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  result = 0LL;
  if ( qword_140C4C510 )
  {
    v3 = a1;
    v2 = 2;
    return ((__int64 (__fastcall *)(int *))qword_140C4C510)(&v2);
  }
  return result;
}
