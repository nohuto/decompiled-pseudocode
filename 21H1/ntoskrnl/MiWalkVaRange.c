/*
 * XREFs of MiWalkVaRange @ 0x140228550
 * Callers:
 *     MiResetVirtualMemory @ 0x140315D54 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1406DD768 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x14030BB74 (MiMakeProtoLeafValid.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140344F70 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // r13
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  unsigned __int8 v13; // r12
  __int64 NextPageTable; // rax
  __int64 v15; // rdx
  ULONG_PTR v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // rbx
  signed __int64 ProtoPteAddress; // rsi
  int v20; // r14d
  int v21; // r15d
  __int64 v22; // rbx
  __int64 Flink; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  signed __int64 v28; // rax
  unsigned int v29; // edi
  int v31; // esi
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  signed __int64 v35; // rax
  signed __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rsi
  int v39; // eax
  unsigned __int8 v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v41; // [rsp+41h] [rbp-BFh]
  int ProtoLeafValid; // [rsp+44h] [rbp-BCh]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  signed __int64 v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+70h] [rbp-90h]
  ULONG_PTR v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  int v55; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v56; // [rsp+B4h] [rbp-4Ch]
  __int16 v57; // [rsp+B6h] [rbp-4Ah]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  _BYTE v61[152]; // [rsp+D0h] [rbp-30h] BYREF

  v43 = a3;
  v5 = a3;
  v51 = 0LL;
  v50 = 0;
  v53 = 0LL;
  v45 = a4;
  v57 = 0;
  memset(v61, 0, sizeof(v61));
  ProtoLeafValid = 0;
  v8 = 0LL;
  v44 = 0LL;
  v40 = 17;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = 20LL;
  v55 = 1;
  v11 = 0LL;
  v56 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v49 = v10;
  v46 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v47 = &Process[1].ActiveProcessorsPadding[6];
  v41 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v13 = v41;
  if ( v9 > v10 )
  {
    v29 = 0;
    goto LABEL_36;
  }
LABEL_2:
  if ( v11 )
  {
    MiUnlockPageTableInternal(v12, v11);
    v11 = 0LL;
    v46 = 0LL;
  }
  NextPageTable = MiGetNextPageTable(v9, v10, (unsigned int)&v55, v13, 0, (__int64)&v50);
  v48 = 1;
  v16 = NextPageTable;
  if ( NextPageTable == v9 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v5 + 48) & 0x100000) == 0
    && *(_QWORD *)(v5 + 80)
    && MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0, &v52) )
  {
    v48 = 0;
    goto LABEL_5;
  }
  v29 = -1073740748;
  ProtoLeafValid = -1073740748;
  if ( v16 )
  {
    v9 = v16;
LABEL_5:
    if ( v16 )
      v46 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = v48;
    v18 = v43;
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v20 = 0;
      v21 = 0;
      if ( !v17 )
        goto LABEL_62;
      v22 = *(_QWORD *)v9;
      if ( (unsigned int)MiPteInShadowRange(v9, v15)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v33 = *(_QWORD *)(Flink + 8 * ((v9 >> 3) & 0x1FF));
          Flink = v22 | 0x20;
          if ( (v33 & 0x20) == 0 )
            Flink = v22;
          v22 = Flink;
          if ( (v33 & 0x42) != 0 )
            v22 = Flink | 0x42;
        }
      }
      if ( !v22 )
        break;
      if ( (v22 & 1) != 0 || (v22 & 0x400) == 0 )
      {
        v18 = v43;
        goto LABEL_14;
      }
      v31 = v45;
      if ( v45 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v22, Flink, v24, v25) )
      {
        v34 = v22;
        if ( qword_140C4DE80 && (v22 & 0x10) == 0 )
          v34 = v22 & ~qword_140C4DE80;
        ProtoPteAddress = v34 >> 16;
LABEL_55:
        v18 = v43;
        if ( ProtoPteAddress )
        {
LABEL_56:
          if ( ((ProtoPteAddress ^ v44) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            if ( v8 )
            {
              MiUnlockProtoPoolPage(v8, v40);
              v44 = 0LL;
            }
            v8 = MiLockProtoPoolPage(ProtoPteAddress, &v40);
            if ( !v8 )
            {
              MiFlushTbList(&v55);
              v11 = v46;
              v12 = (__int64)v47;
              if ( v46 )
              {
                MiUnlockPageTableInternal(v47, v46);
                v11 = 0LL;
                v46 = 0LL;
              }
              v13 = v41;
              MiUnlockWorkingSetShared(v12, v41);
              MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
              v10 = v49;
LABEL_33:
              MiLockWorkingSetShared(v12);
              v5 = v43;
              if ( v9 > v10 )
              {
                v29 = ProtoLeafValid;
                goto LABEL_35;
              }
              goto LABEL_2;
            }
            v44 = ProtoPteAddress;
          }
        }
        else
        {
LABEL_14:
          if ( v8 )
          {
            MiUnlockProtoPoolPage(v8, v40);
            v8 = 0LL;
            v44 = 0LL;
          }
        }
        v26 = MiActOnPte(v18, v17, v9, ProtoPteAddress, v45, a5, &v53, &v51);
        if ( v26 )
        {
          if ( v26 == 274 )
          {
            MiInsertTbFlushEntry((__int64)&v55, (__int64)(v9 << 25) >> 16, 1LL, 0);
            MiFlushTbList(&v55);
            v39 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, v9, -1LL);
            v18 = v43;
            v21 = v39;
            v9 -= 8LL;
            v20 = 1;
          }
          else if ( v26 == -1073741791 )
          {
            MiInsertTbFlushEntry((__int64)&v55, (__int64)(v9 << 25) >> 16, 1LL, 0);
          }
          else
          {
            ProtoLeafValid = v26;
          }
        }
        v27 = v51;
        if ( v51 )
        {
          if ( v8 )
          {
            MiUnlockProtoPoolPage(v8, v40);
            v27 = v51;
            v8 = 0LL;
            v44 = 0LL;
          }
          MiReleasePageFileInfo(v53, v27, 1LL);
        }
        goto LABEL_18;
      }
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v22, Flink, v24, v25) )
      {
        if ( v31 == 1 )
        {
          v18 = v43;
          ProtoLeafValid = -1073740748;
        }
        else
        {
          if ( v8 )
            MiUnlockProtoPoolPage(v8, v40);
          v35 = 0LL;
          if ( !v8 )
            v35 = v44;
          v36 = v35;
          v44 = v35;
          MiFlushTbList(&v55);
          ProtoLeafValid = MiMakeProtoLeafValid(v9);
          if ( ProtoLeafValid >= 0 )
          {
            v9 -= 8LL;
            v44 = v36;
            v18 = v43;
            v8 = 0LL;
          }
          else
          {
            v18 = v43;
            v8 = 0LL;
            ProtoLeafValid = -1073740748;
          }
        }
        goto LABEL_18;
      }
      v32 = ((__int64)(v9 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( (v32 == 2147352576 || v32 == qword_140C4DD88 && qword_140C4DD88)
        && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 )
      {
        v18 = v43;
        ProtoLeafValid = -1073740748;
      }
      else
      {
        if ( (*(_DWORD *)(v43 + 48) & 0x100000) == 0 && *(_QWORD *)(v43 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v43, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0, &v52);
          if ( (unsigned int)MiIsPrototypePteVadLookup(v22) )
            goto LABEL_55;
          v37 = v22;
          if ( qword_140C4DE80 && (v22 & 0x10) == 0 )
            v37 = v22 & ~qword_140C4DE80;
          if ( ProtoPteAddress == v37 >> 16 )
            goto LABEL_55;
        }
        v38 = v22;
        if ( qword_140C4DE80 && (v22 & 0x10) == 0 )
          v38 = v22 & ~qword_140C4DE80;
        ProtoPteAddress = v38 >> 16;
        if ( v45 == 2 )
          goto LABEL_55;
        v18 = v43;
        ProtoLeafValid = -1073740748;
      }
LABEL_18:
      v10 = v49;
      v9 += 8LL;
      if ( v20 == 1
        || v21 < 0
        || v9 > v49
        || (v9 & 0xFFF) == 0
        || (v9 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v47)
        || KeShouldYieldProcessor() )
      {
        if ( v8 )
          MiUnlockProtoPoolPage(v8, v40);
        v28 = 0LL;
        if ( !v8 )
          v28 = v44;
        v44 = v28;
        MiFlushTbList(&v55);
        v12 = (__int64)v47;
        if ( v46 )
        {
          MiUnlockPageTableInternal(v47, v46);
          v46 = 0LL;
        }
        v13 = v41;
        MiUnlockWorkingSetShared(v12, v41);
        if ( v21 == -1073740748 )
          MiCopyOnWriteCheckConditions(v12, 3221226548LL);
        v11 = v46;
        v8 = 0LL;
        goto LABEL_33;
      }
    }
    v18 = v43;
LABEL_62:
    if ( (*(_DWORD *)(v18 + 48) & 0x100000) != 0 || !*(_QWORD *)(v18 + 80) )
      goto LABEL_14;
    ProtoPteAddress = MiGetProtoPteAddress(v18, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0, &v52);
    if ( ProtoPteAddress )
      goto LABEL_56;
    if ( v17 )
      goto LABEL_14;
    v20 = 1;
    v9 -= 8LL;
    goto LABEL_18;
  }
  v12 = (__int64)v47;
LABEL_35:
  v13 = v41;
LABEL_36:
  MiFlushTbList(&v55);
  if ( v11 )
    MiUnlockPageTableInternal(v12, v11);
  MiUnlockWorkingSetShared(v12, v13);
  return v29;
}
