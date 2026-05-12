/*
 * XREFs of RaidGetD3ColdCapability @ 0x1C003EE18
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 *     RaUnitStartDeviceIrp @ 0x1C00747FC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RaidGetD3ColdCapability(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD, char *); // rax
  char v2; // bl
  int v3; // eax
  char v4; // cl
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__int64 (__fastcall **)(_QWORD, char *))(a1 + 48);
  v2 = 0;
  v6 = 0;
  if ( v1 )
  {
    v3 = v1(*(_QWORD *)(a1 + 8), &v6);
    v4 = v6;
    if ( v3 < 0 )
      return 0;
    return v4;
  }
  return v2;
}
