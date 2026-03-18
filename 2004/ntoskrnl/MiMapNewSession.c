/*
 * XREFs of MiMapNewSession @ 0x140774CAC
 * Callers:
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x140221F7C (MiSetPfnLink.c)
 *     MiGetNextPageColor @ 0x1402272F4 (MiGetNextPageColor.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x140259460 (MiFillPteHierarchy.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1402B8070 (MiInitializePfn.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E2C58 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1402E2F54 (MiSetPageTablePfnBuddy.c)
 *     MiGetSystemPage @ 0x14031CD8C (MiGetSystemPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x14035A294 (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x140360050 (MiGetPfnLink.c)
 *     MiWriteTopLevelPxe @ 0x14039B17C (MiWriteTopLevelPxe.c)
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
  __int64 v20; // r8
  bool v21; // zf
  __int64 v22; // r9
  unsigned __int64 v23; // rdi
  unsigned int v24; // r14d
  _QWORD *v25; // rsi
  __int64 v26; // r9
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // rbx
  unsigned __int64 *v31; // r15
  int v32; // r13d
  __int64 v33; // r8
  bool v34; // zf
  unsigned __int64 v35; // rbx
  __int64 v36; // r8
  __int128 v38; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v39[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 PteAddress; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v42; // [rsp+A0h] [rbp+18h]
  __int64 v43; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  v38 = 0LL;
  memset(v39, 0, 32);
  v3 = MiPartitionIdToPointer(a2);
  v4 = 0LL;
  PteAddress = MiGetPteAddress(v2);
  MiInitializePageColorBase(0LL, 0, (__int64)&v38);
  v5 = 8LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v3, (__int64)&v38);
    MiSetPfnLink(SystemPage, v4);
    v4 = v7;
    --v5;
  }
  while ( v5 );
  MiFillPteHierarchy(qword_140C4DBE0, v39);
  v9 = 4LL;
  v10 = (v8 + 0x58000000000LL) / 48;
  do
  {
    v11 = (__int64 *)v39[--v9];
    v12 = v4;
    PfnLink = MiGetPfnLink(v4);
    *v15 = 0LL;
    v4 = PfnLink;
    if ( v9 == 3 )
    {
      *(_QWORD *)(v12 + 8) = MiGetPteAddress(qword_140C4DBE0);
      MiSetPageTablePfnBuddy(v12, v2, 0);
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
        if ( !HIBYTE(word_140C4DE08) )
        {
          v21 = (v18 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v21 = (v18 & 1) == 0;
LABEL_14:
        if ( !v21 )
          v18 |= 0x8000000000000000uLL;
      }
    }
    *v11 = v18;
    if ( v19 )
      MiWritePteShadow((__int64)v11, v18, v20);
    v2 = a1;
LABEL_19:
    MiInitializePfnForOtherProcess(v16, (__int64)v11, v10, 512LL);
    v10 = v16;
  }
  while ( v9 != 1 );
  v23 = MiMakeValidPte(PteAddress, 0LL, 2684354564LL, v22);
  v24 = 0;
  v25 = (_QWORD *)MiGetPteAddress(qword_140C4DBE0);
  v42 = PteAddress - (_QWORD)v25;
  while ( 2 )
  {
    v43 = v4;
    v4 = MiGetPfnLink(v4);
    v27 = (v26 + 0x58000000000LL) / 48;
    if ( v24 )
      goto LABEL_32;
    v23 ^= (v23 ^ (v27 << 12)) & 0xFFFFFFFFF000LL;
    v28 = MiGetPteAddress(qword_140C4DBE0);
    *(_QWORD *)(v29 + 8) = v28;
    MiSetPageTablePfnBuddy(v29, v2, 0);
    v30 = v23;
    v31 = (_QWORD *)((char *)v25 + v42);
    v32 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v25 + v42) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v32 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v34 = (v23 & 1) == 0;
LABEL_28:
          if ( !v34 )
            v30 = v23 | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v34 = (v23 & 1) == 0;
        goto LABEL_28;
      }
    }
    *v31 = v30;
    if ( v32 )
      MiWritePteShadow((__int64)v31, v30, v33);
LABEL_32:
    v35 = MiMakeValidPte(0LL, v27, 2147483652LL, v26) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v43, (unsigned __int64)v25, 4u, 4);
    if ( !MiPteInShadowRange((unsigned __int64)v25) )
      goto LABEL_41;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v35 & 1) != 0 )
      {
        v35 |= 0x8000000000000000uLL;
      }
LABEL_41:
      *v25 = v35;
      goto LABEL_42;
    }
    if ( !HIBYTE(word_140C4DE08) && (v35 & 1) != 0 )
      v35 |= 0x8000000000000000uLL;
    *v25 = v35;
    MiWritePteShadow((__int64)v25, v35, v36);
LABEL_42:
    v2 = a1;
    ++v24;
    ++v25;
    if ( v24 < 5 )
      continue;
    return MiGetNextPageColor((__int64)&v38);
  }
}
