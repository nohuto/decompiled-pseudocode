/*
 * XREFs of _RtlDestroyHandleTable@4 @ 0x4B2ABF30
 * Callers:
 *     _RtlDestroyAtomTable@4 @ 0x4B34CFA0 (_RtlDestroyAtomTable@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __stdcall RtlDestroyHandleTable(_DWORD *a1)
{
  int v1; // esi
  int v2; // ecx
  int v4; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h] BYREF

  v1 = 0;
  v2 = a1[5];
  v4 = v2;
  if ( v2 )
  {
    if ( a1[2] )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    else
    {
      v5 = a1[7] - v2;
      return NtFreeVirtualMemory(-1, &v4, &v5, 0x8000);
    }
  }
  return v1;
}
