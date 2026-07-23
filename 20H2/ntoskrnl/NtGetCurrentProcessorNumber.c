/*
 * XREFs of NtGetCurrentProcessorNumber @ 0x140909FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NtGetCurrentProcessorNumber(void)
{
  ULONG GroupIndex; // edx
  unsigned __int64 v1; // rax
  __int16 v2; // ax

  GroupIndex = KeGetCurrentPrcb()->GroupIndex;
  v1 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v1 )
  {
    v2 = *(_WORD *)(v1 + 8);
    if ( v2 == 332 || v2 == 452 )
      return GroupIndex & 0x1F;
  }
  return GroupIndex;
}
