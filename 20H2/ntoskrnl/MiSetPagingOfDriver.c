/*
 * XREFs of MiSetPagingOfDriver @ 0x14030CEC4
 * Callers:
 *     MmPageEntireDriver @ 0x1406B94A0 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x14079ADF0 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockLoaderEntry @ 0x140252F08 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140253140 (MiLockLoaderEntry.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiDriverPageMustStayResident @ 0x14030D294 (MiDriverPageMustStayResident.c)
 *     MiWriteWsle @ 0x14030D2E4 (MiWriteWsle.c)
 *     MiTrimSystemImagePages @ 0x14030D320 (MiTrimSystemImagePages.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
  MiLockLoaderEntry(v4 + 160, 2uLL);
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
          MiFlushTbList((unsigned int *)v33, (_KPROCESS *)v11);
          v5 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        if ( v8 )
          MiUnlockPageTableInternal(v9);
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
          MiFlushTbList((unsigned int *)v33, (_KPROCESS *)v11);
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
      MiFlushTbList((unsigned int *)v33, (_KPROCESS *)v11);
      v5 += MiTrimSystemImagePages(v6, v31);
    }
    if ( v8 )
      MiUnlockPageTableInternal(v9);
    v10 = v28;
  }
  MiUnlockWorkingSetShared(v9, v10);
  result = (PVOID)MiUnlockLoaderEntry(v4 + 160, 2);
  if ( v5 )
  {
    result = *(PVOID *)(v4 + 48);
    if ( result == PsHalImageBase || result == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CBC8 + 2, v5);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CBC8 + 3, v5);
  }
  return result;
}
