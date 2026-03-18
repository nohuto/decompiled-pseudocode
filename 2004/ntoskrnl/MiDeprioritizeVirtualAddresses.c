/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x1405311FC
 * Callers:
 *     MiDeprioritizeVad @ 0x14037F9E0 (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x1407092D8 (HvTrimHive.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140247160 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdatePfnPriority @ 0x1402501B0 (MiUpdatePfnPriority.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 valid; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  char v15; // r13
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+28h] [rbp-D8h] BYREF
  int v23; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v26[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v26, 0, 0xB8uLL);
  v8 = MiTbFlushType(a3);
  v26[2] = 0LL;
  v26[3] = 0LL;
  LODWORD(v26[0]) = v8;
  v23 = dword_140C4E628;
  WORD2(v26[0]) = 4;
  LODWORD(v26[1]) = 20;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v24 = v9 + 8 * a2;
  v12 = MiLockWorkingSetShared(v11);
  v21 = v12;
  if ( v9 < v24 )
  {
    do
    {
      v13 = v9 >> 9;
      if ( valid )
      {
        if ( valid != (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          if ( HIDWORD(v26[1]) )
            MiFreeWsleList(a3, (__int64)v26, 0);
          MiUnlockPageTableInternal(a3, valid);
          valid = 0LL;
        }
        if ( valid )
          goto LABEL_36;
      }
      valid = MiLockLowestValidPageTable(a3, v9, &v25);
      if ( valid == (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_36:
        if ( (*(_BYTE *)v9 & 1) != 0 )
        {
          v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v15 = MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v9 << 25) >> 16) & 0xF;
          if ( v15 != 9 )
          {
            if ( (*(_QWORD *)(v14 + 40) & 0x1000000000LL) == 0 )
            {
              v16 = *(_QWORD *)(v14 + 8);
              if ( v16 > 0 )
                MiDemoteCombinedPte(a3, v9, v16 | 0x8000000000000000uLL);
            }
            if ( (a4 & 8) == 0 && (a4 & 7) != (unsigned int)MiGetPfnPriority(v14) )
            {
              v22 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v22, v17, v18, v19);
                while ( *(__int64 *)(v14 + 24) < 0 );
              }
              MiUpdatePfnPriority(v14);
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( (a4 & 0x10) != 0 && v15 != 8 )
            {
              if ( v23 )
                MI_WSLE_LOG_ACCESS(a3, v9);
              MiInsertTbFlushEntry((__int64)v26, (__int64)(v9 << 25) >> 16, 1LL, 0);
              if ( HIDWORD(v26[1]) == LODWORD(v26[1]) )
                MiFreeWsleList(a3, (__int64)v26, 0);
            }
          }
        }
      }
      else
      {
        MiUnlockPageTableInternal(a3, valid);
        valid = 0LL;
        v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      }
      v9 += 8LL;
    }
    while ( v9 < v24 );
    if ( valid )
    {
      if ( HIDWORD(v26[1]) )
        MiFreeWsleList(a3, (__int64)v26, 0);
      MiUnlockPageTableInternal(a3, valid);
    }
    v12 = v21;
  }
  return MiUnlockWorkingSetShared(a3, v12);
}
