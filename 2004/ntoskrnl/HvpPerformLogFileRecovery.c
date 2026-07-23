/*
 * XREFs of HvpPerformLogFileRecovery @ 0x140870C80
 * Callers:
 *     HvLoadHive @ 0x140637D30 (HvLoadHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGrowDirtyVectors @ 0x140270168 (HvpGrowDirtyVectors.c)
 *     RtlClearAllBits @ 0x140271930 (RtlClearAllBits.c)
 *     RtlNumberOfSetBits @ 0x1402F24B0 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140333F20 (RtlMergeBitMaps.c)
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvpViewMapExtendStorage @ 0x1406375BC (HvpViewMapExtendStorage.c)
 *     CmpDoFileSetSizeEx @ 0x140637A3C (CmpDoFileSetSizeEx.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140638704 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x140638878 (HvpExpandMap.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1406397A0 (HvpLogTypeToLogArrayIndex.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14063B798 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeHivePartial @ 0x14063BCF4 (HvFreeHivePartial.c)
 *     HvpSetRangeProtection @ 0x14069E2BC (HvpSetRangeProtection.c)
 *     HvpMapHiveImageFromViewMap @ 0x14069ED24 (HvpMapHiveImageFromViewMap.c)
 *     HvWriteHivePrimaryFile @ 0x1407035FC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14070978C (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvResetLogFileStatusAll @ 0x14070F060 (HvResetLogFileStatusAll.c)
 *     HvpAddDummyBinToHive @ 0x14087080C (HvpAddDummyBinToHive.c)
 *     HvApplyLogFile @ 0x14087E0CC (HvApplyLogFile.c)
 */

__int64 __fastcall HvpPerformLogFileRecovery(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        _DWORD *a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v6; // rax
  int v7; // r14d
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  unsigned int *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r14d
  int v13; // eax
  unsigned int v14; // ebx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r13d
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // r12d
  unsigned int v22; // ecx
  int *v23; // r12
  int v24; // edx
  char v25; // cl
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // eax
  char v29; // dl
  __int64 v30; // r9
  unsigned int v31; // edx
  int v33; // [rsp+28h] [rbp-69h]
  int v34; // [rsp+28h] [rbp-69h]
  unsigned int v35; // [rsp+68h] [rbp-29h] BYREF
  int v36; // [rsp+6Ch] [rbp-25h]
  int v37; // [rsp+70h] [rbp-21h] BYREF
  int v38; // [rsp+74h] [rbp-1Dh] BYREF
  __int64 v39; // [rsp+78h] [rbp-19h] BYREF
  int v40; // [rsp+80h] [rbp-11h]
  PPRIVILEGE_SET v41; // [rsp+88h] [rbp-9h]
  __int64 v42; // [rsp+90h] [rbp-1h] BYREF
  PPRIVILEGE_SET v43; // [rsp+98h] [rbp+7h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v45; // [rsp+B0h] [rbp+1Fh]
  unsigned int v46; // [rsp+F8h] [rbp+67h]

  v45 = 0LL;
  v35 = 0;
  v39 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  v7 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v38 = 0;
  *(_OWORD *)Privileges = 0LL;
  v8 = *(_DWORD *)(v6 + 40);
  v9 = v8;
  if ( a2 )
  {
    v10 = a3 + 4;
    v11 = a2;
    do
    {
      v12 = *v10;
      v10 += 6;
      if ( v12 <= v9 )
        v12 = v9;
      v9 = v12;
      --v11;
    }
    while ( v11 );
    if ( v12 > v8 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
      {
        v13 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v12 + 4096, 1);
        v14 = v13;
        if ( v13 < 0 )
        {
          v34 = 0;
LABEL_10:
          SetFailureLocation((__int64)a4, 0, 27, v13, v34);
          goto LABEL_61;
        }
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        {
          v15 = HvpViewMapExtendStorage(BugCheckParameter2 + 216, v12);
          if ( v15 < 0 )
            SetFailureLocation((__int64)a4, 0, 27, v15, 16);
        }
      }
      v13 = HvpExpandMap(BugCheckParameter2, 0, v8, v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        v34 = 32;
        goto LABEL_10;
      }
      *(_DWORD *)(BugCheckParameter2 + 272) = v12;
      v13 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v12, 0);
      v14 = v13;
      if ( v13 < 0 )
      {
        v34 = 48;
        goto LABEL_10;
      }
      v13 = HvpGrowDirtyVectors(BugCheckParameter2, v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        v34 = 64;
        goto LABEL_10;
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        v17 = *(_DWORD *)(BugCheckParameter2 + 224) - 4096;
      else
        v17 = 0;
      if ( v8 < v17 )
      {
        v13 = HvpMapHiveImageFromViewMap(BugCheckParameter2, v8, v17 - v8);
        v14 = v13;
        if ( v13 < 0 )
        {
          v34 = 80;
          goto LABEL_10;
        }
        v8 = v17;
      }
      v9 = v12;
      while ( v8 < v12 )
      {
        v13 = HvpAddDummyBinToHive(BugCheckParameter2, v16, v8, &v39);
        v14 = v13;
        if ( v13 < 0 )
        {
          v34 = 96;
          goto LABEL_10;
        }
        v8 += 4096;
      }
    }
    v7 = 0;
  }
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                    PagedPool,
                                                    ((v9 >> 12) + 3) & 0xFFFFFFFC,
                                                    0x38334D43u,
                                                    a4);
  v41 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, ((v9 >> 12) + 3) & 0xFFFFFFFC);
    v20 = (int)a3;
    v43 = v41;
    LODWORD(v42) = v9 >> 9;
    v21 = a3[2];
    v40 = v21;
    v37 = v21;
    v22 = 0;
    v46 = 0;
    if ( a2 )
    {
      v39 = 0LL;
      v23 = a3 + 1;
      v36 = 0;
      while ( 1 )
      {
        HIDWORD(v45) = *v23;
        Privileges[0] = (PPRIVILEGE_SET)BugCheckParameter2;
        v13 = HvApplyLogFile(
                *(_QWORD *)(BugCheckParameter2 + 64),
                v20 + 24 * v22,
                v19,
                (unsigned int)Privileges,
                v33,
                BugCheckParameter2,
                *(_QWORD *)(BugCheckParameter2 + 24),
                *(_QWORD *)(BugCheckParameter2 + 32),
                (__int64)&v42,
                (__int64)&v37,
                (__int64)&v35,
                (__int64)&v38);
        v14 = v13;
        if ( v13 < 0 )
          break;
        v7 = *v23;
        v19 = 255;
        v24 = v36;
        v25 = -1;
        *(_WORD *)(BugCheckParameter2 + 200) |= (unsigned __int16)*v23 << v36;
        if ( v35 < 0xFF )
          v25 = v35;
        v26 = v39;
        v23 += 6;
        v36 = v24 + 3;
        v20 = (int)a3;
        *(_BYTE *)(v39 + BugCheckParameter2 + 202) = v25;
        v22 = v46 + 1;
        v39 = v26 + 1;
        v46 = v22;
        if ( v22 >= a2 )
        {
          v21 = v37;
          goto LABEL_42;
        }
      }
      v34 = 128;
      goto LABEL_10;
    }
LABEL_42:
    HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2u);
    RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)&v42);
    *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    v13 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    v14 = v13;
    if ( v13 < 0 )
    {
      v34 = 144;
      goto LABEL_10;
    }
    *(_DWORD *)(BugCheckParameter2 + 180) = v40;
    *(_DWORD *)(BugCheckParameter2 + 168) = v21;
    *(_BYTE *)(BugCheckParameter2 + 190) = 0;
    if ( LOBYTE(a3[6 * a2 - 1]) )
    {
      if ( v7 == 1 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
        {
          RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)(BugCheckParameter2 + 88));
          *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
          RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
          *(_DWORD *)(BugCheckParameter2 + 104) = 0;
          *(_DWORD *)(BugCheckParameter2 + 160) |= 0x100u;
          v13 = HvWriteHivePrimaryFile(BugCheckParameter2, 0, 0LL, v30);
          v14 = v13;
          if ( v13 < 0 )
          {
            v34 = 256;
            goto LABEL_10;
          }
          *(_DWORD *)(BugCheckParameter2 + 180) = *(_DWORD *)(BugCheckParameter2 + 168);
          v13 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, 1, 0, 0);
          v14 = v13;
          if ( v13 < 0 )
          {
            v34 = 272;
            goto LABEL_10;
          }
          RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
          *(_DWORD *)(BugCheckParameter2 + 128) = 0;
          HvResetLogFileStatusAll(BugCheckParameter2);
          *(_DWORD *)(BugCheckParameter2 + 164) = 1;
        }
      }
      else
      {
        *(_DWORD *)(BugCheckParameter2 + 164) = 5 - (v7 != 4);
        *(_DWORD *)(BugCheckParameter2 + 172) = v21;
        *(_DWORD *)(BugCheckParameter2 + 176) = 0;
        *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(v7) + BugCheckParameter2 + 188) = 1;
        v28 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(BugCheckParameter2 + 164));
        *(_BYTE *)(v28 + BugCheckParameter2 + 188) = v29;
      }
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 164) = v7;
      *(_DWORD *)(BugCheckParameter2 + 172) = a3[6 * a2 - 4];
      *(_DWORD *)(BugCheckParameter2 + 176) = v38;
      if ( v7 == 1 )
      {
        v27 = 1;
      }
      else
      {
        *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(4) + BugCheckParameter2 + 188) = 1;
        v27 = 5;
      }
      *(_BYTE *)((unsigned int)HvpLogTypeToLogArrayIndex(v27) + BugCheckParameter2 + 188) = 1;
    }
    v31 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    if ( v31 < v9 )
      HvFreeHivePartial(BugCheckParameter2, v31, 0);
    v14 = 0;
  }
  else
  {
    v14 = -1073741670;
    SetFailureLocation((__int64)a4, 0, 27, -1073741670, 112);
  }
LABEL_61:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v41 )
    CmSiFreeMemory(v41);
  return v14;
}
