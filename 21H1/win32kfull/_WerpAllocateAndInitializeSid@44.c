/*
 * XREFs of _WerpAllocateAndInitializeSid@44 @ 0x1B9F09
 * Callers:
 *     _WerKernelSubmitReportForHungProcess@12 @ 0x1B9A56 (_WerKernelSubmitReportForHungProcess@12.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall WerpAllocateAndInitializeSid(
        struct _SID_IDENTIFIER_AUTHORITY *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _DWORD *a10)
{
  SIZE_T v10; // eax
  size_t v11; // ebx
  NTSTATUS v12; // edi
  PVOID PoolWithTag; // eax
  void *v15; // esi

  v10 = RtlLengthRequiredSid(1u);
  v11 = v10;
  v12 = -1073741823;
  if ( a10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x7765726Bu);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      v12 = RtlInitializeSid(v15, this, 1u);
      if ( v12 >= 0 )
      {
        v12 = 0;
        *RtlSubAuthoritySid(v15, 0) = 18;
      }
      else
      {
        _DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR RtlInitializeSid failed\n", 260);
      }
      if ( v12 < 0 )
      {
        ExFreePoolWithTag(v15, 0);
        v15 = 0;
      }
    }
    else
    {
      _DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR NtAllocateVirtualMemory failed\n", 250);
    }
    *a10 = v15;
    return v12;
  }
  else
  {
    _DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Invalid params\n", 242);
    return -1073741811;
  }
}
