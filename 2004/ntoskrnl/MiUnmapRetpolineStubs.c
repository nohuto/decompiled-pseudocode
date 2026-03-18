/*
 * XREFs of MiUnmapRetpolineStubs @ 0x14053ED78
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiWriteWsle @ 0x1402E0090 (MiWriteWsle.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiUnmapRetpolineStubs(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdi
  __int64 AnyMultiplexedVm; // rax
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp
  _KPROCESS *v12; // rdx
  unsigned __int8 v13; // r14
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  char WsleContents; // al
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // r12d
  __int64 v21; // r8
  bool v22; // zf
  __int64 ContainingPageTable; // rax
  unsigned __int8 v25; // [rsp+20h] [rbp-118h]
  __int64 v26; // [rsp+28h] [rbp-110h]
  unsigned __int64 v27; // [rsp+30h] [rbp-108h]
  __int64 v28; // [rsp+38h] [rbp-100h]
  _QWORD v29[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v29, 0, 0xB8uLL);
  v3 = 0LL;
  if ( a2 )
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = MiGetSessionVm();
  v7 = AnyMultiplexedVm;
  v8 = v5 + ((((unsigned int)dword_140C4CAB0 >> 12) + v6 + ((dword_140C4CAB0 & 0xFFF) != 0)) << 12);
  v27 = v8;
  v9 = qword_140C4CA50;
  v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = qword_140C4CA50;
  WORD2(v29[0]) = 0;
  LODWORD(v29[1]) = 20;
  v29[2] = 0LL;
  v29[3] = 0LL;
  LODWORD(v29[0]) = a2 == 0 ? 2 : 0;
  v11 = 0LL;
  v25 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v13 = v25;
  if ( dword_140C4CA88 )
  {
    while ( 1 )
    {
      v26 = *(_QWORD *)(v9 + 8 * v11 + 48);
      v14 = v10 + 8 * v11;
      v15 = v8 + (unsigned int)((_DWORD)v11 << 12);
      if ( v3 )
      {
        if ( (v14 & 0xFFF) != 0 )
          goto LABEL_9;
        MiFlushTbList((__int64)v29, v12);
        MiUnlockPageTableInternal(v7, v3);
      }
      v3 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v7, v3, 0LL);
LABEL_9:
      if ( MI_READ_PTE_LOCK_FREE(v10 + 8 * v11) )
      {
        WsleContents = MiGetWsleContents(v16, v8 + (unsigned int)((_DWORD)v11 << 12));
        MiWriteWsle(v18, v8 + (unsigned int)((_DWORD)v11 << 12), WsleContents & 0xF0 | 0xA);
        v19 = ZeroPte;
        v20 = 0;
        if ( MiPteInShadowRange(v10 + 8 * v11) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C4DE08) )
            {
              v22 = (ZeroPte & 1) == 0;
LABEL_16:
              if ( !v22 )
                v19 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v22 = (ZeroPte & 1) == 0;
            goto LABEL_16;
          }
        }
        *(_QWORD *)v14 = v19;
        if ( v20 )
          MiWritePteShadow(v10 + 8 * v11, v19, v21);
        MiInsertTbFlushEntry((__int64)v29, v15, 1LL, 0);
        MiLockAndDecrementShareCount(48 * v26 - 0x58000000000LL, 0);
        ContainingPageTable = MiGetContainingPageTable(v10 + 8 * v11);
        MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL, 0);
        v8 = v27;
        v9 = v28;
      }
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= dword_140C4CA88 )
      {
        v13 = v25;
        break;
      }
    }
  }
  MiFlushTbList((__int64)v29, v12);
  if ( v3 )
    MiUnlockPageTableInternal(v7, v3);
  return MiUnlockWorkingSetShared(v7, v13);
}
