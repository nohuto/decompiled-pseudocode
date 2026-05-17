/*
 * XREFs of _RtlpWnfMetaCallbackProc@16 @ 0x4B33C720
 * Callers:
 *     <none>
 * Callees:
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 */

int __stdcall RtlpWnfMetaCallbackProc(int a1, int a2, _DWORD *a3, int a4)
{
  bool v4; // zf

  if ( !a3[2] )
  {
    v4 = a3[1] == 0;
    *a3 = a4;
    if ( !v4 )
      NtSetEvent(a3[1], 0);
    a3[2] = 1;
  }
  return 0;
}
