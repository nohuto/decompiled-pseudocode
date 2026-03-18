/*
 * XREFs of ?AcquireBufferSafe@?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA?AVCAutoUnlockBuffer@1@XZ @ 0x1C00C69BC
 * Callers:
 *     NtGdiGetOPMInformation @ 0x1C00C6570 (NtGdiGetOPMInformation.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C014A3C0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY *__fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::AcquireBufferSafe(
        struct _SLIST_ENTRY *a1,
        PSLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *Next; // rbx
  PSLIST_ENTRY v5; // rax
  PSLIST_ENTRY *result; // rax

  Next = a1->Next;
  ++HIDWORD(Next[1].Next);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Next);
  if ( !v5 )
  {
    ++*((_DWORD *)&Next[1].Next + 2);
    v5 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))Next[3].Next)(
                         HIDWORD(Next[2].Next),
                         *((unsigned int *)&Next[2].Next + 3),
                         *((unsigned int *)&Next[2].Next + 2),
                         Next);
  }
  *a2 = v5;
  result = a2;
  a2[1] = a1;
  return result;
}
