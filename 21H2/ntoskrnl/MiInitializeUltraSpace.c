/*
 * XREFs of MiInitializeUltraSpace @ 0x140A6FA40
 * Callers:
 *     MiCreateTopLevelUltraMappings @ 0x140A6F944 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     RtlSetAllBitsEx @ 0x1403CB760 (RtlSetAllBitsEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiInitializeUltraSpace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // eax
  bool v7; // zf
  int v8; // ecx
  int v9; // edx
  int v10; // eax

  result = (__int64)MiAllocatePool(66, 0x1000uLL, 0x20206D4Du);
  v5 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 24) = 0x4000LL;
    *(_QWORD *)(a1 + 32) = result;
    RtlSetAllBitsEx((_QWORD *)(a1 + 24));
    v6 = ExGenRandom(1);
    v7 = !_BitScanReverse((unsigned int *)&v8, 0x4000u);
    v9 = v6;
    v10 = 0x4000;
    if ( !v7 )
      v10 = 1 << v8;
    *(_QWORD *)(a1 + 16) = v9 & (unsigned int)(v10 - 1);
    *(_QWORD *)(a1 + 48) = v5 + 2048;
    *(_QWORD *)(a1 + 40) = 0x4000LL;
    memset((void *)(v5 + 2048), 0, 0x800uLL);
    *(_QWORD *)(a1 + 8) = a2;
    result = 1LL;
    _InterlockedExchange((volatile __int32 *)(a1 + 56), 0x4000);
  }
  return result;
}
