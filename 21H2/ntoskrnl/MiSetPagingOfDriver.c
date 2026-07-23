/*
 * XREFs of MiSetPagingOfDriver @ 0x14025BABC
 * Callers:
 *     MmPageEntireDriver @ 0x1406A7F00 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x1407A5510 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiTrimSystemImagePages @ 0x14023CB80 (MiTrimSystemImagePages.c)
 *     MiWriteWsle @ 0x14023F36C (MiWriteWsle.c)
 *     MiDriverPageMustStayResident @ 0x14025BE8C (MiDriverPageMustStayResident.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiUnlockLoaderEntry @ 0x140298840 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140298A78 (MiLockLoaderEntry.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 *v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rbx
  _KPROCESS *Process; // rcx
  __int64 v14; // r9
  PVOID result; // rax
  __int16 v16; // cx
  __int64 v17; // rcx
  BOOL v18; // ebx
  unsigned __int64 v19; // r12
  __int64 v20; // r11
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  int HasShadow; // eax
  char v25; // [rsp+20h] [rbp-E0h]
  __int64 AnyMultiplexedVm; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  _QWORD v30[24]; // [rsp+50h] [rbp-B0h] BYREF

  v28 = a3;
  v4 = a1;
  v29 = a1;
  memset(v30, 0, 0xB8uLL);
  v5 = 0LL;
  LODWORD(v30[1]) = 20;
  v6 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v30[3] = 0LL;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  v9 = AnyMultiplexedVm;
  MiLockLoaderEntry(v4 + 160, 2LL);
  v10 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v25 = v10;
  if ( a2 <= v28 )
  {
    do
    {
      if ( !v8 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList(v30);
          v5 += MiTrimSystemImagePages(v6, a2 - 8, v23);
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
        v27 = v12;
        if ( (v12 & 1) != 0 )
        {
          if ( (unsigned int)MiPteInShadowRange(&v27) )
          {
            if ( (MiFlags & 0xC00000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
                Process = KeGetCurrentThread()->ApcState.Process;
            }
          }
          if ( (MiGetWsleContents(Process, v7) & 0xF) == 9 )
          {
            v16 = *(_WORD *)(v14 + 32);
            if ( v16 == 1 || (v11 = 2LL, v16 == 2) && (*(_BYTE *)(v14 + 34) & 8) != 0 )
            {
              v17 = a2;
              if ( v6 )
                v17 = (__int64)v6;
              v6 = (__int64 *)v17;
              MiWriteWsle(v17, v7);
              v18 = 0;
              v19 = v27 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v27 = v19;
              if ( (unsigned int)MiPteInShadowRange(a2) )
              {
                HasShadow = MiPteHasShadow();
                v20 = 1LL;
                v18 = HasShadow != 0;
              }
              else
              {
                v20 = 1LL;
              }
              *(_QWORD *)a2 = v19;
              if ( v18 )
                MiWritePteShadow(a2, v19);
              MiInsertTbFlushEntry(v30, v7, v20, 0LL);
              v4 = v29;
            }
          }
        }
        else if ( (v12 & 0x400) != 0 && v6 )
        {
          MiFlushTbList(v30);
          v5 += MiTrimSystemImagePages(v6, a2 - 8, v21);
          v6 = 0LL;
        }
        v9 = AnyMultiplexedVm;
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= v28 );
    if ( v6 )
    {
      MiFlushTbList(v30);
      v5 += MiTrimSystemImagePages(v6, v28, v22);
    }
    if ( v8 )
      MiUnlockPageTableInternal(v9, v8);
    v10 = v25;
  }
  LOBYTE(v11) = v10;
  MiUnlockWorkingSetShared(v9, v11);
  result = (PVOID)MiUnlockLoaderEntry(v4 + 160, 2LL);
  if ( v5 )
  {
    result = *(PVOID *)(v4 + 48);
    if ( result == PsHalImageBase || result == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CD88 + 2, v5);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4CD88 + 3, v5);
  }
  return result;
}
