/*
 * XREFs of MiProbeLeafPteAccess @ 0x1402A77A0
 * Callers:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MiProbeLeafFrame @ 0x140345A1C (MiProbeLeafFrame.c)
 * Callees:
 *     MiProcessCommitIntact @ 0x140201704 (MiProcessCommitIntact.c)
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiIsDriverPage @ 0x14027D7B0 (MiIsDriverPage.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1402FD554 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x140307E60 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140307EA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiCanPageMove @ 0x14034C6C0 (MiCanPageMove.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1403EFAF8 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B274 (MiSplitReducedCommitClonePage.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
 *     MiSplitDriverPage @ 0x1408C0454 (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rbx
  int v3; // r15d
  _DWORD *v4; // r9
  unsigned __int64 v5; // r12
  int v6; // r14d
  int v7; // r13d
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r11
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r10
  int v19; // ecx
  int v20; // eax
  unsigned __int64 v21; // rcx
  char v22; // cl
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  int CanPageMove; // eax
  int v26; // r10d
  int IsPfnFileOnly; // eax
  int v28; // r10d
  __int64 v29; // rax
  _QWORD *v30; // r14
  int v31; // ebx
  __int64 v32; // rcx
  int v33; // ebx
  char v34; // al
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 CloneAddress; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r10d
  int v44; // ebx
  int v45; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v46; // [rsp+68h] [rbp+10h]
  int v47; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp+20h] BYREF

  v46 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = a2;
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)(a1 + 64) & 0xF;
  v7 = *(_DWORD *)(a1 + 88);
  *a2 = 0;
  v48 = v2;
  if ( (v2 & 4) == 0 && v6 == 1 )
  {
    ++dword_140C4E6C8;
    return 3221225477LL;
  }
  if ( (unsigned __int64)&v48 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v48 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v10 = v2;
  }
  else if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v2)
         && (v10 & 1) != 0
         && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 |= 0x20uLL;
      if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF)) & 0x20) == 0 )
        v10 = v2;
    }
    v2 = v48;
  }
  v12 = (v10 >> 12) & 0xFFFFFFFFFLL;
  v13 = 48 * v12;
  v14 = 0xFFFF800000000000uLL;
  if ( ((*(_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v15 = (_QWORD *)qword_140C4EDC0;
    v16 = v13 - 0x58000000000LL;
    if ( qword_140C4EDC0 )
    {
      if ( ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 1 )
      {
        v12 = v13 / 0x30;
        if ( qword_140C4EDC0 )
        {
          do
          {
            v13 = v15[3];
            if ( v12 < v13 )
            {
              v15 = (_QWORD *)*v15;
            }
            else
            {
              if ( v12 - v13 < v15[4] )
              {
                ++dword_140C4E6F8;
                return 3221225477LL;
              }
              v15 = (_QWORD *)v15[1];
            }
          }
          while ( v15 );
        }
      }
    }
    if ( !(unsigned int)MI_PFN_IS_PROTO(v16, v12, v13) )
    {
      v12 = *(_QWORD *)(v16 + 40);
      if ( (v12 & 0x1000000000LL) != 0 )
      {
        v45 = 0;
        v47 = 0;
        if ( (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(v17, &v45, &v47) != 3 && v45 == 6 )
        {
          v4 = v46;
          v14 = 0xFFFF800000000000uLL;
          goto LABEL_29;
        }
LABEL_40:
        ++dword_140C4E6F4;
        return 3221225477LL;
      }
      v21 = (__int64)(*(_QWORD *)(v16 + 8) << 25) >> 16;
      if ( v21 >= 0xFFFFF68000000000uLL && v21 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v12 &= v18;
        if ( v12 != 0xFFFFFFFFDLL )
        {
          v22 = *(_BYTE *)(v16 + 34);
          if ( (v22 & 0x20) == 0
            || (v12 = 0x3FFFFFFFFFFFFFFFLL, (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0)
            || !*(_WORD *)(v16 + 32) )
          {
            if ( (v22 & 8) == 0 && (v14 | (*(_QWORD *)v16 >> 13) & 0xFFFFFFFFFFFFFFF0uLL) != 0xFFFF800000000030uLL )
              goto LABEL_40;
          }
        }
      }
    }
  }
  else
  {
    v16 = 0LL;
  }
LABEL_29:
  v19 = 0;
  if ( v5 >= v14 )
  {
    v12 = (unsigned __int64)byte_140C4F908;
    v20 = byte_140C4F908[((v5 >> 39) & 0x1FF) - 256];
  }
  else
  {
    v20 = 0;
  }
  if ( v6 == 6 && v20 == 12 )
    v19 = 1;
  v23 = 0x8000000000000000uLL;
  if ( v7 == 3 )
  {
    if ( v5 > 0x7FFFFFFEFFFFLL )
      return 3221225477LL;
    if ( (v2 & 0x8000000000000000uLL) != 0 )
    {
      if ( (v2 & 0x800) != 0 )
        return 3221225496LL;
      goto LABEL_67;
    }
  }
  else if ( !v7 )
  {
    if ( v19 )
    {
      if ( !v16 )
        return 0LL;
      if ( (unsigned int)MI_PFN_IS_PROTO(v16, v12, 0x8000000000000000uLL) )
      {
        CanPageMove = MiCanPageMove(v24, v12);
        if ( CanPageMove == v26 || (IsPfnFileOnly = MiIsPfnFileOnly(v16), IsPfnFileOnly == v28) )
        {
          v29 = *(_QWORD *)(v16 + 16);
          if ( (v29 & 0x400) == 0 )
            goto LABEL_63;
          if ( qword_140C4DE80 && (v29 & 0x10) == 0 )
            v29 &= ~qword_140C4DE80;
          if ( (*(_DWORD *)(*(_QWORD *)(v29 >> 16) + 56LL) & 0x20) != 0 )
          {
LABEL_63:
            v30 = MiIsDriverPage(*(_QWORD *)(a1 + 16));
            if ( v30 )
            {
              MiUnlockProbePacketWorkingSet(a1);
              v31 = MiSplitDriverPage(v30, *(_QWORD *)(a1 + 16));
              MiLockProbePacketWorkingSet(a1);
              if ( v31 < 0 )
              {
                ++dword_140C4E6F0;
                return (unsigned int)v31;
              }
              goto LABEL_116;
            }
            v23 = 0x8000000000000000uLL;
          }
        }
      }
    }
    goto LABEL_83;
  }
  if ( (v2 & 0x800) == 0 )
  {
LABEL_67:
    if ( v7 != 3 && (v6 != 6 || !v19) )
    {
      *v4 = 2;
      return 0LL;
    }
    if ( v16 && !(unsigned int)MI_PFN_IS_PROTO(v16, v12, 0x8000000000000000uLL) )
    {
      if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 3 )
        MiClearPfnImageVerified(v32, 8LL);
      return 0LL;
    }
    goto LABEL_96;
  }
  if ( (v2 & 0x42) == 0
    && v6 == 1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 80) + 1124LL) & 0x8000) != 0
     || !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v2, v5)) )
  {
    MiUnlockProbePacketWorkingSet(a1);
    v33 = MmAccessFault(2uLL, v5, 0, 0LL);
    MiLockProbePacketWorkingSet(a1);
    if ( v33 < 0 )
    {
      ++dword_140C4E6C0;
      return (unsigned int)v33;
    }
    goto LABEL_116;
  }
LABEL_83:
  if ( !v16 )
    return 0LL;
  v34 = *(_BYTE *)(v16 + 34);
  if ( (v34 & 0x20) != 0 && (v34 & 8) == 0 && (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0LL;
  v35 = *(_QWORD *)(v16 + 40);
  if ( ((v35 >> 60) & 7) == 1 || (v35 & 0x1000000000LL) != 0 || *(__int64 *)(v16 + 8) <= 0 )
  {
    if ( v7 )
      return 0LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v16, v12, v23) )
      return 0LL;
    v37 = *(_QWORD *)(a1 + 80);
    if ( !v37 )
      return 0LL;
    if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v37, v36 | *(_QWORD *)(v16 + 8));
    if ( !CloneAddress )
      return 0LL;
    if ( *(_QWORD *)(*(_QWORD *)(v39 + 1680) + 360LL) > *(_QWORD *)(CloneAddress + 96) )
      goto LABEL_103;
  }
LABEL_96:
  if ( v7 != 3 )
    goto LABEL_110;
  if ( (v2 & v23) != 0 )
    return 3221225541LL;
  v40 = *(_QWORD *)(a1 + 80);
  if ( !v40 || (*(_DWORD *)(a1 + 64) & 0x10) == 0 || (v41 = MiLocateCloneAddress(v40, v23 | *(_QWORD *)(v16 + 8))) == 0 )
  {
    if ( (v2 & 0x200) != 0 || (*(_QWORD *)(v16 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v16 + 8) > 0 )
      goto LABEL_110;
    if ( MiProcessCommitIntact(v5) )
    {
      ++*(_QWORD *)(a1 + 104);
      v3 = v43;
      goto LABEL_110;
    }
    return 3221225477LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v42 + 1680) + 360LL) > *(_QWORD *)(v41 + 96) )
  {
LABEL_103:
    result = MiSplitReducedCommitClonePage(a1);
    if ( (int)result < 0 )
    {
      ++dword_140C4E6EC;
      return result;
    }
    goto LABEL_116;
  }
LABEL_110:
  v44 = MiCopyOnWrite(v5, *(ULONG_PTR **)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL, 0);
  if ( v44 >= 0 )
  {
LABEL_116:
    *v46 = 1;
    return 0LL;
  }
  if ( v3 )
    --*(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 68) != 2 && (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 1300LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 96), (unsigned int)v44);
    MiLockProbePacketWorkingSet(a1);
    goto LABEL_116;
  }
  ++dword_140C4E6F0;
  return 3221225495LL;
}
