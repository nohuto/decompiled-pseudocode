/*
 * XREFs of ExAtsDevicePowerCallback @ 0x14063E880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExAtsDevicePowerCallback(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a3;
  LOBYTE(a3) = a2 == 1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(HalIommuDispatch + 128))(0LL, v3, a3);
}
