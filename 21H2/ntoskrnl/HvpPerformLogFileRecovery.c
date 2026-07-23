/*
 * XREFs of HvpPerformLogFileRecovery @ 0x14087421C
 * Callers:
 *     HvLoadHive @ 0x1406FA774 (HvLoadHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x1402F7B98 (RtlMergeBitMaps.c)
 *     HvpGrowDirtyVectors @ 0x1402F8E1C (HvpGrowDirtyVectors.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvWriteHivePrimaryFile @ 0x140613AFC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14061A9CC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvResetLogFileStatusAll @ 0x1406206D0 (HvResetLogFileStatusAll.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1406F8838 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeHivePartial @ 0x1406F8D94 (HvFreeHivePartial.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1406FB148 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x1406FB2BC (HvpExpandMap.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1406FC688 (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 *     HvpViewMapExtendStorage @ 0x1406FCEC4 (HvpViewMapExtendStorage.c)
 *     HvpMapHiveImageFromViewMap @ 0x140720830 (HvpMapHiveImageFromViewMap.c)
 *     HvpSetRangeProtection @ 0x140721258 (HvpSetRangeProtection.c)
 *     HvpAddDummyBinToHive @ 0x140873DA8 (HvpAddDummyBinToHive.c)
 *     HvApplyLogFile @ 0x140881384 (HvApplyLogFile.c)
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
  signed int v13; // eax
  unsigned int v14; // ebx
  signed int v15; // eax
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
  __int64 v31; // rdx
  unsigned int v32; // edx
  int v34; // [rsp+28h] [rbp-69h]
  unsigned int v35; // [rsp+28h] [rbp-69h]
  unsigned int v36; // [rsp+68h] [rbp-29h] BYREF
  int v37; // [rsp+6Ch] [rbp-25h]
  int v38; // [rsp+70h] [rbp-21h] BYREF
  int v39; // [rsp+74h] [rbp-1Dh] BYREF
  __int64 v40; // [rsp+78h] [rbp-19h] BYREF
  int v41; // [rsp+80h] [rbp-11h]
  PPRIVILEGE_SET v42; // [rsp+88h] [rbp-9h]
  __int64 v43; // [rsp+90h] [rbp-1h] BYREF
  PPRIVILEGE_SET v44; // [rsp+98h] [rbp+7h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v46; // [rsp+B0h] [rbp+1Fh]
  unsigned int v47; // [rsp+F8h] [rbp+67h]

  v46 = 0LL;
  v36 = 0;
  v40 = 0LL;
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  v7 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  v39 = 0;
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
          v35 = 0;
LABEL_10:
          SetFailureLocation((__int64)a4, 0, 27, v13, v35);
          goto LABEL_61;
        }
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        {
          v15 = HvpViewMapExtendStorage(BugCheckParameter2 + 216, v12);
          if ( v15 < 0 )
            SetFailureLocation((__int64)a4, 0, 27, v15, 0x10u);
        }
      }
      v13 = HvpExpandMap(BugCheckParameter2, 0, v8, v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        v35 = 32;
        goto LABEL_10;
      }
      *(_DWORD *)(BugCheckParameter2 + 272) = v12;
      v13 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, v12, 0);
      v14 = v13;
      if ( v13 < 0 )
      {
        v35 = 48;
        goto LABEL_10;
      }
      v13 = HvpGrowDirtyVectors(BugCheckParameter2, v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        v35 = 64;
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
          v35 = 80;
          goto LABEL_10;
        }
        v8 = v17;
      }
      v9 = v12;
      while ( v8 < v12 )
      {
        v13 = HvpAddDummyBinToHive(BugCheckParameter2, v16, v8, &v40);
        v14 = v13;
        if ( v13 < 0 )
        {
          v35 = 96;
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
  v42 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, ((v9 >> 12) + 3) & 0xFFFFFFFC);
    v20 = (int)a3;
    v44 = v42;
    LODWORD(v43) = v9 >> 9;
    v21 = a3[2];
    v41 = v21;
    v38 = v21;
    v22 = 0;
    v47 = 0;
    if ( a2 )
    {
      v40 = 0LL;
      v23 = a3 + 1;
      v37 = 0;
      while ( 1 )
      {
        HIDWORD(v46) = *v23;
        Privileges[0] = (PPRIVILEGE_SET)BugCheckParameter2;
        v13 = HvApplyLogFile(
                *(_QWORD *)(BugCheckParameter2 + 64),
                v20 + 24 * v22,
                v19,
                (unsigned int)Privileges,
                v34,
                BugCheckParameter2,
                *(_QWORD *)(BugCheckParameter2 + 24),
                *(_QWORD *)(BugCheckParameter2 + 32),
                (__int64)&v43,
                (__int64)&v38,
                (__int64)&v36,
                (__int64)&v39);
        v14 = v13;
        if ( v13 < 0 )
          break;
        v7 = *v23;
        v19 = 255;
        v24 = v37;
        v25 = -1;
        *(_WORD *)(BugCheckParameter2 + 200) |= (unsigned __int16)*v23 << v37;
        if ( v36 < 0xFF )
          v25 = v36;
        v26 = v40;
        v23 += 6;
        v37 = v24 + 3;
        v20 = (int)a3;
        *(_BYTE *)(v40 + BugCheckParameter2 + 202) = v25;
        v22 = v47 + 1;
        v40 = v26 + 1;
        v47 = v22;
        if ( v22 >= a2 )
        {
          v21 = v38;
          goto LABEL_42;
        }
      }
      v35 = 128;
      goto LABEL_10;
    }
LABEL_42:
    HvpSetRangeProtection(BugCheckParameter2, 0LL, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 2u);
    RtlMergeBitMaps(BugCheckParameter2 + 112, (unsigned int *)&v43);
    *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    v13 = HvCheckAndUpdateHiveBackupTimeStamp(BugCheckParameter2);
    v14 = v13;
    if ( v13 < 0 )
    {
      v35 = 144;
      goto LABEL_10;
    }
    *(_DWORD *)(BugCheckParameter2 + 180) = v41;
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
          v13 = HvWriteHivePrimaryFile(BugCheckParameter2, 0LL, 0LL, v30);
          v14 = v13;
          if ( v13 < 0 )
          {
            v35 = 256;
            goto LABEL_10;
          }
          *(_DWORD *)(BugCheckParameter2 + 180) = *(_DWORD *)(BugCheckParameter2 + 168);
          LOBYTE(v31) = 1;
          v13 = HvValidateOrInvalidatePrimaryFileHeader(BugCheckParameter2, v31, 0LL, 0);
          v14 = v13;
          if ( v13 < 0 )
          {
            v35 = 272;
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
      *(_DWORD *)(BugCheckParameter2 + 176) = v39;
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
    v32 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    if ( v32 < v9 )
      HvFreeHivePartial(BugCheckParameter2, v32, 0);
    v14 = 0;
  }
  else
  {
    v14 = -1073741670;
    SetFailureLocation((__int64)a4, 0, 27, 0xC000009A, 0x70u);
  }
LABEL_61:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v42 )
    CmSiFreeMemory(v42);
  return v14;
}
