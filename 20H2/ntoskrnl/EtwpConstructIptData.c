/*
 * XREFs of EtwpConstructIptData @ 0x14094AAC8
 * Callers:
 *     EtwpUpdateProcessorTraceConfiguration @ 0x14094AB6C (EtwpUpdateProcessorTraceConfiguration.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     ZwLoadDriver @ 0x1403FA230 (ZwLoadDriver.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpConstructIptData(__int64 a1)
{
  NTSTATUS Driver; // eax
  _OWORD *PoolWithTag; // rbx
  unsigned __int64 ExtensionTable; // rax

  Driver = ZwLoadDriver(&DriverServiceName);
  if ( (int)(Driver + 0x80000000) >= 0 && Driver != -1073741554 )
    return 3221226092LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
  *((_QWORD *)PoolWithTag + 2) = ExtensionTable;
  if ( !ExtensionTable )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221226092LL;
  }
  *(_QWORD *)(a1 + 1016) = PoolWithTag;
  return 0LL;
}
