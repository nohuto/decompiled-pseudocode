/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x1409490C4
 * Callers:
 *     ExDisableHandleTracing @ 0x1405AD438 (ExDisableHandleTracing.c)
 *     ExpFreeHandleTable @ 0x14065C994 (ExpFreeHandleTable.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     ExEnableHandleTracing @ 0x140949124 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x140949874 (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140220980 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
