/*
 * XREFs of _RtlpFlushHeapsCallback@8 @ 0x4B357ED0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFlushHeap@4 @ 0x4B35D672 (_RtlpFlushHeap@4.c)
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 */

int __stdcall RtlpFlushHeapsCallback(int a1, int a2)
{
  if ( *(_DWORD *)(a1 + 8) == -571548178 )
    return RtlpHpHeapCompact(a1, 0);
  else
    return RtlpFlushHeap();
}
