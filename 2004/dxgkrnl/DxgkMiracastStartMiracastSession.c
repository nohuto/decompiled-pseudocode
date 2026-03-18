/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C0054920
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C0224B10 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018650 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C0052008 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C00520D0 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C00525CC (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0053200 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0pxzqq_EtwWriteTransfer @ 0x1C0055A1C (McTemplateK0pxzqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x1C0055AFC (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x1C0055BCC (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C005987C (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C0059E88 (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0171734 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C02CD4C8 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C02CD8C4 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C02CD974 (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02CDAC4 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02CDE1C (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C02CE638 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C02CE9A0 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(__int64 a1, struct _KEVENT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  struct _KEVENT *v5; // r12
  __int128 v6; // xmm0
  __int64 v7; // rsi
  int v8; // r14d
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 DeviceContextFromName; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r8d
  char v16; // r12
  char v17; // r13
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // r12d
  char *PoolWithTag; // rax
  char *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  MIRACAST_CHUNK_LIST *v27; // rcx
  MIRACAST_CHUNK_LIST *v28; // rcx
  MIRACAST_CHUNK_LIST *v29; // rcx
  MIRACAST_CHUNK_LIST *v30; // rcx
  MIRACAST_CHUNK_LIST *v31; // rcx
  MIRACAST_CHUNK_LIST *v32; // rcx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  void *v40; // rdx
  int v41; // ecx
  int v42; // r8d
  int v43; // eax
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  int v47; // r9d
  int v48; // eax
  int v49; // eax
  int v50; // r10d
  int v51; // edx
  int v52; // edx
  int v53; // ecx
  char v54; // cl
  unsigned int v55; // edx
  char v56; // cl
  _DWORD *v57; // r12
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  int v63; // eax
  _DWORD *v64; // rax
  int v65; // ecx
  _DWORD *v66; // rax
  int v67; // ecx
  _DWORD *v68; // rax
  int v69; // ecx
  _DWORD *v70; // rax
  MIRACAST_CHUNK_LIST *v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _DWORD *v74; // rdx
  __int64 v75; // rax
  _QWORD *v76; // rax
  MIRACAST_CHUNK_LIST *v77; // rax
  unsigned int v78; // r13d
  _QWORD *v79; // r12
  int v80; // eax
  struct _KEVENT *v81; // rsi
  __int64 *v82; // rax
  int v83; // edx
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  struct _DXGK_DIAG_HEADER *v89; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  char v92; // [rsp+61h] [rbp-9Fh]
  char v93; // [rsp+62h] [rbp-9Eh]
  char DeviceObject; // [rsp+64h] [rbp-9Ch] BYREF
  char v95; // [rsp+65h] [rbp-9Bh]
  char v96; // [rsp+66h] [rbp-9Ah]
  __int64 v97; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 *v99; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  __int64 v101; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h]
  _DWORD *v103; // [rsp+98h] [rbp-68h]
  _BYTE v104[20]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v105; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall *v106)(_DWORD *, struct DXGK_MIRACAST_CHUNK_INFO *, void *, int); // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v108[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v109[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v110; // [rsp+118h] [rbp+18h]
  __int64 v111; // [rsp+128h] [rbp+28h]
  __int64 v112; // [rsp+130h] [rbp+30h]
  __int64 v113; // [rsp+138h] [rbp+38h]
  int v114; // [rsp+140h] [rbp+40h]
  int v115; // [rsp+144h] [rbp+44h]
  int v116; // [rsp+148h] [rbp+48h]
  int v117; // [rsp+14Ch] [rbp+4Ch]

  LOWORD(v3) = 0;
  v101 = a1;
  v103 = a3;
  v106 = 0LL;
  Event = a2;
  memset(v104, 0, sizeof(v104));
  v5 = a2;
  v6 = *(_OWORD *)(a1 + 536);
  v97 = 0LL;
  v7 = 0LL;
  P = 0LL;
  v108[0] = v6;
  v8 = 2;
  v105 = 0LL;
  v93 = 0;
  v9 = 0;
  v92 = 0;
  v95 = 0;
  v96 = 0;
  DeviceObject = 0;
  Src = (void *)(a1 + 536);
  TraceLoggingWriteMiracastStartSessionEntry(v108);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName((PCWSTR)(a1 + 4));
  if ( !DeviceContextFromName )
  {
    LODWORD(v13) = -1073741275;
    v9 = 2;
    v8 = -2147483642;
    v14 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v14 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_150;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v104) >= 0 && !v104[8] )
  {
    v108[1] = 0LL;
    LODWORD(v13) = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( (int)v13 < 0 )
    {
      AcquireMiniportListMutex();
      v9 = 17;
      v8 = -2147483647;
      v16 = 0;
      v17 = 0;
      goto LABEL_28;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *(_DWORD *)(a1 + 524);
  v18 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(v18 + 2 * v19) );
  }
  else
  {
    LOWORD(v19) = 0;
  }
  v20 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v20 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v20 + 2 * v3) );
  }
  v21 = 2 * ((unsigned __int16)v19 + (unsigned __int16)v3) + 68;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v21, 0x74727044u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    v23 = PoolWithTag;
    memset(PoolWithTag, 0, 2 * ((unsigned __int16)v19 + (unsigned int)(unsigned __int16)v3) + 68);
    *((_DWORD *)v23 + 1) = v21;
    *((_DWORD *)v23 + 10) = 0;
    *((_QWORD *)v23 + 4) = 0LL;
    *(_DWORD *)v23 = 19;
    *(_OWORD *)(v23 + 8) = 0LL;
    *((_QWORD *)v23 + 3) = 0LL;
    *((_WORD *)v23 + 30) = v19;
    *((_WORD *)v23 + 31) = v3;
    if ( (_WORD)v19 )
      memmove(v23 + 64, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v19);
    if ( (_WORD)v3 )
      memmove(
        &v23[2 * (unsigned __int16)v19 + 66],
        *(const void **)(DeviceContextFromName + 344),
        2LL * (unsigned __int16)v3);
  }
  v7 = v97;
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(DeviceContextFromName + 184)) < 0 || !v97 )
  {
    LODWORD(v13) = -1073741637;
    v8 = -2147483647;
    v9 = 4;
    v88 = WdLogNewEntry5_WdError(v25, v24);
    *(_QWORD *)(v88 + 24) = -2147483647LL;
    WdLogEvent5_WdError(v88);
LABEL_138:
    v16 = v93;
    goto LABEL_27;
  }
  v93 = 1;
  v99 = (__int64 *)(v97 + 3232);
  if ( *(_QWORD *)(v97 + 3232) )
  {
    LODWORD(v13) = -1073741637;
    v9 = 6;
LABEL_25:
    v8 = -2147483647;
    v26 = WdLogNewEntry5_WdError(v25, v24);
    *(_QWORD *)(v26 + 24) = -2147483647LL;
    WdLogEvent5_WdError(v26);
LABEL_26:
    v16 = v92;
LABEL_27:
    v17 = v16;
    goto LABEL_28;
  }
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v97 + 64), (PVOID)DeviceContextFromName, File, 1u, 0x20u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  v16 = 1;
  *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
  v92 = 1;
  if ( !*(_DWORD *)(DeviceContextFromName + 408) )
  {
    if ( !*(_QWORD *)(DeviceContextFromName + 400) )
    {
      LODWORD(v13) = -1073741275;
      v8 = -2147483642;
      v9 = 2;
      v38 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v38 + 24) = DeviceContextFromName;
      WdLogEvent5_WdEvent(v38);
      goto LABEL_52;
    }
    *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
    *(_DWORD *)(DeviceContextFromName + 656) = 0;
    *(_BYTE *)(DeviceContextFromName + 590) = 0;
    *(_DWORD *)(DeviceContextFromName + 652) = 0;
    *(_DWORD *)(DeviceContextFromName + 664) = 0;
    *(_DWORD *)(DeviceContextFromName + 672) = dword_1C00B1F50;
    v39 = v101;
    *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
    *(_DWORD *)(DeviceContextFromName + 648) = 0;
    *(_BYTE *)(DeviceContextFromName + 591) = 0;
    *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
    *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
    *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
    LODWORD(v39) = *(_DWORD *)(v39 + 524);
    *(_DWORD *)(DeviceContextFromName + 700) = -1;
    *(_DWORD *)(DeviceContextFromName + 788) = v39;
    *(_DWORD *)(DeviceContextFromName + 704) = 0;
    memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
    v40 = Src;
    *(_DWORD *)(DeviceContextFromName + 776) = 256;
    memmove((void *)(DeviceContextFromName + 112), v40, 0x10uLL);
    ++*(_DWORD *)(DeviceContextFromName + 440);
    v7 = v97;
    *(_DWORD *)(DeviceContextFromName + 440) &= -(*(_DWORD *)(DeviceContextFromName + 440) < 0xFFFFFFFE);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      McTemplateK0pxzqq_EtwWriteTransfer(
        v41,
        (unsigned int)&EventMiracastStartMiracastSession,
        v42,
        *(_QWORD *)(v7 + 48),
        *(_QWORD *)(DeviceContextFromName + 96),
        *(_QWORD *)(DeviceContextFromName + 152),
        *(_DWORD *)(DeviceContextFromName + 656),
        *(_DWORD *)(DeviceContextFromName + 664));
    *(_DWORD *)(DeviceContextFromName + 192) = *(_DWORD *)(v7 + 1124);
    *(_DWORD *)(DeviceContextFromName + 196) = *(_DWORD *)(v7 + 1128);
    v43 = *(_DWORD *)(v7 + 1120);
    if ( v43 == 1 )
    {
      v44 = (unsigned __int16)*(_DWORD *)(v7 + 1128) | (*(_DWORD *)(v7 + 1124) << 16);
    }
    else if ( v43 == 2 )
    {
      v45 = *(char *)(v7 + 1128);
      if ( ((unsigned __int8)(*(_BYTE *)(v7 + 1128) - 48) <= 9u || (unsigned __int8)((v45 | 0x20) - 97) <= 5u)
        && ((v46 = *(char *)(v7 + 1129), (unsigned __int8)(*(_BYTE *)(v7 + 1129) - 48) <= 9u)
         || (unsigned __int8)((v46 | 0x20) - 97) <= 5u)
        && ((v42 = *(char *)(v7 + 1130), (unsigned __int8)(*(_BYTE *)(v7 + 1130) - 48) <= 9u)
         || (unsigned __int8)((v42 | 0x20) - 97) <= 5u)
        && ((v47 = *(char *)(v7 + 1131), (unsigned __int8)(*(_BYTE *)(v7 + 1131) - 48) <= 9u)
         || (unsigned __int8)((v47 | 0x20) - 97) <= 5u) )
      {
        if ( (unsigned __int8)(v45 - 48) > 9u )
          v49 = ((_BYTE)v45 - 7) & 0xF;
        else
          v49 = v45 - 48;
        if ( (unsigned __int8)(v46 - 48) > 9u )
          v50 = ((_BYTE)v46 - 7) & 0xF;
        else
          v50 = v46 - 48;
        v51 = *(char *)(v7 + 1130);
        LOBYTE(v42) = v42 - 48;
        if ( (unsigned __int8)v42 > 9u )
          v52 = ((_BYTE)v51 - 7) & 0xF;
        else
          v52 = v51 - 48;
        if ( (unsigned __int8)(v47 - 48) > 9u )
          v53 = ((_BYTE)v47 - 7) & 0xF;
        else
          v53 = v47 - 48;
        v48 = v53 | (16 * (v52 | (16 * (v50 | (16 * v49)))));
      }
      else
      {
        v48 = *(unsigned __int16 *)(v7 + 1130);
      }
      v54 = *(_BYTE *)(v7 + 1124);
      if ( v54 == 32 || v54 == 95 )
      {
        v56 = *(_BYTE *)(v7 + 1125);
        if ( v56 == 32 || v56 == 95 )
          v55 = *(_DWORD *)(v7 + 1124) & 0xFFFF0000;
        else
          v55 = (*(_DWORD *)(v7 + 1124) & 0xFFFFFF00) << 8;
      }
      else
      {
        v55 = *(_DWORD *)(v7 + 1124) << 16;
      }
      v44 = v48 | v55;
    }
    else
    {
      v44 = 0;
    }
    *(_DWORD *)(DeviceContextFromName + 200) = v44;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
      McTemplateK0qqz_EtwWriteTransfer(
        DeviceContextFromName,
        (unsigned int)&EventMiracastPerfTrackStartMiracastSession,
        v42,
        *(_DWORD *)(DeviceContextFromName + 440),
        v44,
        *(_QWORD *)(DeviceContextFromName + 352));
    *(_BYTE *)(DeviceContextFromName + 589) = 0;
    *((_QWORD *)&v105 + 1) = DpiMiracastCbSendUserModeMessage;
    v57 = (_DWORD *)(DeviceContextFromName + 456);
    *(_QWORD *)&v105 = DeviceContextFromName;
    v106 = DpiMiracastCbReportChunkInfo;
    v58 = DpiMiracastDdiMiracastCreateContext(v7, &v105, DeviceContextFromName + 448, DeviceContextFromName + 456);
    v13 = v58;
    if ( v58 < 0 )
    {
      if ( v58 == -1073740024 )
      {
        v9 = 7;
        v8 = -2147483646;
      }
      else
      {
        v9 = 8;
        v8 = -2147483647;
      }
      v62 = WdLogNewEntry5_WdError(v60, v59);
      *(_QWORD *)(v62 + 24) = v13;
      WdLogEvent5_WdError(v62);
      *v57 = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
      goto LABEL_138;
    }
    DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v61);
    v63 = *(_DWORD *)(v7 + 3224);
    v95 = 1;
    if ( *v57 != v63 )
    {
      LODWORD(v13) = -1073741811;
      v9 = 9;
      goto LABEL_25;
    }
    *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId();
    *(_BYTE *)(DeviceContextFromName + 588) = 0;
    *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
    *(_WORD *)(v7 + 3248) = 0;
    *(_DWORD *)(v7 + 3252) = 0;
    v64 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v64 )
    {
      v65 = *(_DWORD *)(v7 + 3216);
      v64[4] = 0;
      v64[5] = v65;
      *((_QWORD *)v64 + 1) = v64;
      *(_QWORD *)v64 = v64;
    }
    else
    {
      v64 = 0LL;
    }
    *(_QWORD *)(DeviceContextFromName + 488) = v64;
    v66 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v66 )
    {
      v67 = *(_DWORD *)(v7 + 3216);
      v66[4] = 0;
      v66[5] = v67;
      *((_QWORD *)v66 + 1) = v66;
      *(_QWORD *)v66 = v66;
    }
    else
    {
      v66 = 0LL;
    }
    *(_QWORD *)(v7 + 3256) = v66;
    v68 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v68 )
    {
      v69 = *(_DWORD *)(v7 + 3216);
      v68[4] = 0;
      v68[5] = v69;
      *((_QWORD *)v68 + 1) = v68;
      *(_QWORD *)v68 = v68;
    }
    else
    {
      v68 = 0LL;
    }
    *(_QWORD *)(v7 + 3264) = v68;
    v70 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    v74 = v70;
    if ( v70 )
    {
      v71 = (MIRACAST_CHUNK_LIST *)*(unsigned int *)(v7 + 3216);
      v70[4] = 0;
      v70[5] = (_DWORD)v71;
      *((_QWORD *)v70 + 1) = v70;
      *(_QWORD *)v70 = v70;
    }
    else
    {
      v74 = 0LL;
    }
    *(_QWORD *)(v7 + 3272) = v74;
    if ( *(_QWORD *)(DeviceContextFromName + 488) )
    {
      v71 = *(MIRACAST_CHUNK_LIST **)(v7 + 3256);
      if ( v71 )
      {
        if ( *(_QWORD *)(v7 + 3264) && v74 )
        {
          if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v71, 0x14u) )
          {
LABEL_117:
            v9 = 11;
LABEL_118:
            LODWORD(v13) = -1073741801;
            v8 = -2147483647;
            v75 = WdLogNewEntry5_WdLowResource(v71, v74, v72, v73);
            *(_QWORD *)(v75 + 24) = -2147483647LL;
            WdLogEvent5_WdLowResource(v75);
            goto LABEL_26;
          }
          *(_DWORD *)(v7 + 3252) = 20;
          v76 = operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
          if ( v76 )
          {
            v76[2] = 0LL;
            v76[1] = v76;
            *v76 = v76;
          }
          else
          {
            v76 = 0LL;
          }
          *(_QWORD *)(DeviceContextFromName + 504) = v76;
          v77 = (MIRACAST_CHUNK_LIST *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
          v71 = v77;
          if ( v77 )
          {
            *((_QWORD *)v77 + 2) = 0LL;
            *((_QWORD *)v77 + 1) = v77;
            *(_QWORD *)v77 = v77;
          }
          else
          {
            v71 = 0LL;
          }
          *(_QWORD *)(DeviceContextFromName + 512) = v71;
          if ( *(_QWORD *)(DeviceContextFromName + 504) && v71 )
          {
            if ( MIRACAST_CHUNK_LIST::AllocateNewChunks(v71, 0x14u) )
            {
              KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
              *(_QWORD *)(DeviceContextFromName + 432) = *(_QWORD *)(v7 + 24);
              *v99 = DeviceContextFromName;
              *(_QWORD *)(v7 + 3240) = *(_QWORD *)(DeviceContextFromName + 96);
              *(_QWORD *)(DeviceContextFromName + 376) = *(_QWORD *)(v7 + 4888);
              *(_QWORD *)(DeviceContextFromName + 384) = *(_QWORD *)(v7 + 4896);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              v96 = 1;
              v78 = *(unsigned __int16 *)(v7 + 4920) + 72;
              v99 = (__int64 *)(v7 + 4920);
              v79 = ExAllocatePoolWithTag(PagedPool, v78, 0x74727044u);
              if ( v79 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(DeviceContextFromName + 24));
                _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
                v80 = *(_DWORD *)(DeviceContextFromName + 408);
                v81 = Event;
                *(_QWORD *)(DeviceContextFromName + 472) = Event;
                *(_DWORD *)(DeviceContextFromName + 412) = v80;
                *(_DWORD *)(DeviceContextFromName + 408) = 1;
                ++dword_1C00B1F38;
                KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
                if ( v81 )
                  KeClearEvent(v81);
                memset(v79, 0, v78);
                v7 = v97;
                *v79 = DeviceContextFromName;
                *((_DWORD *)v79 + 2) = *(_DWORD *)(DeviceContextFromName + 440);
                *(_QWORD *)((char *)v79 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
                *(_QWORD *)((char *)v79 + 20) = *(_QWORD *)(v7 + 2672);
                *(_QWORD *)((char *)v79 + 28) = *(_QWORD *)&v104[12];
                *((_DWORD *)v79 + 9) = *(_DWORD *)(DeviceContextFromName + 440);
                *((_DWORD *)v79 + 10) = dword_1C00B1F3C;
                *((_BYTE *)v79 + 44) = 0;
                v82 = v99;
                *((_OWORD *)v79 + 3) = *(_OWORD *)(DeviceContextFromName + 112);
                memmove(v79 + 8, *(const void **)(v7 + 4928), *(unsigned __int16 *)v82);
                RemlockSize[0] = v78 - 12;
                v84 = DpiMiracastSendAsyncUserModeRequest(
                        DeviceContextFromName,
                        v83,
                        2295812,
                        (int)v79 + 12,
                        *(size_t *)RemlockSize,
                        0LL,
                        0,
                        (__int64)DpiMiracastStartSessionRequestCallback,
                        (__int64)v79,
                        (PDEVICE_OBJECT)&DeviceObject,
                        DeviceContextFromName + 424);
                v13 = v84;
                if ( v84 >= 0 )
                {
                  *(_DWORD *)(DeviceContextFromName + 416) = 2;
                  DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_140:
                  *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
                  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
                  if ( v8 < 0 )
                    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 64), (PVOID)DeviceContextFromName, 0x20u);
                  goto LABEL_142;
                }
                v8 = -2147483647;
                v9 = 13;
                v87 = WdLogNewEntry5_WdError(v86, v85);
                *(_QWORD *)(v87 + 24) = v13;
                WdLogEvent5_WdError(v87);
                *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
                --dword_1C00B1F38;
                if ( !DeviceObject )
                {
                  ExFreePoolWithTag(v79, 0);
                  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
                }
                goto LABEL_26;
              }
              v9 = 12;
              goto LABEL_118;
            }
            goto LABEL_117;
          }
        }
      }
    }
    v9 = 10;
    goto LABEL_118;
  }
  LODWORD(v13) = -1073741661;
  v8 = -2147483647;
  v9 = 6;
  v37 = WdLogNewEntry5_WdError(v36, v35);
  *(_QWORD *)(v37 + 24) = DeviceContextFromName;
  *(_QWORD *)(v37 + 32) = -2147483647LL;
  WdLogEvent5_WdError(v37);
LABEL_52:
  v7 = v97;
  v17 = 0;
LABEL_28:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
    McTemplateK0qqqz_EtwWriteTransfer(
      *(_DWORD *)(DeviceContextFromName + 200),
      (unsigned int)&EventMiracastStartMiracastSessionFail,
      v15,
      v9,
      v13,
      *(_DWORD *)(DeviceContextFromName + 200),
      *(_QWORD *)(DeviceContextFromName + 352));
  if ( v17 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = v8;
    *(_DWORD *)(DeviceContextFromName + 784) = v9;
    if ( v95 )
    {
      DpiMiracastDdiMiracastDestroyContext(v7, *(_QWORD *)(DeviceContextFromName + 448));
      *(_DWORD *)(DeviceContextFromName + 456) = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    }
    if ( v96 )
    {
      *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
      *(_QWORD *)(v7 + 3232) = 0LL;
      *(_QWORD *)(v7 + 3240) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeFlushQueuedDpcs();
    }
    v27 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
    if ( v27 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v27);
      *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
    }
    v28 = *(MIRACAST_CHUNK_LIST **)(v7 + 3256);
    if ( v28 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v28);
      *(_QWORD *)(v7 + 3256) = 0LL;
    }
    v29 = *(MIRACAST_CHUNK_LIST **)(v7 + 3264);
    if ( v29 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v29);
      *(_QWORD *)(v7 + 3264) = 0LL;
    }
    v30 = *(MIRACAST_CHUNK_LIST **)(v7 + 3272);
    if ( v30 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v30);
      *(_QWORD *)(v7 + 3272) = 0LL;
    }
    v31 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
    if ( v31 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v31);
      *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
    }
    v32 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
    if ( v32 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v32);
      *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000) != 0 )
      McTemplateK0qqz_EtwWriteTransfer(
        v33,
        (unsigned int)&EventMiracastPerfTrackStartMiracastSessionFailed,
        v34,
        *(_DWORD *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352));
    TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
  }
  if ( v16 )
    goto LABEL_140;
LABEL_142:
  if ( v93 )
  {
    if ( *(_BYTE *)(v7 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 64), (PVOID)v7, 0x20u);
  }
  if ( v8 < 0 )
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  _InterlockedExchange64(&qword_1C00B1B50, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v8 < 0 )
  {
    v5 = Event;
LABEL_150:
    if ( v5 )
    {
      KeSetEvent(v5, 0, 0);
      ObfDereferenceObject(v5);
    }
  }
  v89 = (struct _DXGK_DIAG_HEADER *)P;
  *v103 = v13;
  if ( v89 )
  {
    *((_DWORD *)v89 + 12) = v13;
    *((_DWORD *)v89 + 13) = v8;
    *((_DWORD *)v89 + 14) = v9;
    DxgkWriteDiagEntry(v89, 0x200000000uLL);
    ExFreePoolWithTag(v89, 0);
  }
  else
  {
    v113 = 0LL;
    v109[0] = 6;
    v110 = 0LL;
    v111 = 0LL;
    v109[1] = 64;
    v112 = 0LL;
    v114 = 69;
    v115 = v13;
    v116 = v8;
    v117 = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v109, 0x200000000uLL);
  }
  return (unsigned int)v8;
}
