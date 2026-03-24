/*
 * XREFs of MiWalkVaRange @ 0x14023C0F0
 * Callers:
 *     MiResetVirtualMemory @ 0x1402C538C (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x14070FBB4 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14028D248 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x1402BCAB4 (MiMakeProtoLeafValid.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x14030D820 (MiGetNextPageTable.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // r13
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned __int8 v15; // r12
  __int64 NextPageTable; // rax
  __int64 v17; // rdx
  ULONG_PTR v18; // rbx
  unsigned int v19; // r12d
  __int64 v20; // rbx
  signed __int64 ProtoPteAddress; // rsi
  int v22; // r14d
  int v23; // r15d
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  signed __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  unsigned int v31; // edi
  int v33; // esi
  unsigned __int64 v34; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  signed __int64 v39; // rax
  signed __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rsi
  int v43; // eax
  unsigned __int8 v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v45; // [rsp+41h] [rbp-BFh]
  int ProtoLeafValid; // [rsp+44h] [rbp-BCh]
  __int64 v47; // [rsp+48h] [rbp-B8h]
  signed __int64 v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+70h] [rbp-90h]
  ULONG_PTR v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  char v56[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v60; // [rsp+B4h] [rbp-4Ch]
  __int16 v61; // [rsp+B6h] [rbp-4Ah]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  _BYTE v65[152]; // [rsp+D0h] [rbp-30h] BYREF

  v47 = a3;
  v5 = a3;
  v55 = 0LL;
  v54 = 0;
  v57 = 0LL;
  v49 = a4;
  v61 = 0;
  memset(v65, 0, sizeof(v65));
  ProtoLeafValid = 0;
  v8 = 0LL;
  v48 = 0LL;
  v44 = 17;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v62 = 20LL;
  v59 = 1;
  v11 = 0LL;
  v60 = 0;
  v63 = 0LL;
  v64 = 0LL;
  v53 = v10;
  v50 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v51 = &Process[1].ActiveProcessorsPadding[6];
  v45 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], 0x7FFFFFFFF8LL, v13, v14);
  v15 = v45;
  if ( v9 > v10 )
  {
    v31 = 0;
    goto LABEL_36;
  }
LABEL_2:
  if ( v11 )
  {
    MiUnlockPageTableInternal(v12, v11);
    v11 = 0LL;
    v50 = 0LL;
  }
  NextPageTable = MiGetNextPageTable(v9, v10, (unsigned int)&v59, v15, 0, (__int64)&v54);
  v52 = 1;
  v18 = NextPageTable;
  if ( NextPageTable == v9 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v5 + 48) & 0x100000) == 0
    && *(_QWORD *)(v5 + 80)
    && MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0LL, v56) )
  {
    v52 = 0;
    goto LABEL_5;
  }
  v31 = -1073740748;
  ProtoLeafValid = -1073740748;
  if ( v18 )
  {
    v9 = v18;
LABEL_5:
    if ( v18 )
      v50 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = v52;
    v20 = v47;
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v22 = 0;
      v23 = 0;
      if ( !v19 )
        goto LABEL_62;
      v24 = *(_QWORD *)v9;
      if ( (unsigned int)MiPteInShadowRange(v9, v17)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v24 & 1) != 0
        && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v36 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
          v37 = v24 | 0x20;
          if ( (v36 & 0x20) == 0 )
            v37 = v24;
          v24 = v37;
          if ( (v36 & 0x42) != 0 )
            v24 = v37 | 0x42;
        }
      }
      if ( !v24 )
        break;
      if ( (v24 & 1) != 0 || (v24 & 0x400) == 0 )
      {
        v20 = v47;
        goto LABEL_14;
      }
      v33 = v49;
      if ( v49 == 2 && (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v24) )
      {
        v38 = v24;
        if ( qword_140C4DF40 && (v24 & 0x10) == 0 )
          v38 = v24 & ~qword_140C4DF40;
        ProtoPteAddress = v38 >> 16;
LABEL_55:
        v20 = v47;
        if ( ProtoPteAddress )
        {
LABEL_56:
          if ( ((ProtoPteAddress ^ v48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            if ( v8 )
            {
              MiUnlockProtoPoolPage(v8, v44);
              v48 = 0LL;
            }
            v8 = MiLockProtoPoolPage(ProtoPteAddress, &v44);
            if ( !v8 )
            {
              MiFlushTbList(&v59);
              v11 = v50;
              v12 = (__int64)v51;
              if ( v50 )
              {
                MiUnlockPageTableInternal(v51, v50);
                v11 = 0LL;
                v50 = 0LL;
              }
              v15 = v45;
              MiUnlockWorkingSetShared(v12, v45);
              MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
              v10 = v53;
LABEL_33:
              MiLockWorkingSetShared(v12, v28, v29, v30);
              v5 = v47;
              if ( v9 > v10 )
              {
                v31 = ProtoLeafValid;
                goto LABEL_35;
              }
              goto LABEL_2;
            }
            v48 = ProtoPteAddress;
          }
        }
        else
        {
LABEL_14:
          if ( v8 )
          {
            MiUnlockProtoPoolPage(v8, v44);
            v8 = 0LL;
            v48 = 0LL;
          }
        }
        v25 = MiActOnPte(v20, v19, v9, ProtoPteAddress, v49, a5, &v57, &v55);
        if ( v25 )
        {
          if ( v25 == 274 )
          {
            MiInsertTbFlushEntry(&v59, (__int64)(v9 << 25) >> 16, 1LL, 0LL);
            MiFlushTbList(&v59);
            v43 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, v9, -1LL);
            v20 = v47;
            v23 = v43;
            v9 -= 8LL;
            v22 = 1;
          }
          else if ( v25 == -1073741791 )
          {
            MiInsertTbFlushEntry(&v59, (__int64)(v9 << 25) >> 16, 1LL, 0LL);
          }
          else
          {
            ProtoLeafValid = v25;
          }
        }
        v26 = v55;
        if ( v55 )
        {
          if ( v8 )
          {
            MiUnlockProtoPoolPage(v8, v44);
            v26 = v55;
            v8 = 0LL;
            v48 = 0LL;
          }
          MiReleasePageFileInfo(v57, v26, 1LL);
        }
        goto LABEL_18;
      }
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v24) )
      {
        if ( v33 == 1 )
        {
          v20 = v47;
          ProtoLeafValid = -1073740748;
        }
        else
        {
          if ( v8 )
            MiUnlockProtoPoolPage(v8, v44);
          v39 = 0LL;
          if ( !v8 )
            v39 = v48;
          v40 = v39;
          v48 = v39;
          MiFlushTbList(&v59);
          ProtoLeafValid = MiMakeProtoLeafValid(v9);
          if ( ProtoLeafValid >= 0 )
          {
            v9 -= 8LL;
            v48 = v40;
            v20 = v47;
            v8 = 0LL;
          }
          else
          {
            v20 = v47;
            v8 = 0LL;
            ProtoLeafValid = -1073740748;
          }
        }
        goto LABEL_18;
      }
      v34 = ((__int64)(v9 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( (v34 == 2147352576 || v34 == qword_140C4DE48 && qword_140C4DE48)
        && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 )
      {
        v20 = v47;
        ProtoLeafValid = -1073740748;
      }
      else
      {
        if ( (*(_DWORD *)(v47 + 48) & 0x100000) == 0 && *(_QWORD *)(v47 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v47, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0LL, v56);
          if ( (unsigned int)MiIsPrototypePteVadLookup(v24) )
            goto LABEL_55;
          v41 = v24;
          if ( qword_140C4DF40 && (v24 & 0x10) == 0 )
            v41 = v24 & ~qword_140C4DF40;
          if ( ProtoPteAddress == v41 >> 16 )
            goto LABEL_55;
        }
        v42 = v24;
        if ( qword_140C4DF40 && (v24 & 0x10) == 0 )
          v42 = v24 & ~qword_140C4DF40;
        ProtoPteAddress = v42 >> 16;
        if ( v49 == 2 )
          goto LABEL_55;
        v20 = v47;
        ProtoLeafValid = -1073740748;
      }
LABEL_18:
      v10 = v53;
      v9 += 8LL;
      if ( v22 == 1
        || v23 < 0
        || v9 > v53
        || (v9 & 0xFFF) == 0
        || (v9 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v51)
        || KeShouldYieldProcessor() )
      {
        if ( v8 )
          MiUnlockProtoPoolPage(v8, v44);
        v27 = 0LL;
        if ( !v8 )
          v27 = v48;
        v48 = v27;
        MiFlushTbList(&v59);
        v12 = (__int64)v51;
        if ( v50 )
        {
          MiUnlockPageTableInternal(v51, v50);
          v50 = 0LL;
        }
        v15 = v45;
        MiUnlockWorkingSetShared(v12, v45);
        if ( v23 == -1073740748 )
          MiCopyOnWriteCheckConditions(v12, 3221226548LL);
        v11 = v50;
        v8 = 0LL;
        goto LABEL_33;
      }
    }
    v20 = v47;
LABEL_62:
    if ( (*(_DWORD *)(v20 + 48) & 0x100000) != 0 || !*(_QWORD *)(v20 + 80) )
      goto LABEL_14;
    ProtoPteAddress = MiGetProtoPteAddress(v20, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0LL, v56);
    if ( ProtoPteAddress )
      goto LABEL_56;
    if ( v19 )
      goto LABEL_14;
    v22 = 1;
    v9 -= 8LL;
    goto LABEL_18;
  }
  v12 = (__int64)v51;
LABEL_35:
  v15 = v45;
LABEL_36:
  MiFlushTbList(&v59);
  if ( v11 )
    MiUnlockPageTableInternal(v12, v11);
  MiUnlockWorkingSetShared(v12, v15);
  return v31;
}
