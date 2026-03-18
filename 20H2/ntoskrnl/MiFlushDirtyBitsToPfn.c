/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x140322668
 * Callers:
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  void *result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  char v10; // bl
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  _KPROCESS *v15; // rdx
  unsigned __int64 v16; // rbx
  struct _LIST_ENTRY *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  unsigned int v31; // esi
  __int64 v32; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+58h] [rbp-A8h]
  _QWORD v40[24]; // [rsp+60h] [rbp-A0h] BYREF

  v35 = 0;
  result = memset(v40, 0, 0xB8uLL);
  if ( !byte_140C4DD68 )
  {
    LODWORD(v40[0]) = 1;
    WORD2(v40[0]) = 0;
    v40[2] = 0LL;
    LODWORD(v40[1]) = 20;
    v40[3] = 0LL;
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v38 = *(_QWORD *)(a3 + 184) + 1664LL;
    v9 = v38;
    v10 = MiLockWorkingSetShared(v38);
    for ( i = v10; v7 <= v8; v10 = i )
    {
      NextPageTable = MiGetNextPageTable(v7, v8, (__int64)v40, v10, 0, &v35);
      v7 = NextPageTable;
      if ( !NextPageTable )
        break;
      v12 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39 = v12;
      if ( v35 )
      {
        v21 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v22 = v35;
        do
        {
          v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v22;
        }
        while ( v22 );
        v23 = 0x200000LL;
        if ( v35 > 1 )
        {
          v24 = v35 - 1;
          do
          {
            v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v23 <<= 9;
            --v24;
          }
          while ( v24 );
        }
        v25 = MI_READ_PTE_LOCK_FREE(v21);
        v34 = v25;
        v26 = v25;
        if ( (v25 & 1) != 0 && (v25 & 0x42) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&v34)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v26 & 0x20) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v34 >> 3) & 0x1FF)) & 0x20) != 0 )
                v26 |= 0x20uLL;
            }
          }
          v30 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) + 24;
          v31 = 0;
          if ( v23 )
          {
            v32 = v30 - 0x58000000000LL;
            do
            {
              v36 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v36, (__int64)Flink, v28, v29);
                while ( *(__int64 *)v32 < 0 );
              }
              *(_BYTE *)(v32 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v32, 0x7FFFFFFFFFFFFFFFuLL);
              v31 += 4096;
              v32 += 48LL;
            }
            while ( v31 < v23 );
            v9 = v38;
          }
        }
        v7 = ((MiGetLeafVa(v21 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v13 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v14 = MI_READ_PTE_LOCK_FREE(v7);
          v34 = v14;
          v16 = v14;
          if ( (v14 & 1) != 0 && (v14 & 0x42) != 0 )
          {
            if ( MiPteInShadowRange((unsigned __int64)&v34)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v16 & 0x20) == 0 )
            {
              v17 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v17 )
              {
                if ( ((__int64)*(&v17->Flink + (((unsigned __int64)&v34 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v16 |= 0x20uLL;
              }
            }
            v20 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v37 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v37, (__int64)v17, v18, v19);
              while ( *(__int64 *)(v20 + 24) < 0 );
            }
            *(_BYTE *)(v20 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v7, v34 & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry((__int64)v40, v13, 1LL, 0);
          }
          v13 += 4096LL;
          v7 += 8LL;
        }
        while ( (v13 & 0x1FFFFF) != 0 && v7 <= v8 );
        MiFlushTbList((unsigned int *)v40, v15);
        v9 = v38;
      }
      MiUnlockPageTableInternal(v9);
    }
    return (void *)MiUnlockWorkingSetShared(v9, v10);
  }
  return result;
}
