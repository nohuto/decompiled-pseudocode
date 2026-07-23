/*
 * XREFs of _RtlpWnfMetaCallbackProc@16 @ 0x4B33C720
 * Callers:
 *     <none>
 * Callees:
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 */

int __stdcall RtlpWnfMetaCallbackProc(int a1, int a2, int a3, int a4)
{
  bool v4; // zf

  if ( !*(_DWORD *)(a3 + 8) )
  {
    v4 = *(_DWORD *)(a3 + 4) == 0;
    *(_DWORD *)a3 = a4;
    if ( !v4 )
      NtSetEvent(*(HANDLE *)(a3 + 4), 0);
    *(_DWORD *)(a3 + 8) = 1;
  }
  return 0;
}
