/*
 * XREFs of _RtlReleaseRelativeName@4 @ 0x4B2E54B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __stdcall RtlReleaseRelativeName(int a1)
{
  int v1; // esi
  int result; // eax

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( !result )
    {
      NtClose(*(HANDLE *)(v1 + 4));
      result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    *(_DWORD *)(a1 + 12) = 0;
  }
  return result;
}
