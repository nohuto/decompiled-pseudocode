/*
 * XREFs of PnpIrpQueryID @ 0x14072C8E0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x14072C7E0 (PnpQueryID.c)
 *     PpProfileCommitTransitioningDock @ 0x1408A70BC (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408A720C (PpProfileIncludeInHardwareProfileTransition.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(struct _DEVICE_OBJECT *a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  _DWORD v7[20]; // [rsp+30h] [rbp-58h] BYREF

  *a3 = 0LL;
  memset(v7, 0, 0x48uLL);
  v7[2] = a2;
  LOWORD(v7[0]) = 4891;
  result = IopSynchronousCall(a1, (__int64)v7, -1073741637, 0LL, a3);
  if ( (int)result < 0 )
  {
    *a3 = 0LL;
  }
  else if ( !*a3 )
  {
    return 3221225659LL;
  }
  return result;
}
