/*
 * XREFs of _RtlpGetSebDataAndFilterBuffer@40 @ 0x4B369F12
 * Callers:
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlpGetSebDataAndFilterBuffer(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4, int a5, int a6, int a7, int a8)
{
  int result; // eax

  if ( !a3 || !a4 || !*a4 || !a1 || *a4 < 0x24u )
    return -1073741811;
  *a3 = a5;
  a3[1] = a6;
  a3[2] = a7;
  a3[3] = a8;
  a3[4] = *a1;
  a3[5] = a1[1];
  a3[6] = a1[2];
  a3[7] = a1[3];
  a3[8] = 16;
  result = 0;
  *a4 = 36;
  return result;
}
