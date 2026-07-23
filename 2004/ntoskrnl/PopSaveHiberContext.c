/*
 * XREFs of PopSaveHiberContext @ 0x140990730
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1403FEE00 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x1402F2480 (RtlNumberOfClearBits.c)
 *     RtlSetAllBits @ 0x14030C990 (RtlSetAllBits.c)
 *     RtlCopyBitMap @ 0x140347CF0 (RtlCopyBitMap.c)
 *     PopResetRangeEnum @ 0x140360F34 (PopResetRangeEnum.c)
 *     IoNotifyDump @ 0x140381BE4 (IoNotifyDump.c)
 *     IoGetDumpHiberRanges @ 0x14038566C (IoGetDumpHiberRanges.c)
 *     IoDumpStackResumeCapable @ 0x14038B1E8 (IoDumpStackResumeCapable.c)
 *     IoInitializeDumpStack @ 0x14038B218 (IoInitializeDumpStack.c)
 *     KeActiveTracepointsPresent @ 0x14038B360 (KeActiveTracepointsPresent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1404EC3BC (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x1404EC3EC (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1404F283C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1404F28A4 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x1404F2BE0 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1404F2D04 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x1404F7B34 (VslNotifyShutdown.c)
 *     KdPowerTransition @ 0x14050BB40 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x14055FAA0 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x14055FEC8 (_PopInternalError.c)
 *     PopWriteSecurePages @ 0x140569F78 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x1405802A0 (DbgUnLoadImageSymbols.c)
 *     PopWriteHeaderPages @ 0x14098DCA4 (PopWriteHeaderPages.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
 *     PopCreateDumpMdl @ 0x140990B44 (PopCreateDumpMdl.c)
 *     PopWriteHiberImage @ 0x140990C04 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x1409912BC (PopCompressHiberBlocks.c)
 *     PopMarkComponentsBootPhase @ 0x140995EE0 (PopMarkComponentsBootPhase.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x1409AE03C (PopSetMemoryOverwriteRequestAction.c)
 *     PopWriteChecksumPages @ 0x1409AEE18 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x1409AEEB0 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x1409AF750 (PopNotifyShutdownListener.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r8
  __int64 Number; // rdi
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // r15
  _DWORD *v7; // rsi
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  _RTL_BITMAP *v11; // r13
  _RTL_BITMAP *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // rbp
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  char *v21; // r13
  _QWORD *v22; // rcx
  PVOID v23; // rax
  __int64 v24; // rdx
  int v25; // edi
  unsigned int v26; // r12d
  ULONG v27; // eax
  _DWORD *v28; // rsi
  int v29; // ebp
  __int64 v30; // rdi
  __int64 v31; // r14
  unsigned __int64 v32; // rcx
  int i; // ecx
  int v34; // eax
  int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // r8d
  __int64 v39; // rdx
  ULONG v40; // eax
  _DWORD *v41; // rsi
  int v42; // ebp
  __int64 v43; // rdi
  unsigned __int64 v44; // r14
  char v46; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 v47; // [rsp+38h] [rbp-2A0h]
  __int128 v48; // [rsp+40h] [rbp-298h]
  __int128 v49; // [rsp+50h] [rbp-288h]
  __int128 v50; // [rsp+60h] [rbp-278h]
  __int128 v51; // [rsp+90h] [rbp-248h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-238h]
  _OWORD v53[5]; // [rsp+B0h] [rbp-228h] BYREF
  _OWORD v54[5]; // [rsp+100h] [rbp-1D8h] BYREF
  void *v55[40]; // [rsp+150h] [rbp-188h] BYREF
  int v56; // [rsp+2D0h] [rbp-8h]

  v52 = 0LL;
  v51 = 0LL;
  memset(v55, 0, 0x138uLL);
  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20)) )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)(BugCheckParameter3 + 20) );
      }
      if ( PoResumeFromHibernate )
        return 1073742484;
      if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24)) )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)(BugCheckParameter3 + 24) );
      }
    }
  }
  else
  {
    PopCheckpointSystemSleep(19);
  }
  if ( (unsigned int)Number >= *(_DWORD *)(BugCheckParameter3 + 256) )
    return 0;
  if ( !(_DWORD)Number )
  {
    PopWatchdogTimerCount = 0;
    _disable();
    if ( (v56 & 0x200) != 0 )
      PopInternalError(0xA198FuLL);
    if ( (PopSimulateHiberBugcheck & 0x80u) != 0 )
    {
      v46 = 0;
    }
    else
    {
      v46 = IoDumpStackResumeCapable();
      if ( v46 )
        goto LABEL_13;
    }
    dword_140C230E8 |= 4u;
    byte_140C23061 = 1;
LABEL_13:
    if ( (unsigned int)PshedArePluginsPresent() )
    {
      dword_140C230E8 |= 8u;
      byte_140C23061 = 1;
    }
    if ( !(unsigned __int8)off_140C00850[0]() )
    {
      dword_140C230E8 |= 1u;
      byte_140C23061 = 1;
    }
    if ( KeActiveTracepointsPresent() )
    {
      dword_140C230E8 |= 0x40u;
      byte_140C23061 = 1;
    }
    v5 = HvlHypervisorConnected == 0;
    v6 = *(_QWORD *)(BugCheckParameter3 + 200);
    *(_QWORD *)(BugCheckParameter3 + 160) = &v51;
    *(_QWORD *)(BugCheckParameter3 + 176) = &PoWakeState;
    *(_BYTE *)(BugCheckParameter3 + 2) = 1;
    if ( !v5 )
    {
      HvlDisableEnlightenment(0);
      off_140C007A0[0]();
      if ( (HvlpFlags & 2) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
        while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_QWORD *)&v48 = qword_140CECD78;
        *((_QWORD *)&v48 + 1) = qword_140CECD18;
        *(_QWORD *)&v49 = qword_140CECD20;
        *((_QWORD *)&v49 + 1) = qword_140CECD10;
        *(_QWORD *)&v50 = qword_140CECD30;
        *((_QWORD *)&v50 + 1) = qword_140CECD28;
        if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        {
          v53[0] = v48;
          v53[2] = v50;
          v53[1] = v49;
          v53[4] = xmmword_140CECD68;
          v53[3] = xmmword_140CECD58;
          v34 = HvlPrepareForSecureHibernate(v53);
        }
        else
        {
          v54[0] = v48;
          v54[2] = v50;
          v54[1] = v49;
          v54[4] = xmmword_140CECD68;
          v54[3] = xmmword_140CECD58;
          v34 = HvlPrepareForHibernate(
                  v54,
                  (_QWORD *)(v6 + 872),
                  (_QWORD *)(v6 + 880),
                  (_QWORD *)(v6 + 888),
                  (_QWORD *)(v6 + 896));
        }
        v35 = v34;
        if ( v34 < 0 )
        {
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v35, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
        }
        *(_DWORD *)(BugCheckParameter3 + 20) = 0;
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
        while ( *(_DWORD *)(BugCheckParameter3 + 24) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_DWORD *)(BugCheckParameter3 + 20) = KeNumberProcessors_0;
        *(_DWORD *)(BugCheckParameter3 + 24) = 0;
      }
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        HvlDiscardSecurePagesFromHibernation((PVOID)BugCheckParameter3);
      else
        HvlDiscardPagesFromHibernation((PVOID)BugCheckParameter3);
    }
    ++*(_DWORD *)v6;
    v7 = (_DWORD *)(BugCheckParameter3 + 48);
    v8 = 0;
    v9 = *(_DWORD **)(BugCheckParameter3 + 56);
    v10 = *(_DWORD **)(BugCheckParameter3 + 40);
    if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        ++v8;
        *v9++ |= *v10++;
      }
      while ( v8 < *v7 >> 5 );
    }
    v11 = (_RTL_BITMAP *)(BugCheckParameter3 + 32);
    if ( byte_140C23061 )
    {
      v12 = (_RTL_BITMAP *)(BugCheckParameter3 + 32);
    }
    else
    {
      RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter3 + 48), (PRTL_BITMAP)(BugCheckParameter3 + 32), 0);
      v12 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    RtlSetAllBits(v12);
    v13 = *(_QWORD *)(BugCheckParameter3 + 168);
    *(_DWORD *)(BugCheckParameter3 + 184) = 8;
    IoGetDumpHiberRanges(v14, v13);
    if ( !byte_140C23061 )
      IoNotifyDump(1);
    v15 = __rdtsc();
    v16 = (int)IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
    v17 = __rdtsc();
    qword_140C233A8 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v15;
    if ( (v16 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
    {
      PopCheckpointSystemSleep(20);
      PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
      KeBugCheckEx(0xA0u, 0xCuLL, v16, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
    }
    PopMarkComponentsBootPhase((PVOID)BugCheckParameter3);
    v18 = *(_QWORD **)(BugCheckParameter3 + 64);
    PoHiberInProgress = 1;
    if ( v18 != (_QWORD *)(BugCheckParameter3 + 64) )
    {
      do
      {
        v19 = v18[4];
        v20 = v18[3];
        v21 = (char *)v18[5];
        v18 = (_QWORD *)*v18;
        for ( *(_QWORD *)(BugCheckParameter3 + 88) += v19 - v20; v20 < v19; v20 += (unsigned __int64)LODWORD(v55[5]) >> 12 )
        {
          PopCreateDumpMdl(BugCheckParameter3, v55, v20, v19);
          memmove(v21, v55[3], LODWORD(v55[5]));
          v21 += LODWORD(v55[5]);
        }
      }
      while ( v18 != (_QWORD *)(BugCheckParameter3 + 64) );
      v11 = (_RTL_BITMAP *)(BugCheckParameter3 + 32);
    }
    PopResetRangeEnum((_QWORD *)BugCheckParameter3);
    v22 = *(_QWORD **)(BugCheckParameter3 + 160);
    v23 = qword_140C23038;
    *v22 = qword_140C23038;
    v22[1] = v23;
    v22[2] = 0LL;
    v47 = __rdtsc();
    v25 = PopWriteHeaderPages(BugCheckParameter3, v6);
    if ( v25 >= 0 )
    {
      v26 = *(_DWORD *)(v6 + 80);
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
      {
        v36 = (unsigned int)PopHiberScratchPages;
        v37 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
        *(_DWORD *)(BugCheckParameter3 + 184) = 3;
        *(_QWORD *)(v6 + 96) = v37 + ((unsigned __int64)(4 * v36 + 4095) >> 12);
        PopWriteSecurePages(BugCheckParameter3);
        qword_140C23530 = *(unsigned int *)(BugCheckParameter3 + 252);
      }
      *(_DWORD *)(BugCheckParameter3 + 184) = 4;
      *(_QWORD *)(BugCheckParameter3 + 96) = v7;
      v27 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 48));
      v28 = qword_140C230B8;
      v29 = *(_DWORD *)(BugCheckParameter3 + 280);
      v30 = *(_QWORD *)(BugCheckParameter3 + 272);
      v31 = (v27 + *(_QWORD *)(BugCheckParameter3 + 88)) << 12;
      memset(qword_140C230B8, 0, 0x40uLL);
      v28[6] = 0;
      *(_QWORD *)v28 = v30;
      v28[2] = v29;
      *((_QWORD *)v28 + 2) = v31;
      qword_140C23538 = 0LL;
      qword_140C23540 = 0LL;
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( v46 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 168) + 128LL) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      v32 = *(unsigned int *)(BugCheckParameter3 + 252)
          + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
          + (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
      *(_QWORD *)(v6 + 104) = v32;
      *(_QWORD *)(BugCheckParameter3 + 376) = v32 << 12;
      *(_BYTE *)(BugCheckParameter3 + 4) = 1;
      PopWriteHiberImage(BugCheckParameter3);
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
      for ( i = *(_DWORD *)(BugCheckParameter3 + 256);
            *(_DWORD *)(BugCheckParameter3 + 12) != i;
            i = *(_DWORD *)(BugCheckParameter3 + 256) )
      {
        _mm_pause();
      }
      v38 = 0;
      if ( i )
      {
        do
        {
          v39 = v38++;
          v39 <<= 7;
          qword_140C23538 += *(_QWORD *)(v39 + *(_QWORD *)(BugCheckParameter3 + 264) + 56);
          *(_QWORD *)(v39 + *(_QWORD *)(BugCheckParameter3 + 264) + 56) = 0LL;
        }
        while ( v38 < *(_DWORD *)(BugCheckParameter3 + 256) );
      }
      qword_140C23548 = qword_140C23568;
      qword_140C23558 = (unsigned int)dword_140C23570;
      qword_140C23568 = 0LL;
      dword_140C23570 = 0;
      *(_DWORD *)(BugCheckParameter3 + 184) = 5;
      *(_QWORD *)(BugCheckParameter3 + 96) = v11;
      *(_QWORD *)(BugCheckParameter3 + 112) = 0LL;
      v40 = RtlNumberOfClearBits(v11);
      v41 = qword_140C230B8;
      v42 = *(_DWORD *)(BugCheckParameter3 + 280);
      v43 = *(_QWORD *)(BugCheckParameter3 + 272);
      v44 = (unsigned __int64)v40 << 12;
      memset(qword_140C230B8, 0, 0x40uLL);
      v41[6] = 0;
      *(_QWORD *)v41 = v43;
      v41[2] = v42;
      *((_QWORD *)v41 + 2) = v44;
      *(_QWORD *)(v6 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 376) + 4095LL) >> 12;
      *(_DWORD *)(BugCheckParameter3 + 12) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      PopWriteHiberImage(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 7;
      PopWriteChecksumPages(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 6;
      PopWriteImageHeader(BugCheckParameter3, v6, v26, v47);
      v25 = *(_DWORD *)(BugCheckParameter3 + 188);
      if ( v25 >= 0 )
      {
        if ( dword_140C22E60 == dword_140C22E68 )
        {
          if ( (PopSimulate & 0x8000) == 0 )
            DbgUnLoadImageSymbols(0LL, -2LL, 0LL);
          VslNotifyShutdown(1u);
        }
        if ( (PopSimulate & 0x1000) != 0 )
        {
          v25 = -1073741632;
        }
        else
        {
          v25 = 0;
          if ( (PopSimulateHiberBugcheck & 0x10) != 0 )
          {
            v25 = 1073742484;
LABEL_84:
            PopCheckpointSystemSleep(24);
            off_140C008C8[0]();
            return (unsigned int)v25;
          }
        }
      }
    }
    KdPowerTransition(4LL, v24);
    if ( v25 >= 0 && dword_140C22E60 == 5 )
    {
      PopNotifyShutdownListener();
      HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
    goto LABEL_84;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
    _mm_pause();
  LOBYTE(v2) = 1;
  v4 = Number << 7;
  PopCompressHiberBlocks(BugCheckParameter3, v4 + *(_QWORD *)(BugCheckParameter3 + 264), v2);
  if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12)) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(BugCheckParameter3 + 12) );
  }
  return (unsigned int)PopCompressHiberBlocks(BugCheckParameter3, v4 + *(_QWORD *)(BugCheckParameter3 + 264), 0LL);
}
