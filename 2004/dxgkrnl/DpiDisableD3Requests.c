/*
 * XREFs of DpiDisableD3Requests @ 0x1C0169D94
 * Callers:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001E3D4 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     DpiRequestDevicePowerState @ 0x1C00509A4 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDisableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(result + 4080));
  return result;
}
