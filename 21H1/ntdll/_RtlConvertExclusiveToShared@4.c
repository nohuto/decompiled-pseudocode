/*
 * XREFs of _RtlConvertExclusiveToShared@4 @ 0x4B34A4B0
 * Callers:
 *     <none>
 * Callees:
 *     _NtReleaseSemaphore@12 @ 0x4B2F2A00 (_NtReleaseSemaphore@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

int __thiscall RtlConvertExclusiveToShared(void *this, int a2)
{
  int result; // eax
  void *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  *(_DWORD *)(a2 + 44) = 0;
  _InterlockedExchange((volatile __int32 *)(a2 + 40), 1);
  result = *(_DWORD *)(a2 + 28);
  if ( result )
  {
    result = _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    if ( result )
    {
      result = NtReleaseSemaphore(*(_DWORD *)(a2 + 24), result, (int)&v3);
      if ( result < 0 )
        RtlRaiseStatus(result);
    }
  }
  return result;
}
