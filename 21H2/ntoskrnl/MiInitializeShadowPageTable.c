/*
 * XREFs of MiInitializeShadowPageTable @ 0x1407A0568
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x1407A0474 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiVaToPfn @ 0x1402269B4 (MiVaToPfn.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140226A60 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializePfnForOtherProcess @ 0x140296B58 (MiInitializePfnForOtherProcess.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiReplicatePteChange @ 0x1403A4694 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x1403B5FC4 (MiMarkPxeAsShadowed.c)
 */

ULONG_PTR __fastcall MiInitializeShadowPageTable(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 PteShadow; // rbp
  __int64 v8; // rbp
  int v9; // r14d
  int v10; // ebx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  ULONG_PTR result; // rax
  unsigned __int64 PteAddress; // rax
  int v18; // edx
  ULONG_PTR v19; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  if ( a3 )
  {
    *a2 = 0LL;
    v10 = 6;
    v9 = 3;
    v8 = (__int64)(a2 + 0xB000000000LL) / 48;
    if ( a3 == 3 )
    {
      v14 = -1LL;
      goto LABEL_11;
    }
  }
  else
  {
    v5 = a1 << 25 >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
    {
      PteAddress = v4;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v18 != 1 );
      v6 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v8 = MiVaToPfn(v5);
    }
    else
    {
      v19 = MI_READ_PTE_LOCK_FREE(v4);
      v6 = v19;
      PteShadow = v19;
      if ( MiPteInShadowRange((unsigned __int64)&v19) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v19, v6);
      v8 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
    }
    v9 = 3;
    v10 = ((v6 & 0x800) != 0 ? 4 : 1) | 2;
    if ( v6 < 0 )
      v10 = (v6 & 0x800) != 0 ? 4 : 1;
  }
  v11 = MiGetPteAddress(v4);
  v19 = MiReadWriteAnyLevelShadowPte(v11, v12, 0, ZeroPte);
  v13 = v19;
  if ( MiPteInShadowRange((unsigned __int64)&v19) )
    v13 = MiReadPteShadow((unsigned __int64)&v19, v13);
  v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
LABEL_11:
  v15 = MiMakeValidPte(v4, v8, v10 | (a3 != 0 ? -1744830464 : -1879048192)) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v14 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v8, v4, v14, 2560);
  }
  result = MiReadWriteAnyLevelShadowPte(v4, a3, 1, v15);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v4);
    do
    {
      v4 = v4 << 25 >> 16;
      --v9;
    }
    while ( v9 );
    return MiReplicatePteChange(v4, v4);
  }
  return result;
}
