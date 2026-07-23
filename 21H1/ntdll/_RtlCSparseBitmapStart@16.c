/*
 * XREFs of _RtlCSparseBitmapStart@16 @ 0x4B37E275
 * Callers:
 *     _RtlHpHeapManagerStart@24 @ 0x4B375DB6 (_RtlHpHeapManagerStart@24.c)
 *     _RtlSparseArrayStart@20 @ 0x4B37E41B (_RtlSparseArrayStart@20.c)
 * Callees:
 *     _RtlpHpEnvAllocVA@36 @ 0x4B3723C3 (_RtlpHpEnvAllocVA@36.c)
 */

NTSTATUS __fastcall RtlCSparseBitmapStart(int a1, unsigned int a2, int a3, int a4)
{
  NTSTATUS result; // eax
  unsigned int v6; // edi
  unsigned int v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  bool v10; // cc
  ULONG_PTR v11; // [esp+10h] [ebp-8h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = a4 != 0;
  *(_BYTE *)(a1 + 25) = 0;
  *(_BYTE *)(a1 + 26) = a4;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a2 > 0x7FFFFFFF )
    return -2147483643;
  v6 = (((a2 + 7) >> 3) + 4095) & 0xFFFFF000;
  v7 = ((((v6 >> 12) + 7) >> 3) + 4095) & 0xFFFFF000;
  LODWORD(v11) = v7;
  if ( ((v7 >> 12) + 7) >> 3 > *(_DWORD *)(a1 + 28) )
    return -2147483643;
  HIDWORD(v11) = v7 + v6;
  result = RtlpHpEnvAllocVA(
             (ULONG_PTR *)((char *)&v11 + 4),
             (PVOID *)(a1 + 4),
             (int)&savedregs,
             0,
             1056768,
             4u,
             ((((v6 >> 12) + 7) >> 3) + 4095) & 0xFFFFF000,
             ((((v6 >> 12) + 7) >> 3) + 4095) & 0xFFFFF000,
             0,
             ((((v6 >> 12) + 7) >> 3) + 4095) & 0xFFFFF000);
  if ( result >= 0 )
  {
    _BitScanForward(&v9, HIDWORD(v11));
    *(_BYTE *)(a1 + 27) = v9;
    v10 = (unsigned int)v11 <= 0x1000;
    *(_DWORD *)a1 = v6 + *(_DWORD *)(a1 + 4);
    if ( v10 )
    {
      result = RtlpHpEnvAllocVA(&v11, (PVOID *)a1, (int)&savedregs, 0, 1073745920, 4u, v8, v8, 0, v8);
      if ( result < 0 )
        return result;
      *(_DWORD *)(a1 + 32) = 1;
    }
    return 0;
  }
  return result;
}
