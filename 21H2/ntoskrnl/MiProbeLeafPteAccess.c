/*
 * XREFs of MiProbeLeafPteAccess @ 0x1402AFFF0
 * Callers:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140308590 (MiProbeLeafFrame.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140201780 (MiProcessCommitIntact.c)
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140229FC4 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockProbePacketWorkingSet @ 0x140235C98 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140235CE0 (MiUnlockProbePacketWorkingSet.c)
 *     MiCanPageMove @ 0x140259930 (MiCanPageMove.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiIsDriverPage @ 0x140327410 (MiIsDriverPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403F6B08 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiSplitReducedCommitClonePage @ 0x140530FD4 (MiSplitReducedCommitClonePage.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 *     MiSplitDriverPage @ 0x1408C4F04 (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  int v3; // r15d
  _DWORD *v4; // r9
  ULONG_PTR v5; // r12
  int v6; // r14d
  int v7; // r13d
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  unsigned __int64 v23; // rcx
  char v24; // cl
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  int CanPageMove; // eax
  __int64 v28; // rdx
  int v29; // r10d
  int IsPfnFileOnly; // eax
  int v31; // r10d
  __int64 v32; // rax
  __int64 IsDriverPage; // r14
  int v34; // ebx
  ULONG_PTR v35; // rcx
  int v36; // ebx
  char v37; // al
  unsigned __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 CloneAddress; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // r10d
  int v47; // ebx
  int v48; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v49; // [rsp+68h] [rbp+10h]
  int v50; // [rsp+70h] [rbp+18h] BYREF
  __int64 v51; // [rsp+78h] [rbp+20h] BYREF

  v49 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = a2;
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 64) & 0xF;
  v7 = *(_DWORD *)(a1 + 88);
  *a2 = 0;
  v51 = v2;
  if ( (v2 & 4) == 0 && v6 == 1 )
  {
    ++dword_140C4E7C8;
    return 3221225477LL;
  }
  if ( (unsigned __int64)&v51 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v51 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = v2;
  }
  else if ( (unsigned int)MiPteHasShadow() && (v10 & 1) != 0 && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 |= 0x20uLL;
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v51 >> 3) & 0x1FF)) & 0x20) == 0 )
        v10 = v2;
    }
    v2 = v51;
  }
  v12 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL);
  v13 = 0xFFFF800000000000uLL;
  if ( ((*(_QWORD *)(v12 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v14 = (_QWORD *)qword_140C4EEC0;
    v15 = v12 - 0x58000000000LL;
    if ( qword_140C4EEC0 )
    {
      if ( ((*(_QWORD *)(v15 + 40) >> 60) & 7) == 1 )
      {
        v16 = v12 / 0x30;
        if ( qword_140C4EEC0 )
        {
          do
          {
            v17 = v14[3];
            if ( v16 < v17 )
            {
              v14 = (_QWORD *)*v14;
            }
            else
            {
              if ( v16 - v17 < v14[4] )
              {
                ++dword_140C4E7F8;
                return 3221225477LL;
              }
              v14 = (_QWORD *)v14[1];
            }
          }
          while ( v14 );
        }
      }
    }
    if ( !(unsigned int)MI_PFN_IS_PROTO(v15) )
    {
      v20 = *(_QWORD *)(v15 + 40);
      if ( (v20 & 0x1000000000LL) != 0 )
      {
        v48 = 0;
        v50 = 0;
        if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(v18, &v48, &v50) != 3 && v48 == 6 )
        {
          v4 = v49;
          v13 = 0xFFFF800000000000uLL;
          goto LABEL_29;
        }
LABEL_40:
        ++dword_140C4E7F4;
        return 3221225477LL;
      }
      v23 = (__int64)(*(_QWORD *)(v15 + 8) << 25) >> 16;
      if ( v23 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL && (v19 & v20) != 0xFFFFFFFFDLL )
      {
        v24 = *(_BYTE *)(v15 + 34);
        if ( ((v24 & 0x20) == 0 || (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 || !*(_WORD *)(v15 + 32))
          && (v24 & 8) == 0
          && (v13 | (*(_QWORD *)v15 >> 13) & 0xFFFFFFFFFFFFFFF0uLL) != 0xFFFF800000000030uLL )
        {
          goto LABEL_40;
        }
      }
    }
  }
  else
  {
    v15 = 0LL;
  }
LABEL_29:
  v21 = 0;
  if ( v5 >= v13 )
    v22 = (unsigned __int8)byte_140C4FA08[((v5 >> 39) & 0x1FF) - 256];
  else
    v22 = 0;
  if ( v6 == 6 && v22 == 12 )
    v21 = 1;
  v25 = 0x8000000000000000uLL;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( v2 < 0 )
    {
      if ( (v2 & 0x800) != 0 )
        return 3221225496LL;
      goto LABEL_67;
    }
  }
  else if ( !v7 )
  {
    if ( v21 )
    {
      if ( !v15 )
        return 0LL;
      if ( (unsigned int)MI_PFN_IS_PROTO(v15) )
      {
        CanPageMove = MiCanPageMove(v26);
        if ( CanPageMove == v29 || (IsPfnFileOnly = MiIsPfnFileOnly(v15, v28, v25), IsPfnFileOnly == v31) )
        {
          v32 = *(_QWORD *)(v15 + 16);
          if ( (v32 & 0x400) == 0 )
            goto LABEL_63;
          if ( qword_140C4DF80 && (v32 & 0x10) == 0 )
            v32 &= ~qword_140C4DF80;
          if ( (*(_DWORD *)(*(_QWORD *)(v32 >> 16) + 56LL) & 0x20) != 0 )
          {
LABEL_63:
            IsDriverPage = MiIsDriverPage(*(_QWORD *)(a1 + 16));
            if ( IsDriverPage )
            {
              MiUnlockProbePacketWorkingSet(a1);
              v34 = MiSplitDriverPage(IsDriverPage, *(_QWORD *)(a1 + 16));
              MiLockProbePacketWorkingSet(a1);
              if ( v34 < 0 )
              {
                ++dword_140C4E7F0;
                return (unsigned int)v34;
              }
              goto LABEL_116;
            }
            v25 = 0x8000000000000000uLL;
          }
        }
      }
    }
    goto LABEL_83;
  }
  if ( (v2 & 0x800) == 0 )
  {
LABEL_67:
    if ( v7 != 3 && (v6 != 6 || !v21) )
    {
      *v4 = 2;
      return 0LL;
    }
    if ( v15 && !(unsigned int)MI_PFN_IS_PROTO(v15) )
    {
      if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v15 + 40) >> 60) & 7) == 3 )
        MiClearPfnImageVerified(v35, 8);
      return 0LL;
    }
    goto LABEL_96;
  }
  if ( (v2 & 0x42) == 0
    && v6 == 1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 1124LL) & 0x8000) != 0 || !MiOkToSetPteDirtyForNotValidFault(v2, v5)) )
  {
    MiUnlockProbePacketWorkingSet(a1);
    v36 = MmAccessFault(2uLL, v5);
    MiLockProbePacketWorkingSet(a1);
    if ( v36 < 0 )
    {
      ++dword_140C4E7C0;
      return (unsigned int)v36;
    }
    goto LABEL_116;
  }
LABEL_83:
  if ( !v15 )
    return 0LL;
  v37 = *(_BYTE *)(v15 + 34);
  if ( (v37 & 0x20) != 0 && (v37 & 8) == 0 && (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0LL;
  v38 = *(_QWORD *)(v15 + 40);
  if ( ((v38 >> 60) & 7) == 1 || (v38 & 0x1000000000LL) != 0 || *(__int64 *)(v15 + 8) <= 0 )
  {
    if ( v7 )
      return 0LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v15) )
      return 0LL;
    v40 = *(_QWORD *)(a1 + 80);
    if ( !v40 )
      return 0LL;
    if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v40, v39 | *(_QWORD *)(v15 + 8), v39);
    if ( !CloneAddress )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(v42 + 1680) + 360LL) > *(_QWORD *)(CloneAddress + 96) )
      goto LABEL_103;
  }
LABEL_96:
  if ( v7 != 3 )
    goto LABEL_110;
  if ( (v2 & v25) != 0 )
    return 3221225541LL;
  v43 = *(_QWORD *)(a1 + 80);
  if ( !v43
    || (*(_DWORD *)(a1 + 64) & 0x10) == 0
    || (v44 = MiLocateCloneAddress(v43, v25 | *(_QWORD *)(v15 + 8), v25)) == 0 )
  {
    if ( (v2 & 0x200) != 0 || (*(_QWORD *)(v15 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v15 + 8) > 0 )
      goto LABEL_110;
    if ( MiProcessCommitIntact(v5) )
    {
      ++*(_QWORD *)(a1 + 104);
      v3 = v46;
      goto LABEL_110;
    }
    return 3221225477LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v45 + 1680) + 360LL) > *(_QWORD *)(v44 + 96) )
  {
LABEL_103:
    result = MiSplitReducedCommitClonePage(a1);
    if ( (int)result < 0 )
    {
      ++dword_140C4E7EC;
      return result;
    }
    goto LABEL_116;
  }
LABEL_110:
  v47 = MiCopyOnWrite(v5, *(_QWORD *)(a1 + 16), -1LL, 0LL);
  if ( v47 >= 0 )
  {
LABEL_116:
    *v49 = 1;
    return 0LL;
  }
  if ( v3 )
    --*(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 68) != 2 && (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 1300LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 96), (unsigned int)v47);
    MiLockProbePacketWorkingSet(a1);
    goto LABEL_116;
  }
  ++dword_140C4E7F0;
  return 3221225495LL;
}
