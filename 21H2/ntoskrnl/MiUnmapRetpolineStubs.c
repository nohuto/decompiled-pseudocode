/*
 * XREFs of MiUnmapRetpolineStubs @ 0x140544248
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiWriteWsle @ 0x1402C0ED0 (MiWriteWsle.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
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
  char WsleContents; // al
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // r12d
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // r8
  __int64 ContainingPageTable; // rax
  __int64 v26; // r8
  unsigned __int8 v28; // [rsp+20h] [rbp-118h]
  __int64 v29; // [rsp+28h] [rbp-110h]
  unsigned __int64 v30; // [rsp+30h] [rbp-108h]
  __int64 v31; // [rsp+38h] [rbp-100h]
  _QWORD v32[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v32, 0, 0xB8uLL);
  v3 = 0LL;
  if ( a2 )
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = MiGetSessionVm();
  v8 = AnyMultiplexedVm;
  v9 = v5 + ((((unsigned int)dword_140C4CCB0 >> 12) + (_DWORD)v6 + ((dword_140C4CCB0 & 0xFFF) != 0)) << 12);
  v30 = v9;
  v10 = qword_140C4CC50;
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = qword_140C4CC50;
  WORD2(v32[0]) = 0;
  LODWORD(v32[1]) = 20;
  v32[2] = 0LL;
  v32[3] = 0LL;
  LODWORD(v32[0]) = a2 == 0 ? 2 : 0;
  v12 = 0LL;
  v28 = MiLockWorkingSetShared(AnyMultiplexedVm, v5, v6, v7);
  v14 = v28;
  if ( dword_140C4CC88 )
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)(v10 + 8 * v12 + 48);
      v15 = v11 + 8 * v12;
      v16 = v9 + (unsigned int)((_DWORD)v12 << 12);
      if ( v3 )
      {
        if ( (v15 & 0xFFF) != 0 )
          goto LABEL_9;
        MiFlushTbList((__int64)v32, v13);
        MiUnlockPageTableInternal(v8, v3);
      }
      v3 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v8, v3, 0LL);
LABEL_9:
      if ( MI_READ_PTE_LOCK_FREE(v11 + 8 * v12) )
      {
        WsleContents = MiGetWsleContents(v17, v9 + (unsigned int)((_DWORD)v12 << 12));
        MiWriteWsle(v19, v9 + (unsigned int)((_DWORD)v12 << 12), WsleContents & 0xF0 | 0xA);
        v20 = ZeroPte;
        v21 = 0;
        if ( MiPteInShadowRange(v11 + 8 * v12) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_140C4E008) )
            {
              v23 = (ZeroPte & 1) == 0;
LABEL_16:
              if ( !v23 )
                v20 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v23 = (ZeroPte & 1) == 0;
            goto LABEL_16;
          }
        }
        *(_QWORD *)v15 = v20;
        if ( v21 )
          MiWritePteShadow(v11 + 8 * v12, v20, v22);
        MiInsertTbFlushEntry((__int64)v32, v16, 1LL, 0);
        MiLockAndDecrementShareCount(48 * v29 - 0x58000000000LL, 0LL, v24);
        ContainingPageTable = MiGetContainingPageTable(v11 + 8 * v12);
        MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL, 0LL, v26);
        v9 = v30;
        v10 = v31;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= dword_140C4CC88 )
      {
        v14 = v28;
        break;
      }
    }
  }
  MiFlushTbList((__int64)v32, v13);
  if ( v3 )
    MiUnlockPageTableInternal(v8, v3);
  return MiUnlockWorkingSetShared(v8, v14);
}
