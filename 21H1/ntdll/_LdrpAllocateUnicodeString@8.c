/*
 * XREFs of _LdrpAllocateUnicodeString@8 @ 0x4B2D1D30
 * Callers:
 *     _LdrpFindKnownDll@16 @ 0x4B2D0FCB (_LdrpFindKnownDll@16.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 */

int __fastcall LdrpAllocateUnicodeString(int a1, int a2)
{
  __int16 v3; // bx
  int v4; // esi
  PVOID StringRoutine; // eax

  v3 = a2 + 2;
  v4 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( (unsigned int)(a2 + 2) > 0xFFFE )
    return -1073741562;
  if ( (v3 & 1) != 0 )
    return -1073741811;
  StringRoutine = NtdllpAllocateStringRoutine(a2 + 2);
  *(_DWORD *)(a1 + 4) = StringRoutine;
  if ( !StringRoutine )
    return -1073741801;
  *(_WORD *)(a1 + 2) = v3;
  return v4;
}
