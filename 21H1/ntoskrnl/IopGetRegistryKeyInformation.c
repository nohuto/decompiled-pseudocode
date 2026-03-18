/*
 * XREFs of IopGetRegistryKeyInformation @ 0x1407558A4
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 *     pIoQueryDeviceDescription @ 0x140776374 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140776914 (pIoQueryBusDescription.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     ZwQueryKey @ 0x1403F25F0 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
