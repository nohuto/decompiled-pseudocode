/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x14094C824
 * Callers:
 *     ExDisableHandleTracing @ 0x1405B2BC8 (ExDisableHandleTracing.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     ExpFreeHandleTable @ 0x1406F3AA8 (ExpFreeHandleTable.c)
 *     ExEnableHandleTracing @ 0x14094C884 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x14094CFD4 (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140323130 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  struct _KPROCESS *v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(struct _KPROCESS **)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
  }
}
