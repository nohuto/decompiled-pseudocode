/*
 * XREFs of UsbhCopyPnpString @ 0x1C005A4F0
 * Callers:
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C00309F4 (UsbhFdoReturnDeviceConfigInfo.c)
 * Callees:
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 */

__int64 __fastcall UsbhCopyPnpString(__int64 a1, __int64 a2)
{
  PVOID PoolWithTag; // rax

  *(_OWORD *)a1 = 0LL;
  if ( *(_QWORD *)(a2 + 8) && *(_DWORD *)(a2 + 4) )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(a2 + 4), 0x42554855u);
    *(_QWORD *)(a1 + 8) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, *(unsigned int *)(a2 + 4));
    if ( !*(_QWORD *)(a1 + 8) )
      return 3221225626LL;
    memmove(*(void **)(a1 + 8), *(const void **)(a2 + 8), *(unsigned int *)(a2 + 4));
  }
  return 0LL;
}
