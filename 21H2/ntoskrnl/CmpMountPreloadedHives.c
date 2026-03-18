/*
 * XREFs of CmpMountPreloadedHives @ 0x14083200C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     RtlAreBitsClear @ 0x14020AED0 (RtlAreBitsClear.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpInitializeActualFileSizes @ 0x140689C24 (CmpInitializeActualFileSizes.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406DD50C (CmpQueryHiveRedirectionFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406E7AC4 (CmRmFinalizeRecovery.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x14091D63C (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     SyspartGetSystemPartition @ 0x140A2150C (SyspartGetSystemPartition.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

void CmpMountPreloadedHives()
{
  unsigned int v0; // edi
  wchar_t *v1; // rbx
  __int64 v2; // rsi
  int v3; // r13d
  int v4; // eax
  __int64 v5; // rax
  const WCHAR *v6; // rdx
  signed int SystemPartition; // ebx
  unsigned int v8; // r15d
  ULONG v9; // ebx
  unsigned int v10; // r15d
  ULONG i; // r15d
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  PKRESOURCEMANAGER *v18; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v22; // [rsp+70h] [rbp-98h] BYREF
  int v23; // [rsp+74h] [rbp-94h] BYREF
  int v24; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v25; // [rsp+7Ch] [rbp-8Ch]
  _DWORD v26[2]; // [rsp+80h] [rbp-88h] BYREF
  ULONG Length[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-78h] BYREF
  __int64 v29; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING *p_Destination_8; // [rsp+A8h] [rbp-60h]
  wchar_t *PoolWithTag; // [rsp+B0h] [rbp-58h]
  __int64 v33[54]; // [rsp+B8h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+268h] [rbp+160h] BYREF

  v0 = 0;
  v22 = 0;
  p_Destination_8 = 0LL;
  v26[1] = 0;
  v26[0] = 0;
  Destination_8 = 0LL;
  memset(v33, 0, sizeof(v33));
  v23 = 0;
  v29 = 0LL;
  v24 = 0;
  v30 = 0LL;
  v21 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v28 = 0LL;
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
      v3 = *(_DWORD *)(v2 - 1464) & 0x1000000;
      if ( (*(_DWORD *)(v2 - 1464) & 1) != 0 )
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
      SystemPartition = CmpOpenHiveFile(&Destination_8, 0, &v28, &v21, 7u, 0LL, (int *)Length, 0LL, 0LL, (__int64)v33);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_52:
        *(_QWORD *)(v2 - 1568) = v33;
        v33[0] = v2 - 1624;
        SetFailureLocation(*(_QWORD *)(v2 - 1568), 0, 21, SystemPartition, v0);
        CmpPuntBoot = 1;
        p_Destination_8 = &Destination_8;
        ExRaiseHardError(3221226008LL, 1LL);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1624, SystemPartition);
      }
      v8 = 2;
      if ( v21 == 2 )
        v8 = 18;
      SystemPartition = CmpOpenHiveFile(&Destination_8, 4u, &v29, &v23, v8, 0LL, 0LL, 0LL, 0LL, (__int64)v33);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_52;
      }
      SystemPartition = CmpOpenHiveFile(&Destination_8, 5u, &v30, &v24, v8, 0LL, 0LL, 0LL, 0LL, (__int64)v33);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_52;
      }
      v9 = Length[0];
      *(_QWORD *)(v2 - 80) = v28;
      *(_QWORD *)(v2 - 48) = v29;
      *(_QWORD *)(v2 - 40) = v30;
      *(_DWORD *)(v2 - 1464) &= ~2u;
      v10 = *(_DWORD *)(v2 - 1344) + 4096;
      *(_DWORD *)(v2 - 1436) = Length[1];
      v25 = v10;
      if ( *(_DWORD *)(v2 - 1488) != v9 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1536); i += v9 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1536), i, v9) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1536), i, v9);
        }
        v12 = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1536));
        v10 = v25;
        *(_DWORD *)(v2 - 1520) = v12;
        *(_DWORD *)(v2 - 1488) = v9;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1624, v26);
      if ( SystemPartition < 0 )
      {
        v0 = 64;
        goto LABEL_52;
      }
      if ( (int)CmpDoFileSetSizeEx(v2 - 1624, 0, v10, 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      if ( v3 )
      {
        *(_QWORD *)(*(_QWORD *)(v2 - 1560) + 12LL) = MEMORY[0xFFFFF78000000014];
        HvCheckAndUpdateHiveBackupTimeStamp(v2 - 1624);
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) || v3 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 - 1536));
        *(_DWORD *)(v2 - 1520) = *(_DWORD *)(v2 - 1536);
      }
      SystemPartition = HvpDropPagedBins(v2 - 1624);
      if ( SystemPartition < 0 )
      {
        v0 = 96;
        goto LABEL_52;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) || v3 )
      {
        CmpUnlockRegistry(v14, v13, v15, v16);
        CmpFlushHive(v2 - 1624, 0xCu);
        CmpLockRegistryExclusive();
        *(_DWORD *)(*(_QWORD *)(v2 - 1560) + 4092LL) = 0;
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      v17 = *(_DWORD *)(v2 - 1464);
      *(_DWORD *)(v2 - 1464) = v17 & 0xFFFFF7FF;
      CmpUnlockRegistry(v14, v13, v15, v16);
      KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
      CmpInitCmRM(v2 - 1624, (v17 & 0x800) != 0);
      KeUnstackDetachProcess(&ApcState);
      v18 = *(PKRESOURCEMANAGER **)(v2 + 2528);
      *(_DWORD *)(v2 + 2488) |= 8u;
      if ( v18 )
      {
        TmEnableCallbacks(v18[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v18);
        CmRmFinalizeRecovery(*(_QWORD *)(v2 + 2528));
      }
      CmpLockRegistryExclusive();
      v1 = PoolWithTag;
LABEL_45:
      *(_DWORD *)(v2 + 2488) |= 4u;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &CmpPreloadedHivesList )
        goto LABEL_3;
    }
    *(_QWORD *)&Destination_8.Length = 0x10000000LL;
    Destination_8.Buffer = v1;
    v4 = *(_DWORD *)(v2 - 1464);
    if ( (v4 & 0x1000) != 0 )
    {
      v5 = HalSystemVectorDispatchEntry();
      Source[0] = **((_WORD **)PsGetServerSiloGlobals(v5) + 159);
      RtlAppendUnicodeToString(&Destination_8, L"\\??\\");
      RtlAppendUnicodeToString(&Destination_8, Source);
      v6 = L":";
    }
    else
    {
      if ( (v4 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(v1, 4096LL, &v22);
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
