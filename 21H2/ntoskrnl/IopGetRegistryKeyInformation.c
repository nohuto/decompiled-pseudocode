/*
 * XREFs of IopGetRegistryKeyInformation @ 0x14076A5E4
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140769E0C (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryDeviceDescription @ 0x14078AB64 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B104 (pIoQueryBusDescription.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C9E0 (IopVerifierExAllocatePool.c)
 *     ZwQueryKey @ 0x1403FA660 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryKeyInformation(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  PVOID Pool; // rbx
  NTSTATUS v6; // edi
  ULONG Length; // [rsp+50h] [rbp+18h] BYREF

  Length = 0;
  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( result == -1073741789 || result == -2147483643 )
  {
    Pool = IopVerifierExAllocatePool(NonPagedPoolNx, Length);
    if ( Pool )
    {
      v6 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool, Length, &Length);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(Pool, 0);
        return v6;
      }
      else
      {
        *a2 = Pool;
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
