/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x1402A9A00
 * Callers:
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 *     MiExpandSystemCache @ 0x140300998 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x140300D04 (MiExpandPtes.c)
 *     MiSplitBitmapPages @ 0x140301DA4 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x14039A920 (MiMakeZeroedPageTables.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B4BA4 (MiGetPageTablesForLargeMap.c)
 *     MiMapNewPfns @ 0x1408C1384 (MiMapNewPfns.c)
 *     MiMapBBTMemory @ 0x140A4D920 (MiMapBBTMemory.c)
 *     MiInitializeKernelCfg @ 0x140A4E4DC (MiInitializeKernelCfg.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6AE58 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPageTables @ 0x14030FF24 (MiDeleteSystemPageTables.c)
 *     MiInitializeColorBase @ 0x140310E1C (MiInitializeColorBase.c)
 *     MiCleanupPageTablePages @ 0x140326464 (MiCleanupPageTablePages.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiSetLeafFillToUninitializedWsle @ 0x140556940 (MiSetLeafFillToUninitializedWsle.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C40F4 (MiGetLargePagesForSystemMapping.c)
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
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  LONG *SharedVm; // rax
  _QWORD v28[38]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v29[22]; // [rsp+160h] [rbp+60h] BYREF

  memset(v29, 0, sizeof(v29));
  memset(v28, 0, 0x128uLL);
  if ( (a3 & 4) != 0 )
  {
    HIDWORD(v28[8]) = 3;
    v9 = 3;
    v10 = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    HIDWORD(v28[8]) = 2;
    v9 = 2;
    v10 = 2;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( (a3 & 0x20) == 0 )
    {
      HIDWORD(v28[8]) = 1;
      v9 = 1;
      v10 = 1;
    }
  }
  v11 = a3 & 0xFFFFFF7F;
  if ( !v9 )
    v11 = a3;
  BYTE2(v29[0]) = 4 * v10;
  v12 = 0;
  v13 = (a2 << 25 >> 16) + 4095;
  v14 = a1 << 25 >> 16;
  LODWORD(v28[7]) = a4;
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
      v22 = a4 - v16 - v16;
      if ( !v22 )
      {
        v12 = v16;
        AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
        goto LABEL_11;
      }
      v23 = v22 - v16;
      if ( v23 )
      {
        v24 = v23 - v17;
        if ( !v24 )
        {
          v18 = 2;
          goto LABEL_10;
        }
        if ( v24 == 2 )
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
  v25 = a4 - 11 - v16;
  if ( !v25 )
    goto LABEL_28;
  v26 = v25 - v16;
  if ( !v26 )
    goto LABEL_9;
  if ( v26 == v16 )
  {
    v18 = 4;
    goto LABEL_10;
  }
LABEL_11:
  v19 = -1LL;
  v28[4] = *(_QWORD *)(qword_140C4E588 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v20 = a5;
  HIDWORD(v28[7]) = a5;
  LODWORD(v28[8]) = v11;
  v28[36] = -1LL;
  if ( (v11 & 0x40) != 0 )
  {
    MiSetLeafFillToUninitializedWsle(v28);
    v20 = HIDWORD(v28[7]);
  }
  else if ( v14 >= 0xFFFFFA8000000000uLL )
  {
    if ( v14 < 0xFFFFFD8000000000uLL )
      v19 = v11 & 0x40;
    v28[36] = v19;
  }
  MiInitializeColorBase(v14, v20, &v28[34]);
  if ( (v11 & 0x80u) == 0 || (unsigned int)MiGetLargePagesForSystemMapping(v28, v14, v13) || (v11 & 0x100) == 0 )
  {
    LODWORD(v28[10]) = v12;
    LOWORD(v29[0]) = 18439;
    v29[4] = v14;
    v29[19] = MiCreateSystemPageTable;
    v29[5] = v13;
    v29[20] = MiCreateSystemPageTableTail;
    v29[21] = v28;
    v28[11] = 20LL;
    WORD2(v28[10]) = 0;
    v28[12] = 0LL;
    v28[13] = 0LL;
    v29[3] = AnyMultiplexedVm;
    BYTE6(v29[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiWalkPageTables((__int64)v29);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v29[0]));
    if ( (v11 & 0x40) != 0 && LODWORD(v28[7]) != 2 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      _InterlockedExchangeAdd64((volatile signed __int64 *)SharedVm + 6, v28[6]);
    }
    MiCleanupPageTablePages(v28);
    if ( SLODWORD(v28[33]) >= 0 )
      return 1LL;
    if ( (v11 & 0x200) == 0 )
      MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, a4, v14, v13, 0, (__int64)&v28[10]);
  }
  else
  {
    MiCleanupPageTablePages(v28);
  }
  return 0LL;
}
