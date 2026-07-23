/*
 * XREFs of _RtlpUninitializeAssemblyStorageMap@4 @ 0x4B2A92C3
 * Callers:
 *     _RtlpFreeActivationContext@4 @ 0x4B2A926F (_RtlpFreeActivationContext@4.c)
 *     _RtlpGetActivationContextDataStorageMapAndRosterHeader@24 @ 0x4B2E262C (_RtlpGetActivationContextDataStorageMapAndRosterHeader@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

LOGICAL __thiscall RtlpUninitializeAssemblyStorageMap(_DWORD *this)
{
  unsigned int i; // edi
  LOGICAL result; // eax
  int v4; // ebx

  if ( this )
  {
    for ( i = 0; i < this[1]; ++i )
    {
      result = this[2];
      v4 = *(_DWORD *)(result + 4 * i);
      if ( v4 )
      {
        *(_DWORD *)(v4 + 8) = 0;
        *(_DWORD *)(v4 + 4) = 0;
        if ( *(_DWORD *)(v4 + 12) )
        {
          NtClose(*(HANDLE *)(v4 + 12));
          *(_DWORD *)(v4 + 12) = 0;
        }
        *(_DWORD *)(this[2] + 4 * i) = 0;
        result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v4);
      }
    }
    if ( (*(_BYTE *)this & 1) != 0 )
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)this[2]);
    this[2] = 0;
    this[1] = 0;
    *this = 0;
  }
  return result;
}
