/*
 * XREFs of Endpoint_CreateClearStallContext @ 0x1C0037544
 * Callers:
 *     Endpoint_Create @ 0x1C006A2E0 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 */

__int64 __fastcall Endpoint_CreateClearStallContext(__int64 a1)
{
  PIRP *PoolWithTag; // rax
  PIRP *v3; // rbx
  int v4; // edi
  PIRP Irp; // rax
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+50h] [rbp-28h]
  void *v10; // [rsp+60h] [rbp-18h]

  v10 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  PoolWithTag = (PIRP *)ExAllocatePoolWithTag(
                          (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                          0x98uLL,
                          0x49434858u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x98uLL);
    Irp = IoAllocateIrp(4, 0);
    *v3 = Irp;
    if ( Irp )
    {
      LODWORD(v7) = 56;
      *((_QWORD *)&v8 + 1) = 0x100000001LL;
      v10 = off_1C0060090;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, PIRP *))(WdfFunctions_01023 + 1976))(
             WdfDriverGlobals,
             &v7,
             0LL,
             v3 + 18);
      if ( v4 >= 0 )
      {
        *(_QWORD *)(a1 + 264) = v3;
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = -1073741670;
    }
    if ( *v3 )
    {
      IoFreeIrp(*v3);
      *v3 = 0LL;
    }
    if ( v3[18] )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
      v3[18] = 0LL;
    }
    ExFreePoolWithTag(v3, 0x49434858u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
