/*
 * XREFs of _NtReplyWaitReceivePortEx@20 @ 0x4B2F2C30
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtReplyWaitReceivePortEx(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
