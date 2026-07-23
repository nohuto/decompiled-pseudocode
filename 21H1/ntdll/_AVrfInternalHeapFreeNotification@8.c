/*
 * XREFs of _AVrfInternalHeapFreeNotification@8 @ 0x4B338890
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

struct _PEB *__stdcall AVrfInternalHeapFreeNotification(int a1, int a2)
{
  struct _PEB *result; // eax
  int *v3; // esi
  void (__thiscall *v4)(_DWORD, int, int); // edi

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection(&AVrfpVerifierLock);
    v3 = (int *)AVrfpVerifierProvidersList;
    while ( v3 != &AVrfpVerifierProvidersList )
    {
      v4 = (void (__thiscall *)(_DWORD, int, int))v3[8];
      v3 = (int *)*v3;
      if ( v4 )
        v4(v4, a1, a2);
    }
    return (struct _PEB *)RtlLeaveCriticalSection(&AVrfpVerifierLock);
  }
  return result;
}
