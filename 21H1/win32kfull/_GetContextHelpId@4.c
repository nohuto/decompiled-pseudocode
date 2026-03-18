/*
 * XREFs of _GetContextHelpId@4 @ 0x1B98AF
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     <none>
 */

int __fastcall GetContextHelpId(_DWORD *a1)
{
  int v1; // edx
  int v2; // esi

  v1 = a1[5];
  do
  {
    v2 = *(_DWORD *)(v1 + 176);
    if ( v2 )
      break;
    a1 = (_DWORD *)((*(_BYTE *)(v1 + 23) & 0xC0) == 0x40 ? a1[14] : a1[16]);
    if ( !a1 )
      break;
    v1 = a1[5];
  }
  while ( (*(_WORD *)(v1 + 30) & 0x3FFF) != 0x29D );
  return v2;
}
