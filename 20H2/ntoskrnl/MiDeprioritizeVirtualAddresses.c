/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x140534BCC
 * Callers:
 *     MiDeprioritizeVad @ 0x140381794 (MiDeprioritizeVad.c)
 *     HvTrimHive @ 0x1406DD28C (HvTrimHive.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402CFBA0 (MI_WSLE_LOG_ACCESS.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x1402D3D44 (MiUpdatePfnPriority.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
  v23 = dword_140C4E6A8;
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
