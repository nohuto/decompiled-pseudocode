/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x14094EE84
 * Callers:
 *     ExDisableHandleTracing @ 0x1405B0F98 (ExDisableHandleTracing.c)
 *     ExpFreeHandleTable @ 0x140631954 (ExpFreeHandleTable.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     ExEnableHandleTracing @ 0x14094EEE4 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x14094F634 (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  ULONG_PTR v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
  }
}
