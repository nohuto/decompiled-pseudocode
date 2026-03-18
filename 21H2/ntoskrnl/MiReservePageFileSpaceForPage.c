/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x14033B190
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140315EE0 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x14033AC90 (MiReservePageFileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiInvalidPteConforms @ 0x140273A80 (MiInvalidPteConforms.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiPageStandbyLookasideStatus @ 0x1402E9490 (MiPageStandbyLookasideStatus.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MI_IS_RESET_PTE @ 0x14033B640 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x14033C3A0 (MiSetNonResidentPteHeat.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, unsigned __int64 *a2, char a3, _WORD *a4)
{
  unsigned int v4; // r12d
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // r14
  int v8; // r13d
  ULONG_PTR v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // si
  int v16; // r13d
  __int64 v17; // rsi
  __int64 v19; // rdi
  __int64 v20; // r10
  __int64 v21; // r11
  bool v22; // cf
  unsigned __int64 v23; // rbx
  __int64 updated; // rax
  __int16 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 UsedPtesHandle; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  bool v32; // zf
  int v33; // esi
  int v34; // [rsp+20h] [rbp-58h]
  int v35; // [rsp+24h] [rbp-54h] BYREF
  __int64 v36; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-48h] BYREF
  BOOL v40; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v5 = a2;
  v6 = 0LL;
  v34 = 0;
  v8 = a3 & 0x80;
  while ( 1 )
  {
    v40 = 0;
    if ( v8 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = MiLockLeafPage(v5, 0LL);
      v40 = v9 != 0;
    }
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
    v36 = v10;
    v11 = v10;
    if ( (v10 & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_17;
      v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFFLL)
         - 0x220000000000LL;
      if ( (a3 & 1) == 0 )
      {
        v35 = 0;
        v40 = 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v35, v12, v13, v14);
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
        LOBYTE(v11) = v36;
      }
      if ( *(__int64 *)(v9 + 40) >= 0 )
      {
LABEL_17:
        if ( (*(_BYTE *)v9 & 1) != 0
          && *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == a1
          && (*(_BYTE *)(v9 + 35) & 8) == 0 )
        {
          v15 = v11;
          v11 = *(_QWORD *)(v9 + 16);
          if ( MiPteInShadowRange(v9 + 16)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v11 & 1) != 0
            && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v30 = *((_QWORD *)&Flink->Flink + (((v9 + 16) >> 3) & 0x1FF));
              v31 = v11 | 0x20;
              if ( (v30 & 0x20) == 0 )
                v31 = v11;
              v11 = v31;
              if ( (v30 & 0x42) != 0 )
                v11 = v31 | 0x42;
            }
          }
          v36 = v11;
          if ( (v11 & 1) == 0 && (!v11 || !qword_140C50780 || (qword_140C50780 & v11) != 0) )
          {
            if ( (unsigned int)MI_IS_RESET_PTE(v11) && (*(_BYTE *)(v9 + 34) & 0x10) == 0 )
            {
              v32 = v8 == 0;
              v16 = v40;
              if ( v32 || (v15 & 0x42) == 0 )
                goto LABEL_24;
              goto LABEL_20;
            }
LABEL_19:
            v16 = v40;
            goto LABEL_20;
          }
        }
      }
      goto LABEL_52;
    }
    if ( (v10 & 0x400) != 0 )
      goto LABEL_52;
    if ( (v10 & 0x800) == 0 )
      break;
    if ( !v8 )
    {
      v16 = v40;
      goto LABEL_56;
    }
    v5 = a2;
    v27 = MiLockTransitionLeafPageEx((ULONG_PTR)a2, 0LL, 0);
    v9 = v27;
    if ( v27 )
    {
      v16 = 1;
      if ( *(__int64 *)(v27 + 40) < 0 )
        goto LABEL_28;
LABEL_56:
      v17 = a1;
      if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == a1 )
      {
        v36 = MI_READ_PTE_LOCK_FREE(v9 + 16);
        v11 = v36;
        if ( !(unsigned int)MI_IS_RESET_PTE(v36) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
          goto LABEL_21;
      }
      goto LABEL_24;
    }
  }
  if ( !v10 )
  {
    if ( (a3 & 2) != 0 )
    {
      v11 = MiSwizzleInvalidPte(8LL * (a3 & 0x7C));
      v36 = v11;
      v34 = 1;
      goto LABEL_19;
    }
LABEL_52:
    v16 = v40;
    goto LABEL_24;
  }
  v16 = v40;
  if ( !MiInvalidPteConforms(v10) || ((v11 >> 5) & 0xF) == 0 )
    goto LABEL_24;
LABEL_20:
  v17 = a1;
LABEL_21:
  if ( (v11 & 2) == 0 )
  {
    if ( v9 && (*(_BYTE *)(v9 + 34) & 0x28) != 0 )
      goto LABEL_24;
    if ( (v11 & 4) != 0 )
    {
      if ( !v9 )
        goto LABEL_24;
      if ( (a3 & 1) == 0 )
      {
        if ( !*(_WORD *)(v9 + 32) )
        {
          v33 = MiPageStandbyLookasideStatus(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4));
          if ( (MiUnlinkPageFromListEx(v9, 0) & 3) != 0 )
          {
            MiDiscardTransitionPteEx(v9, 0LL);
            goto LABEL_24;
          }
          if ( !v33
            && (unsigned int)MiPageStandbyLookasideStatus(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4)) )
          {
            if ( (v11 & 0x400) != 0 )
              v11 &= ~8uLL;
            else
              v11 &= ~0x8000000uLL;
            v36 = v11;
          }
          v17 = a1;
          v4 = 1;
        }
        v6 = MiCapturePageFileInfoInline((unsigned __int64 *)(v9 + 16), 1, 0);
        *(_BYTE *)(v9 + 34) |= 0x10u;
LABEL_37:
        v19 = *(_QWORD *)(v17 + 8LL * ((unsigned __int8)HIBYTE(*a4) >> 4) + 16736);
        v37 = v11;
        MiSetNonResidentPteHeat(&v37, 0LL);
        v22 = (v11 & 0x400) != 0;
        v23 = v37;
        if ( !v22 )
        {
          v23 = v37 & 0xFFFFFFFFFFFFFFF9uLL;
          v37 &= 0xFFFFFFFFFFFFFFF9uLL;
        }
        if ( v19 )
        {
          if ( v23 )
            updated = MiUpdatePageFileHighInPte(v23, v21);
          else
            updated = MiSwizzleInvalidPte(v20 & 0xFFFFFFFF00000000uLL);
          v23 = updated ^ (unsigned __int16)(updated ^ (v25 << 12)) & 0xF000 | 2;
          v37 = v23;
        }
        if ( v9 )
        {
          if ( !*(_WORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v4 )
          {
            MiUnlinkPageFromListEx(v9, 0);
            v4 = 1;
          }
          *(_QWORD *)(v9 + 16) = v23;
          if ( v4 )
            MiInsertPageInList(v9, 8u);
          v26 = (unsigned __int64)a2;
        }
        else
        {
          v26 = (unsigned __int64)a2;
          *a2 = v23;
        }
        if ( v34 && v26 <= 0xFFFFF6BFFFFFFF78uLL && v26 >= 0xFFFFF68000000000uLL )
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v26 << 25) >> 16);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
        }
      }
    }
    else if ( (a3 & 1) == 0 )
    {
      goto LABEL_37;
    }
    v4 = 1;
    goto LABEL_24;
  }
  if ( (a3 & 1) != 0 )
    *(_QWORD *)a4 = v11;
LABEL_24:
  if ( !v16 )
    goto LABEL_25;
LABEL_28:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_25:
  if ( v6 )
    MiReleasePageFileInfo(a1, v6, 1);
  return v4;
}
