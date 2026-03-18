/*
 * XREFs of MiNodeCompletedBootZeroing @ 0x1403D3D2C
 * Callers:
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403D9D88 (MiZeroBootLargePages.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 */

__int64 __fastcall MiNodeCompletedBootZeroing(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16096), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return KeSignalGate((_DWORD *)(a1 + 16104), 1);
  return result;
}
