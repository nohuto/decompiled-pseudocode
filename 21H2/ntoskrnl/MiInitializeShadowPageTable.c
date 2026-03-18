/*
 * XREFs of MiInitializeShadowPageTable @ 0x14082A974
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14082A864 (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiInitializePfnForOtherProcess @ 0x14027CCE4 (MiInitializePfnForOtherProcess.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReplicatePteChange @ 0x14036CB28 (MiReplicatePteChange.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403853B0 (MiReadWriteAnyLevelShadowPte.c)
 *     MiVaToPfnEx @ 0x1403B8520 (MiVaToPfnEx.c)
 *     MiMarkPxeAsShadowed @ 0x1403C2810 (MiMarkPxeAsShadowed.c)
 */

ULONG_PTR __fastcall MiInitializeShadowPageTable(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  int v8; // ebp
  int v9; // ebx
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  ULONG_PTR result; // rax
  unsigned __int64 PteAddress; // rax
  int v16; // edx
  ULONG_PTR v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  if ( !a3 )
  {
    v5 = a1 << 25 >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
    {
      PteAddress = v4;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v16 != 1 );
      v6 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v7 = MiVaToPfnEx(v5);
    }
    else
    {
      v17 = MI_READ_PTE_LOCK_FREE(v4);
      v6 = v17;
      v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
    }
    v8 = 3;
    v9 = ((v6 & 0x800) != 0 ? 4 : 1) | 2;
    if ( v6 < 0 )
      v9 = (v6 & 0x800) != 0 ? 4 : 1;
    goto LABEL_6;
  }
  *a2 = 0LL;
  v9 = 6;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x44000000000LL) >> 4);
  v8 = 3;
  if ( a3 != 3 )
  {
LABEL_6:
    v10 = MiGetPteAddress(v4);
    v17 = MiReadWriteAnyLevelShadowPte(v10, v11, 0, ZeroPte);
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_7;
  }
  v12 = -1LL;
LABEL_7:
  v13 = MiMakeValidPte(v4, v7, v9 | (a3 != 0 ? -1744830464 : -1879048192)) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v12 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v7, v4, v12, 2560);
  }
  result = MiReadWriteAnyLevelShadowPte(v4, a3, 1, v13);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v4);
    do
    {
      v4 = v4 << 25 >> 16;
      --v8;
    }
    while ( v8 );
    return MiReplicatePteChange(v4, v4);
  }
  return result;
}
