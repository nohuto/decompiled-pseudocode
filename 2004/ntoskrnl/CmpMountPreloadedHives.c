/*
 * XREFs of CmpMountPreloadedHives @ 0x140790834
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     RtlAreBitsClear @ 0x140271530 (RtlAreBitsClear.c)
 *     RtlSetBits @ 0x1402D6370 (RtlSetBits.c)
 *     RtlNumberOfSetBits @ 0x1402F24B0 (RtlNumberOfSetBits.c)
 *     RtlSetAllBits @ 0x14030C990 (RtlSetAllBits.c)
 *     SetFailureLocation @ 0x140352EE8 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x140637A3C (CmpDoFileSetSizeEx.c)
 *     CmpInitializeActualFileSizes @ 0x1406395AC (CmpInitializeActualFileSizes.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14063B798 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140652974 (CmpQueryHiveRedirectionFileList.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     CmRmFinalizeRecovery @ 0x14070D38C (CmRmFinalizeRecovery.c)
 *     HvpDropPagedBins @ 0x1407874F8 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x1408736D8 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x140952B80 (ExRaiseHardError.c)
 *     SyspartGetSystemPartition @ 0x1409700B8 (SyspartGetSystemPartition.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // edi
  wchar_t *v1; // rbx
  __int64 v2; // rsi
  int v3; // r13d
  int v4; // eax
  __int64 v5; // rax
  const WCHAR *v6; // rdx
  int SystemPartition; // ebx
  unsigned int v8; // r15d
  ULONG v9; // ebx
  unsigned int v10; // r15d
  ULONG i; // r15d
  ULONG v12; // eax
  int v13; // ebx
  PKRESOURCEMANAGER *v14; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v17[2]; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v18; // [rsp+74h] [rbp-94h] BYREF
  int v19; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v20; // [rsp+7Ch] [rbp-8Ch]
  int v21; // [rsp+80h] [rbp-88h] BYREF
  int v22; // [rsp+84h] [rbp-84h] BYREF
  ULONG Length[2]; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v24; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v25; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v26; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING *p_Destination_8; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t *PoolWithTag; // [rsp+B0h] [rbp-58h]
  _QWORD v29[54]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v30[3]; // [rsp+268h] [rbp+160h] BYREF

  v0 = 0;
  v17[1] = 0;
  p_Destination_8 = 0LL;
  v22 = 0;
  v21 = 0;
  Destination_8 = 0LL;
  memset(v29, 0, sizeof(v29));
  v18 = 0;
  v25 = 0LL;
  v19 = 0;
  v26 = 0LL;
  v17[0] = 0;
  memset(v30, 0, sizeof(v30));
  v24 = 0LL;
  *(_DWORD *)Source = 0;
  *(_QWORD *)Length = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x62534D43u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v2 = CmpPreloadedHivesList;
  if ( (__int64 *)CmpPreloadedHivesList != &CmpPreloadedHivesList )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 - 1456) & 0x1000000;
      if ( (*(_DWORD *)(v2 - 1456) & 1) != 0 )
        goto LABEL_45;
      *(_QWORD *)&Destination_8.Length = 0x10000000LL;
      Destination_8.Buffer = v1;
      if ( !CmpQueryHiveRedirectionFileList((PUNICODE_STRING)(v2 + 232), &Destination_8) || Destination_8.Length == 2 )
        break;
LABEL_17:
      ExFreePoolWithTag(*(PVOID *)(v2 + 208), 0);
      *(_OWORD *)(v2 + 200) = 0LL;
      *(_WORD *)(v2 + 202) = 0;
      *(_QWORD *)(v2 + 208) = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 0, &v24, v17, 7u, 0LL, (__int64)Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_52:
        *(_QWORD *)(v2 - 1560) = v29;
        v29[0] = v2 - 1616;
        SetFailureLocation(*(_QWORD *)(v2 - 1560), 0, 21, SystemPartition, v0);
        BYTE6(NlsMbCodePageTag) = 1;
        p_Destination_8 = &Destination_8;
        ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&p_Destination_8, 1, (__int64)&v22);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1616, SystemPartition);
      }
      v8 = 2;
      if ( v17[0] == 2 )
        v8 = 18;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 4u, &v25, &v18, v8, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_52;
      }
      SystemPartition = CmpOpenHiveFile(&Destination_8, 5u, &v26, &v19, v8, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_52;
      }
      v9 = Length[0];
      *(_QWORD *)(v2 - 80) = v24;
      *(_QWORD *)(v2 - 48) = v25;
      *(_QWORD *)(v2 - 40) = v26;
      *(_DWORD *)(v2 - 1456) &= ~2u;
      v10 = *(_DWORD *)(v2 - 1344) + 4096;
      *(_DWORD *)(v2 - 1432) = Length[1];
      v20 = v10;
      if ( *(_DWORD *)(v2 - 1480) != v9 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1528); i += v9 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1528), i, v9) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1528), i, v9);
        }
        v12 = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1528));
        v10 = v20;
        *(_DWORD *)(v2 - 1512) = v12;
        *(_DWORD *)(v2 - 1480) = v9;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1616, &v21);
      if ( SystemPartition < 0 )
      {
        v0 = 64;
        goto LABEL_52;
      }
      if ( (int)CmpDoFileSetSizeEx(v2 - 1616, 0, v10, 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      if ( v3 )
      {
        *(_QWORD *)(*(_QWORD *)(v2 - 1552) + 12LL) = MEMORY[0xFFFFF78000000014];
        HvCheckAndUpdateHiveBackupTimeStamp(v2 - 1616);
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) || v3 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 - 1528));
        *(_DWORD *)(v2 - 1512) = *(_DWORD *)(v2 - 1528);
      }
      SystemPartition = HvpDropPagedBins(v2 - 1616);
      if ( SystemPartition < 0 )
      {
        v0 = 96;
        goto LABEL_52;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) || v3 )
      {
        CmpUnlockRegistry();
        CmpFlushHive(v2 - 1616, 0xCu);
        CmpLockRegistryExclusive();
        *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) = 0;
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      v13 = *(_DWORD *)(v2 - 1456);
      *(_DWORD *)(v2 - 1456) = v13 & 0xFFFFF7FF;
      CmpUnlockRegistry();
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v30);
      CmpInitCmRM(v2 - 1616, (v13 & 0x800) != 0);
      KiUnstackDetachProcess((__int64)v30, 0LL);
      v14 = *(PKRESOURCEMANAGER **)(v2 + 2576);
      *(_DWORD *)(v2 + 2536) |= 8u;
      if ( v14 )
      {
        TmEnableCallbacks(v14[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v14);
        CmRmFinalizeRecovery(*(_QWORD *)(v2 + 2576));
      }
      CmpLockRegistryExclusive();
      v1 = PoolWithTag;
LABEL_45:
      *(_DWORD *)(v2 + 2536) |= 4u;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &CmpPreloadedHivesList )
        goto LABEL_3;
    }
    *(_QWORD *)&Destination_8.Length = 0x10000000LL;
    Destination_8.Buffer = v1;
    v4 = *(_DWORD *)(v2 - 1456);
    if ( (v4 & 0x1000) != 0 )
    {
      v5 = HalSystemVectorDispatchEntry();
      Source[0] = **((_WORD **)PsGetServerSiloGlobals(v5) + 134);
      RtlAppendUnicodeToString(&Destination_8, L"\\??\\");
      RtlAppendUnicodeToString(&Destination_8, Source);
      v6 = L":";
    }
    else
    {
      if ( (v4 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(v1);
        if ( SystemPartition < 0 )
          goto LABEL_52;
        goto LABEL_16;
      }
      if ( (v4 & 0x200000) == 0 )
      {
LABEL_16:
        RtlAppendUnicodeToString(&Destination_8, *(PCWSTR *)(v2 + 208));
        goto LABEL_17;
      }
      v6 = L"\\OSDataRoot";
    }
    RtlAppendUnicodeToString(&Destination_8, v6);
    goto LABEL_16;
  }
LABEL_3:
  ExFreePoolWithTag(v1, 0);
}
