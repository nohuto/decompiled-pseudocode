/*
 * XREFs of MiSetPagingOfDriver @ 0x1402DFC70
 * Callers:
 *     MmPageEntireDriver @ 0x1406A88B0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x14078E6B0 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiDriverPageMustStayResident @ 0x1402E0040 (MiDriverPageMustStayResident.c)
 *     MiWriteWsle @ 0x1402E0090 (MiWriteWsle.c)
 *     MiTrimSystemImagePages @ 0x1402E00CC (MiTrimSystemImagePages.c)
 *     MiUnlockLoaderEntry @ 0x1402E095C (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402E0B94 (MiLockLoaderEntry.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // rbx
  _KPROCESS *Process; // rcx
  char WsleContents; // al
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID result; // rax
  __int16 v18; // cx
  unsigned __int64 v19; // rcx
  BOOL v20; // ebx
  unsigned __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r11
  int HasShadow; // eax
  unsigned __int8 v28; // [rsp+20h] [rbp-E0h]
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h]
  _QWORD v33[24]; // [rsp+50h] [rbp-B0h] BYREF

  v31 = a3;
  v4 = a1;
  v32 = a1;
  memset(v33, 0, 0xB8uLL);
  v5 = 0LL;
  LODWORD(v33[1]) = 20;
  v6 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v33[3] = 0LL;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = (__int64)AnyMultiplexedVm;
  MiLockLoaderEntry(v4 + 160, 2LL);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v28 = v10;
  if ( a2 <= v31 )
  {
    do
    {
      if ( !v8 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList((__int64)v33, (_KPROCESS *)v11);
          v5 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        if ( v8 )
          MiUnlockPageTableInternal(v9, v8);
        v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v9, v8, 0LL);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(v4, a2) )
      {
        v12 = MI_READ_PTE_LOCK_FREE(a2);
        v30 = v12;
        if ( (v12 & 1) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&v30) && (MiFlags & 0xC00000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
              Process = KeGetCurrentThread()->ApcState.Process;
          }
          WsleContents = MiGetWsleContents((__int64)Process, v7);
          if ( (WsleContents & 0xF) == 9 )
          {
            v18 = *(_WORD *)(v16 + 32);
            if ( v18 == 1 || (v11 = 2LL, v18 == 2) && (*(_BYTE *)(v16 + 34) & 8) != 0 )
            {
              v19 = a2;
              if ( v6 )
                v19 = v6;
              v6 = v19;
              LOBYTE(v15) = WsleContents & 0xF0 | 0xA;
              MiWriteWsle(v19, v7, v15);
              v20 = 0;
              v21 = v30 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v30 = v21;
              if ( MiPteInShadowRange(a2) )
              {
                HasShadow = MiPteHasShadow(v23, v22, v24, v25);
                v26 = 1LL;
                v20 = HasShadow != 0;
              }
              else
              {
                v26 = 1LL;
              }
              *(_QWORD *)a2 = v21;
              if ( v20 )
                MiWritePteShadow(a2, v21);
              MiInsertTbFlushEntry((__int64)v33, v7, v26, 0);
              v4 = v32;
            }
          }
        }
        else if ( (v12 & 0x400) != 0 && v6 )
        {
          MiFlushTbList((__int64)v33, (_KPROCESS *)v11);
          v5 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        v9 = (__int64)AnyMultiplexedVm;
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= v31 );
    if ( v6 )
    {
      MiFlushTbList((__int64)v33, (_KPROCESS *)v11);
      v5 += MiTrimSystemImagePages(v6, v31);
    }
    if ( v8 )
      MiUnlockPageTableInternal(v9, v8);
    v10 = v28;
  }
  MiUnlockWorkingSetShared(v9, v10);
  result = (PVOID)MiUnlockLoaderEntry(v4 + 160, 2LL);
  if ( v5 )
  {
    result = *(PVOID *)(v4 + 48);
    if ( result == PsHalImageBase || result == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CB48 + 2, v5);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CB48 + 3, v5);
  }
  return result;
}
