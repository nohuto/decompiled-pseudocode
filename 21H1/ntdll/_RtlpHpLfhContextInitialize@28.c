/*
 * XREFs of _RtlpHpLfhContextInitialize@28 @ 0x4B3765A7
 * Callers:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     _RtlpQueryPhysicalMemoryPolicy@4 @ 0x4B2AFE9D (_RtlpQueryPhysicalMemoryPolicy@4.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlpInitializeLfhRandomDataArray@0 @ 0x4B2B2266 (_RtlpInitializeLfhRandomDataArray@0.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpHpLfhContextInitialize(
        unsigned int a1,
        int a2,
        unsigned int a3,
        char a4,
        const void *a5,
        __int16 a6,
        _DWORD *a7)
{
  int v9; // eax
  unsigned int v10; // eax
  size_t v12; // [esp-4h] [ebp-18h]
  int v13[2]; // [esp+Ch] [ebp-8h] BYREF

  LODWORD(v12) = 704;
  memset((void *)a1, 0, v12);
  *(_BYTE *)(a1 + 29) = a4;
  *(_DWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = a6 - a1;
  qmemcpy((void *)(a1 + 4), a5, 0x14u);
  *(_DWORD *)(a1 + 32) = *a7;
  *(_DWORD *)(a1 + 4) ^= a1 ^ RtlpHpHeapGlobals;
  *(_DWORD *)(a1 + 8) ^= a1 ^ RtlpHpHeapGlobals;
  *(_DWORD *)(a1 + 12) ^= a1 ^ RtlpHpHeapGlobals;
  *(_DWORD *)(a1 + 16) ^= a1 ^ RtlpHpHeapGlobals;
  v9 = *(_DWORD *)(a1 + 20);
  if ( v9 )
    *(_DWORD *)(a1 + 20) = a1 ^ RtlpHpHeapGlobals ^ v9;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, (PRTL_RUN_ONCE_INIT_FN)RtlpTestHookInitialize, 0, 0);
  if ( RtlpQueryPhysicalMemoryPolicy(v13) < 0 || (v10 = 1, v13[0] > 10) )
    v10 = a3;
  if ( v10 > 8 )
    LOBYTE(v10) = 8;
  *(_BYTE *)(a1 + 28) = v10;
  if ( (unsigned __int8)v10 > 1u )
    *(_DWORD *)(a1 + 24) = (char *)dword_4B2A4F78
                         + (((64 - (unsigned __int8)v10 + 61) * (62 - (64 - (unsigned int)(unsigned __int8)v10))) >> 1);
  v13[1] = 1;
  memset32((void *)(a1 + 128), 1, 0x81u);
  return RtlpInitializeLfhRandomDataArray();
}
