/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x1402509D0
 * Callers:
 *     MiCommitPoolMemory @ 0x1402586AC (MiCommitPoolMemory.c)
 *     MiExpandSystemCache @ 0x14033D4E0 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x14033D84C (MiExpandPtes.c)
 *     MiSplitBitmapPages @ 0x14033E8EC (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x14039B0B0 (MiMakeZeroedPageTables.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B54A4 (MiGetPageTablesForLargeMap.c)
 *     MiMapNewPfns @ 0x1408C26D4 (MiMapNewPfns.c)
 *     MiMapBBTMemory @ 0x140A53620 (MiMapBBTMemory.c)
 *     MiInitializeKernelCfg @ 0x140A541DC (MiInitializeKernelCfg.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6B0B8 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiCleanupPageTablePages @ 0x1402E1364 (MiCleanupPageTablePages.c)
 *     MiDeleteSystemPageTables @ 0x14034D5B4 (MiDeleteSystemPageTables.c)
 *     MiInitializeColorBase @ 0x14034E4AC (MiInitializeColorBase.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiSetLeafFillToUninitializedWsle @ 0x140556F90 (MiSetLeafFillToUninitializedWsle.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C5444 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int a5)
{
  int v9; // ecx
  char v10; // al
  unsigned int v11; // r14d
  int v12; // r13d
  __int64 v13; // r12
  unsigned __int64 v14; // rdi
  char *AnyMultiplexedVm; // rbx
  int v16; // r8d
  int v17; // r9d
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  __int64 SharedVm; // rax
  _QWORD v30[38]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v31[22]; // [rsp+160h] [rbp+60h] BYREF

  memset(v31, 0, sizeof(v31));
  memset(v30, 0, 0x128uLL);
  if ( (a3 & 4) != 0 )
  {
    HIDWORD(v30[8]) = 3;
    v9 = 3;
    v10 = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    HIDWORD(v30[8]) = 2;
    v9 = 2;
    v10 = 2;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( (a3 & 0x20) == 0 )
    {
      HIDWORD(v30[8]) = 1;
      v9 = 1;
      v10 = 1;
    }
  }
  v11 = a3 & 0xFFFFFF7F;
  if ( !v9 )
    v11 = a3;
  BYTE2(v31[0]) = 4 * v10;
  v12 = 0;
  v13 = (a2 << 25 >> 16) + 4095;
  v14 = a1 << 25 >> 16;
  LODWORD(v30[7]) = a4;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  if ( a4 <= 9 )
  {
    if ( a4 == 9 )
    {
LABEL_9:
      v18 = v17;
LABEL_10:
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(v18);
      goto LABEL_11;
    }
    if ( a4 != v16 )
    {
      v24 = a4 - v16 - v16;
      if ( !v24 )
      {
        v12 = v16;
        AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
        goto LABEL_11;
      }
      v25 = v24 - v16;
      if ( v25 )
      {
        v26 = v25 - v17;
        if ( !v26 )
        {
          v18 = 2;
          goto LABEL_10;
        }
        if ( v26 == 2 )
        {
          v18 = 0;
          goto LABEL_10;
        }
        goto LABEL_11;
      }
LABEL_28:
      v18 = v16;
      goto LABEL_10;
    }
LABEL_31:
    v12 = 2;
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 256);
    goto LABEL_11;
  }
  if ( a4 == 11 )
  {
    if ( (unsigned int)MiGetSystemRegionType(v14) != 1 )
      goto LABEL_11;
    goto LABEL_31;
  }
  v27 = a4 - 11 - v16;
  if ( !v27 )
    goto LABEL_28;
  v28 = v27 - v16;
  if ( !v28 )
    goto LABEL_9;
  if ( v28 == v16 )
  {
    v18 = 4;
    goto LABEL_10;
  }
LABEL_11:
  v19 = -1LL;
  v30[4] = *(_QWORD *)(qword_140C4E448 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v20 = a5;
  HIDWORD(v30[7]) = a5;
  LODWORD(v30[8]) = v11;
  v30[36] = -1LL;
  if ( (v11 & 0x40) != 0 )
  {
    MiSetLeafFillToUninitializedWsle(v30);
    v20 = HIDWORD(v30[7]);
  }
  else if ( v14 >= 0xFFFFFA8000000000uLL )
  {
    if ( v14 < 0xFFFFFD8000000000uLL )
      v19 = v11 & 0x40;
    v30[36] = v19;
  }
  MiInitializeColorBase(v14, v20, &v30[34]);
  if ( (v11 & 0x80u) == 0 || (unsigned int)MiGetLargePagesForSystemMapping(v30, v14, v13) || (v11 & 0x100) == 0 )
  {
    LODWORD(v30[10]) = v12;
    LOWORD(v31[0]) = 18439;
    v31[4] = v14;
    v31[19] = MiCreateSystemPageTable;
    v31[5] = v13;
    v31[20] = MiCreateSystemPageTableTail;
    v31[21] = v30;
    v30[11] = 20LL;
    WORD2(v30[10]) = 0;
    v30[12] = 0LL;
    v30[13] = 0LL;
    v31[3] = AnyMultiplexedVm;
    BYTE6(v31[0]) = MiLockWorkingSetShared(AnyMultiplexedVm);
    MiWalkPageTables((__int16 *)v31);
    LOBYTE(v21) = BYTE6(v31[0]);
    MiUnlockWorkingSetShared(AnyMultiplexedVm, v21);
    if ( (v11 & 0x40) != 0 && LODWORD(v30[7]) != 2 )
    {
      SharedVm = MiGetSharedVm(AnyMultiplexedVm, v22);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(SharedVm + 48), v30[6]);
    }
    MiCleanupPageTablePages(v30);
    if ( SLODWORD(v30[33]) >= 0 )
      return 1LL;
    if ( (v11 & 0x200) == 0 )
      MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, a4, v14, v13, 0, (__int64)&v30[10]);
  }
  else
  {
    MiCleanupPageTablePages(v30);
  }
  return 0LL;
}
