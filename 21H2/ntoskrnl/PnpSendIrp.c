/*
 * XREFs of PnpSendIrp @ 0x1402D2F74
 * Callers:
 *     PnpStartDevice @ 0x1402D2478 (PnpStartDevice.c)
 *     PnpGetRelatedTargetDevice @ 0x1402D2E74 (PnpGetRelatedTargetDevice.c)
 *     PnpQueryDeviceRelations @ 0x14074C534 (PnpQueryDeviceRelations.c)
 * Callees:
 *     PnpSetDeviceAffinityThread @ 0x1402D301C (PnpSetDeviceAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PnpAsynchronousCall @ 0x14074C5A8 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpSendIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  PreviousAffinity = 0LL;
  v8 = PnpSetDeviceAffinityThread(a1, &PreviousAffinity);
  if ( a4 )
    v9 = PnpAsynchronousCall(a1, a2, a4, a5);
  else
    v9 = IopSynchronousCall(a1, a2, -1073741637, 0, a5);
  v10 = v9;
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
