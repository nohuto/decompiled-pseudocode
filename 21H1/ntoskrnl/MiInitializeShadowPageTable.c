/*
 * XREFs of MiInitializeShadowPageTable @ 0x1407827B4
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x1407826C0 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140328FB8 (MiInitializePfnForOtherProcess.c)
 *     MiVaToPfn @ 0x14033BCD4 (MiVaToPfn.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14033BD80 (MiReadWriteAnyLevelShadowPte.c)
 *     MiReplicatePteChange @ 0x1403A1024 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x1403AC1E4 (MiMarkPxeAsShadowed.c)
 */

ULONG_PTR __fastcall MiInitializeShadowPageTable(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 PteShadow; // rbp
  __int64 v9; // rbp
  int v10; // r14d
  int v11; // ebx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  ULONG_PTR result; // rax
  unsigned __int64 PteAddress; // rax
  int v19; // edx
  ULONG_PTR v20; // [rsp+68h] [rbp+20h] BYREF

  v5 = a1;
  if ( a3 )
  {
    *a2 = 0LL;
    v11 = 6;
    v10 = 3;
    v9 = (__int64)(a2 + 0xB000000000LL) / 48;
    if ( a3 == 3 )
    {
      v15 = -1LL;
      goto LABEL_11;
    }
  }
  else
  {
    v6 = a1 << 25 >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
    {
      PteAddress = v5;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v19 != 1 );
      v7 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v9 = MiVaToPfn(v6);
    }
    else
    {
      v20 = MI_READ_PTE_LOCK_FREE(v5);
      v7 = v20;
      PteShadow = v20;
      if ( MiPteInShadowRange((unsigned __int64)&v20) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v20, v7);
      v9 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
    }
    v10 = 3;
    v11 = ((v7 & 0x800) != 0 ? 4 : 1) | 2;
    if ( v7 < 0 )
      v11 = (v7 & 0x800) != 0 ? 4 : 1;
  }
  v12 = MiGetPteAddress(v5);
  v20 = MiReadWriteAnyLevelShadowPte(v12, v13, 0, ZeroPte);
  v14 = v20;
  if ( MiPteInShadowRange((unsigned __int64)&v20) )
    v14 = MiReadPteShadow((unsigned __int64)&v20, v14);
  v15 = (v14 >> 12) & 0xFFFFFFFFFLL;
LABEL_11:
  v16 = MiMakeValidPte(v5, v9, v11 | (a3 != 0 ? -1744830464 : -1879048192), a4) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v15 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v9, v5, v15, 2560LL);
  }
  result = MiReadWriteAnyLevelShadowPte(v5, a3, 1, v16);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v5);
    do
    {
      v5 = v5 << 25 >> 16;
      --v10;
    }
    while ( v10 );
    return MiReplicatePteChange(v5, v5);
  }
  return result;
}
