/*
 * XREFs of MiLockPageLeafPageTable @ 0x14031BF80
 * Callers:
 *     MiProbeLeafFrame @ 0x140247F34 (MiProbeLeafFrame.c)
 *     MiProbeAndLockPacket @ 0x14031B810 (MiProbeAndLockPacket.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiFaultInProbeAddress @ 0x14023C9F8 (MiFaultInProbeAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r14
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  char v12; // r12
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 48) = ZeroPte;
  v4 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = v4;
  v22 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *(_QWORD *)(a1 + 40);
  v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 )
  {
    if ( v5 == ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_4;
    MiUnlockPageTableInternal(v2, v5);
    *(_DWORD *)(a1 + 72) &= ~0x20u;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v6 = MiFastLockLeafPageTable(v2, v1, 4LL);
  if ( !v6 )
  {
    LODWORD(v9) = 3;
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 40) = *(&v21 + v6);
  if ( v6 != 1 )
  {
    LODWORD(v9) = v6 - 1;
    goto LABEL_14;
  }
  while ( 1 )
  {
LABEL_4:
    v7 = *(_QWORD *)v4;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
        || (v7 & 1) == 0
        || (v7 & 0x20) != 0 && (v7 & 0x42) != 0 )
      {
        v4 = v21;
      }
      else
      {
        v4 = v21;
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v19 = *((_QWORD *)&Flink->Flink + ((v21 >> 3) & 0x1FF));
          v20 = v7 | 0x20;
          if ( (v19 & 0x20) == 0 )
            v20 = v7;
          v7 = v20;
          if ( (v19 & 0x42) != 0 )
            v7 = v20 | 0x42;
        }
      }
    }
    if ( (v7 & 1) != 0 )
      break;
    result = MiFaultInProbeAddress(a1);
    if ( (int)result < 0 )
    {
LABEL_30:
      ++dword_140C52A74;
      return result;
    }
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    LODWORD(v9) = 3;
LABEL_14:
    v9 = (int)v9;
    if ( (_DWORD)v9 )
    {
      while ( 1 )
      {
        v10 = *(&v21 + v9);
        v11 = MI_READ_PTE_LOCK_FREE(v10);
        v25 = v11;
        if ( (v11 & 1) != 0 )
        {
          if ( (v11 & 0x80u) != 0LL )
          {
            if ( *(_DWORD *)(a1 + 96) == 1 && (v11 & 0x800) == 0 )
            {
              ++dword_140C52A7C;
              return 3221225477LL;
            }
            v12 = 1;
            v1 >>= 12;
            v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFFLL;
            v14 = 1LL;
            do
            {
              v15 = v1;
              v1 >>= 9;
              v16 = v14 * (v15 & 0x1FF);
              v14 <<= 9;
              v13 += v16;
              --v9;
            }
            while ( v9 );
            v17 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)(a1 + 136) = v13;
            *(_QWORD *)(a1 + 152) = v17 & ~((v14 << 12) - 1);
            *(_QWORD *)(a1 + 160) = (~((v14 << 12) - 1) & ((v14 << 12) + v17)) - 1;
            *(_DWORD *)(a1 + 72) |= 0x20u;
            *(_QWORD *)(a1 + 168) = v13 & ~(v14 - 1);
          }
          else
          {
            v12 = 0;
          }
          MiLockPageTableInternal(v2, v10, 0LL);
          MiUnlockPageTableInternal(v2, *(_QWORD *)(a1 + 40));
          *(_QWORD *)(a1 + 40) = v10;
          if ( v12 )
            return 0LL;
        }
        else
        {
          result = MiFaultInProbeAddress(a1);
          if ( (int)result < 0 )
            goto LABEL_30;
          *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
          MiLockPageTableInternal(v2, 0xFFFFF6FB7DBEDF68uLL, 0LL);
          v9 = 4LL;
        }
        if ( !--v9 )
          goto LABEL_4;
      }
    }
  }
  *(_QWORD *)(a1 + 48) = v7;
  return 0LL;
}
