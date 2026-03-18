/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x1402810B0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1406F77DC (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  signed __int64 *v4; // rsi
  unsigned __int64 *v5; // rbp
  unsigned __int8 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned int v9; // r14d
  char *AnyMultiplexedVm; // rdi
  __int64 v11; // rbx
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 ProtoPteAddress; // rsi
  unsigned __int64 v16; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  signed __int64 v20; // [rsp+20h] [rbp-118h] BYREF
  __int128 v21; // [rsp+28h] [rbp-110h] BYREF
  int v22; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v23; // [rsp+44h] [rbp-F4h]
  char v24; // [rsp+46h] [rbp-F2h]
  unsigned __int8 v25; // [rsp+47h] [rbp-F1h]
  __int64 v26; // [rsp+48h] [rbp-F0h]
  __int64 v27; // [rsp+50h] [rbp-E8h]
  char *v28; // [rsp+58h] [rbp-E0h]
  __int64 v29; // [rsp+60h] [rbp-D8h]
  __int64 v30; // [rsp+68h] [rbp-D0h]
  _BYTE v31[112]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 (__fastcall *v32)(__int64); // [rsp+E0h] [rbp-58h]
  __int128 *v33; // [rsp+E8h] [rbp-50h]

  v4 = (signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = MiLockWorkingSetShared(v5);
  v23 = 0;
  v21 = 0LL;
  v24 = 0;
  v26 = 0LL;
  memset(v31, 0, sizeof(v31));
  v22 = 2145;
  v7 = (__int64)((_QWORD)v4 << 25) >> 16;
  LeafVa = MiGetLeafVa(v7);
  v9 = 1;
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C540C0 && LeafVa <= qword_140C51BF0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( (unsigned int)MiFastLockLeafPageTable(AnyMultiplexedVm, v7, 0LL) )
  {
    v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v22 |= 4u;
    v33 = &v21;
    v27 = 0LL;
    v28 = AnyMultiplexedVm;
    LOBYTE(v23) = v23 & 0xE3 | 4;
    v32 = MiGetNextPageTableTail;
    v25 = v6;
    v29 = (__int64)((_QWORD)v4 << 25) >> 16;
    v30 = v29;
    MiWalkPageTables(&v22);
    v11 = *((_QWORD *)&v21 + 1);
  }
  if ( v4 != (signed __int64 *)v11 )
  {
    v9 = 3;
    goto LABEL_11;
  }
  v12 = *v4;
  v13 = (((unsigned __int64)v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiPteInShadowRange(v4)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v12 & 1) != 0
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v18 = v12 | 0x20;
      v19 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v4 >> 3) & 0x1FF));
      if ( (v19 & 0x20) == 0 )
        v18 = v12;
      v12 = v18;
      if ( (v19 & 0x42) != 0 )
        v12 = v18 | 0x42;
    }
  }
  v20 = v12;
  if ( !v12 )
  {
    v9 = 2;
    goto LABEL_9;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 0LL, &v21);
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 0x400) != 0 )
    {
      if ( MiIsPrototypePteVadLookup(v12) )
        goto LABEL_9;
      if ( qword_140C50780 && (v12 & 0x10) == 0 )
        v12 &= ~qword_140C50780;
      if ( ProtoPteAddress == v12 >> 16 )
        goto LABEL_9;
    }
    goto LABEL_18;
  }
  v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v20) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( *(__int64 *)(v16 + 40) >= 0 || (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
LABEL_18:
    v9 = 0;
LABEL_9:
  if ( v13 )
    MiUnlockPageTableInternal((__int64)v5, v13);
LABEL_11:
  MiUnlockWorkingSetShared(v5, v6);
  return v9;
}
