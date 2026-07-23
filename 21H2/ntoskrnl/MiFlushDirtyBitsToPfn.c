/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x14021E2BC
 * Callers:
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  void *result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rdx
  char v11; // bl
  int v12; // r9d
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  struct _LIST_ENTRY *v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rbx
  unsigned int v28; // esi
  __int64 v29; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+58h] [rbp-A8h]
  _QWORD v37[24]; // [rsp+60h] [rbp-A0h] BYREF

  v32 = 0;
  result = memset(v37, 0, 0xB8uLL);
  if ( !byte_140C4DF28 )
  {
    LODWORD(v37[0]) = 1;
    WORD2(v37[0]) = 0;
    v37[2] = 0LL;
    LODWORD(v37[1]) = 20;
    v37[3] = 0LL;
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = *(_QWORD *)(a3 + 184) + 1664LL;
    v9 = v35;
    v11 = MiLockWorkingSetShared(v35);
    for ( i = v11; v7 <= v8; v11 = i )
    {
      LOBYTE(v12) = v11;
      NextPageTable = MiGetNextPageTable(v7, v8, (unsigned int)v37, v12, 0, (__int64)&v32);
      v7 = NextPageTable;
      if ( !NextPageTable )
        break;
      v14 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v36 = v14;
      if ( v32 )
      {
        v20 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = v32;
        do
        {
          v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v21;
        }
        while ( v21 );
        v22 = 0x200000LL;
        if ( v32 > 1 )
        {
          v23 = v32 - 1;
          do
          {
            v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v22 <<= 9;
            --v23;
          }
          while ( v23 );
        }
        v24 = MI_READ_PTE_LOCK_FREE(v20);
        v31 = v24;
        v25 = v24;
        if ( (v24 & 1) != 0 && (v24 & 0x42) != 0 )
        {
          if ( (unsigned int)MiPteInShadowRange(&v31) )
          {
            if ( (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v25 & 0x20) == 0 )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v25 |= 0x20uLL;
              }
            }
          }
          v27 = 48 * ((v25 >> 12) & 0xFFFFFFFFFLL) + 24;
          v28 = 0;
          if ( v22 )
          {
            v29 = v27 - 0x58000000000LL;
            do
            {
              v33 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v33);
                while ( *(__int64 *)v29 < 0 );
              }
              *(_BYTE *)(v29 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
              v28 += 4096;
              v29 += 48LL;
            }
            while ( v28 < v22 );
            v9 = v35;
          }
        }
        v7 = (((unsigned __int64)MiGetLeafVa(v20 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v15 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v16 = MI_READ_PTE_LOCK_FREE(v7);
          v31 = v16;
          v17 = v16;
          if ( (v16 & 1) != 0 && (v16 & 0x42) != 0 )
          {
            if ( (unsigned int)MiPteInShadowRange(&v31) )
            {
              if ( (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v17 & 0x20) == 0 )
              {
                v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v19 )
                {
                  if ( ((__int64)*(&v19->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF)) & 0x20) != 0 )
                    v17 |= 0x20uLL;
                }
              }
            }
            v18 = 48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v34 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v34);
              while ( *(__int64 *)(v18 + 24) < 0 );
            }
            *(_BYTE *)(v18 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v7, v31 & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry(v37, v15, 1LL, 0LL);
          }
          v15 += 4096LL;
          v7 += 8LL;
        }
        while ( (v15 & 0x1FFFFF) != 0 && v7 <= v8 );
        MiFlushTbList(v37);
        v14 = v36;
        v9 = v35;
      }
      MiUnlockPageTableInternal(v9, v14);
    }
    LOBYTE(v10) = v11;
    return (void *)MiUnlockWorkingSetShared(v9, v10);
  }
  return result;
}
