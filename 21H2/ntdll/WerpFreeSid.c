/*
 * XREFs of WerpFreeSid @ 0x1800DDBAC
 * Callers:
 *     SendMessageToWERService @ 0x1800DD47C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD89C (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D9C0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall WerpFreeSid(void *a1)
{
  PVOID v2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  v3 = 12LL;
  if ( a1 )
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v2, &v3, 0x8000u);
  else
    return -1073741811;
}
