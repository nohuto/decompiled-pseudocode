/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x140374BBC
 * Callers:
 *     MiDeprioritizeVad @ 0x1402598CC (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x1406D59B8 (HvTrimHive.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetPfnPriority @ 0x140273234 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x14027428C (MiUpdatePfnPriority.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140274D10 (MI_WSLE_LOG_ACCESS.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 valid; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  char v15; // r13
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v21; // [rsp+20h] [rbp-E0h]
  unsigned int v22; // [rsp+24h] [rbp-DCh]
  int v23; // [rsp+28h] [rbp-D8h] BYREF
  int v24; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v27[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v27, 0, 0xB8uLL);
  v22 = a4 & 7;
  v8 = MiTbFlushType(a3);
  v27[2] = 0LL;
  v27[3] = 0LL;
  LODWORD(v27[0]) = v8;
  v24 = dword_140C52B68;
  WORD2(v27[0]) = 4;
  LODWORD(v27[1]) = 20;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v25 = v9 + 8 * a2;
  v12 = MiLockWorkingSetShared(v11);
  v21 = v12;
  if ( v9 >= v25 )
    return MiUnlockWorkingSetShared(a3, v12);
  do
  {
    v13 = v9 >> 9;
    if ( valid )
    {
      if ( valid == (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        goto LABEL_4;
      if ( HIDWORD(v27[1]) )
        MiFreeWsleList(a3, (__int64)v27, 0);
      MiUnlockPageTableInternal(a3, valid);
    }
    valid = MiLockLowestValidPageTable(a3, v9, &v26);
    if ( valid != (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(a3, valid);
      valid = 0LL;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_20;
    }
LABEL_4:
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v15 = MiGetWsleContents(0xFFFFFFFFFFLL, (__int64)(v9 << 25) >> 16) & 0xF;
      if ( v15 != 9 )
      {
        if ( !_bittest64((const signed __int64 *)(v14 + 40), 0x28u) )
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v16 > 0 )
            MiDemoteCombinedPte(a3, v9, v16 | 0x8000000000000000uLL);
        }
        if ( (a4 & 8) == 0 && v22 != (unsigned int)MiGetPfnPriority(v14) )
        {
          v23 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v23, v17, v18, v19);
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          MiUpdatePfnPriority(v14, v22, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (a4 & 0x10) != 0 && v15 != 8 )
        {
          if ( v24 )
            MI_WSLE_LOG_ACCESS(a3, (_BYTE *)v9);
          MiInsertTbFlushEntry((__int64)v27, (__int64)(v9 << 25) >> 16, 1LL, 0);
          if ( HIDWORD(v27[1]) == LODWORD(v27[1]) )
            MiFreeWsleList(a3, (__int64)v27, 0);
        }
      }
    }
LABEL_20:
    v9 += 8LL;
  }
  while ( v9 < v25 );
  if ( valid )
  {
    if ( HIDWORD(v27[1]) )
      MiFreeWsleList(a3, (__int64)v27, 0);
    MiUnlockPageTableInternal(a3, valid);
  }
  v12 = v21;
  return MiUnlockWorkingSetShared(a3, v12);
}
