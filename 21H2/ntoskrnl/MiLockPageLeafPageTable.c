/*
 * XREFs of MiLockPageLeafPageTable @ 0x1402AFCE0
 * Callers:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140308590 (MiProbeLeafFrame.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiFaultInProbeAddress @ 0x140235B68 (MiFaultInProbeAddress.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  char v15; // r12
  __int64 v16; // rbx
  __int64 i; // r9
  __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]
  unsigned __int64 v31; // [rsp+30h] [rbp-38h]
  __int64 v32; // [rsp+38h] [rbp-30h]
  __int64 v33; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 96);
  v4 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
  *(_QWORD *)(a1 + 40) = ZeroPte;
  v5 = v4 - 0x98000000000LL;
  v29 = v5;
  v30 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = *(_QWORD *)(a1 + 32);
  v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v6 )
  {
    if ( v6 == ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_4;
    MiUnlockPageTableInternal(v2, v6);
    *(_DWORD *)(a1 + 64) &= ~0x20u;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v7 = MiFastLockLeafPageTable(v2, v1, 4LL);
  if ( !v7 )
  {
    v10 = 3;
    *(_QWORD *)(a1 + 32) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 32) = *(&v29 + v7);
  if ( v7 != 1 )
  {
    v10 = v7 - 1;
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_4:
    v8 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
        || (v8 & 1) == 0
        || (v8 & 0x20) != 0 && (v8 & 0x42) != 0 )
      {
        v5 = v29;
      }
      else
      {
        v5 = v29;
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v27 = *((_QWORD *)&Flink->Flink + ((v29 >> 3) & 0x1FF));
          v28 = v8 | 0x20;
          if ( (v27 & 0x20) == 0 )
            v28 = v8;
          v8 = v28;
          if ( (v27 & 0x42) != 0 )
            v8 = v28 | 0x42;
        }
      }
    }
    if ( (v8 & 1) != 0 )
      break;
    result = MiFaultInProbeAddress(a1);
    if ( (int)result < 0 )
    {
LABEL_29:
      ++dword_140C4E7BC;
      return result;
    }
    *(_QWORD *)(a1 + 32) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v10 = 3;
LABEL_13:
    v11 = v10;
    if ( v10 )
    {
      while ( 1 )
      {
        v12 = *(&v29 + v11);
        v13 = MI_READ_PTE_LOCK_FREE(v12);
        v33 = v13;
        v14 = v13;
        if ( (v13 & 1) != 0 )
        {
          if ( (v13 & 0x80u) != 0LL )
          {
            if ( *(_DWORD *)(a1 + 88) == 1 && (v13 & 0x800) == 0 )
            {
              ++dword_140C4E7C4;
              return 3221225477LL;
            }
            v15 = 1;
            if ( (unsigned int)MiPteInShadowRange(&v33)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
            {
              v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v23 )
              {
                v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v33 >> 3) & 0x1FF));
                v25 = v14 | 0x20;
                if ( (v24 & 0x20) == 0 )
                  v25 = v14;
                v14 = v25;
                if ( (v24 & 0x42) != 0 )
                  v14 = v25;
              }
            }
            v16 = (v14 >> 12) & 0xFFFFFFFFFLL;
            v1 >>= 12;
            for ( i = 1LL; v11; --v11 )
            {
              v18 = v1;
              v1 >>= 9;
              v19 = i * (v18 & 0x1FF);
              i <<= 9;
              v16 += v19;
            }
            v20 = *(_QWORD *)a1;
            v21 = *(_QWORD *)a1;
            *(_QWORD *)(a1 + 128) = v16;
            v22 = ~((i << 12) - 1);
            *(_QWORD *)(a1 + 144) = v22 & v21;
            *(_QWORD *)(a1 + 152) = (v22 & ((i << 12) + v20)) - 1;
            *(_DWORD *)(a1 + 64) |= 0x20u;
            *(_QWORD *)(a1 + 160) = v16 & ~(i - 1);
          }
          else
          {
            v15 = 0;
          }
          MiLockPageTableInternal(v2, v12, 0LL);
          MiUnlockPageTableInternal(v2, *(_QWORD *)(a1 + 32));
          *(_QWORD *)(a1 + 32) = v12;
          if ( v15 )
            return 0LL;
        }
        else
        {
          result = MiFaultInProbeAddress(a1);
          if ( (int)result < 0 )
            goto LABEL_29;
          *(_QWORD *)(a1 + 32) = 0xFFFFF6FB7DBEDF68uLL;
          MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
          v11 = 4LL;
        }
        if ( !--v11 )
        {
          v5 = v29;
          goto LABEL_4;
        }
      }
    }
  }
  *(_QWORD *)(a1 + 40) = v8;
  return 0LL;
}
