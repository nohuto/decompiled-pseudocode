/*
 * XREFs of ?CheckSetWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAA_NXZ @ 0x1800736A0
 * Callers:
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x180073964 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::CheckSetWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  int v1; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 338);
  if ( (v1 & 8) != 0 )
    return 0;
  v4 = -100000000LL;
  *((_DWORD *)this + 338) = v1 | 8;
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)this + 8LL))(this);
  TpSetTimer(*((_QWORD *)this + 168), &v4, 0LL, 1000LL);
  return 1;
}
