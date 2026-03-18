/*
 * XREFs of DlpUnloadDxgkrnl @ 0x1C01D3A50
 * Callers:
 *     DlpLoadDxgkrnl @ 0x1C004C408 (DlpLoadDxgkrnl.c)
 * Callees:
 *     DlpGetServiceNameInSystemSpace @ 0x1C004C504 (DlpGetServiceNameInSystemSpace.c)
 */

void DlpUnloadDxgkrnl()
{
  const WCHAR *ServiceNameInSystemSpace; // rax
  WCHAR *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  ServiceNameInSystemSpace = (const WCHAR *)DlpGetServiceNameInSystemSpace();
  v1 = (WCHAR *)ServiceNameInSystemSpace;
  if ( ServiceNameInSystemSpace )
  {
    RtlInitUnicodeString(&DestinationString, ServiceNameInSystemSpace);
    ZwUnloadDriver(&DestinationString);
    ExFreePoolWithTag(v1, 0);
  }
}
