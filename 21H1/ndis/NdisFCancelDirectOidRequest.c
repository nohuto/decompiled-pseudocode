/*
 * XREFs of NdisFCancelDirectOidRequest @ 0x1C00AE420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFCancelDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD v2[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v3; // [rsp+50h] [rbp-28h]
  __int64 v4; // [rsp+60h] [rbp-18h]

  v2[0] = 0LL;
  v2[2] = 0LL;
  v3 = 0LL;
  v2[1] = NdisFilterHandle;
  v2[3] = RequestId;
  v4 = 0LL;
  KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFCancelDirectOidRequestInternal, v2, 0x4CCCuLL, 0, 0LL);
}
