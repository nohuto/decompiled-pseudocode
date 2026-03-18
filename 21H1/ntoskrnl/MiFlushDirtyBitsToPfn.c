/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x140313B7C
 * Callers:
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v17; // r8
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  unsigned int v32; // esi
  __int64 v33; // rbx
  char i; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h]
  _QWORD v41[24]; // [rsp+60h] [rbp-A0h] BYREF

  v36 = 0;
  result = memset(v41, 0, 0xB8uLL);
  if ( !byte_140C4DE28 )
  {
    LODWORD(v41[0]) = 1;
    WORD2(v41[0]) = 0;
    v41[2] = 0LL;
    LODWORD(v41[1]) = 20;
    v41[3] = 0LL;
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = *(_QWORD *)(a3 + 184) + 1664LL;
    v9 = v39;
    v10 = MiLockWorkingSetShared(v39);
    for ( i = v10; v7 <= v8; v10 = i )
    {
      NextPageTable = MiGetNextPageTable(v7, v8, (__int64)v41, v10, 0, &v36);
      v7 = NextPageTable;
      if ( !NextPageTable )
        break;
      v12 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v40 = v12;
      if ( v36 )
      {
        v22 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = v36;
        do
        {
          v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v23;
        }
        while ( v23 );
        v24 = 0x200000LL;
        if ( v36 > 1 )
        {
          v25 = v36 - 1;
          do
          {
            v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v24 <<= 9;
            --v25;
          }
          while ( v25 );
        }
        v26 = MI_READ_PTE_LOCK_FREE(v22);
        v35 = v26;
        v27 = v26;
        if ( (v26 & 1) != 0 && (v26 & 0x42) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&v35)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v27 & 0x20) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v35 >> 3) & 0x1FF)) & 0x20) != 0 )
                v27 |= 0x20uLL;
            }
          }
          v31 = 48 * ((v27 >> 12) & 0xFFFFFFFFFLL) + 24;
          v32 = 0;
          if ( v24 )
          {
            v33 = v31 - 0x58000000000LL;
            do
            {
              v37 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v37, (__int64)Flink, v29, v30);
                while ( *(__int64 *)v33 < 0 );
              }
              *(_BYTE *)(v33 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v33, 0x7FFFFFFFFFFFFFFFuLL);
              v32 += 4096;
              v33 += 48LL;
            }
            while ( v32 < v24 );
            v9 = v39;
          }
        }
        v7 = ((MiGetLeafVa(v22 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v13 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v14 = MI_READ_PTE_LOCK_FREE(v7);
          v35 = v14;
          v16 = v14;
          if ( (v14 & 1) != 0 && (v14 & 0x42) != 0 )
          {
            if ( MiPteInShadowRange((unsigned __int64)&v35)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v16 & 0x20) == 0 )
            {
              v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v18 )
              {
                if ( ((__int64)*(&v18->Flink + (((unsigned __int64)&v35 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v16 |= 0x20uLL;
              }
            }
            v21 = 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v38 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v38, (__int64)v18, v19, v20);
              while ( *(__int64 *)(v21 + 24) < 0 );
            }
            *(_BYTE *)(v21 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v7, v35 & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry((__int64)v41, v13, 1LL, 0);
          }
          v13 += 4096LL;
          v7 += 8LL;
        }
        while ( (v13 & 0x1FFFFF) != 0 && v7 <= v8 );
        MiFlushTbList((__int64)v41, v15);
        v12 = v40;
        v9 = v39;
      }
      MiUnlockPageTableInternal(v9, v12, v17);
    }
    return (void *)MiUnlockWorkingSetShared(v9, v10);
  }
  return result;
}
