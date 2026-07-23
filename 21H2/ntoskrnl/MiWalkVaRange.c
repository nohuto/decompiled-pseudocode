/*
 * XREFs of MiWalkVaRange @ 0x1402E0940
 * Callers:
 *     MiResetVirtualMemory @ 0x140243BEC (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BE204 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x14023B164 (MiMakeProtoLeafValid.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // r13
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned __int8 v15; // r12
  __int64 NextPageTable; // rax
  ULONG_PTR v17; // rbx
  unsigned int v18; // r12d
  __int64 v19; // rbx
  signed __int64 ProtoPteAddress; // rsi
  int v21; // r14d
  int v22; // r15d
  __int64 v23; // rbx
  int v24; // eax
  unsigned __int64 v25; // rdx
  signed __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  unsigned int v30; // edi
  int v32; // esi
  unsigned __int64 v33; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  signed __int64 v38; // rax
  signed __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // eax
  unsigned __int8 v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v44; // [rsp+41h] [rbp-BFh]
  int ProtoLeafValid; // [rsp+44h] [rbp-BCh]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  signed __int64 v47; // [rsp+50h] [rbp-B0h]
  int v48; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v49; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+70h] [rbp-90h]
  ULONG_PTR v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  char v55[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v59; // [rsp+B4h] [rbp-4Ch]
  __int16 v60; // [rsp+B6h] [rbp-4Ah]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+C8h] [rbp-38h]
  _BYTE v64[152]; // [rsp+D0h] [rbp-30h] BYREF

  v46 = a3;
  v5 = a3;
  v54 = 0LL;
  v53 = 0;
  v56 = 0LL;
  v48 = a4;
  v60 = 0;
  memset(v64, 0, sizeof(v64));
  ProtoLeafValid = 0;
  v8 = 0LL;
  v47 = 0LL;
  v43 = 17;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = 20LL;
  v58 = 1;
  v11 = 0LL;
  v59 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v52 = v10;
  v49 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v50 = &Process[1].ActiveProcessorsPadding[6];
  v44 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], 0x7FFFFFFFF8LL, v13, v14);
  v15 = v44;
  if ( v9 > v10 )
  {
    v30 = 0;
    goto LABEL_36;
  }
LABEL_2:
  if ( v11 )
  {
    MiUnlockPageTableInternal(v12, v11);
    v11 = 0LL;
    v49 = 0LL;
  }
  NextPageTable = MiGetNextPageTable(v9, v10, (unsigned int)&v58, v15, 0, (__int64)&v53);
  v51 = 1;
  v17 = NextPageTable;
  if ( NextPageTable == v9 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v5 + 48) & 0x100000) == 0
    && *(_QWORD *)(v5 + 80)
    && MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0LL, v55) )
  {
    v51 = 0;
    goto LABEL_5;
  }
  v30 = -1073740748;
  ProtoLeafValid = -1073740748;
  if ( v17 )
  {
    v9 = v17;
LABEL_5:
    if ( v17 )
      v49 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = v51;
    v19 = v46;
    while ( 1 )
    {
      ProtoPteAddress = 0LL;
      v21 = 0;
      v22 = 0;
      if ( !v18 )
        goto LABEL_62;
      v23 = *(_QWORD *)v9;
      if ( (unsigned int)MiPteInShadowRange(v9)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v35 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
          v36 = v23 | 0x20;
          if ( (v35 & 0x20) == 0 )
            v36 = v23;
          v23 = v36;
          if ( (v35 & 0x42) != 0 )
            v23 = v36 | 0x42;
        }
      }
      if ( !v23 )
        break;
      if ( (v23 & 1) != 0 || (v23 & 0x400) == 0 )
      {
        v19 = v46;
        goto LABEL_14;
      }
      v32 = v48;
      if ( v48 == 2 && MI_PROTO_FORMAT_COMBINED(v23) )
      {
        v37 = v23;
        if ( qword_140C4DF80 && (v23 & 0x10) == 0 )
          v37 = v23 & ~qword_140C4DF80;
        ProtoPteAddress = v37 >> 16;
LABEL_55:
        v19 = v46;
        if ( ProtoPteAddress )
        {
LABEL_56:
          if ( ((ProtoPteAddress ^ v47) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            if ( v8 )
            {
              MiUnlockProtoPoolPage(v8, v43);
              v47 = 0LL;
            }
            v8 = MiLockProtoPoolPage(ProtoPteAddress, &v43);
            if ( !v8 )
            {
              MiFlushTbList(&v58);
              v11 = v49;
              v12 = (__int64)v50;
              if ( v49 )
              {
                MiUnlockPageTableInternal((__int64)v50, v49);
                v11 = 0LL;
                v49 = 0LL;
              }
              v15 = v44;
              MiUnlockWorkingSetShared(v12, v44);
              MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
              v10 = v52;
LABEL_33:
              MiLockWorkingSetShared(v12, v27, v28, v29);
              v5 = v46;
              if ( v9 > v10 )
              {
                v30 = ProtoLeafValid;
                goto LABEL_35;
              }
              goto LABEL_2;
            }
            v47 = ProtoPteAddress;
          }
        }
        else
        {
LABEL_14:
          if ( v8 )
          {
            MiUnlockProtoPoolPage(v8, v43);
            v8 = 0LL;
            v47 = 0LL;
          }
        }
        v24 = MiActOnPte(v19, v18, v9, ProtoPteAddress, v48, a5, &v56, &v54);
        if ( v24 )
        {
          if ( v24 == 274 )
          {
            MiInsertTbFlushEntry(&v58, (__int64)(v9 << 25) >> 16, 1LL, 0LL);
            MiFlushTbList(&v58);
            v42 = MiCopyOnWrite((__int64)(v9 << 25) >> 16, v9, -1LL, 0LL);
            v19 = v46;
            v22 = v42;
            v9 -= 8LL;
            v21 = 1;
          }
          else if ( v24 == -1073741791 )
          {
            MiInsertTbFlushEntry(&v58, (__int64)(v9 << 25) >> 16, 1LL, 0LL);
          }
          else
          {
            ProtoLeafValid = v24;
          }
        }
        v25 = v54;
        if ( v54 )
        {
          if ( v8 )
          {
            MiUnlockProtoPoolPage(v8, v43);
            v25 = v54;
            v8 = 0LL;
            v47 = 0LL;
          }
          MiReleasePageFileInfo(v56, v25, 1);
        }
        goto LABEL_18;
      }
      if ( MI_PROTO_FORMAT_COMBINED(v23) )
      {
        if ( v32 == 1 )
        {
          v19 = v46;
          ProtoLeafValid = -1073740748;
        }
        else
        {
          if ( v8 )
            MiUnlockProtoPoolPage(v8, v43);
          v38 = 0LL;
          if ( !v8 )
            v38 = v47;
          v39 = v38;
          v47 = v38;
          MiFlushTbList(&v58);
          ProtoLeafValid = MiMakeProtoLeafValid(v9, 24LL, v44);
          if ( ProtoLeafValid >= 0 )
          {
            v9 -= 8LL;
            v47 = v39;
            v19 = v46;
            v8 = 0LL;
          }
          else
          {
            v19 = v46;
            v8 = 0LL;
            ProtoLeafValid = -1073740748;
          }
        }
        goto LABEL_18;
      }
      v33 = ((__int64)(v9 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( (v33 == 2147352576 || v33 == qword_140C4DE88 && qword_140C4DE88)
        && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 )
      {
        v19 = v46;
        ProtoLeafValid = -1073740748;
      }
      else
      {
        if ( (*(_DWORD *)(v46 + 48) & 0x100000) == 0 && *(_QWORD *)(v46 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v46, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0LL, v55);
          if ( MiIsPrototypePteVadLookup(v23) )
            goto LABEL_55;
          v40 = v23;
          if ( qword_140C4DF80 && (v23 & 0x10) == 0 )
            v40 = v23 & ~qword_140C4DF80;
          if ( ProtoPteAddress == v40 >> 16 )
            goto LABEL_55;
        }
        v41 = v23;
        if ( qword_140C4DF80 && (v23 & 0x10) == 0 )
          v41 = v23 & ~qword_140C4DF80;
        ProtoPteAddress = v41 >> 16;
        if ( v48 == 2 )
          goto LABEL_55;
        v19 = v46;
        ProtoLeafValid = -1073740748;
      }
LABEL_18:
      v10 = v52;
      v9 += 8LL;
      if ( v21 == 1
        || v22 < 0
        || v9 > v52
        || (v9 & 0xFFF) == 0
        || (v9 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v50)
        || KeShouldYieldProcessor() )
      {
        if ( v8 )
          MiUnlockProtoPoolPage(v8, v43);
        v26 = 0LL;
        if ( !v8 )
          v26 = v47;
        v47 = v26;
        MiFlushTbList(&v58);
        v12 = (__int64)v50;
        if ( v49 )
        {
          MiUnlockPageTableInternal((__int64)v50, v49);
          v49 = 0LL;
        }
        v15 = v44;
        MiUnlockWorkingSetShared(v12, v44);
        if ( v22 == -1073740748 )
          MiCopyOnWriteCheckConditions(v12, 3221226548LL);
        v11 = v49;
        v8 = 0LL;
        goto LABEL_33;
      }
    }
    v19 = v46;
LABEL_62:
    if ( (*(_DWORD *)(v19 + 48) & 0x100000) != 0 || !*(_QWORD *)(v19 + 80) )
      goto LABEL_14;
    ProtoPteAddress = MiGetProtoPteAddress(v19, (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12, 0LL, v55);
    if ( ProtoPteAddress )
      goto LABEL_56;
    if ( v18 )
      goto LABEL_14;
    v21 = 1;
    v9 -= 8LL;
    goto LABEL_18;
  }
  v12 = (__int64)v50;
LABEL_35:
  v15 = v44;
LABEL_36:
  MiFlushTbList(&v58);
  if ( v11 )
    MiUnlockPageTableInternal(v12, v11);
  MiUnlockWorkingSetShared(v12, v15);
  return v30;
}
