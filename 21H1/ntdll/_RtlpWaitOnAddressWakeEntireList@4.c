/*
 * XREFs of _RtlpWaitOnAddressWakeEntireList@4 @ 0x4B2AC022
 * Callers:
 *     _RtlpOptimizeWaitOnAddressWaitList@4 @ 0x4B2A9553 (_RtlpOptimizeWaitOnAddressWaitList@4.c)
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 *     _RtlpWaitOnAddressRemoveWaitBlock@8 @ 0x4B2DF916 (_RtlpWaitOnAddressRemoveWaitBlock@8.c)
 * Callees:
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

NTSTATUS __stdcall RtlpWaitOnAddressWakeEntireList(int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // esi
  NTSTATUS result; // eax

  v1 = a1 & 0xFFFFFFFC;
  if ( (a1 & 0xFFFFFFFC) != 0 )
  {
    do
    {
      v2 = *(_DWORD *)(v1 + 8);
      result = v1 + 20;
      if ( !_InterlockedExchange((volatile __int32 *)(v1 + 20), 2) )
        result = ZwAlertThreadByThreadId(*(HANDLE *)(v1 + 4));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
