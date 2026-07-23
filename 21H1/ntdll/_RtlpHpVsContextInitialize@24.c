/*
 * XREFs of _RtlpHpVsContextInitialize@24 @ 0x4B37F8D9
 * Callers:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpHpVsContextInitialize(unsigned int a1, int a2, const void *a3, int a4, int a5, _DWORD *a6)
{
  int v8; // eax
  int result; // eax
  size_t v10; // [esp-4h] [ebp-10h]

  LODWORD(v10) = 192;
  memset((void *)a1, 0, v10);
  *(_DWORD *)(a1 + 128) = a2 ^ a1;
  *(_DWORD *)(a1 + 4) = a4;
  qmemcpy((void *)(a1 + 132), a3, 0x14u);
  *(_DWORD *)(a1 + 152) = *a6;
  *(_DWORD *)(a1 + 132) ^= a1 ^ RtlpHpHeapGlobals;
  *(_DWORD *)(a1 + 136) ^= a1 ^ RtlpHpHeapGlobals;
  *(_DWORD *)(a1 + 140) ^= a1 ^ RtlpHpHeapGlobals;
  *(_DWORD *)(a1 + 144) ^= a1 ^ RtlpHpHeapGlobals;
  v8 = *(_DWORD *)(a1 + 148);
  if ( v8 )
    *(_DWORD *)(a1 + 148) = a1 ^ RtlpHpHeapGlobals ^ v8;
  result = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  return result;
}
