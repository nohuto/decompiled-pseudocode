/*
 * XREFs of MiWalkVaRange @ 0x14033E5D0
 * Callers:
 *     MiResetVirtualMemory @ 0x14024DB60 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140753B20 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x140240C38 (MiMakeProtoLeafValid.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402802DC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v8; // esi
  __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // r15
  unsigned __int64 NextPageTable; // rbx
  __int64 v15; // r9
  unsigned int v16; // r15d
  __int64 ProtoPteAddress; // rsi
  int v18; // r14d
  int v19; // r12d
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rbx
  unsigned int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int16 v26; // ax
  __int64 v27; // r15
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // esi
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rsi
  int v37; // eax
  unsigned __int8 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v39; // [rsp+41h] [rbp-BFh]
  int ProtoLeafValid; // [rsp+44h] [rbp-BCh]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v42; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  unsigned __int64 v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v53; // [rsp+A4h] [rbp-5Ch]
  __int16 v54; // [rsp+A6h] [rbp-5Ah]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  _BYTE v58[152]; // [rsp+C0h] [rbp-40h] BYREF

  v45 = a3;
  v5 = a3;
  v48 = 0LL;
  v47 = 0;
  v50 = 0LL;
  v44 = a4;
  v54 = 0;
  memset(v58, 0, sizeof(v58));
  ProtoLeafValid = 0;
  v8 = 0;
  v41 = 0LL;
  v9 = 0LL;
  v38 = 17;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = 20LL;
  v52 = 1;
  v12 = 0LL;
  v53 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v46 = v11;
  v43 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v42 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v39 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v13 = v39;
  if ( v10 > v11 )
    goto LABEL_31;
  do
  {
    if ( v43 )
    {
      MiUnlockPageTableInternal((__int64)v42, v43);
      v43 = 0LL;
    }
    NextPageTable = MiGetNextPageTable(v10, v11, (__int64)&v52, v13, 0, &v47);
    v16 = 1;
    if ( NextPageTable != v10 )
    {
      if ( (*(_DWORD *)(v5 + 48) & 0x200000) != 0
        || !*(_QWORD *)(v5 + 80)
        || !MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v49) )
      {
        v8 = -1073740748;
        ProtoLeafValid = -1073740748;
        if ( !NextPageTable )
        {
          v12 = v43;
          v13 = v39;
          break;
        }
        v10 = NextPageTable;
LABEL_6:
        v43 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        goto LABEL_7;
      }
      v16 = 0;
    }
    if ( NextPageTable )
      goto LABEL_6;
LABEL_7:
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v18 = 0;
      v19 = 0;
      if ( v16 )
      {
        v20 = *(_QWORD *)v10;
        if ( MiPteInShadowRange(v10)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v30 = *((_QWORD *)&Flink->Flink + ((v10 >> 3) & 0x1FF));
            v31 = v20 | 0x20;
            if ( (v30 & 0x20) == 0 )
              v31 = v20;
            v20 = v31;
            if ( (v30 & 0x42) != 0 )
              v20 = v31 | 0x42;
          }
        }
        if ( v20 )
          break;
      }
      v21 = v45;
      if ( (*(_DWORD *)(v45 + 48) & 0x200000) == 0 && *(_QWORD *)(v45 + 80) )
      {
        ProtoPteAddress = MiGetProtoPteAddress(v45, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v49);
        if ( ProtoPteAddress )
          goto LABEL_65;
        if ( !v16 )
        {
          v8 = ProtoLeafValid;
LABEL_98:
          v11 = v46;
LABEL_23:
          if ( v9 )
          {
            MiUnlockProtoPoolPage(v9, v38, v21, v15);
            v9 = 0LL;
            v41 = 0LL;
          }
          MiFlushTbList((__int64)&v52);
          v12 = v43;
          v27 = (__int64)v42;
          if ( v43 )
          {
            MiUnlockPageTableInternal((__int64)v42, v43);
            v12 = 0LL;
            v43 = 0LL;
          }
          MiUnlockWorkingSetShared(v27, v39);
          if ( v19 == -1073740748 )
            MiCopyOnWriteCheckConditions(v27, 3221226548LL);
          v13 = v39;
          goto LABEL_30;
        }
      }
LABEL_12:
      if ( v9 )
      {
        MiUnlockProtoPoolPage(v9, v38, v21, v15);
        v9 = 0LL;
        v22 = 0LL;
        v41 = 0LL;
      }
      else
      {
        v22 = v41;
      }
LABEL_14:
      v23 = MiActOnPte(v45, v16, v10, ProtoPteAddress, v44, a5, &v50, &v48);
      switch ( v23 )
      {
        case 0u:
          goto LABEL_15;
        case 0x112u:
          MiInsertTbFlushEntry((__int64)&v52, (__int64)(v10 << 25) >> 16, 1LL, 0);
          MiFlushTbList((__int64)&v52);
          v37 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
          v22 = v41;
          v19 = v37;
          v10 -= 8LL;
          v18 = 1;
          goto LABEL_15;
        case 0xC0000021:
          MiInsertTbFlushEntry((__int64)&v52, (__int64)(v10 << 25) >> 16, 1LL, 0);
LABEL_15:
          v8 = ProtoLeafValid;
          goto LABEL_16;
      }
      v8 = v23;
      ProtoLeafValid = v23;
LABEL_16:
      v24 = v48;
      if ( v48 )
      {
        if ( v9 )
        {
          MiUnlockProtoPoolPage(v9, v38, v21, v15);
          v24 = v48;
          v9 = 0LL;
          v22 = 0LL;
          v41 = 0LL;
        }
        MiReleasePageFileInfo(v50, v24, 1);
      }
      v10 += 8LL;
      v25 = v10;
      v26 = v10;
      if ( v18 )
        goto LABEL_98;
      ProtoLeafValid = v8;
      v41 = v22;
      if ( v19 < 0 )
        goto LABEL_98;
LABEL_19:
      v11 = v46;
      if ( v25 > v46
        || (v26 & 0xFFF) == 0
        || (v26 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v42)
        || KeShouldYieldProcessor() )
      {
        goto LABEL_23;
      }
    }
    if ( (v20 & 1) != 0 || (v20 & 0x400) == 0 )
      goto LABEL_12;
    v32 = v44;
    if ( v44 == 2 && MI_PROTO_FORMAT_COMBINED(v20) )
    {
      v33 = v20;
      if ( qword_140C50780 && (v20 & 0x10) == 0 )
        v33 = v20 & ~qword_140C50780;
      ProtoPteAddress = v33 >> 16;
    }
    else
    {
      if ( MI_PROTO_FORMAT_COMBINED(v20) )
      {
        if ( v32 == 1 )
          goto LABEL_91;
        if ( v9 )
        {
          MiUnlockProtoPoolPage(v9, v38, v21, v15);
          v9 = 0LL;
          v41 = 0LL;
        }
        MiFlushTbList((__int64)&v52);
        ProtoLeafValid = MiMakeProtoLeafValid(v10, 24LL, v39);
        v8 = ProtoLeafValid;
        if ( ProtoLeafValid < 0 )
        {
LABEL_91:
          v8 = -1073740748;
          ProtoLeafValid = -1073740748;
        }
        else
        {
          v10 -= 8LL;
        }
        v25 = v10 + 8;
        v10 = v25;
        v26 = v25;
        goto LABEL_19;
      }
      v34 = ((__int64)(v10 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( (v34 == 2147352576 || v34 == qword_140C50678 && qword_140C50678)
        && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 )
      {
        goto LABEL_91;
      }
      v21 = v45;
      if ( (*(_DWORD *)(v45 + 48) & 0x200000) != 0 || !*(_QWORD *)(v45 + 80) )
        goto LABEL_108;
      ProtoPteAddress = MiGetProtoPteAddress(v45, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v49);
      if ( !MiIsPrototypePteVadLookup(v20) )
      {
        v35 = v20;
        if ( qword_140C50780 && (v20 & 0x10) == 0 )
          v35 = v20 & ~qword_140C50780;
        if ( ProtoPteAddress != v35 >> 16 )
        {
LABEL_108:
          v36 = v20;
          if ( qword_140C50780 && (v20 & 0x10) == 0 )
            v36 = v20 & ~qword_140C50780;
          ProtoPteAddress = v36 >> 16;
          if ( v44 != 2 )
            goto LABEL_91;
        }
      }
    }
    if ( !ProtoPteAddress )
      goto LABEL_12;
LABEL_65:
    v22 = v41;
    if ( ((ProtoPteAddress ^ v41) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      goto LABEL_14;
    if ( v9 )
    {
      MiUnlockProtoPoolPage(v9, v38, v21, v15);
      v41 = 0LL;
    }
    v9 = MiLockProtoPoolPage(ProtoPteAddress, (__int64)&v38);
    if ( v9 )
    {
      v22 = ProtoPteAddress;
      v41 = ProtoPteAddress;
      goto LABEL_14;
    }
    MiFlushTbList((__int64)&v52);
    v12 = v43;
    if ( v43 )
    {
      MiUnlockPageTableInternal((__int64)v42, v43);
      v12 = 0LL;
      v43 = 0LL;
    }
    v13 = v39;
    MiUnlockWorkingSetShared((__int64)v42, v39);
    MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
    v8 = ProtoLeafValid;
    v11 = v46;
LABEL_30:
    MiLockWorkingSetShared((__int64)v42);
    v5 = v45;
  }
  while ( v10 <= v11 );
LABEL_31:
  MiFlushTbList((__int64)&v52);
  if ( v12 )
    MiUnlockPageTableInternal((__int64)v42, v12);
  MiUnlockWorkingSetShared((__int64)v42, v13);
  return v8;
}
