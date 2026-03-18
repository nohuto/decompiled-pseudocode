/*
 * XREFs of MiUnmapRetpolineStubs @ 0x14053E728
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiWriteWsle @ 0x140325190 (MiWriteWsle.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v16; // r8
  __int64 v17; // rcx
  char WsleContents; // al
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // r12d
  bool v22; // zf
  __int64 v23; // r8
  _DWORD *v24; // r9
  __int64 ContainingPageTable; // rax
  __int64 v26; // r8
  _DWORD *v27; // r9
  __int64 v28; // r8
  unsigned __int8 v30; // [rsp+20h] [rbp-118h]
  __int64 v31; // [rsp+28h] [rbp-110h]
  unsigned __int64 v32; // [rsp+30h] [rbp-108h]
  __int64 v33; // [rsp+38h] [rbp-100h]
  _QWORD v34[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v34, 0, 0xB8uLL);
  v3 = 0LL;
  if ( a2 )
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = MiGetSessionVm();
  v7 = AnyMultiplexedVm;
  v8 = v5 + ((((unsigned int)dword_140C4CBF0 >> 12) + v6 + ((dword_140C4CBF0 & 0xFFF) != 0)) << 12);
  v32 = v8;
  v9 = qword_140C4CB90;
  v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = qword_140C4CB90;
  WORD2(v34[0]) = 0;
  LODWORD(v34[1]) = 20;
  v34[2] = 0LL;
  v34[3] = 0LL;
  LODWORD(v34[0]) = a2 == 0 ? 2 : 0;
  v11 = 0LL;
  v30 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v13 = v30;
  if ( dword_140C4CBC8 )
  {
    while ( 1 )
    {
      v31 = *(_QWORD *)(v9 + 8 * v11 + 48);
      v14 = v10 + 8 * v11;
      v15 = v8 + (unsigned int)((_DWORD)v11 << 12);
      if ( v3 )
      {
        if ( (v14 & 0xFFF) != 0 )
          goto LABEL_9;
        MiFlushTbList((__int64)v34, v12);
        MiUnlockPageTableInternal(v7, v3, v16);
      }
      v3 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v7, v3, 0LL);
LABEL_9:
      if ( MI_READ_PTE_LOCK_FREE(v10 + 8 * v11) )
      {
        WsleContents = MiGetWsleContents(v17, v8 + (unsigned int)((_DWORD)v11 << 12));
        MiWriteWsle(v19, v8 + (unsigned int)((_DWORD)v11 << 12), WsleContents & 0xF0 | 0xA);
        v20 = ZeroPte;
        v21 = 0;
        if ( MiPteInShadowRange(v10 + 8 * v11) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_140C4DF48) )
            {
              v22 = (ZeroPte & 1) == 0;
LABEL_16:
              if ( !v22 )
                v20 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v22 = (ZeroPte & 1) == 0;
            goto LABEL_16;
          }
        }
        *(_QWORD *)v14 = v20;
        if ( v21 )
          MiWritePteShadow(v10 + 8 * v11, v20);
        MiInsertTbFlushEntry((__int64)v34, v15, 1LL, 0);
        MiLockAndDecrementShareCount(48 * v31 - 0x58000000000LL, 0LL, v23, v24);
        ContainingPageTable = MiGetContainingPageTable(v10 + 8 * v11);
        MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL, 0LL, v26, v27);
        v8 = v32;
        v9 = v33;
      }
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= dword_140C4CBC8 )
      {
        v13 = v30;
        break;
      }
    }
  }
  MiFlushTbList((__int64)v34, v12);
  if ( v3 )
    MiUnlockPageTableInternal(v7, v3, v28);
  return MiUnlockWorkingSetShared(v7, v13);
}
