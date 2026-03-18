/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C0063340
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C02D2CA0 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C0060B04 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C0060BCC (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C00610BC (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0061CB0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0pxzqq_EtwWriteTransfer @ 0x1C00643E4 (McTemplateK0pxzqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x1C00644C4 (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x1C0064594 (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C006736C (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C0067978 (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01EECBC (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C038C97C (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C038CD44 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C038CDF4 (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C038CF44 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C038D29C (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C038DA88 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C038DDAC (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(unsigned __int16 *a1, struct _KEVENT *a2, int *a3)
{
  __int64 v3; // rbx
  int v5; // r14d
  __int64 v6; // rsi
  char *v7; // r12
  int v8; // r15d
  __int64 DeviceContextFromName; // rdi
  int v10; // ebx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // r13d
  char *PoolWithTag; // rax
  __int64 v17; // rcx
  unsigned __int16 *v18; // rax
  void *v19; // rdx
  int v20; // ecx
  int v21; // r8d
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // r9d
  int v28; // eax
  int v29; // r10d
  int v30; // edx
  int v31; // edx
  int v32; // ecx
  char v33; // cl
  char v34; // cl
  int v35; // ecx
  _DWORD *v36; // r13
  int v37; // eax
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // r9
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // ecx
  MIRACAST_CHUNK_LIST *v53; // rcx
  __int64 v54; // r9
  _QWORD *v55; // rax
  __int64 v56; // r9
  MIRACAST_CHUNK_LIST *v57; // rax
  MIRACAST_CHUNK_LIST *v58; // rcx
  size_t v59; // rbx
  _QWORD *v60; // r13
  int v61; // eax
  struct _KEVENT *v62; // rsi
  unsigned __int16 *v63; // rax
  int v64; // edx
  int v65; // eax
  char v66; // r10
  MIRACAST_CHUNK_LIST *v67; // rcx
  MIRACAST_CHUNK_LIST *v68; // rcx
  MIRACAST_CHUNK_LIST *v69; // rcx
  MIRACAST_CHUNK_LIST *v70; // rcx
  MIRACAST_CHUNK_LIST *v71; // rcx
  MIRACAST_CHUNK_LIST *v72; // rcx
  int v73; // ecx
  int v74; // r8d
  PRKEVENT v75; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  char v78; // [rsp+60h] [rbp-A0h]
  char v79; // [rsp+61h] [rbp-9Fh]
  char v80; // [rsp+62h] [rbp-9Eh]
  char DeviceObject; // [rsp+64h] [rbp-9Ch] BYREF
  char v82; // [rsp+65h] [rbp-9Bh]
  char v83; // [rsp+66h] [rbp-9Ah]
  char v84; // [rsp+67h] [rbp-99h]
  __int64 v85; // [rsp+68h] [rbp-98h]
  void *Src; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v87; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  int *v89; // [rsp+90h] [rbp-70h]
  _BYTE v90[20]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v91; // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall *v92)(_QWORD *, struct DXGK_MIRACAST_CHUNK_INFO *, void *, int); // [rsp+C0h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v94[2]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v95[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v96; // [rsp+108h] [rbp+8h]
  __int64 v97; // [rsp+118h] [rbp+18h]
  __int64 v98; // [rsp+120h] [rbp+20h]
  __int64 v99; // [rsp+128h] [rbp+28h]
  int v100; // [rsp+130h] [rbp+30h]
  int v101; // [rsp+134h] [rbp+34h]
  int v102; // [rsp+138h] [rbp+38h]
  int v103; // [rsp+13Ch] [rbp+3Ch]

  LOWORD(v3) = 0;
  v87 = a1;
  v89 = a3;
  v92 = 0LL;
  v5 = 2;
  Event = a2;
  memset(v90, 0, sizeof(v90));
  v6 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v85 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v78 = 0;
  v94[0] = *(_OWORD *)(a1 + 268);
  v79 = 0;
  v91 = 0LL;
  v82 = 0;
  v80 = 0;
  v83 = 0;
  DeviceObject = 0;
  Src = a1 + 268;
  TraceLoggingWriteMiracastStartSessionEntry(v94);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName(a1 + 2);
  if ( !DeviceContextFromName )
  {
    v10 = -1073741275;
    v8 = 2;
    v5 = -2147483642;
    WdLogSingleEntry1(2LL, -2147483642LL);
LABEL_146:
    v75 = Event;
    if ( Event )
    {
      KeSetEvent(Event, 0, 0);
      ObfDereferenceObject(v75);
    }
    goto LABEL_148;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v90) >= 0 && !v90[8] )
  {
    v94[1] = 0LL;
    v10 = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( v10 < 0 )
    {
      AcquireMiniportListMutex();
      v8 = 17;
      v5 = -2147483647;
      goto LABEL_114;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *((_DWORD *)a1 + 131);
  v12 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v12 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v12 + 2 * v3) );
  }
  v13 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(v13 + 2 * v14) );
  }
  else
  {
    LOWORD(v14) = 0;
  }
  v15 = 2 * ((unsigned __int16)v3 + (unsigned __int16)v14) + 68;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v15, 0x74727044u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v15);
    *(_DWORD *)v7 = 19;
    *((_DWORD *)v7 + 10) = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = v15;
    *(_OWORD *)(v7 + 8) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_WORD *)v7 + 30) = v3;
    *((_WORD *)v7 + 31) = v14;
    if ( (_WORD)v3 )
      memmove(v7 + 64, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v3);
    if ( (_WORD)v14 )
      memmove(
        &v7[2 * (unsigned __int16)v3 + 66],
        *(const void **)(DeviceContextFromName + 344),
        2LL * (unsigned __int16)v14);
  }
  v6 = v85;
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(DeviceContextFromName + 184)) < 0 || !v85 )
  {
    v5 = -2147483647;
    v10 = -1073741637;
    v8 = 4;
    WdLogSingleEntry1(2LL, -2147483647LL);
    v79 = 0;
    v80 = 0;
    goto LABEL_114;
  }
  v78 = 1;
  if ( *(_QWORD *)(v85 + 3232) )
  {
    v10 = -1073741637;
    v8 = 6;
LABEL_25:
    v17 = 2LL;
LABEL_26:
    v5 = -2147483647;
    WdLogSingleEntry1(v17, -2147483647LL);
    goto LABEL_114;
  }
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v85 + 64), (PVOID)DeviceContextFromName, File, 1u, 0x20u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
  v79 = 1;
  if ( *(_DWORD *)(DeviceContextFromName + 408) )
  {
    v10 = -1073741661;
    v5 = -2147483647;
    v8 = 6;
    WdLogSingleEntry2(2LL, DeviceContextFromName, -2147483647LL);
LABEL_29:
    v6 = v85;
    goto LABEL_114;
  }
  if ( !*(_QWORD *)(DeviceContextFromName + 400) )
  {
    v10 = -1073741275;
    v5 = -2147483642;
    v8 = 2;
    WdLogSingleEntry1(4LL, DeviceContextFromName);
    goto LABEL_29;
  }
  *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
  *(_DWORD *)(DeviceContextFromName + 656) = 0;
  *(_BYTE *)(DeviceContextFromName + 590) = 0;
  *(_DWORD *)(DeviceContextFromName + 652) = 0;
  *(_DWORD *)(DeviceContextFromName + 664) = 0;
  *(_DWORD *)(DeviceContextFromName + 672) = dword_1C01308D8;
  v18 = v87;
  *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
  *(_DWORD *)(DeviceContextFromName + 648) = 0;
  *(_BYTE *)(DeviceContextFromName + 591) = 0;
  *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
  LODWORD(v18) = *((_DWORD *)v18 + 131);
  *(_DWORD *)(DeviceContextFromName + 700) = -1;
  *(_DWORD *)(DeviceContextFromName + 788) = (_DWORD)v18;
  *(_DWORD *)(DeviceContextFromName + 704) = 0;
  v80 = 1;
  memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
  v19 = Src;
  *(_DWORD *)(DeviceContextFromName + 776) = 256;
  memmove((void *)(DeviceContextFromName + 112), v19, 0x10uLL);
  ++*(_DWORD *)(DeviceContextFromName + 440);
  v6 = v85;
  *(_DWORD *)(DeviceContextFromName + 440) &= -(*(_DWORD *)(DeviceContextFromName + 440) < 0xFFFFFFFE);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0pxzqq_EtwWriteTransfer(
      v20,
      (unsigned int)&EventMiracastStartMiracastSession,
      v21,
      *(_QWORD *)(v6 + 48),
      *(_QWORD *)(DeviceContextFromName + 96),
      *(_QWORD *)(DeviceContextFromName + 152),
      *(_DWORD *)(DeviceContextFromName + 656),
      *(_DWORD *)(DeviceContextFromName + 664));
  *(_DWORD *)(DeviceContextFromName + 192) = *(_DWORD *)(v6 + 1124);
  *(_DWORD *)(DeviceContextFromName + 196) = *(_DWORD *)(v6 + 1128);
  v22 = *(_DWORD *)(v6 + 1120);
  if ( v22 == 1 )
  {
    v23 = (unsigned __int16)*(_DWORD *)(v6 + 1128);
    v24 = *(_DWORD *)(v6 + 1124) << 16;
  }
  else
  {
    if ( v22 != 2 )
    {
      v35 = 0;
      goto LABEL_68;
    }
    v25 = *(char *)(v6 + 1128);
    if ( ((unsigned __int8)(*(_BYTE *)(v6 + 1128) - 48) <= 9u || (unsigned __int8)((v25 | 0x20) - 97) <= 5u)
      && ((v26 = *(char *)(v6 + 1129), (unsigned __int8)(*(_BYTE *)(v6 + 1129) - 48) <= 9u)
       || (unsigned __int8)((v26 | 0x20) - 97) <= 5u)
      && ((v21 = *(char *)(v6 + 1130), (unsigned __int8)(*(_BYTE *)(v6 + 1130) - 48) <= 9u)
       || (unsigned __int8)((v21 | 0x20) - 97) <= 5u)
      && ((v27 = *(char *)(v6 + 1131), (unsigned __int8)(*(_BYTE *)(v6 + 1131) - 48) <= 9u)
       || (unsigned __int8)((v27 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(v25 - 48) > 9u )
        v28 = ((_BYTE)v25 - 7) & 0xF;
      else
        v28 = v25 - 48;
      if ( (unsigned __int8)(v26 - 48) > 9u )
        v29 = ((_BYTE)v26 - 7) & 0xF;
      else
        v29 = v26 - 48;
      v30 = *(char *)(v6 + 1130);
      LOBYTE(v21) = v21 - 48;
      if ( (unsigned __int8)v21 > 9u )
        v31 = ((_BYTE)v30 - 7) & 0xF;
      else
        v31 = v30 - 48;
      if ( (unsigned __int8)(v27 - 48) > 9u )
        v32 = ((_BYTE)v27 - 7) & 0xF;
      else
        v32 = v27 - 48;
      v24 = v32 | (16 * (v31 | (16 * (v29 | (16 * v28)))));
    }
    else
    {
      v24 = *(unsigned __int16 *)(v6 + 1130);
    }
    v33 = *(_BYTE *)(v6 + 1124);
    if ( v33 == 32 || v33 == 95 )
    {
      v34 = *(_BYTE *)(v6 + 1125);
      if ( v34 == 32 || v34 == 95 )
        v23 = *(_DWORD *)(v6 + 1124) & 0xFFFF0000;
      else
        v23 = (*(_DWORD *)(v6 + 1124) & 0xFFFFFF00) << 8;
    }
    else
    {
      v23 = *(_DWORD *)(v6 + 1124) << 16;
    }
  }
  v35 = v24 | v23;
LABEL_68:
  *(_DWORD *)(DeviceContextFromName + 200) = v35;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    McTemplateK0qqz_EtwWriteTransfer(
      v35,
      (unsigned int)&EventMiracastPerfTrackStartMiracastSession,
      v21,
      *(_DWORD *)(DeviceContextFromName + 440),
      v35,
      *(_QWORD *)(DeviceContextFromName + 352));
  *(_BYTE *)(DeviceContextFromName + 589) = 0;
  *((_QWORD *)&v91 + 1) = DpiMiracastCbSendUserModeMessage;
  v36 = (_DWORD *)(DeviceContextFromName + 456);
  *(_QWORD *)&v91 = DeviceContextFromName;
  v92 = DpiMiracastCbReportChunkInfo;
  v37 = DpiMiracastDdiMiracastCreateContext(v6, &v91, DeviceContextFromName + 448, DeviceContextFromName + 456);
  v10 = v37;
  if ( v37 < 0 )
  {
    if ( v37 == -1073740024 )
    {
      v8 = 7;
      v5 = -2147483646;
    }
    else
    {
      v8 = 8;
      v5 = -2147483647;
    }
    WdLogSingleEntry1(2LL, v37);
    v79 = 1;
    *v36 = -1;
    *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    v80 = 1;
    v78 = 1;
    goto LABEL_114;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v38);
  v39 = *(_DWORD *)(v6 + 3224);
  v82 = 1;
  if ( *v36 != v39 )
  {
    v10 = -1073741811;
    v8 = 9;
    goto LABEL_25;
  }
  *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId();
  *(_BYTE *)(DeviceContextFromName + 588) = 0;
  *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
  *(_WORD *)(v6 + 3248) = 0;
  *(_DWORD *)(v6 + 3252) = 0;
  v41 = operator new[](0x18uLL, 0x4B677844u, 64LL, v40);
  if ( v41 )
  {
    v43 = *(_DWORD *)(v6 + 3216);
    *(_DWORD *)(v41 + 16) = 0;
    *(_DWORD *)(v41 + 20) = v43;
    *(_QWORD *)(v41 + 8) = v41;
    *(_QWORD *)v41 = v41;
  }
  else
  {
    v41 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 488) = v41;
  v44 = operator new[](0x18uLL, 0x4B677844u, 64LL, v42);
  if ( v44 )
  {
    v46 = *(_DWORD *)(v6 + 3216);
    *(_DWORD *)(v44 + 16) = 0;
    *(_DWORD *)(v44 + 20) = v46;
    *(_QWORD *)(v44 + 8) = v44;
    *(_QWORD *)v44 = v44;
  }
  else
  {
    v44 = 0LL;
  }
  *(_QWORD *)(v6 + 3256) = v44;
  v47 = operator new[](0x18uLL, 0x4B677844u, 64LL, v45);
  if ( v47 )
  {
    v49 = *(_DWORD *)(v6 + 3216);
    *(_DWORD *)(v47 + 16) = 0;
    *(_DWORD *)(v47 + 20) = v49;
    *(_QWORD *)(v47 + 8) = v47;
    *(_QWORD *)v47 = v47;
  }
  else
  {
    v47 = 0LL;
  }
  *(_QWORD *)(v6 + 3264) = v47;
  v50 = operator new[](0x18uLL, 0x4B677844u, 64LL, v48);
  v51 = v50;
  if ( v50 )
  {
    v52 = *(_DWORD *)(v6 + 3216);
    *(_DWORD *)(v50 + 16) = 0;
    *(_DWORD *)(v50 + 20) = v52;
    *(_QWORD *)(v50 + 8) = v50;
    *(_QWORD *)v50 = v50;
  }
  else
  {
    v51 = 0LL;
  }
  *(_QWORD *)(v6 + 3272) = v51;
  if ( !*(_QWORD *)(DeviceContextFromName + 488) )
    goto LABEL_112;
  v53 = *(MIRACAST_CHUNK_LIST **)(v6 + 3256);
  if ( !v53 || !*(_QWORD *)(v6 + 3264) || !v51 )
    goto LABEL_112;
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v53, 0x14u) )
  {
LABEL_94:
    v17 = 6LL;
    v10 = -1073741801;
    v8 = 11;
    goto LABEL_26;
  }
  *(_DWORD *)(v6 + 3252) = 20;
  v55 = (_QWORD *)operator new[](0x18uLL, 0x4B677844u, 64LL, v54);
  if ( v55 )
  {
    v55[2] = 0LL;
    v55[1] = v55;
    *v55 = v55;
  }
  else
  {
    v55 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 504) = v55;
  v57 = (MIRACAST_CHUNK_LIST *)operator new[](0x18uLL, 0x4B677844u, 64LL, v56);
  v58 = v57;
  if ( v57 )
  {
    *((_QWORD *)v57 + 2) = 0LL;
    *((_QWORD *)v57 + 1) = v57;
    *(_QWORD *)v57 = v57;
  }
  else
  {
    v58 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 512) = v58;
  if ( !*(_QWORD *)(DeviceContextFromName + 504) || !v58 )
  {
LABEL_112:
    v17 = 6LL;
    v10 = -1073741801;
    v8 = 10;
    goto LABEL_26;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v58, 0x14u) )
    goto LABEL_94;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_QWORD *)(DeviceContextFromName + 432) = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 3232) = DeviceContextFromName;
  *(_QWORD *)(v6 + 3240) = *(_QWORD *)(DeviceContextFromName + 96);
  *(_QWORD *)(DeviceContextFromName + 376) = *(_QWORD *)(v6 + 4816);
  *(_QWORD *)(DeviceContextFromName + 384) = *(_QWORD *)(v6 + 4824);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v83 = 1;
  v87 = (unsigned __int16 *)(v6 + 4848);
  LODWORD(Src) = *(unsigned __int16 *)(v6 + 4848) + 72;
  v59 = (unsigned int)Src;
  v60 = ExAllocatePoolWithTag(PagedPool, (unsigned int)Src, 0x74727044u);
  if ( !v60 )
  {
    v10 = -1073741801;
    v17 = 6LL;
    v8 = 12;
    goto LABEL_26;
  }
  _InterlockedIncrement((volatile signed __int32 *)(DeviceContextFromName + 24));
  _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
  v61 = *(_DWORD *)(DeviceContextFromName + 408);
  v62 = Event;
  *(_QWORD *)(DeviceContextFromName + 472) = Event;
  *(_DWORD *)(DeviceContextFromName + 412) = v61;
  *(_DWORD *)(DeviceContextFromName + 408) = 1;
  ++dword_1C01308C0;
  KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
  if ( v62 )
    KeClearEvent(v62);
  memset(v60, 0, v59);
  v6 = v85;
  *v60 = DeviceContextFromName;
  *((_DWORD *)v60 + 2) = *(_DWORD *)(DeviceContextFromName + 440);
  *(_QWORD *)((char *)v60 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
  *(_QWORD *)((char *)v60 + 20) = *(_QWORD *)(v6 + 2672);
  *(_QWORD *)((char *)v60 + 28) = *(_QWORD *)&v90[12];
  *((_DWORD *)v60 + 9) = *(_DWORD *)(DeviceContextFromName + 440);
  *((_DWORD *)v60 + 10) = dword_1C01308C4;
  *((_BYTE *)v60 + 44) = 0;
  v63 = v87;
  *((_OWORD *)v60 + 3) = *(_OWORD *)(DeviceContextFromName + 112);
  memmove(v60 + 8, *(const void **)(v6 + 4856), *v63);
  RemlockSize[0] = (_DWORD)Src - 12;
  v65 = DpiMiracastSendAsyncUserModeRequest(
          DeviceContextFromName,
          v64,
          2295812,
          (int)v60 + 12,
          *(size_t *)RemlockSize,
          0LL,
          0,
          (__int64)DpiMiracastStartSessionRequestCallback,
          (__int64)v60,
          (PDEVICE_OBJECT)&DeviceObject,
          DeviceContextFromName + 424);
  v10 = v65;
  if ( v65 >= 0 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = 2;
    DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_137:
    *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
    if ( v5 < 0 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), (PVOID)DeviceContextFromName, 0x20u);
    goto LABEL_139;
  }
  v5 = -2147483647;
  v8 = 13;
  WdLogSingleEntry1(2LL, v65);
  *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
  --dword_1C01308C0;
  if ( !DeviceObject )
  {
    ExFreePoolWithTag(v60, 0);
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  }
LABEL_114:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    McTemplateK0qqqz_EtwWriteTransfer(
      *(_DWORD *)(DeviceContextFromName + 200),
      (unsigned int)&EventMiracastStartMiracastSessionFail,
      v11,
      v8,
      v10,
      *(_DWORD *)(DeviceContextFromName + 200),
      *(_QWORD *)(DeviceContextFromName + 352));
  v66 = v79;
  v84 = v79;
  LODWORD(Src) = v10;
  if ( v80 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = v5;
    *(_DWORD *)(DeviceContextFromName + 784) = v8;
    if ( v82 )
    {
      DpiMiracastDdiMiracastDestroyContext(v6, *(_QWORD *)(DeviceContextFromName + 448));
      *(_DWORD *)(DeviceContextFromName + 456) = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    }
    if ( v83 )
    {
      *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
      *(_QWORD *)(v6 + 3232) = 0LL;
      *(_QWORD *)(v6 + 3240) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeFlushQueuedDpcs();
    }
    v67 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
    if ( v67 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v67);
      *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
    }
    v68 = *(MIRACAST_CHUNK_LIST **)(v6 + 3256);
    if ( v68 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v68);
      *(_QWORD *)(v6 + 3256) = 0LL;
    }
    v69 = *(MIRACAST_CHUNK_LIST **)(v6 + 3264);
    if ( v69 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v69);
      *(_QWORD *)(v6 + 3264) = 0LL;
    }
    v70 = *(MIRACAST_CHUNK_LIST **)(v6 + 3272);
    if ( v70 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v70);
      *(_QWORD *)(v6 + 3272) = 0LL;
    }
    v71 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
    if ( v71 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v71);
      *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
    }
    v72 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
    if ( v72 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v72);
      *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
      McTemplateK0qqz_EtwWriteTransfer(
        v73,
        (unsigned int)&EventMiracastPerfTrackStartMiracastSessionFailed,
        v74,
        *(_DWORD *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352));
    TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
    v10 = (int)Src;
    v66 = v84;
  }
  if ( v66 )
    goto LABEL_137;
LABEL_139:
  if ( v78 )
  {
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), (PVOID)v6, 0x20u);
  }
  if ( v5 < 0 )
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v5 < 0 )
    goto LABEL_146;
LABEL_148:
  *v89 = v10;
  if ( v7 )
  {
    *((_DWORD *)v7 + 12) = v10;
    *((_DWORD *)v7 + 13) = v5;
    *((_DWORD *)v7 + 14) = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7, 0x200000000uLL);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v99 = 0LL;
    v95[0] = 6;
    v96 = 0LL;
    v97 = 0LL;
    v95[1] = 64;
    v98 = 0LL;
    v100 = 69;
    v101 = v10;
    v102 = v5;
    v103 = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v95, 0x200000000uLL);
  }
  return (unsigned int)v5;
}
