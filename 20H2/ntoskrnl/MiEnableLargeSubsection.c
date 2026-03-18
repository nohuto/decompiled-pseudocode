/*
 * XREFs of MiEnableLargeSubsection @ 0x14053EEAC
 * Callers:
 *     MiIncrementLargeSubsections @ 0x14053F980 (MiIncrementLargeSubsections.c)
 * Callees:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiChargeLargeProtoSubsection @ 0x1408D24B0 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiEnableLargeSubsection(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // r14
  unsigned __int64 ValidPte; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  unsigned __int8 v11; // dl
  unsigned __int64 v12; // rbx
  ULONG_PTR v13; // rsi
  __int64 v14; // rax
  char v15; // al
  unsigned __int8 v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 44);
  result = MiChargeLargeProtoSubsection(a1, 1LL);
  if ( (_DWORD)result )
  {
    v6 = v1 + 8 * v2;
    ValidPte = MiMakeValidPte(v1, -1LL, (*(unsigned __int16 *)(a1 + 32) >> 1) & 0x1F, v5);
    v10 = 0LL;
    v11 = 17;
    v16 = 17;
    v12 = ValidPte;
    if ( v1 < v6 )
    {
      do
      {
        if ( (v1 & 0xFFF) == 0 || v11 == 17 )
        {
          if ( v11 != 17 )
            MiUnlockProtoPoolPage(v10, v11);
          while ( 1 )
          {
            v10 = MiLockProtoPoolPage(v1, &v16);
            if ( v10 )
              break;
            MmAccessFault(2uLL, v1, 0, 0LL);
          }
        }
        v13 = MiLockLeafPage((__int64 *)v1, 0, v8, v9);
        v14 = *(_QWORD *)v1;
        if ( (*(_QWORD *)v1 & 1) == 0 )
        {
          if ( qword_140C4DDC0 && (v14 & 0x10) == 0 )
            v14 &= ~qword_140C4DDC0;
          v12 ^= (v12 ^ v14) & 0xFFFFFFFFF000LL;
          *(_QWORD *)v1 = v12;
          *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
          MiUnlinkPageFromList(v13, 0);
          v15 = *(_BYTE *)(v13 + 34) & 0xF8 | 6;
          ++*(_WORD *)(v13 + 32);
          *(_BYTE *)(v13 + 34) = v15;
        }
        *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v1 += 8LL;
        if ( (v1 & 0x1F8) != 0 || !KeShouldYieldProcessor() )
        {
          v11 = v16;
        }
        else
        {
          MiUnlockProtoPoolPage(v10, v16);
          v11 = 17;
          v16 = 17;
        }
      }
      while ( v1 < v6 );
      if ( v11 != 17 )
        MiUnlockProtoPoolPage(v10, v11);
    }
    return 1LL;
  }
  return result;
}
