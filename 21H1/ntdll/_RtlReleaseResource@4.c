/*
 * XREFs of _RtlReleaseResource@4 @ 0x4B2EA890
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNonNegativeDecrement@4 @ 0x4B2EA910 (_RtlpNonNegativeDecrement@4.c)
 *     _NtReleaseSemaphore@12 @ 0x4B2F2A00 (_NtReleaseSemaphore@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

volatile signed __int32 *__stdcall RtlReleaseResource(int a1)
{
  int v1; // ecx
  volatile signed __int32 *result; // eax
  __int32 v3; // eax
  int v4; // eax
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  v1 = *(_DWORD *)(a1 + 40);
  result = (volatile signed __int32 *)(a1 + 40);
  if ( v1 >= 0 )
  {
    if ( _InterlockedDecrement(result) )
      return result;
    goto LABEL_3;
  }
  if ( v1 == -1 )
    *(_DWORD *)(a1 + 44) = 0;
  if ( !_InterlockedIncrement(result) )
  {
    if ( *(_DWORD *)(a1 + 28) )
    {
      v3 = _InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
      if ( v3 )
      {
        v4 = NtReleaseSemaphore(*(_DWORD *)(a1 + 24), v3, v5);
        if ( v4 < 0 )
          RtlRaiseStatus(v4);
      }
    }
LABEL_3:
    result = (volatile signed __int32 *)RtlpNonNegativeDecrement(a1 + 36);
    if ( result )
    {
      result = (volatile signed __int32 *)NtReleaseSemaphore(*(_DWORD *)(a1 + 32), 1, v5);
      if ( (int)result < 0 )
        RtlRaiseStatus(result);
    }
  }
  return result;
}
