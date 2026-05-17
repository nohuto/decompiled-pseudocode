/*
 * XREFs of _RtlConvertSharedToExclusive@4 @ 0x4B34A510
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNonNegativeDecrement@4 @ 0x4B2EA910 (_RtlpNonNegativeDecrement@4.c)
 *     _RtlAcquireResourceExclusive@8 @ 0x4B2EBDC0 (_RtlAcquireResourceExclusive@8.c)
 *     _NtReleaseSemaphore@12 @ 0x4B2F2A00 (_NtReleaseSemaphore@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

void __stdcall RtlConvertSharedToExclusive(int a1)
{
  volatile signed __int32 *v1; // edx
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _BYTE v6[4]; // [esp+Ch] [ebp-4h] BYREF

  v1 = (volatile signed __int32 *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 >= 0 )
  {
    if ( v2 == 1 && _InterlockedCompareExchange(v1, -1, 1) == 1 )
    {
      *(_DWORD *)(a1 + 44) = NtCurrentTeb()->ClientId.UniqueThread;
      return;
    }
    if ( *(int *)v1 >= 0 )
    {
      if ( _InterlockedDecrement(v1) )
      {
LABEL_17:
        RtlAcquireResourceExclusive(a1, 1);
        return;
      }
    }
    else
    {
      if ( *v1 == -1 )
        *(_DWORD *)(a1 + 44) = 0;
      if ( _InterlockedIncrement(v1) )
        goto LABEL_17;
      if ( *(_DWORD *)(a1 + 28) )
      {
        v3 = _InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
        if ( v3 )
        {
          v4 = NtReleaseSemaphore(*(_DWORD *)(a1 + 24), v3, (int)v6);
          if ( v4 < 0 )
            RtlRaiseStatus(v4);
        }
      }
    }
    if ( RtlpNonNegativeDecrement((volatile signed __int32 *)(a1 + 36)) )
    {
      v5 = NtReleaseSemaphore(*(_DWORD *)(a1 + 32), 1, (int)v6);
      if ( v5 < 0 )
        RtlRaiseStatus(v5);
    }
    goto LABEL_17;
  }
}
