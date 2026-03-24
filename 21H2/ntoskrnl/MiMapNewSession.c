/*
 * XREFs of MiMapNewSession @ 0x14078708C
 * Callers:
 *     MiSessionCreateInternal @ 0x140786C10 (MiSessionCreateInternal.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x140241A00 (MiInitializePfn.c)
 *     MiGetSystemPage @ 0x140270ED8 (MiGetSystemPage.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x1402CBF58 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x1402D2F30 (MiGetPfnLink.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E5808 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1402E5B84 (MiSetPageTablePfnBuddy.c)
 *     MiGetNextPageColor @ 0x1402E5C08 (MiGetNextPageColor.c)
 *     MiFillPteHierarchy @ 0x14030C470 (MiFillPteHierarchy.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x14031818C (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiWriteTopLevelPxe @ 0x14039DF0C (MiWriteTopLevelPxe.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1, unsigned __int16 a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  _QWORD *SystemPage; // rax
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 PfnLink; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r14
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v17; // rbx
  int v18; // r15d
  __int64 v19; // r8
  bool v20; // zf
  unsigned __int64 v21; // rdi
  unsigned int v22; // r14d
  __int64 *v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // rbx
  unsigned __int64 *v29; // r15
  int v30; // r13d
  __int64 v31; // r8
  bool v32; // zf
  unsigned __int64 v33; // rbx
  __int64 v34; // r8
  __int128 v36; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v37[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 PteAddress; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v40; // [rsp+A0h] [rbp+18h]
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v36 = 0LL;
  memset(v37, 0, 32);
  v3 = MiPartitionIdToPointer(a2);
  v4 = 0LL;
  PteAddress = MiGetPteAddress(v2);
  MiInitializePageColorBase(0LL, 0, (__int64)&v36);
  v5 = 8LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v3, (__int64)&v36);
    MiSetPfnLink(SystemPage, v4);
    v4 = v7;
    --v5;
  }
  while ( v5 );
  MiFillPteHierarchy(qword_140C4DDE0, v37);
  v9 = 4LL;
  v10 = (v8 + 0x58000000000LL) / 48;
  do
  {
    v11 = (__int64 *)v37[--v9];
    v12 = v4;
    PfnLink = MiGetPfnLink(v4);
    *v14 = 0LL;
    v4 = PfnLink;
    if ( v9 == 3 )
    {
      *(_QWORD *)(v12 + 8) = MiGetPteAddress(qword_140C4DDE0);
      MiSetPageTablePfnBuddy(v12, v2, 0LL);
    }
    v15 = (v12 + 0x58000000000LL) / 48;
    ValidPte = MiMakeValidPte(0LL, v15, -1879048186);
    v17 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
    if ( v9 == 3 )
    {
      MiWriteTopLevelPxe(v11, ValidPte & 0xFFFFFFFFFFFFFEFFuLL);
      goto LABEL_19;
    }
    v18 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v20 = (v17 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (v17 & 1) == 0;
LABEL_14:
        if ( !v20 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *v11 = v17;
    if ( v18 )
      MiWritePteShadow((__int64)v11, v17, v19);
    v2 = a1;
LABEL_19:
    MiInitializePfnForOtherProcess(v15, (__int64)v11, v10, 512LL);
    v10 = v15;
  }
  while ( v9 != 1 );
  v21 = MiMakeValidPte(PteAddress, 0LL, -1610612732);
  v22 = 0;
  v23 = (__int64 *)MiGetPteAddress(qword_140C4DDE0);
  v40 = PteAddress - (_QWORD)v23;
  while ( 2 )
  {
    v41 = v4;
    v4 = MiGetPfnLink(v4);
    v25 = (v24 + 0x58000000000LL) / 48;
    if ( v22 )
      goto LABEL_32;
    v21 ^= (v21 ^ (v25 << 12)) & 0xFFFFFFFFF000LL;
    v26 = MiGetPteAddress(qword_140C4DDE0);
    *(_QWORD *)(v27 + 8) = v26;
    MiSetPageTablePfnBuddy(v27, v2, 0LL);
    v28 = v21;
    v29 = (unsigned __int64 *)((char *)v23 + v40);
    v30 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v23 + v40) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v30 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v32 = (v21 & 1) == 0;
LABEL_28:
          if ( !v32 )
            v28 = v21 | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v32 = (v21 & 1) == 0;
        goto LABEL_28;
      }
    }
    *v29 = v28;
    if ( v30 )
      MiWritePteShadow((__int64)v29, v28, v31);
LABEL_32:
    v33 = MiMakeValidPte(0LL, v25, -2147483644) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v41, v23, 4u, 4);
    if ( !MiPteInShadowRange((unsigned __int64)v23) )
      goto LABEL_41;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v33 & 1) != 0 )
      {
        v33 |= 0x8000000000000000uLL;
      }
LABEL_41:
      *v23 = v33;
      goto LABEL_42;
    }
    if ( !HIBYTE(word_140C4E008) && (v33 & 1) != 0 )
      v33 |= 0x8000000000000000uLL;
    *v23 = v33;
    MiWritePteShadow((__int64)v23, v33, v34);
LABEL_42:
    v2 = a1;
    ++v22;
    ++v23;
    if ( v22 < 5 )
      continue;
    return MiGetNextPageColor((__int64)&v36);
  }
}
