/*
 * XREFs of CmpMountPreloadedHives @ 0x140791858
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14025BA90 (RtlAppendUnicodeToString.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     RtlSetAllBits @ 0x1402CAD50 (RtlSetAllBits.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     RtlAreBitsClear @ 0x1402E0BC0 (RtlAreBitsClear.c)
 *     RtlNumberOfSetBits @ 0x1402E13C0 (RtlNumberOfSetBits.c)
 *     RtlSetBits @ 0x1402E30C0 (RtlSetBits.c)
 *     SetFailureLocation @ 0x140315198 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1405D56A4 (CmpQueryHiveRedirectionFileList.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x14068560C (CmpDoFileSetSizeEx.c)
 *     CmpInitializeActualFileSizes @ 0x140687128 (CmpInitializeActualFileSizes.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140689318 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmRmFinalizeRecovery @ 0x1406E9558 (CmRmFinalizeRecovery.c)
 *     HvpDropPagedBins @ 0x140781B74 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x1408723E8 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
 *     SyspartGetSystemPartition @ 0x14096ED18 (SyspartGetSystemPartition.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  _DWORD *v14; // r9
  __int64 v15; // r8
  _DWORD *v16; // r9
  PKRESOURCEMANAGER *v17; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v20[2]; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v21; // [rsp+74h] [rbp-94h] BYREF
  int v22; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v23; // [rsp+7Ch] [rbp-8Ch]
  int v24; // [rsp+80h] [rbp-88h] BYREF
  int v25; // [rsp+84h] [rbp-84h] BYREF
  ULONG Length[2]; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v27; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v28; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v29; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING *p_Destination_8; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t *PoolWithTag; // [rsp+B0h] [rbp-58h]
  _QWORD v32[54]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v33[3]; // [rsp+268h] [rbp+160h] BYREF

  v0 = 0;
  v20[1] = 0;
  p_Destination_8 = 0LL;
  v25 = 0;
  v24 = 0;
  Destination_8 = 0LL;
  memset(v32, 0, sizeof(v32));
  v21 = 0;
  v28 = 0LL;
  v22 = 0;
  v29 = 0LL;
  v20[0] = 0;
  memset(v33, 0, sizeof(v33));
  v27 = 0LL;
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
      SystemPartition = CmpOpenHiveFile(&Destination_8, 0, &v27, v20, 7u, 0LL, (__int64)Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_52:
        *(_QWORD *)(v2 - 1560) = v32;
        v32[0] = v2 - 1616;
        SetFailureLocation(*(_QWORD *)(v2 - 1560), 0, 21, SystemPartition, v0);
        BYTE6(NlsMbCodePageTag) = 1;
        p_Destination_8 = &Destination_8;
        ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&p_Destination_8, 1, (__int64)&v25);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1616, SystemPartition);
      }
      v8 = 2;
      if ( v20[0] == 2 )
        v8 = 18;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 4u, &v28, &v21, v8, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_52;
      }
      SystemPartition = CmpOpenHiveFile(&Destination_8, 5u, &v29, &v22, v8, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_52;
      }
      v9 = Length[0];
      *(_QWORD *)(v2 - 80) = v27;
      *(_QWORD *)(v2 - 48) = v28;
      *(_QWORD *)(v2 - 40) = v29;
      *(_DWORD *)(v2 - 1456) &= ~2u;
      v10 = *(_DWORD *)(v2 - 1344) + 4096;
      *(_DWORD *)(v2 - 1432) = Length[1];
      v23 = v10;
      if ( *(_DWORD *)(v2 - 1480) != v9 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1528); i += v9 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1528), i, v9) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1528), i, v9);
        }
        v12 = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1528));
        v10 = v23;
        *(_DWORD *)(v2 - 1512) = v12;
        *(_DWORD *)(v2 - 1480) = v9;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1616, &v24);
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
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v33, v14);
      CmpInitCmRM(v2 - 1616, (v13 & 0x800) != 0);
      KiUnstackDetachProcess((__int64)v33, 0LL, v15, v16);
      v17 = *(PKRESOURCEMANAGER **)(v2 + 2576);
      *(_DWORD *)(v2 + 2536) |= 8u;
      if ( v17 )
      {
        TmEnableCallbacks(v17[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v17);
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
      Source[0] = **((_WORD **)PsGetServerSiloGlobals(v5) + 133);
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
