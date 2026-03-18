/*
 * XREFs of MiWalkVaRange @ 0x1403471D0
 * Callers:
 *     MiResetVirtualMemory @ 0x140324634 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1406D371C (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140236AC8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x14031A4F4 (MiMakeProtoLeafValid.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  _KPROCESS *v13; // rdx
  unsigned __int8 v14; // r12
  __int64 NextPageTable; // rax
  unsigned __int64 v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // rbx
  __int64 ProtoPteAddress; // rsi
  int v20; // r14d
  int v21; // r15d
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // edi
  int v28; // esi
  _KPROCESS *v29; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rsi
  _KPROCESS *v38; // rdx
  int v39; // eax
  unsigned __int8 v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v41; // [rsp+41h] [rbp-BFh]
  int ProtoLeafValid; // [rsp+44h] [rbp-BCh]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+70h] [rbp-90h]
  unsigned __int64 v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  unsigned int v55; // [rsp+B0h] [rbp-50h] BYREF
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
  v14 = v41;
  if ( v9 > v10 )
  {
    v26 = 0;
    goto LABEL_36;
  }
LABEL_2:
  if ( v11 )
  {
    MiUnlockPageTableInternal(v12);
    v11 = 0LL;
    v46 = 0LL;
  }
  NextPageTable = MiGetNextPageTable(v9, v10, (__int64)&v55, v14, 0, &v50);
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
  v26 = -1073740748;
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
      if ( MiPteInShadowRange(v9)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v31 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
          v32 = v22 | 0x20;
          if ( (v31 & 0x20) == 0 )
            v32 = v22;
          v22 = v32;
          if ( (v31 & 0x42) != 0 )
            v22 = v32 | 0x42;
        }
      }
      if ( !v22 )
        break;
      if ( (v22 & 1) != 0 || (v22 & 0x400) == 0 )
      {
        v18 = v43;
        goto LABEL_14;
      }
      v28 = v45;
      if ( v45 == 2 && MI_PROTO_FORMAT_COMBINED(v22) )
      {
        v33 = v22;
        if ( qword_140C4DDC0 && (v22 & 0x10) == 0 )
          v33 = v22 & ~qword_140C4DDC0;
        ProtoPteAddress = v33 >> 16;
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
              MiFlushTbList(&v55, v29);
              v11 = v46;
              v12 = (__int64)v47;
              if ( v46 )
              {
                MiUnlockPageTableInternal(v47);
                v11 = 0LL;
                v46 = 0LL;
              }
              v14 = v41;
              MiUnlockWorkingSetShared(v12, v41);
              MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
              v10 = v49;
LABEL_33:
              MiLockWorkingSetShared(v12);
              v5 = v43;
              if ( v9 > v10 )
              {
                v26 = ProtoLeafValid;
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
        v23 = MiActOnPte(v18, v17, v9, ProtoPteAddress, v45, a5, &v53, &v51);
        if ( v23 )
        {
          if ( v23 == 274 )
          {
            MiInsertTbFlushEntry((__int64)&v55, (__int64)(v9 << 25) >> 16, 1LL, 0);
            MiFlushTbList(&v55, v38);
            v39 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, (ULONG_PTR *)v9, -1LL, 0);
            v18 = v43;
            v21 = v39;
            v9 -= 8LL;
            v20 = 1;
          }
          else if ( v23 == -1073741791 )
          {
            MiInsertTbFlushEntry((__int64)&v55, (__int64)(v9 << 25) >> 16, 1LL, 0);
          }
          else
          {
            ProtoLeafValid = v23;
          }
        }
        v24 = v51;
        if ( v51 )
        {
          if ( v8 )
          {
            MiUnlockProtoPoolPage(v8, v40);
            v24 = v51;
            v8 = 0LL;
            v44 = 0LL;
          }
          MiReleasePageFileInfo(v53, v24, 1);
        }
        goto LABEL_18;
      }
      if ( MI_PROTO_FORMAT_COMBINED(v22) )
      {
        if ( v28 == 1 )
        {
          v18 = v43;
          ProtoLeafValid = -1073740748;
        }
        else
        {
          if ( v8 )
            MiUnlockProtoPoolPage(v8, v40);
          v34 = 0LL;
          if ( !v8 )
            v34 = v44;
          v35 = v34;
          v44 = v34;
          MiFlushTbList(&v55, (_KPROCESS *)v24);
          ProtoLeafValid = MiMakeProtoLeafValid(v9, 24LL, v41);
          if ( ProtoLeafValid >= 0 )
          {
            v9 -= 8LL;
            v44 = v35;
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
      v24 = (__int64)(v9 << 25) >> 16;
      if ( ((v24 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
         || (v24 & 0xFFFFFFFFFFFFF000uLL) == qword_140C4DCC8 && qword_140C4DCC8)
        && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 )
      {
        v18 = v43;
        ProtoLeafValid = -1073740748;
      }
      else
      {
        if ( (*(_DWORD *)(v43 + 48) & 0x100000) == 0 && *(_QWORD *)(v43 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v43, v24 >> 12, 0, &v52);
          if ( MiIsPrototypePteVadLookup(v22) )
            goto LABEL_55;
          v36 = v22;
          if ( qword_140C4DDC0 && (v22 & 0x10) == 0 )
            v36 = v22 & ~qword_140C4DDC0;
          if ( ProtoPteAddress == v36 >> 16 )
            goto LABEL_55;
        }
        v37 = v22;
        if ( qword_140C4DDC0 && (v22 & 0x10) == 0 )
          v37 = v22 & ~qword_140C4DDC0;
        ProtoPteAddress = v37 >> 16;
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
        || (v9 & 0x78) == 0 && MiWorkingSetIsContended((__int64)v47)
        || KeShouldYieldProcessor() )
      {
        if ( v8 )
          MiUnlockProtoPoolPage(v8, v40);
        v25 = 0LL;
        if ( !v8 )
          v25 = v44;
        v44 = v25;
        MiFlushTbList(&v55, (_KPROCESS *)v24);
        v12 = (__int64)v47;
        if ( v46 )
        {
          MiUnlockPageTableInternal(v47);
          v46 = 0LL;
        }
        v14 = v41;
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
  v14 = v41;
LABEL_36:
  MiFlushTbList(&v55, v13);
  if ( v11 )
    MiUnlockPageTableInternal(v12);
  MiUnlockWorkingSetShared(v12, v14);
  return v26;
}
