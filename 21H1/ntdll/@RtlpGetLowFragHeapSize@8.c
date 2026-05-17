/*
 * XREFs of @RtlpGetLowFragHeapSize@8 @ 0x4B2AFE00
 * Callers:
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpGetLowFragHeapSize(_DWORD *this, char a2)
{
  int v2; // eax

  if ( (this[16] & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    return 0;
  if ( (a2 & 1) != 0 )
    v2 = 1;
  else
    v2 = RtlpAffinityState;
  return 13440 * v2 + 2000;
}
