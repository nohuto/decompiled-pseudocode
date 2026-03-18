/*
 * XREFs of MiTransferSoftwarePte @ 0x1402F4DA8
 * Callers:
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402D4070 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiUpdatePfnBackingStore @ 0x1402F4AB4 (MiUpdatePfnBackingStore.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402F4B78 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiFindFreePageFileSpace @ 0x14030F5B4 (MiFindFreePageFileSpace.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char v5; // r11
  __int16 v6; // r10
  unsigned __int64 result; // rax
  __int64 updated; // rax
  __int16 v9; // r8
  char v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v4 = a3;
  MiSetNonResidentPteHeat(&v12, 0);
  if ( (v6 & 0x400) != 0 || (v5 & 4) != 0 )
    result = v12;
  else
    result = v12 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( result )
      updated = MiUpdatePageFileHighInPte(result, v4);
    else
      updated = MiSwizzleInvalidPte(v4 << 32);
    result = updated ^ (unsigned __int16)(updated ^ (v9 << 12)) & 0xF000;
    v11 = result;
    if ( (v10 & 1) != 0 )
    {
      result |= 4uLL;
      v11 = result;
    }
    if ( (v10 & 2) != 0 )
      return v11 | 2;
  }
  return result;
}
