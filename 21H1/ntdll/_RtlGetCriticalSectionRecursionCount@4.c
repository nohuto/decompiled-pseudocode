/*
 * XREFs of _RtlGetCriticalSectionRecursionCount@4 @ 0x4B34A650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlGetCriticalSectionRecursionCount(int a1)
{
  if ( *(void **)(a1 + 12) == NtCurrentTeb()->ClientId.UniqueThread )
    return *(_DWORD *)(a1 + 8);
  else
    return 0;
}
