/*
 * XREFs of MiHandleTransitionFault @ 0x140216DE0
 * Callers:
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiMakeTransitionHeatBatch @ 0x140559F80 (MiMakeTransitionHeatBatch.c)
 */

__int64 __fastcall MiHandleTransitionFault(
        unsigned __int64 *a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 *a5,
        int a6,
        __int64 *a7)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r9
  ULONG_PTR v14; // r9
  __int64 Address; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 TransitionHeatBatch; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  bool v32; // zf
  int v33; // eax
  int v34; // edx
  int v35; // edx
  unsigned __int64 *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41[7]; // [rsp+40h] [rbp-38h] BYREF

  LOBYTE(v41[0]) = 0;
  BugCheckParameter4 = a4;
  *a7 = 0LL;
  *a5 = 0LL;
  v12 = MI_PFN_IS_PROTO(a4, 0LL, a3);
  if ( !v12 )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( a2 != (v14 | 0x8000000000000000uLL) )
      KeBugCheckEx(0x1Au, 0x888AuLL, a2, v14, BugCheckParameter4);
  }
  Address = v11;
  v16 = *(_QWORD *)(BugCheckParameter4 + 16);
  v17 = *a1;
  v18 = v16 >> 11;
  v19 = v16 >> 3;
  if ( (*(_QWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0 )
    v19 = (unsigned int)v18;
  if ( (v19 & 1) != 0 )
  {
    if ( v17 <= 0x7FFFFFFEFFFFLL && !v12 )
      Address = MiLocateAddress(*a1);
    TransitionHeatBatch = MiMakeTransitionHeatBatch(BugCheckParameter4, Address, 0LL);
    a1[14] = TransitionHeatBatch;
    if ( TransitionHeatBatch )
    {
LABEL_25:
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(v19) = 17;
        MiUnlockProtoPoolPage(a3, v19);
        return 3221226548LL;
      }
      return 3221226548LL;
    }
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(BugCheckParameter4, v19, Address) )
    goto LABEL_23;
  v23 = *(_QWORD *)(BugCheckParameter4 + 16);
  if ( (v23 & 0x400) == 0 || ((*(_QWORD *)(BugCheckParameter4 + 40) >> 60) & 7) == 3 )
    goto LABEL_23;
  v24 = *(_QWORD *)(BugCheckParameter4 + 16);
  if ( qword_140C4DE80 && (v23 & 0x10) == 0 )
    v24 = ~qword_140C4DE80 & v23;
  v25 = v24 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v25 + 56LL) & 0x20) == 0 )
    goto LABEL_23;
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 96LL) + 40LL);
  if ( !v26 || (v26 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v26 & 3) == 2 )
    goto LABEL_23;
  if ( v17 < 0xFFFF800000000000uLL )
  {
    if ( Address )
    {
LABEL_30:
      v21 = *(unsigned int *)(v22 + 48);
      if ( (*(_DWORD *)(v22 + 48) & 0x70) != 0x20 )
        goto LABEL_36;
      v21 &= 0xF80u;
      if ( (_DWORD)v21 != 128
        && ((*(_DWORD *)(v22 + 64) & 0x8000000) == 0 || (v26 & 4) != 0)
        && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v25 + 34) & 2) == 0) )
      {
        goto LABEL_36;
      }
LABEL_23:
      if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter4) )
      {
        MiDiscardTransitionPteEx(BugCheckParameter4, 0LL);
        goto LABEL_25;
      }
      if ( (unsigned int)MiIsPfnFileOnly(BugCheckParameter4) )
      {
LABEL_71:
        v40 = *(_QWORD *)(BugCheckParameter4 + 24);
        ++*(_WORD *)(BugCheckParameter4 + 32);
        *(_QWORD *)(BugCheckParameter4 + 24) = v40 & 0xC000000000000000uLL | 1;
        *(_BYTE *)(BugCheckParameter4 + 34) = *(_BYTE *)(BugCheckParameter4 + 34) & 0xF8 | 6;
        return 0LL;
      }
      v29 = 1LL;
      if ( v17 > 0x7FFFFFFEFFFFLL || *(_WORD *)(BugCheckParameter4 + 32) )
        goto LABEL_63;
      if ( (unsigned int)MI_PFN_IS_PROTO(
                           BugCheckParameter4,
                           KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8],
                           v28) )
      {
        if ( (*(_DWORD *)(BugCheckParameter4 + 16) & 0x400LL) != 0 )
          goto LABEL_63;
        v32 = *(_QWORD *)(v30 + 432) == 0LL;
      }
      else
      {
        v32 = *(_QWORD *)(v30 + 424) == 0LL;
      }
      if ( !v32 )
      {
        if ( (Address || (Address = MiLocateAddress(v17)) != 0)
          && MiVadPageSizes[(*(_DWORD *)(Address + 48) >> 18) & 3] == 16 )
        {
          v33 = MI_PFN_IS_PROTO(BugCheckParameter4, *(unsigned int *)(Address + 48), v31);
          v35 = v34 & 0x100000;
          if ( v33 )
          {
            if ( !v35 )
            {
LABEL_54:
              v36 = a1;
              v37 = MiIdealClusterPage((int)a1, Address, a2, a6, (void *)BugCheckParameter4, a3, (__int64)v41);
              v29 = v37;
              if ( v37 )
              {
                if ( BugCheckParameter4 != v37 )
                {
                  BugCheckParameter4 = v37;
                  *a5 = v37;
                }
              }
              else
              {
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( a3 )
                {
                  LOBYTE(v38) = 17;
                  MiUnlockProtoPoolPage(a3, v38);
                }
              }
              goto LABEL_60;
            }
          }
          else if ( v35 )
          {
            goto LABEL_54;
          }
        }
        v36 = a1;
LABEL_60:
        if ( LOBYTE(v41[0]) )
          goto LABEL_65;
        if ( !v29 )
          goto LABEL_66;
LABEL_64:
        v29 = MiMigratePfn(v36, BugCheckParameter4, a3, a7);
        *a5 = v29;
        BugCheckParameter4 = v29;
LABEL_65:
        if ( !v29 )
        {
LABEL_66:
          v39 = *a7;
          if ( *a7 )
          {
            if ( *(int *)(v39 + 176) > 1 )
              KeSetEvent((PRKEVENT)(v39 + 56), 0, 0);
            MiFreeInPageSupportBlock((PSLIST_ENTRY)v39);
            *a7 = 0LL;
          }
          return 3221226548LL;
        }
        goto LABEL_71;
      }
LABEL_63:
      v36 = a1;
      goto LABEL_64;
    }
    v22 = MiLocateAddress(v17);
  }
  else if ( (MiFlags & 0x10000) == 0 || (v23 & 0x40) == 0 )
  {
    goto LABEL_23;
  }
  if ( v22 )
    goto LABEL_30;
LABEL_36:
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v21) = 17;
    MiUnlockProtoPoolPage(a3, v21);
  }
  return 3221226536LL;
}
