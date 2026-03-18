/*
 * XREFs of _vSpDisableMultiMon@4 @ 0x1E3EF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSpDisableMultiMon(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 108);
  if ( result )
    result = Win32FreePool(*(_DWORD *)(a1 + 108));
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  return result;
}
