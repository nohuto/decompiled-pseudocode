/*
 * XREFs of PnpIrpQueryID @ 0x14075F970
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x14075F870 (PnpQueryID.c)
 *     PpProfileCommitTransitioningDock @ 0x1408ADF0C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1408AE05C (PpProfileIncludeInHardwareProfileTransition.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     IopSynchronousCall @ 0x1405DD164 (IopSynchronousCall.c)
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
