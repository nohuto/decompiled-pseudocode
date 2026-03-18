/*
 * XREFs of MiSetPagingOfDriver @ 0x1402D8F30
 * Callers:
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 *     MiEnablePagingTheExecutive @ 0x140B085F8 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiWriteWsle @ 0x14026ED30 (MiWriteWsle.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiDriverPageMustStayResident @ 0x1402D925C (MiDriverPageMustStayResident.c)
 *     MiTrimSystemImagePages @ 0x1402D92AC (MiTrimSystemImagePages.c)
 *     MiUnlockLoaderEntry @ 0x1402D94D8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402D96AC (MiLockLoaderEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  char *AnyMultiplexedVm; // r13
  unsigned __int8 v11; // al
  __int64 v12; // r14
  __int64 v13; // r9
  __int64 result; // rax
  __int16 v15; // cx
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  BOOL v18; // r15d
  __int64 v19; // r11
  int HasShadow; // eax
  unsigned __int8 v21; // [rsp+20h] [rbp-128h]
  unsigned __int64 v23; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-110h]
  _QWORD v25[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v24 = a3;
  v5 = a1;
  memset(v25, 0, 0xB8uLL);
  v6 = 0LL;
  v25[3] = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = 0LL;
  LODWORD(v25[1]) = 20;
  v9 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiLockLoaderEntry(v5 + 160, 2LL);
  v11 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v21 = v11;
  if ( a2 <= v3 )
  {
    do
    {
      if ( !v9 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList(v25);
          v8 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        if ( v9 )
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
        v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(AnyMultiplexedVm, v9, 0LL);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(v5, a2) )
      {
        v12 = MI_READ_PTE_LOCK_FREE(a2);
        v23 = v12;
        if ( (v12 & 1) != 0 )
        {
          MI_READ_PTE_LOCK_FREE(&v23);
          if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v7) & 0xF) == 9 )
          {
            v15 = *(_WORD *)(v13 + 32);
            if ( v15 == 1 || v15 == 2 && (*(_BYTE *)(v13 + 34) & 8) != 0 )
            {
              v16 = a2;
              if ( v6 )
                v16 = v6;
              v6 = v16;
              MiWriteWsle(v16, v7);
              v17 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v18 = 0;
              v23 = v17;
              if ( (unsigned int)MiPteInShadowRange(a2) )
              {
                HasShadow = MiPteHasShadow();
                v19 = 1LL;
                v18 = HasShadow != 0;
              }
              else
              {
                v19 = 1LL;
              }
              *(_QWORD *)a2 = v17;
              if ( v18 )
                MiWritePteShadow(a2, v17);
              MiInsertTbFlushEntry((__int64)v25, v7, v19, 0);
              v3 = v24;
            }
          }
        }
        else if ( (v12 & 0x400) != 0 && v6 )
        {
          MiFlushTbList(v25);
          v8 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        v5 = a1;
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= v3 );
    if ( v6 )
    {
      MiFlushTbList(v25);
      v8 += MiTrimSystemImagePages(v6, v3);
    }
    if ( v9 )
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
    v11 = v21;
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v11);
  result = MiUnlockLoaderEntry(v5 + 160, 2LL);
  if ( v8 )
  {
    result = *(_QWORD *)(v5 + 48);
    if ( result == PsHalImageBase || result == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 3, v8);
  }
  return result;
}
