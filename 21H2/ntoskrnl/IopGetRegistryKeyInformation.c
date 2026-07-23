/*
 * XREFs of IopGetRegistryKeyInformation @ 0x14076A7A4
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryDeviceDescription @ 0x14078AD24 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14078B2C4 (pIoQueryBusDescription.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
