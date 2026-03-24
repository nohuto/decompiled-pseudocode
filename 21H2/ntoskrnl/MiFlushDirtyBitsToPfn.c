/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x1402A0D3C
 * Callers:
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiGetNextPageTable @ 0x14030D820 (MiGetNextPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

void *__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  unsigned __int8 v13; // bl
  int v14; // r9d
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  struct _LIST_ENTRY *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  unsigned __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned int v35; // esi
  __int64 v36; // rbx
  unsigned __int8 i; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+58h] [rbp-A8h]
  _QWORD v44[24]; // [rsp+60h] [rbp-A0h] BYREF

  v39 = 0;
  result = memset(v44, 0, 0xB8uLL);
  if ( !byte_140C4DEE8 )
  {
    LODWORD(v44[0]) = 1;
    WORD2(v44[0]) = 0;
    v44[2] = 0LL;
    LODWORD(v44[1]) = 20;
    v44[3] = 0LL;
    v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v42 = *(_QWORD *)(a3 + 184) + 1664LL;
    v12 = v42;
    v13 = MiLockWorkingSetShared(v42, v7, v8, v9);
    for ( i = v13; v10 <= v11; v13 = i )
    {
      LOBYTE(v14) = v13;
      NextPageTable = MiGetNextPageTable(v10, v11, (unsigned int)v44, v14, 0, (__int64)&v39);
      v10 = NextPageTable;
      if ( !NextPageTable )
        break;
      v16 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v43 = v16;
      if ( v39 )
      {
        v25 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = v39;
        do
        {
          v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v26;
        }
        while ( v26 );
        v27 = 0x200000LL;
        if ( v39 > 1 )
        {
          v28 = v39 - 1;
          do
          {
            v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v27 <<= 9;
            --v28;
          }
          while ( v28 );
        }
        v29 = MI_READ_PTE_LOCK_FREE(v25);
        v38 = v29;
        v33 = v29;
        if ( (v29 & 1) != 0 && (v29 & 0x42) != 0 )
        {
          if ( (unsigned int)MiPteInShadowRange(&v38, Flink) )
          {
            if ( (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v33 & 0x20) == 0 )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v38 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v33 |= 0x20uLL;
              }
            }
          }
          v34 = 48 * ((v33 >> 12) & 0xFFFFFFFFFLL) + 24;
          v35 = 0;
          if ( v27 )
          {
            v36 = v34 - 0x58000000000LL;
            do
            {
              v40 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v40, (__int64)Flink, v31, v32);
                while ( *(__int64 *)v36 < 0 );
              }
              *(_BYTE *)(v36 + 10) |= 0x10u;
              _InterlockedAnd64((volatile signed __int64 *)v36, 0x7FFFFFFFFFFFFFFFuLL);
              v35 += 4096;
              v36 += 48LL;
            }
            while ( v35 < v27 );
            v12 = v42;
          }
        }
        v10 = (((unsigned __int64)MiGetLeafVa(v25 + 8, Flink, v31, v32) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v17 = (__int64)(NextPageTable << 25) >> 16;
        do
        {
          v18 = MI_READ_PTE_LOCK_FREE(v10);
          v38 = v18;
          v20 = v18;
          if ( (v18 & 1) != 0 && (v18 & 0x42) != 0 )
          {
            if ( (unsigned int)MiPteInShadowRange(&v38, v19) )
            {
              if ( (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v20 & 0x20) == 0 )
              {
                v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                if ( v21 )
                {
                  if ( ((__int64)*(&v21->Flink + (((unsigned __int64)&v38 >> 3) & 0x1FF)) & 0x20) != 0 )
                    v20 |= 0x20uLL;
                }
              }
            }
            v24 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v41 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v41, (__int64)v21, v22, v23);
              while ( *(__int64 *)(v24 + 24) < 0 );
            }
            *(_BYTE *)(v24 + 34) |= 0x10u;
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v10, v38 & 0xFFFFFFFFFFFFFFBDuLL);
            MiInsertTbFlushEntry(v44, v17, 1LL, 0LL);
          }
          v17 += 4096LL;
          v10 += 8LL;
        }
        while ( (v17 & 0x1FFFFF) != 0 && v10 <= v11 );
        MiFlushTbList(v44);
        v16 = v43;
        v12 = v42;
      }
      MiUnlockPageTableInternal(v12, v16);
    }
    return (void *)MiUnlockWorkingSetShared(v12, v13);
  }
  return result;
}
