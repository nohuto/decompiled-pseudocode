/*
 * XREFs of MiZeroPageThread @ 0x1403D9D30
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MiZeroBootLargePages @ 0x1403D9D88 (MiZeroBootLargePages.c)
 *     MiForceZeroingThreadExits @ 0x1405B2734 (MiForceZeroingThreadExits.c)
 */

__int64 __fastcall MiZeroPageThread(_BYTE *a1)
{
  __int64 result; // rax

  if ( (int)MiZeroBootLargePages() < 0 )
    a1[16176] = 1;
  KeWaitForSingleObject(a1 + 104, WrFreePage, 0, 0, 0LL);
  result = MiForceZeroingThreadExits(a1);
  if ( a1[16177] )
    return KeWaitForGate((__int64)(a1 + 16152), 0);
  return result;
}
