/*
 * XREFs of MiMapNewSession @ 0x14078724C
 * Callers:
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x14024A6C4 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x1402514D0 (MiGetPfnLink.c)
 *     MiGetSystemPage @ 0x14025EE78 (MiGetSystemPage.c)
 *     MiInitializePfnForOtherProcess @ 0x140296B58 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x140296ED4 (MiSetPageTablePfnBuddy.c)
 *     MiGetNextPageColor @ 0x140296F58 (MiGetNextPageColor.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1402E6250 (MiInitializePfn.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x140322EDC (MiSetPfnLink.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiWriteTopLevelPxe @ 0x14039E05C (MiWriteTopLevelPxe.c)
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
  bool v19; // zf
  unsigned __int64 v20; // rdi
  unsigned int v21; // r14d
  __int64 *v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 v27; // rbx
  unsigned __int64 *v28; // r15
  int v29; // r13d
  bool v30; // zf
  unsigned __int64 v31; // rbx
  __int128 v33; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v34[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 PteAddress; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v37; // [rsp+A0h] [rbp+18h]
  __int64 v38; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v33 = 0LL;
  memset(v34, 0, 32);
  v3 = MiPartitionIdToPointer(a2);
  v4 = 0LL;
  PteAddress = MiGetPteAddress(v2);
  MiInitializePageColorBase(0LL, 0, (__int64)&v33);
  v5 = 8LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v3, (__int64)&v33);
    MiSetPfnLink(SystemPage, v4);
    v4 = v7;
    --v5;
  }
  while ( v5 );
  MiFillPteHierarchy(qword_140C4DE20, v34);
  v9 = 4LL;
  v10 = (v8 + 0x58000000000LL) / 48;
  do
  {
    v11 = (__int64 *)v34[--v9];
    v12 = v4;
    PfnLink = MiGetPfnLink(v4);
    *v14 = 0LL;
    v4 = PfnLink;
    if ( v9 == 3 )
    {
      *(_QWORD *)(v12 + 8) = MiGetPteAddress(qword_140C4DE20);
      MiSetPageTablePfnBuddy(v12, v2, 0);
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
        if ( !HIBYTE(word_140C4E048) )
        {
          v19 = (v17 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (v17 & 1) == 0;
LABEL_14:
        if ( !v19 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *v11 = v17;
    if ( v18 )
      MiWritePteShadow((__int64)v11, v17);
    v2 = a1;
LABEL_19:
    MiInitializePfnForOtherProcess(v15, (__int64)v11, v10, 512);
    v10 = v15;
  }
  while ( v9 != 1 );
  v20 = MiMakeValidPte(PteAddress, 0LL, -1610612732);
  v21 = 0;
  v22 = (__int64 *)MiGetPteAddress(qword_140C4DE20);
  v37 = PteAddress - (_QWORD)v22;
  while ( 2 )
  {
    v38 = v4;
    v4 = MiGetPfnLink(v4);
    v24 = (v23 + 0x58000000000LL) / 48;
    if ( v21 )
      goto LABEL_32;
    v20 ^= (v20 ^ (v24 << 12)) & 0xFFFFFFFFF000LL;
    v25 = MiGetPteAddress(qword_140C4DE20);
    *(_QWORD *)(v26 + 8) = v25;
    MiSetPageTablePfnBuddy(v26, v2, 0);
    v27 = v20;
    v28 = (unsigned __int64 *)((char *)v22 + v37);
    v29 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v22 + v37) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v29 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v30 = (v20 & 1) == 0;
LABEL_28:
          if ( !v30 )
            v27 = v20 | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v30 = (v20 & 1) == 0;
        goto LABEL_28;
      }
    }
    *v28 = v27;
    if ( v29 )
      MiWritePteShadow((__int64)v28, v27);
LABEL_32:
    v31 = MiMakeValidPte(0LL, v24, -2147483644) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v38, v22, 4u, 4);
    if ( !MiPteInShadowRange((unsigned __int64)v22) )
      goto LABEL_41;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v31 & 1) != 0 )
      {
        v31 |= 0x8000000000000000uLL;
      }
LABEL_41:
      *v22 = v31;
      goto LABEL_42;
    }
    if ( !HIBYTE(word_140C4E048) && (v31 & 1) != 0 )
      v31 |= 0x8000000000000000uLL;
    *v22 = v31;
    MiWritePteShadow((__int64)v22, v31);
LABEL_42:
    v2 = a1;
    ++v21;
    ++v22;
    if ( v21 < 5 )
      continue;
    return MiGetNextPageColor((__int64)&v33);
  }
}
