/*
 * XREFs of MiEnableLargeSubsection @ 0x1405409AC
 * Callers:
 *     MiIncrementLargeSubsections @ 0x140541480 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFC70 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  unsigned __int8 v10; // dl
  unsigned __int64 v11; // rbx
  ULONG_PTR v12; // rsi
  __int64 v13; // rax
  char v14; // al
  unsigned __int8 v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 44);
  result = MiChargeLargeProtoSubsection(a1, 1LL);
  if ( (_DWORD)result )
  {
    v5 = v1 + 8 * v2;
    ValidPte = MiMakeValidPte(v1, -1LL, (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F);
    v9 = 0LL;
    v10 = 17;
    v15 = 17;
    v11 = ValidPte;
    if ( v1 < v5 )
    {
      do
      {
        if ( (v1 & 0xFFF) == 0 || v10 == 17 )
        {
          if ( v10 != 17 )
            MiUnlockProtoPoolPage(v9, v10);
          while ( 1 )
          {
            v9 = MiLockProtoPoolPage(v1, (__int64)&v15);
            if ( v9 )
              break;
            MmAccessFault(2uLL, v1, 0, 0LL);
          }
        }
        v12 = MiLockLeafPage((__int64 *)v1, 0, v7, v8);
        v13 = *(_QWORD *)v1;
        if ( (*(_QWORD *)v1 & 1) == 0 )
        {
          if ( qword_140C4DF40 && (v13 & 0x10) == 0 )
            v13 &= ~qword_140C4DF40;
          v11 ^= (v11 ^ v13) & 0xFFFFFFFFF000LL;
          *(_QWORD *)v1 = v11;
          *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
          MiUnlinkPageFromList(v12, 0);
          v14 = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
          ++*(_WORD *)(v12 + 32);
          *(_BYTE *)(v12 + 34) = v14;
        }
        *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v1 += 8LL;
        if ( (v1 & 0x1F8) != 0 || !KeShouldYieldProcessor() )
        {
          v10 = v15;
        }
        else
        {
          MiUnlockProtoPoolPage(v9, v15);
          v10 = 17;
          v15 = 17;
        }
      }
      while ( v1 < v5 );
      if ( v10 != 17 )
        MiUnlockProtoPoolPage(v9, v10);
    }
    return 1LL;
  }
  return result;
}
