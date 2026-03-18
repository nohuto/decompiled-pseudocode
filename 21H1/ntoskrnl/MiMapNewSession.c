/*
 * XREFs of MiMapNewSession @ 0x14077289C
 * Callers:
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 * Callees:
 *     MiInitializePfn @ 0x1402253F0 (MiInitializePfn.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x14027AFCC (MiSetPfnLink.c)
 *     MiGetNextPageColor @ 0x140280344 (MiGetNextPageColor.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x1402B2490 (MiFillPteHierarchy.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiGetPfnLink @ 0x140322740 (MiGetPfnLink.c)
 *     MiPartitionIdToPointer @ 0x140323828 (MiPartitionIdToPointer.c)
 *     MiInitializePfnForOtherProcess @ 0x140328FB8 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1403292B4 (MiSetPageTablePfnBuddy.c)
 *     MiGetSystemPage @ 0x14034C0CC (MiGetSystemPage.c)
 *     MiWriteTopLevelPxe @ 0x14039A9EC (MiWriteTopLevelPxe.c)
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
  __int64 v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // r14
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v18; // rbx
  int v19; // r15d
  bool v20; // zf
  __int64 v21; // r9
  unsigned __int64 v22; // rdi
  unsigned int v23; // r14d
  unsigned __int64 *v24; // rsi
  __int64 v25; // r9
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rbx
  unsigned __int64 *v30; // r15
  int v31; // r13d
  bool v32; // zf
  unsigned __int64 v33; // rbx
  __int128 v35; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v36[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 PteAddress; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v39; // [rsp+A0h] [rbp+18h]
  __int64 v40; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v35 = 0LL;
  memset(v36, 0, 32);
  v3 = MiPartitionIdToPointer(a2);
  v4 = 0LL;
  PteAddress = MiGetPteAddress(v2);
  MiInitializePageColorBase(0LL, 0, (__int64)&v35);
  v5 = 8LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v3, (__int64)&v35);
    MiSetPfnLink(SystemPage, v4);
    v4 = v7;
    --v5;
  }
  while ( v5 );
  MiFillPteHierarchy(qword_140C4DD20, v36);
  v9 = 4LL;
  v10 = (v8 + 0x58000000000LL) / 48;
  do
  {
    v11 = (__int64 *)v36[--v9];
    v12 = v4;
    PfnLink = MiGetPfnLink(v4);
    *v15 = 0LL;
    v4 = PfnLink;
    if ( v9 == 3 )
    {
      *(_QWORD *)(v12 + 8) = MiGetPteAddress(qword_140C4DD20);
      MiSetPageTablePfnBuddy(v12, v2, 0LL);
    }
    v16 = (v12 + 0x58000000000LL) / 48;
    ValidPte = MiMakeValidPte(0LL, v16, 2415919110LL, v14);
    v18 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
    if ( v9 == 3 )
    {
      MiWriteTopLevelPxe(v11, ValidPte & 0xFFFFFFFFFFFFFEFFuLL);
      goto LABEL_19;
    }
    v19 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v20 = (v18 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (v18 & 1) == 0;
LABEL_14:
        if ( !v20 )
          v18 |= 0x8000000000000000uLL;
      }
    }
    *v11 = v18;
    if ( v19 )
      MiWritePteShadow((__int64)v11, v18);
    v2 = a1;
LABEL_19:
    MiInitializePfnForOtherProcess(v16, (__int64)v11, v10, 512LL);
    v10 = v16;
  }
  while ( v9 != 1 );
  v22 = MiMakeValidPte(PteAddress, 0LL, 2684354564LL, v21);
  v23 = 0;
  v24 = (unsigned __int64 *)MiGetPteAddress(qword_140C4DD20);
  v39 = PteAddress - (_QWORD)v24;
  while ( 2 )
  {
    v40 = v4;
    v4 = MiGetPfnLink(v4);
    v26 = (v25 + 0x58000000000LL) / 48;
    if ( v23 )
      goto LABEL_32;
    v22 ^= (v22 ^ (v26 << 12)) & 0xFFFFFFFFF000LL;
    v27 = MiGetPteAddress(qword_140C4DD20);
    *(_QWORD *)(v28 + 8) = v27;
    MiSetPageTablePfnBuddy(v28, v2, 0LL);
    v29 = v22;
    v30 = (unsigned __int64 *)((char *)v24 + v39);
    v31 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v24 + v39) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v31 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v32 = (v22 & 1) == 0;
LABEL_28:
          if ( !v32 )
            v29 = v22 | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v32 = (v22 & 1) == 0;
        goto LABEL_28;
      }
    }
    *v30 = v29;
    if ( v31 )
      MiWritePteShadow((__int64)v30, v29);
LABEL_32:
    v33 = MiMakeValidPte(0LL, v26, 2147483652LL, v25) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v40, v24, 4u, 4);
    if ( !MiPteInShadowRange((unsigned __int64)v24) )
      goto LABEL_41;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v33 & 1) != 0 )
      {
        v33 |= 0x8000000000000000uLL;
      }
LABEL_41:
      *v24 = v33;
      goto LABEL_42;
    }
    if ( !HIBYTE(word_140C4DF48) && (v33 & 1) != 0 )
      v33 |= 0x8000000000000000uLL;
    *v24 = v33;
    MiWritePteShadow((__int64)v24, v33);
LABEL_42:
    v2 = a1;
    ++v23;
    ++v24;
    if ( v23 < 5 )
      continue;
    return MiGetNextPageColor((__int64)&v35);
  }
}
