/*
 * XREFs of MiSetPagingOfDriver @ 0x140324D70
 * Callers:
 *     MmPageEntireDriver @ 0x1406EF3D0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x14078C7E0 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDriverPageMustStayResident @ 0x140325140 (MiDriverPageMustStayResident.c)
 *     MiWriteWsle @ 0x140325190 (MiWriteWsle.c)
 *     MiTrimSystemImagePages @ 0x1403251CC (MiTrimSystemImagePages.c)
 *     MiUnlockLoaderEntry @ 0x140325A5C (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140325C94 (MiLockLoaderEntry.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v12; // r8
  __int64 v13; // rbx
  _KPROCESS *Process; // rcx
  char WsleContents; // al
  __int64 v16; // r9
  PVOID result; // rax
  __int16 v18; // cx
  unsigned __int64 v19; // rcx
  BOOL v20; // ebx
  unsigned __int64 v21; // r12
  __int64 v22; // r11
  int HasShadow; // eax
  unsigned __int8 v24; // [rsp+20h] [rbp-E0h]
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-C8h]
  __int64 v28; // [rsp+40h] [rbp-C0h]
  _QWORD v29[24]; // [rsp+50h] [rbp-B0h] BYREF

  v27 = a3;
  v4 = a1;
  v28 = a1;
  memset(v29, 0, 0xB8uLL);
  v5 = 0LL;
  LODWORD(v29[1]) = 20;
  v6 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v29[3] = 0LL;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9 = (__int64)AnyMultiplexedVm;
  MiLockLoaderEntry(v4 + 160, 2LL);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v24 = v10;
  if ( a2 <= v27 )
  {
    do
    {
      if ( !v8 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList((__int64)v29, (_KPROCESS *)v11);
          v5 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        if ( v8 )
          MiUnlockPageTableInternal(v9, v8, v12);
        v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v9, v8, 0LL);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(v4, a2) )
      {
        v13 = MI_READ_PTE_LOCK_FREE(a2);
        v26 = v13;
        if ( (v13 & 1) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&v26) && (MiFlags & 0xC00000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
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
              LOBYTE(v12) = WsleContents & 0xF0 | 0xA;
              MiWriteWsle(v19, v7, v12);
              v20 = 0;
              v21 = v26 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v26 = v21;
              if ( MiPteInShadowRange(a2) )
              {
                HasShadow = MiPteHasShadow();
                v22 = 1LL;
                v20 = HasShadow != 0;
              }
              else
              {
                v22 = 1LL;
              }
              *(_QWORD *)a2 = v21;
              if ( v20 )
                MiWritePteShadow(a2, v21);
              MiInsertTbFlushEntry((__int64)v29, v7, v22, 0);
              v4 = v28;
            }
          }
        }
        else if ( (v13 & 0x400) != 0 && v6 )
        {
          MiFlushTbList((__int64)v29, (_KPROCESS *)v11);
          v5 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        v9 = (__int64)AnyMultiplexedVm;
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= v27 );
    if ( v6 )
    {
      MiFlushTbList((__int64)v29, (_KPROCESS *)v11);
      v5 += MiTrimSystemImagePages(v6, v27);
    }
    if ( v8 )
      MiUnlockPageTableInternal(v9, v8, v12);
    v10 = v24;
  }
  MiUnlockWorkingSetShared(v9, v10);
  result = (PVOID)MiUnlockLoaderEntry(v4 + 160, 2LL);
  if ( v5 )
  {
    result = *(PVOID *)(v4 + 48);
    if ( result == PsHalImageBase || result == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CC88 + 2, v5);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CC88 + 3, v5);
  }
  return result;
}
