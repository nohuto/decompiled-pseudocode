/*
 * XREFs of MiUnmapRetpolineStubs @ 0x1405A2A48
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiWriteWsle @ 0x14026ED30 (MiWriteWsle.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiUnmapRetpolineStubs(__int64 a1, int a2)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // rsi
  __int64 AnyMultiplexedVm; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r9
  unsigned __int8 v14; // r12
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // r13d
  bool v21; // zf
  unsigned __int64 ContainingPageTable; // rax
  unsigned __int8 v24; // [rsp+20h] [rbp-128h]
  __int64 v25; // [rsp+28h] [rbp-120h]
  __int64 v26; // [rsp+30h] [rbp-118h]
  __int64 v27; // [rsp+38h] [rbp-110h]
  unsigned __int64 v28; // [rsp+40h] [rbp-108h]
  _QWORD v29[24]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v29, 0, 0xB8uLL);
  v3 = 0;
  v4 = 0LL;
  if ( a2 )
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = MiGetSessionVm();
  v9 = AnyMultiplexedVm;
  v10 = v8 + ((((unsigned int)dword_140C4F478 >> 12) + v6 + ((dword_140C4F478 & 0xFFF) != 0)) << 12);
  v28 = v10;
  v11 = qword_140C4F408;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v12;
  v27 = qword_140C4F408;
  LODWORD(v29[0]) = v7;
  WORD2(v29[0]) = 0;
  v29[2] = 0LL;
  LODWORD(v29[1]) = 20;
  v29[3] = 0LL;
  v14 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v24 = v14;
  if ( dword_140C4F440 )
  {
    while ( 1 )
    {
      v15 = v10 + (v3 << 12);
      v16 = v12 + 8LL * v3;
      v25 = *(_QWORD *)(v11 + 8LL * v3 + 48);
      if ( v4 )
      {
        if ( (v16 & 0xFFF) != 0 )
          goto LABEL_9;
        MiFlushTbList((__int64)v29);
        MiUnlockPageTableInternal(v9, v4);
      }
      v4 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v9, v4, 0LL, v13);
LABEL_9:
      if ( MI_READ_PTE_LOCK_FREE(v12 + 8LL * v3) )
      {
        MiGetWsleContents(v17, v15);
        MiWriteWsle(v18, v15);
        v19 = ZeroPte;
        v20 = 0;
        if ( MiPteInShadowRange(v16) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C51864) )
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
        *(_QWORD *)v16 = v19;
        if ( v20 )
          MiWritePteShadow(v16, v19);
        MiInsertTbFlushEntry((__int64)v29, v15, 1LL, 0);
        MiLockAndDecrementShareCount(48 * v25 - 0x220000000000LL, 0);
        ContainingPageTable = MiGetContainingPageTable(v16);
        MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 0);
        v12 = v26;
        v11 = v27;
      }
      v10 = v28;
      if ( ++v3 >= dword_140C4F440 )
      {
        v14 = v24;
        break;
      }
    }
  }
  MiFlushTbList((__int64)v29);
  if ( v4 )
    MiUnlockPageTableInternal(v9, v4);
  return MiUnlockWorkingSetShared(v9, v14);
}
