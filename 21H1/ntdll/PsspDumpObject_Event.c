/*
 * XREFs of PsspDumpObject_Event @ 0x4B387F30
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryEvent@20 @ 0x4B2F2EE0 (_NtQueryEvent@20.c)
 */

int __stdcall PsspDumpObject_Event(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 8 )
    return NtQueryEvent(a1, 0, a2, 8, (int)a4);
  else
    return -1073741789;
}
