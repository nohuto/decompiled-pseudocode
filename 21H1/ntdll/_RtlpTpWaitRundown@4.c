/*
 * XREFs of _RtlpTpWaitRundown@4 @ 0x4B2A81AB
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 *     _RtlpTpWaitFinalizationCallback@8 @ 0x4B2A8180 (_RtlpTpWaitFinalizationCallback@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __thiscall RtlpTpWaitRundown(int this)
{
  if ( *(_DWORD *)(this + 44) )
    NtSetEvent(*(_DWORD *)(this + 44), 0);
  if ( *(_DWORD *)this )
    NtClose(*(HANDLE *)this);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, this);
}
