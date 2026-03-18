/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x140530BAC
 * Callers:
 *     MiDeprioritizeVad @ 0x14037F074 (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x1406E7060 (HvTrimHive.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402A0190 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdatePfnPriority @ 0x1402A91E0 (MiUpdatePfnPriority.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiDemoteCombinedPte @ 0x140368610 (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 valid; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  __int64 v15; // rdi
  char v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int8 v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+28h] [rbp-D8h] BYREF
  int v22; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v23; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v25, 0, 0xB8uLL);
  v8 = MiTbFlushType(a3);
  v25[2] = 0LL;
  v25[3] = 0LL;
  LODWORD(v25[0]) = v8;
  v22 = dword_140C4E768;
  WORD2(v25[0]) = 4;
  LODWORD(v25[1]) = 20;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v23 = v9 + 8 * a2;
  v12 = MiLockWorkingSetShared(v11);
  v20 = v12;
  if ( v9 < v23 )
  {
    do
    {
      v14 = v9 >> 9;
      if ( valid )
      {
        if ( valid != (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          if ( HIDWORD(v25[1]) )
            MiFreeWsleList(a3, (__int64)v25, 0);
          MiUnlockPageTableInternal(a3, valid, v13);
          valid = 0LL;
        }
        if ( valid )
          goto LABEL_36;
      }
      valid = MiLockLowestValidPageTable(a3, v9, &v24);
      if ( valid == (v14 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_36:
        if ( (*(_BYTE *)v9 & 1) != 0 )
        {
          v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v16 = MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v9 << 25) >> 16) & 0xF;
          if ( v16 != 9 )
          {
            if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) == 0 )
            {
              v13 = *(_QWORD *)(v15 + 8);
              if ( v13 > 0 )
                MiDemoteCombinedPte(a3, v9, v13 | 0x8000000000000000uLL);
            }
            if ( (a4 & 8) == 0 && (a4 & 7) != (unsigned int)MiGetPfnPriority(v15) )
            {
              v21 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v21, v17, v13, v18);
                while ( *(__int64 *)(v15 + 24) < 0 );
              }
              MiUpdatePfnPriority(v15);
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( (a4 & 0x10) != 0 && v16 != 8 )
            {
              if ( v22 )
                MI_WSLE_LOG_ACCESS(a3, v9);
              MiInsertTbFlushEntry((__int64)v25, (__int64)(v9 << 25) >> 16, 1LL, 0);
              if ( HIDWORD(v25[1]) == LODWORD(v25[1]) )
                MiFreeWsleList(a3, (__int64)v25, 0);
            }
          }
        }
      }
      else
      {
        MiUnlockPageTableInternal(a3, valid, v13);
        valid = 0LL;
        v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      }
      v9 += 8LL;
    }
    while ( v9 < v23 );
    if ( valid )
    {
      if ( HIDWORD(v25[1]) )
        MiFreeWsleList(a3, (__int64)v25, 0);
      MiUnlockPageTableInternal(a3, valid, v13);
    }
    v12 = v20;
  }
  return MiUnlockWorkingSetShared(a3, v12);
}
