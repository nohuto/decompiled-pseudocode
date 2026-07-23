/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x14053690C
 * Callers:
 *     MiDeprioritizeVad @ 0x1403819E4 (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x14061A688 (HvTrimHive.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x14025ED44 (MiUpdatePfnPriority.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 valid; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  char v18; // r13
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+28h] [rbp-D8h] BYREF
  int v26; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v29[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v29, 0, 0xB8uLL);
  v8 = MiTbFlushType(a3);
  v29[2] = 0LL;
  v29[3] = 0LL;
  LODWORD(v29[0]) = v8;
  v26 = dword_140C4E868;
  WORD2(v29[0]) = 4;
  LODWORD(v29[1]) = 20;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v27 = v9 + 8 * a2;
  v15 = MiLockWorkingSetShared(v12, v11, v13, v14);
  v24 = v15;
  if ( v9 < v27 )
  {
    do
    {
      v16 = v9 >> 9;
      if ( valid )
      {
        if ( valid != (v16 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          if ( HIDWORD(v29[1]) )
            MiFreeWsleList(a3, (__int64)v29, 0);
          MiUnlockPageTableInternal(a3, valid);
          valid = 0LL;
        }
        if ( valid )
          goto LABEL_36;
      }
      valid = MiLockLowestValidPageTable(a3, v9, &v28);
      if ( valid == (v16 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
LABEL_36:
        if ( (*(_BYTE *)v9 & 1) != 0 )
        {
          v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v18 = MiGetWsleContents(0xFFFFFFFFFLL, (__int64)(v9 << 25) >> 16) & 0xF;
          if ( v18 != 9 )
          {
            if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) == 0 )
            {
              v19 = *(_QWORD *)(v17 + 8);
              if ( v19 > 0 )
                MiDemoteCombinedPte(a3, v9, v19 | 0x8000000000000000uLL);
            }
            if ( (a4 & 8) == 0 && (a4 & 7) != (unsigned int)MiGetPfnPriority(v17) )
            {
              v25 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v25, v20, v21, v22);
                while ( *(__int64 *)(v17 + 24) < 0 );
              }
              MiUpdatePfnPriority(v17);
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( (a4 & 0x10) != 0 && v18 != 8 )
            {
              if ( v26 )
                MI_WSLE_LOG_ACCESS(a3, (_BYTE *)v9);
              MiInsertTbFlushEntry((__int64)v29, (__int64)(v9 << 25) >> 16, 1LL, 0);
              if ( HIDWORD(v29[1]) == LODWORD(v29[1]) )
                MiFreeWsleList(a3, (__int64)v29, 0);
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
    while ( v9 < v27 );
    if ( valid )
    {
      if ( HIDWORD(v29[1]) )
        MiFreeWsleList(a3, (__int64)v29, 0);
      MiUnlockPageTableInternal(a3, valid);
    }
    v15 = v24;
  }
  return MiUnlockWorkingSetShared(a3, v15);
}
