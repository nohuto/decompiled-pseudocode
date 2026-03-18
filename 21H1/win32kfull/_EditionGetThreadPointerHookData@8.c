/*
 * XREFs of _EditionGetThreadPointerHookData@8 @ 0x15B9E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionGetThreadPointerHookData(int a1, __int16 a2)
{
  int v2; // ecx
  int v3; // edx

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 && *(_WORD *)(v3 + 8) == a2 )
    return *(_DWORD *)(a1 + 12);
  return v2;
}
