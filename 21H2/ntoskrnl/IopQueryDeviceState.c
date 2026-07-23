/*
 * XREFs of IopQueryDeviceState @ 0x140749DEC
 * Callers:
 *     PiRestartRemovalRelations @ 0x14073374C (PiRestartRemovalRelations.c)
 *     PiProcessQueryDeviceState @ 0x140749BFC (PiProcessQueryDeviceState.c)
 *     PiProcessCanceledRemoveForReset @ 0x1408B9038 (PiProcessCanceledRemoveForReset.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDeviceState(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0LL;
  memset(v5, 0, 0x48uLL);
  v5[0] = 5147;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, &v6);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}
