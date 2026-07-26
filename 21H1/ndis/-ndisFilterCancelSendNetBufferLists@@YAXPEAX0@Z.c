/*
 * XREFs of ?ndisFilterCancelSendNetBufferLists@@YAXPEAX0@Z @ 0x1C0067F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFilterCancelSendNetBufferLists(void *a1, void *a2)
{
  _QWORD v2[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v3; // [rsp+50h] [rbp-28h]
  __int64 v4; // [rsp+60h] [rbp-18h]

  v2[0] = 0LL;
  v2[2] = 0LL;
  v3 = 0LL;
  v2[1] = a1;
  v2[3] = a2;
  v4 = 0LL;
  KeExpandKernelStackAndCalloutEx(ndisFilterCancelSendNetBufferListsInternal, v2, 0x4CCCuLL, 0, 0LL);
}
