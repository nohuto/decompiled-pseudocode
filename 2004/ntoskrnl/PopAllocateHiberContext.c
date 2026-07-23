/*
 * XREFs of PopAllocateHiberContext @ 0x140764C64
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlClearAllBits @ 0x140271930 (RtlClearAllBits.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402CD260 (MmBuildMdlForNonPagedPool.c)
 *     MmGetHighestPhysicalPage @ 0x1403019A8 (MmGetHighestPhysicalPage.c)
 *     RtlSetAllBits @ 0x14030C990 (RtlSetAllBits.c)
 *     PoSetHiberRange @ 0x140385760 (PoSetHiberRange.c)
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopInternalAddToDumpFile @ 0x14055FAA0 (PopInternalAddToDumpFile.c)
 *     MmLockPreChargedPagedPool @ 0x140764760 (MmLockPreChargedPagedPool.c)
 *     IoGetDumpStack @ 0x1407647A4 (IoGetDumpStack.c)
 *     PopLoadResumeContext @ 0x1407647F4 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x140764960 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140764C1C (MmMarkHiberRange.c)
 *     PopBcdSetPendingResume @ 0x1407650A0 (PopBcdSetPendingResume.c)
 *     BcdForciblyUnloadStore @ 0x1407662F8 (BcdForciblyUnloadStore.c)
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 *     PopBcdEstablishResumeObject @ 0x14076FEA0 (PopBcdEstablishResumeObject.c)
 *     BcdCloseObject @ 0x1407717EC (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x14088B9A8 (HvlpAllocatePageListResources.c)
 *     VslAllocateSecureHibernateResources @ 0x14088BA6C (VslAllocateSecureHibernateResources.c)
 *     PopBcdClose @ 0x1408F245C (PopBcdClose.c)
 *     PopBcdOpen @ 0x1408F2474 (PopBcdOpen.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
 *     BgkResumePrepare @ 0x140993078 (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x14099374C (PopDiscardRange.c)
 *     PopAllocatePages @ 0x1409938C4 (PopAllocatePages.c)
 *     PopGenerateUnHibernatedMdl @ 0x140993930 (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x1409939E0 (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x140993B94 (PopGetHwConfigurationSignature.c)
 */

__int64 PopAllocateHiberContext()
{
  __int64 HighestPhysicalPage; // rax
  char *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  ULONG_PTR *v4; // r15
  int DumpStack; // edi
  ULONG_PTR v6; // r14
  char v7; // cl
  char v8; // r8
  __int16 v9; // dx
  char v10; // cl
  __int64 v11; // r8
  __int16 v12; // dx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 Pages; // rax
  __int64 v21; // rax
  PVOID *v22; // rdi
  __int64 UnHibernatedMdl; // rax
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int16 v29; // ax
  unsigned __int64 v30; // rdx
  __int64 **v31; // r12
  __int64 *i; // rdi
  int v33; // eax
  PVOID *v34; // r15
  __int64 v35; // r13
  __int16 SystemInformation; // [rsp+80h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+88h] [rbp+50h]
  HANDLE BcdStoreHandle; // [rsp+90h] [rbp+58h] BYREF
  unsigned __int64 v39; // [rsp+98h] [rbp+60h] BYREF

  BcdStoreHandle = 0LL;
  v39 = 0LL;
  SystemInformation = 0;
  if ( dword_140C22E68 != 5 )
    return 0;
  BcdObjectHandle = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v1 = (char *)MemoryMap;
  qword_140C22E80 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + ((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1C8uLL);
  MmLockPreChargedPagedPool((unsigned __int64)qword_140C23070);
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_140C23090;
  *((_QWORD *)v1 + 25) = qword_140C23080;
  *((_QWORD *)v1 + 40) = qword_140C230D0;
  *((_QWORD *)v1 + 27) = qword_140C230B0;
  *((_QWORD *)v1 + 28) = qword_140C230E0;
  *((_QWORD *)v1 + 29) = qword_140C230D8;
  *((_OWORD *)v1 + 2) = xmmword_140C230A0;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    v26 = 42LL;
LABEL_46:
    PopCheckpointSystemSleep(v26);
    goto LABEL_43;
  }
  v4 = (ULONG_PTR *)(v1 + 168);
  DumpStack = IoGetDumpStack(v2, (__int64)(v1 + 168), v3, PopSimulate & 0x10);
  if ( DumpStack < 0 )
  {
    v27 = 43LL;
    goto LABEL_48;
  }
  v6 = *v4;
  v7 = 0;
  if ( dword_140C22E4C < 0 && dword_140C22E54 == 2 )
    v7 = 2;
  v8 = v7 | 1;
  v9 = __readcr4();
  v10 = v7 | 9;
  if ( (v9 & 0x1000) == 0 )
    v10 = v8;
  v11 = *((_QWORD *)v1 + 27);
  v1[1] = v10;
  v12 = qword_140C23088;
  v13 = qword_140C23088 & 0xFFFFFFFFFFFFF000uLL;
  v14 = qword_140C23088;
  *(_QWORD *)v11 = 0LL;
  *(_WORD *)(v11 + 10) = 0;
  *(_QWORD *)(v11 + 32) = v13;
  *(_DWORD *)(v11 + 44) = v12 & 0xFFF;
  *(_WORD *)(v11 + 8) = 8 * ((((unsigned __int64)(v14 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v11 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 27));
  v15 = *((_QWORD *)v1 + 28);
  if ( v15 )
  {
    v28 = qword_140C230D8;
    v29 = qword_140C230D8;
    *(_QWORD *)v15 = 0LL;
    *(_WORD *)(v15 + 10) = 0;
    *(_DWORD *)(v15 + 40) = 4096;
    *(_WORD *)(v15 + 8) = 8 * (((unsigned __int16)((v29 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v15 + 32) = v28 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v15 + 44) = v28 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 28));
  }
  DumpStack = PopLoadResumeContext((__int64)v1);
  if ( DumpStack < 0 )
  {
    v27 = 44LL;
    goto LABEL_48;
  }
  DumpStack = PopBcdOpen(&BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    v27 = 45LL;
    goto LABEL_48;
  }
  v16 = (__int64)BcdStoreHandle;
  DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    PopBcdClose(v16);
    v27 = 46LL;
    goto LABEL_48;
  }
  DumpStack = PopBcdSetPendingResume((HANDLE)v16);
  BcdCloseObject(BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    PopBcdClose(v16);
    v27 = 47LL;
    goto LABEL_48;
  }
  BcdForciblyUnloadStore((HANDLE)v16);
  RtlClearAllBits((PRTL_BITMAP)v1 + 2);
  RtlSetAllBits((PRTL_BITMAP)v1 + 3);
  *((_DWORD *)v1 + 112) = PopGetHwConfigurationSignature();
  PopHiberInitializeResources(v1);
  LODWORD(v16) = 0;
  if ( (int)PopGetBitlockerKeyLocation(&v39) >= 0 )
  {
    v30 = v39 >> 12;
    *((_QWORD *)v1 + 39) = v39 >> 12;
    PopDiscardRange(v1, v30, 4LL);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v1, qword_140C23048);
  ((void (__fastcall *)(char *))off_140C005A8[0])(v1);
  v17 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
  v18 = v17;
  *((_DWORD *)v1 + 38) = v17;
  if ( *((_QWORD *)v1 + 30) )
  {
    v19 = *((unsigned int *)v1 + 62);
    if ( v19 > v17 )
    {
      *((_DWORD *)v1 + 38) = v19;
      v18 = v19;
    }
  }
  Pages = PopAllocatePages(v18);
  DumpStack = *((_DWORD *)v1 + 47);
  *((_QWORD *)v1 + 18) = Pages;
  if ( DumpStack < 0 )
  {
    v27 = 48LL;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(*v4 + 280) )
  {
    v31 = (__int64 **)(*(_QWORD *)(*v4 + 272) + 40LL);
    for ( i = *v31; i != (__int64 *)v31; i = (__int64 *)*i )
    {
      v33 = *((_DWORD *)i + 16);
      if ( v33 )
      {
        if ( (v33 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
          PopCheckpointSystemSleep(49LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
        }
        v34 = (PVOID *)(i + 9);
        v35 = 2LL;
        do
        {
          if ( *v34 )
            PoSetHiberRange(v1, 0x8000u, *v34, *((unsigned int *)i + 16), 0x66756263u);
          ++v34;
          --v35;
        }
        while ( v35 );
      }
    }
  }
  else
  {
    v21 = PopAllocatePages(16LL);
    *(_QWORD *)(v6 + 8) = v21;
    if ( !v21 )
    {
      DumpStack = *((_DWORD *)v1 + 47);
      v27 = 50LL;
      goto LABEL_48;
    }
    PoSetHiberRange(v1, 0x8000u, (PVOID)(v21 + 0x2000), 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v6 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v6, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v1, 0x1C8u, 0LL);
      PopCheckpointSystemSleep(51LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v1);
    }
    v22 = (PVOID *)(v6 + 16);
    v16 = 2LL;
    do
    {
      if ( *v22 )
        PoSetHiberRange(v1, 0x8000u, *v22, *(unsigned int *)(v6 + 112), 0x66756263u);
      ++v22;
      --v16;
    }
    while ( v16 );
  }
  UnHibernatedMdl = PopGenerateUnHibernatedMdl(v1, (unsigned int)PopHiberScratchPages);
  *((_QWORD *)v1 + 15) = UnHibernatedMdl;
  if ( !UnHibernatedMdl )
  {
    DumpStack = -1073741670;
    v26 = 52LL;
    goto LABEL_46;
  }
  if ( VslVsmEnabled != (_BYTE)v16 )
  {
    v1[452] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v1);
    if ( DumpStack >= 0 )
      goto LABEL_33;
    v27 = 53LL;
LABEL_48:
    PopCheckpointSystemSleep(v27);
    goto LABEL_40;
  }
  v1[452] = v16;
LABEL_33:
  if ( ZwQuerySystemInformation(SystemSecureBootInformation, &SystemInformation, 2u, 0LL) >= 0 )
    v1[453] = SystemInformation;
  if ( (int)BgkResumePrepare(v1) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 64) - 1;
  if ( (HvlpFlags & 2) != 0 )
    HvlpAllocatePageListResources(v24, 16LL);
  DumpStack = v16;
LABEL_40:
  if ( DumpStack < 0 )
LABEL_43:
    PopFreeHiberContext();
  return (unsigned int)DumpStack;
}
