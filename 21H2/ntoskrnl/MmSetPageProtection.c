/*
 * XREFs of MmSetPageProtection @ 0x1403C2120
 * Callers:
 *     sub_1403F9550 @ 0x1403F9550 (sub_1403F9550.c)
 *     HvpProtectBinPartial @ 0x1406C9BF4 (HvpProtectBinPartial.c)
 *     MmAllocateIsrStack @ 0x140829ACC (MmAllocateIsrStack.c)
 *     KeWriteProtectProcessorState @ 0x140A59A7C (KeWriteProtectProcessorState.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     VslpIumPhase0Initialize @ 0x140B4EC40 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14033E534 (MiLockPageAndSetDirty.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  char v7; // si
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v11; // rbx
  int v12; // esi
  char v13; // di
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v20[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v20, 0, 0xB8uLL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v7 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x8000) != 0 )
    return 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  ValidPte = MiMakeValidPte(v8, 0LL, ProtectionMask | 0xA0000000);
  v20[3] = 0LL;
  LODWORD(v20[1]) = 20;
  v11 = ValidPte;
  MiInsertTbFlushEntry((__int64)v20, a1, v9, 0);
  if ( v9 )
  {
    v12 = v7 & 4;
    do
    {
      v19 = MI_READ_PTE_LOCK_FREE(v8);
      v13 = v19;
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFFLL;
      v16 = (v14 << 12) | v11 & 0xFFF0000000000FFFuLL;
      v17 = v16;
      if ( v12 )
      {
        v16 |= 0x42uLL;
        if ( (v13 & 0x42) == 0 )
          v16 = v17;
      }
      else if ( v14 <= qword_140C50840 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        MiLockPageAndSetDirty(48 * v14 - 0x220000000000LL, 0LL, 48 * v14 - 0x220000000000LL, v15);
      }
      v11 = v16 | 0x20;
      MiWriteValidPteNewProtection(v8, v11);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  MiFlushTbList((__int64)v20);
  return 1;
}
