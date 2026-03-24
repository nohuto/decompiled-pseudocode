/*
 * XREFs of MiSetPagingOfDriver @ 0x14026DB1C
 * Callers:
 *     MmPageEntireDriver @ 0x1406D0C20 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x1407A5310 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiDriverPageMustStayResident @ 0x14026DEEC (MiDriverPageMustStayResident.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiTrimSystemImagePages @ 0x1402BE540 (MiTrimSystemImagePages.c)
 *     MiWriteWsle @ 0x1402C0ED0 (MiWriteWsle.c)
 *     MiUnlockLoaderEntry @ 0x1402E74F0 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402E7728 (MiLockLoaderEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int64 *v6; // r15
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rbx
  _KPROCESS *Process; // rcx
  char WsleContents; // al
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  __int16 v21; // cx
  unsigned __int64 *v22; // rcx
  BOOL v23; // ebx
  unsigned __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r11
  int HasShadow; // eax
  unsigned __int8 v32; // [rsp+20h] [rbp-E0h]
  __int64 AnyMultiplexedVm; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-C0h]
  _QWORD v37[24]; // [rsp+50h] [rbp-B0h] BYREF

  v35 = a3;
  v4 = a1;
  v36 = a1;
  memset(v37, 0, 0xB8uLL);
  v5 = 0LL;
  LODWORD(v37[1]) = 20;
  v6 = 0LL;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  v37[3] = 0LL;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  v9 = AnyMultiplexedVm;
  MiLockLoaderEntry(v4 + 160, 2LL);
  v13 = MiLockWorkingSetShared(AnyMultiplexedVm, v10, v11, v12);
  v32 = v13;
  if ( (unsigned __int64)a2 <= v35 )
  {
    do
    {
      if ( !v8 || ((unsigned __int16)a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList(v37);
          v5 += MiTrimSystemImagePages(v6, a2 - 1);
          v6 = 0LL;
        }
        if ( v8 )
          MiUnlockPageTableInternal(v9, v8);
        v8 = (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v9, v8, 0LL);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(v4, a2) )
      {
        v15 = MI_READ_PTE_LOCK_FREE(a2);
        v34 = v15;
        if ( (v15 & 1) != 0 )
        {
          if ( (unsigned int)MiPteInShadowRange(&v34, v14) )
          {
            if ( (MiFlags & 0xC00000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
                Process = KeGetCurrentThread()->ApcState.Process;
            }
          }
          WsleContents = MiGetWsleContents(Process, v7);
          if ( (WsleContents & 0xF) == 9 )
          {
            v21 = *(_WORD *)(v19 + 32);
            if ( v21 == 1 || v21 == 2 && (*(_BYTE *)(v19 + 34) & 8) != 0 )
            {
              v22 = a2;
              if ( v6 )
                v22 = v6;
              v6 = v22;
              LOBYTE(v18) = WsleContents & 0xF0 | 0xA;
              MiWriteWsle(v22, v7, v18);
              v23 = 0;
              v24 = v34 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v34 = v24;
              if ( (unsigned int)MiPteInShadowRange(a2, v25) )
              {
                HasShadow = MiPteHasShadow(v27, v26, v28, v29);
                v30 = 1LL;
                v23 = HasShadow != 0;
              }
              else
              {
                v30 = 1LL;
              }
              *a2 = v24;
              if ( v23 )
                MiWritePteShadow(a2, v24);
              MiInsertTbFlushEntry(v37, v7, v30, 0LL);
              v4 = v36;
            }
          }
        }
        else if ( (v15 & 0x400) != 0 && v6 )
        {
          MiFlushTbList(v37);
          v5 += MiTrimSystemImagePages(v6, a2 - 1);
          v6 = 0LL;
        }
        v9 = AnyMultiplexedVm;
      }
      ++a2;
      v7 += 4096LL;
    }
    while ( (unsigned __int64)a2 <= v35 );
    if ( v6 )
    {
      MiFlushTbList(v37);
      v5 += MiTrimSystemImagePages(v6, v35);
    }
    if ( v8 )
      MiUnlockPageTableInternal(v9, v8);
    v13 = v32;
  }
  MiUnlockWorkingSetShared(v9, v13);
  result = MiUnlockLoaderEntry(v4 + 160, 2LL);
  if ( v5 )
  {
    result = *(_QWORD *)(v4 + 48);
    if ( result == PsHalImageBase || result == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CD48 + 2, v5);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CD48 + 3, v5);
  }
  return result;
}
