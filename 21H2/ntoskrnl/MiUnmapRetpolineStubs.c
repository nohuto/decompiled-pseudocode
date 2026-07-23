/*
 * XREFs of MiUnmapRetpolineStubs @ 0x140544488
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiWriteWsle @ 0x14023F36C (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiUnmapRetpolineStubs(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdi
  __int64 AnyMultiplexedVm; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rbp
  _KPROCESS *v13; // rdx
  unsigned __int8 v14; // r14
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // r12d
  bool v21; // zf
  __int64 ContainingPageTable; // rax
  unsigned __int8 v24; // [rsp+20h] [rbp-118h]
  __int64 v25; // [rsp+28h] [rbp-110h]
  unsigned __int64 v26; // [rsp+30h] [rbp-108h]
  __int64 v27; // [rsp+38h] [rbp-100h]
  _QWORD v28[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v28, 0, 0xB8uLL);
  v3 = 0LL;
  if ( a2 )
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = MiGetSessionVm();
  v8 = AnyMultiplexedVm;
  v9 = v5 + ((((unsigned int)dword_140C4CCF0 >> 12) + (_DWORD)v6 + ((dword_140C4CCF0 & 0xFFF) != 0)) << 12);
  v26 = v9;
  v10 = qword_140C4CC90;
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = qword_140C4CC90;
  WORD2(v28[0]) = 0;
  LODWORD(v28[1]) = 20;
  v28[2] = 0LL;
  v28[3] = 0LL;
  LODWORD(v28[0]) = a2 == 0 ? 2 : 0;
  v12 = 0LL;
  v24 = MiLockWorkingSetShared(AnyMultiplexedVm, v5, v6, v7);
  v14 = v24;
  if ( dword_140C4CCC8 )
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(v10 + 8 * v12 + 48);
      v15 = v11 + 8 * v12;
      v16 = v9 + (unsigned int)((_DWORD)v12 << 12);
      if ( v3 )
      {
        if ( (v15 & 0xFFF) != 0 )
          goto LABEL_9;
        MiFlushTbList((__int64)v28, v13);
        MiUnlockPageTableInternal(v8, v3);
      }
      v3 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v8, v3, 0);
LABEL_9:
      if ( MI_READ_PTE_LOCK_FREE(v11 + 8 * v12) )
      {
        MiGetWsleContents(v17, v9 + (unsigned int)((_DWORD)v12 << 12));
        MiWriteWsle(v18, v9 + (unsigned int)((_DWORD)v12 << 12));
        v19 = ZeroPte;
        v20 = 0;
        if ( MiPteInShadowRange(v11 + 8 * v12) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C4E048) )
            {
              v21 = (ZeroPte & 1) == 0;
LABEL_16:
              if ( !v21 )
                v19 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v21 = (ZeroPte & 1) == 0;
            goto LABEL_16;
          }
        }
        *(_QWORD *)v15 = v19;
        if ( v20 )
          MiWritePteShadow(v11 + 8 * v12, v19);
        MiInsertTbFlushEntry((__int64)v28, v16, 1LL, 0);
        MiLockAndDecrementShareCount(48 * v25 - 0x58000000000LL, 0);
        ContainingPageTable = MiGetContainingPageTable(v11 + 8 * v12);
        MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL, 0);
        v9 = v26;
        v10 = v27;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= dword_140C4CCC8 )
      {
        v14 = v24;
        break;
      }
    }
  }
  MiFlushTbList((__int64)v28, v13);
  if ( v3 )
    MiUnlockPageTableInternal(v8, v3);
  return MiUnlockWorkingSetShared(v8, v14);
}
