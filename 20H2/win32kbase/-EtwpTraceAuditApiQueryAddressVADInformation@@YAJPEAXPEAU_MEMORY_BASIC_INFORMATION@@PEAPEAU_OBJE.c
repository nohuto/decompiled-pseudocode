/*
 * XREFs of ?EtwpTraceAuditApiQueryAddressVADInformation@@YAJPEAXPEAU_MEMORY_BASIC_INFORMATION@@PEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1C002891C
 * Callers:
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C0028190 (EtwTraceAuditApiRegisterRawInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTraceAuditApiQueryAddressVADInformation(
        PVOID BaseAddress,
        PVOID MemoryInformation,
        struct _OBJECT_NAME_INFORMATION **a3)
{
  struct _OBJECT_NAME_INFORMATION *v3; // rbx
  NTSTATUS VirtualMemory; // edi
  struct _OBJECT_NAME_INFORMATION *PoolWithTag; // rax

  v3 = 0LL;
  if ( !BaseAddress )
    return 3221225485LL;
  VirtualMemory = ZwQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    BaseAddress,
                    MemoryBasicInformation,
                    MemoryInformation,
                    0x30uLL,
                    0LL);
  if ( VirtualMemory >= 0 )
  {
    PoolWithTag = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6D6D4B45u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        BaseAddress,
                        MemorySectionName,
                        PoolWithTag,
                        0x200uLL,
                        0LL);
      if ( VirtualMemory < 0 )
      {
        ExFreePoolWithTag(v3, 0x6D6D4B45u);
        v3 = 0LL;
      }
    }
  }
  *a3 = v3;
  return (unsigned int)VirtualMemory;
}
