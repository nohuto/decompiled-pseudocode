/*
 * XREFs of _WerpFreeSid@8 @ 0x4B33B0D2
 * Callers:
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 *     _WerpAllocateAndInitializeSid@44 @ 0x4B33AE87 (_WerpAllocateAndInitializeSid@44.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __thiscall WerpFreeSid(void *this)
{
  void *v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  v2 = this;
  v3 = 12;
  if ( this )
    return NtFreeVirtualMemory(-1, (int)&v2, (int)&v3, 0x8000);
  else
    return -1073741811;
}
