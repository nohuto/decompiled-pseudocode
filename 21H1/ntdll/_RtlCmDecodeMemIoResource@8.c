/*
 * XREFs of _RtlCmDecodeMemIoResource@8 @ 0x4B3561B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlCmDecodeMemIoResource(int a1, _DWORD *a2)
{
  int result; // eax

  result = 0;
  if ( *(_BYTE *)a1 == 3 || *(_BYTE *)a1 == 1 )
  {
    result = *(_DWORD *)(a1 + 12);
  }
  else if ( (*(_WORD *)(a1 + 2) & 0x200) != 0 )
  {
    result = *(_DWORD *)(a1 + 12) << 8;
  }
  else if ( (*(_WORD *)(a1 + 2) & 0x400) != 0 )
  {
    result = *(_DWORD *)(a1 + 12) << 16;
  }
  if ( a2 )
  {
    *a2 = *(_DWORD *)(a1 + 4);
    a2[1] = *(_DWORD *)(a1 + 8);
  }
  return result;
}
