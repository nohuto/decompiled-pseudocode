/*
 * XREFs of MiTransferSoftwarePte @ 0x140347114
 * Callers:
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiFindFreePageFileSpace @ 0x14033A15C (MiFindFreePageFileSpace.c)
 *     MiUpdatePfnBackingStore @ 0x140342520 (MiUpdatePfnBackingStore.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346EE4 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
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
  MiSetNonResidentPteHeat(&v12, 0LL);
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
