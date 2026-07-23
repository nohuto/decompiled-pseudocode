/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x140307B4C
 * Callers:
 *     MiExpandSystemCache @ 0x1402310DC (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x140231448 (MiExpandPtes.c)
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 *     MiMakeZeroedPageTables @ 0x14039DF90 (MiMakeZeroedPageTables.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8F34 (MiGetPageTablesForLargeMap.c)
 *     MiMapNewPfns @ 0x1408C5E34 (MiMapNewPfns.c)
 *     MiMapBBTMemory @ 0x140A562A8 (MiMapBBTMemory.c)
 *     MiInitializeKernelCfg @ 0x140A56E64 (MiInitializeKernelCfg.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6F944 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiCleanupPageTablePages @ 0x14030803C (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x1403081C8 (MiInitializeColorBase.c)
 *     MiDeleteSystemPageTables @ 0x1403084AC (MiDeleteSystemPageTables.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiSetLeafFillToUninitializedWsle @ 0x14055C670 (MiSetLeafFillToUninitializedWsle.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C8BA4 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int a5)
{
  int v9; // ecx
  char v10; // al
  unsigned int v11; // r14d
  int v12; // r13d
  __int64 v13; // r12
  unsigned __int64 v14; // rdi
  unsigned __int64 *AnyMultiplexedVm; // rbx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  LONG *SharedVm; // rax
  _QWORD v31[38]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v32[22]; // [rsp+160h] [rbp+60h] BYREF

  memset(v32, 0, sizeof(v32));
  memset(v31, 0, 0x128uLL);
  if ( (a3 & 4) != 0 )
  {
    HIDWORD(v31[8]) = 3;
    v9 = 3;
    v10 = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    HIDWORD(v31[8]) = 2;
    v9 = 2;
    v10 = 2;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( (a3 & 0x20) == 0 )
    {
      HIDWORD(v31[8]) = 1;
      v9 = 1;
      v10 = 1;
    }
  }
  v11 = a3 & 0xFFFFFF7F;
  if ( !v9 )
    v11 = a3;
  BYTE2(v32[0]) = 4 * v10;
  v12 = 0;
  v13 = (a2 << 25 >> 16) + 4095;
  v14 = a1 << 25 >> 16;
  LODWORD(v31[7]) = a4;
  AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(5LL);
  if ( a4 <= 9 )
  {
    if ( a4 == 9 )
    {
LABEL_9:
      v18 = v17;
LABEL_10:
      AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(v18);
      goto LABEL_11;
    }
    if ( a4 != v16 )
    {
      v25 = a4 - v16 - v16;
      if ( !v25 )
      {
        v12 = v16;
        AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
        goto LABEL_11;
      }
      v26 = v25 - v16;
      if ( v26 )
      {
        v27 = v26 - v17;
        if ( !v27 )
        {
          v18 = 2LL;
          goto LABEL_10;
        }
        if ( v27 == 2 )
        {
          v18 = 0LL;
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
    AnyMultiplexedVm = (unsigned __int64 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 256);
    goto LABEL_11;
  }
  if ( a4 == 11 )
  {
    if ( (unsigned int)MiGetSystemRegionType(v14) != 1 )
      goto LABEL_11;
    goto LABEL_31;
  }
  v28 = a4 - 11 - v16;
  if ( !v28 )
    goto LABEL_28;
  v29 = v28 - v16;
  if ( !v29 )
    goto LABEL_9;
  if ( v29 == v16 )
  {
    v18 = 4LL;
    goto LABEL_10;
  }
LABEL_11:
  v19 = -1LL;
  v31[4] = *(_QWORD *)(qword_140C4E688 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v20 = a5;
  HIDWORD(v31[7]) = a5;
  LODWORD(v31[8]) = v11;
  v31[36] = -1LL;
  if ( (v11 & 0x40) != 0 )
  {
    MiSetLeafFillToUninitializedWsle(v31);
    v20 = HIDWORD(v31[7]);
  }
  else if ( v14 >= 0xFFFFFA8000000000uLL )
  {
    if ( v14 < 0xFFFFFD8000000000uLL )
      v19 = v11 & 0x40;
    v31[36] = v19;
  }
  MiInitializeColorBase(v14, v20, &v31[34]);
  if ( (v11 & 0x80u) == 0 || (unsigned int)MiGetLargePagesForSystemMapping(v31, v14, v13) || (v11 & 0x100) == 0 )
  {
    LODWORD(v31[10]) = v12;
    LOWORD(v32[0]) = 18439;
    v32[4] = v14;
    v32[19] = MiCreateSystemPageTable;
    v32[5] = v13;
    v32[20] = MiCreateSystemPageTableTail;
    v32[21] = v31;
    v31[11] = 20LL;
    WORD2(v31[10]) = 0;
    v31[12] = 0LL;
    v31[13] = 0LL;
    v32[3] = AnyMultiplexedVm;
    BYTE6(v32[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v21, v22, v23);
    MiWalkPageTables((__int64)v32);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v32[0]));
    if ( (v11 & 0x40) != 0 && LODWORD(v31[7]) != 2 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      _InterlockedExchangeAdd64((volatile signed __int64 *)SharedVm + 6, v31[6]);
    }
    MiCleanupPageTablePages(v31);
    if ( SLODWORD(v31[33]) >= 0 )
      return 1LL;
    if ( (v11 & 0x200) == 0 )
      MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, a4, v14, v13, 0, (__int64)&v31[10]);
  }
  else
  {
    MiCleanupPageTablePages(v31);
  }
  return 0LL;
}
