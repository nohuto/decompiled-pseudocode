/*
 * XREFs of Endpoint_CreateClearStallContext @ 0x1C0038344
 * Callers:
 *     Endpoint_Create @ 0x1C006B6C8 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Endpoint_CreateClearStallContext(__int64 a1)
{
  __int64 Pool2; // rbx
  int v3; // edi
  PIRP Irp; // rax
  __int128 v6; // [rsp+30h] [rbp-40h] BYREF
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-20h]
  void *v9; // [rsp+60h] [rbp-10h]

  LODWORD(v9) = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 152LL, 1229146200LL);
  if ( Pool2 )
  {
    Irp = IoAllocateIrp(4, 0);
    *(_QWORD *)Pool2 = Irp;
    if ( Irp )
    {
      *(_QWORD *)&v7 = 0LL;
      *((_QWORD *)&v7 + 1) = 0x100000001LL;
      v9 = off_1C0061090;
      v6 = 0LL;
      LODWORD(v6) = 56;
      v8 = 0LL;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64))(WdfFunctions_01023 + 1976))(
             WdfDriverGlobals,
             &v6,
             0LL,
             Pool2 + 144);
      if ( v3 >= 0 )
      {
        *(_QWORD *)(a1 + 264) = Pool2;
        return (unsigned int)v3;
      }
    }
    else
    {
      v3 = -1073741670;
    }
    if ( *(_QWORD *)Pool2 )
    {
      IoFreeIrp(*(PIRP *)Pool2);
      *(_QWORD *)Pool2 = 0LL;
    }
    if ( *(_QWORD *)(Pool2 + 144) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
      *(_QWORD *)(Pool2 + 144) = 0LL;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0x49434858u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v3;
}
