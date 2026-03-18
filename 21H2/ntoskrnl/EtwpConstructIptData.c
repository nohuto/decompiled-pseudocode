/*
 * XREFs of EtwpConstructIptData @ 0x1409EE5BC
 * Callers:
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1409EE650 (EtwpUpdateProcessorTraceConfiguration.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     ZwLoadDriver @ 0x14041D8C0 (ZwLoadDriver.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpConstructIptData(__int64 a1)
{
  NTSTATUS Driver; // eax
  _QWORD *Pool2; // rbx
  unsigned __int64 ExtensionTable; // rax

  Driver = ZwLoadDriver(&DriverServiceName);
  if ( (int)(Driver + 0x80000000) >= 0 && Driver != -1073741554 )
    return 3221226092LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1769436229LL);
  if ( !Pool2 )
    return 3221225495LL;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
  Pool2[2] = ExtensionTable;
  if ( !ExtensionTable )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221226092LL;
  }
  *(_QWORD *)(a1 + 1032) = Pool2;
  return 0LL;
}
