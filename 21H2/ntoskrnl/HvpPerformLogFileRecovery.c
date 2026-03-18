/*
 * XREFs of HvpPerformLogFileRecovery @ 0x14091ADA0
 * Callers:
 *     HvLoadHive @ 0x14068C238 (HvLoadHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x14020AF90 (RtlMergeBitMaps.c)
 *     HvpGrowDirtyVectors @ 0x14020C5E4 (HvpGrowDirtyVectors.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvFreeHivePartial @ 0x140689900 (HvFreeHivePartial.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140689DAC (HvpLogTypeToLogArrayIndex.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpMapHiveImageFromViewMap @ 0x14068C154 (HvpMapHiveImageFromViewMap.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14068CF68 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x14068D0DC (HvpExpandMap.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14068EE60 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpViewMapExtendStorage @ 0x14068F044 (HvpViewMapExtendStorage.c)
 *     HvWriteHivePrimaryFile @ 0x14068F1F8 (HvWriteHivePrimaryFile.c)
 *     HvResetLogFileStatusAll @ 0x1406E9D84 (HvResetLogFileStatusAll.c)
 *     HvpSetRangeProtection @ 0x14079B0D0 (HvpSetRangeProtection.c)
 *     HvpAddDummyBinToHive @ 0x14091A928 (HvpAddDummyBinToHive.c)
 *     HvApplyLogFiles @ 0x140924C14 (HvApplyLogFiles.c)
 */

__int64 __fastcall HvpPerformLogFileRecovery(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // r13d
  __int64 v7; // r14
  __int64 v9; // rax
  unsigned int v10; // r15d
  signed int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  signed int v14; // eax
  unsigned int v15; // eax
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _PRIVILEGE_SET *v19; // r15
  signed int v20; // eax
  __int64 v21; // r10
  char v22; // r11
  __int64 v23; // r9
  char v24; // cl
  unsigned int v25; // eax
  int v26; // edx
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned int v29; // edx
  int v31; // [rsp+20h] [rbp-51h]
  unsigned int v32; // [rsp+20h] [rbp-51h]
  __int64 v33; // [rsp+38h] [rbp-39h]
  __int64 v34; // [rsp+50h] [rbp-21h] BYREF
  PPRIVILEGE_SET v35; // [rsp+58h] [rbp-19h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp-11h]
  PPRIVILEGE_SET v37; // [rsp+D0h] [rbp+5Fh]
  unsigned int v38; // [rsp+E0h] [rbp+6Fh]
  __int64 v39; // [rsp+E8h] [rbp+77h] BYREF

  v5 = *(_DWORD *)(a4 + 64);
  v7 = a5;
  v39 = 0LL;
  v34 = 0LL;
  v9 = *(_QWORD *)(BugCheckParameter2 + 64);
  v35 = 0LL;
  v37 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v10 = *(_DWORD *)(v9 + 40);
  if ( v5 <= v10 )
    v5 = *(_DWORD *)(v9 + 40);
  if ( v5 > v10 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      v11 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v5 + 4096, 1);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 0;
LABEL_7:
        LODWORD(v13) = 0;
LABEL_8:
        SetFailureLocation(v7, v13, 27, v11, v32);
        goto LABEL_53;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      {
        v14 = HvpViewMapExtendStorage((__int64 *)(BugCheckParameter2 + 224), v5);
        if ( v14 < 0 )
          SetFailureLocation(v7, 0, 27, v14, 0x10u);
      }
    }
    v11 = HvpExpandMap(BugCheckParameter2, 0LL, v10, v5);
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 32;
      goto LABEL_7;
    }
    *(_DWORD *)(BugCheckParameter2 + 280) = v5;
    v11 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v5, 0);
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 48;
      goto LABEL_7;
    }
    v11 = HvpGrowDirtyVectors(BugCheckParameter2, v5);
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 64;
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      v15 = *(_DWORD *)(BugCheckParameter2 + 232) - 4096;
    else
      v15 = 0;
    v38 = v15;
    if ( v10 < v15 )
    {
      v11 = HvpMapHiveImageFromViewMap(BugCheckParameter2, v10, v15 - v10);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v10 = v38;
        goto LABEL_28;
      }
      v32 = 80;
      goto LABEL_7;
    }
LABEL_28:
    while ( v10 < v5 )
    {
      v11 = HvpAddDummyBinToHive(BugCheckParameter2, v10, &v39);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 96;
        goto LABEL_7;
      }
      v10 += 4096;
    }
  }
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                    PagedPool,
                                                    ((v5 >> 12) + 3) & 0xFFFFFFFC,
                                                    0x38334D43u,
                                                    (PLOOKASIDE_LIST_EX)a4);
  v37 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, ((v5 >> 12) + 3) & 0xFFFFFFFC);
    v17 = *(_QWORD *)(BugCheckParameter2 + 64);
    v33 = *(_QWORD *)(BugCheckParameter2 + 32);
    v18 = *(_QWORD *)(BugCheckParameter2 + 24);
    LODWORD(v34) = v5 >> 9;
    v19 = v37;
    v35 = v37;
    v20 = HvApplyLogFiles(v17, v31, BugCheckParameter2, v18, v33, (__int64)&v34);
    v12 = v20;
    if ( v20 < 0 )
    {
      SetFailureLocation(v7, 0, 27, v20, 0x80u);
      goto LABEL_54;
    }
    v21 = 0LL;
    if ( *(_DWORD *)(a4 + 60) )
    {
      v22 = 0;
      do
      {
        v23 = *(unsigned int *)(a4 + 4 * v21 + 52);
        v24 = -1;
        *(_WORD *)(BugCheckParameter2 + 208) |= *(_WORD *)(a4 + 24 * v23 + 8) << v22;
        if ( (unsigned int)(*(_DWORD *)(a4 + 24 * v23 + 16) - *(_DWORD *)(a4 + 24 * v23 + 12) + 1) < 0xFF )
          v24 = *(_BYTE *)(a4 + 24 * v23 + 16) - *(_BYTE *)(a4 + 24 * v23 + 12) + 1;
        v21 = (unsigned int)(v21 + 1);
        v22 += 3;
        *(_BYTE *)(v23 + BugCheckParameter2 + 210) = v24;
      }
      while ( (unsigned int)v21 < *(_DWORD *)(a4 + 60) );
    }
    HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2);
    RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)&v34);
    *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    v11 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    v13 = 0LL;
    v12 = v11;
    if ( v11 < 0 )
    {
      v32 = 144;
      goto LABEL_8;
    }
    *(_BYTE *)(BugCheckParameter2 + 194) = 0;
    *(_DWORD *)(BugCheckParameter2 + 184) = *(_DWORD *)(a4 + 68);
    *(_DWORD *)(BugCheckParameter2 + 168) = *(_DWORD *)(a4 + 72);
    *(_DWORD *)(BugCheckParameter2 + 172) = *(_DWORD *)(a4 + 80);
    *(_DWORD *)(BugCheckParameter2 + 176) = *(_DWORD *)(a4 + 76);
    *(_DWORD *)(BugCheckParameter2 + 180) = *(_DWORD *)(a4 + 84);
    if ( *(_DWORD *)(a4 + 60) )
    {
      do
      {
        v25 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a4 + 24LL * *(unsigned int *)(a4 + 4 * v13 + 52) + 8));
        v13 = (unsigned int)(v26 + 1);
        *(_BYTE *)(v25 + BugCheckParameter2 + 192) = 1;
      }
      while ( (unsigned int)v13 < *(_DWORD *)(a4 + 60) );
    }
    if ( (*(_DWORD *)(a4 + 88) & 1) != 0 && (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
    {
      RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 104) = 0;
      *(_DWORD *)(BugCheckParameter2 + 160) |= 0x100u;
      v11 = HvWriteHivePrimaryFile(BugCheckParameter2, 0LL, 0LL, v27);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 256;
        goto LABEL_7;
      }
      *(_DWORD *)(BugCheckParameter2 + 184) = *(_DWORD *)(BugCheckParameter2 + 172);
      LOBYTE(v28) = 1;
      v11 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v28, 0LL, 0);
      v12 = v11;
      if ( v11 < 0 )
      {
        v32 = 272;
        goto LABEL_7;
      }
      RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      *(_DWORD *)(BugCheckParameter2 + 128) = 0;
      HvResetLogFileStatusAll(BugCheckParameter2);
      *(_DWORD *)(BugCheckParameter2 + 168) = 1;
    }
    v29 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    if ( v29 < v5 )
      HvFreeHivePartial(BugCheckParameter2, v29, 0);
    v12 = 0;
    goto LABEL_53;
  }
  v12 = -1073741670;
  SetFailureLocation(v7, 0, 27, 0xC000009A, 0x70u);
LABEL_53:
  v19 = v37;
LABEL_54:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v19 )
    CmSiFreeMemory(v19);
  return v12;
}
