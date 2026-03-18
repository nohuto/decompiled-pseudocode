/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C01266E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00D8910 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0113CE0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0126C7C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01271F0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012746C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C012775C (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0127C08 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C0127FEC (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C0155EC0 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0163BF4 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r15
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  __int64 v7; // rdi
  unsigned int Length; // r9d
  __m128i *Parameters; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  char *v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int AllMonitorDevicesFromSessionView; // eax
  __int64 v17; // rdx
  char v18; // r13
  __int64 v19; // rcx
  unsigned int v20; // edi
  char *PoolWithTag; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r13d
  __int64 *v27; // rdi
  char *v28; // r13
  char v29; // r12
  int v30; // esi
  unsigned int v31; // edx
  void *v32; // rcx
  unsigned int v33; // edx
  void *v34; // rcx
  PIRP v35; // rcx
  int v37; // eax
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  bool v43; // zf
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int CurrentProcessSessionId; // r12d
  int v48; // eax
  int v49; // eax
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // [rsp+30h] [rbp-38h]
  unsigned int v61; // [rsp+30h] [rbp-38h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v62; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v64; // [rsp+40h] [rbp-28h]
  __m128i v65; // [rsp+48h] [rbp-20h] BYREF
  __int64 v66; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v68; // [rsp+C0h] [rbp+58h] BYREF
  int v69; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v66 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  v7 = -1073741637LL;
  v64 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v51 = *Parameters;
    v52 = *(_QWORD *)(v10 + 24);
    LODWORD(v66) = -1;
    v65 = v51;
    v53 = DxgkPowerOnOffMonitor(
            v52,
            1,
            (unsigned int)&v66,
            (unsigned int)&v65,
            1,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v51, 8).m128i_i64[0]);
    v7 = v53;
    if ( v53 >= 0 )
      goto LABEL_24;
LABEL_70:
    v59 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v59 + 24) = v7;
    WdLogEvent5_WdError(v59);
    goto LABEL_24;
  }
  v11 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301979;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = Parameters->m128i_i64[0];
      Parameters[1].m128i_i32[0] = *(unsigned __int8 *)(v10 + 1156);
      Parameters[1].m128i_i64[1] = *(_QWORD *)(v10 + 152);
      Parameters[2].m128i_i32[0] = 0;
      if ( !*(_DWORD *)(v4 + 156) )
      {
        v49 = 0;
        if ( *(_BYTE *)(v10 + 1152) == 1 )
          v49 = 0x20000000;
        Parameters[2].m128i_i32[0] = v49;
      }
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_24;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( Length >= 0x20 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 32LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 3896);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3896) + 316LL);
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 3896) + 4360LL);
          goto LABEL_24;
        }
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_24;
        if ( Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v66) = 0;
          v68 = D3DDDI_VSSLO_UNINITIALIZED;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(void **)(v10 + 3896),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v66,
                                                         &v68);
            LOBYTE(v39) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v39);
            if ( (int)v7 < 0 )
            {
              v50 = WdLogNewEntry5_WdWarning(v41, v40, v42);
              *(_QWORD *)(v50 + 24) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v50);
            }
            else
            {
              v43 = v68 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v66;
              *((_BYTE *)UserBuffer + 4) = v43;
            }
          }
          goto LABEL_24;
        }
      }
LABEL_61:
      LODWORD(v7) = -1073741789;
      goto LABEL_24;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_61;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v48 = *(_DWORD *)(v4 + 192);
      if ( v48 != -1 && v48 != CurrentProcessSessionId )
        goto LABEL_63;
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672), *(unsigned int *)(v4 + 156), 1) < 0 )
      {
LABEL_64:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_46;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v7 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672), *(unsigned int *)(v4 + 156), 0);
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
LABEL_63:
        v54 = WdLogNewEntry5_WdWarning(v45, v44, v46);
        *(_QWORD *)(v54 + 24) = v7;
        WdLogEvent5_WdWarning(v54);
        goto LABEL_64;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->m128i_i32[1] = 1;
LABEL_46:
    LODWORD(v7) = 0;
    goto LABEL_24;
  }
  v69 = 0;
  v12 = 0LL;
  LOBYTE(v68) = 0;
  v13 = DxgkAcquireSessionModeChangeLock(v11, (__int64)a2);
  v7 = v13;
  if ( v13 < 0 )
    goto LABEL_70;
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2672),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  v7 = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v55 = WdLogNewEntry5_WdError(0x80000000LL, v17);
    *(_QWORD *)(v55 + 24) = v7;
    WdLogEvent5_WdError(v55);
LABEL_67:
    DxgkReleaseSessionModeChangeLock(v57, v56);
    goto LABEL_24;
  }
  v18 = v68;
  v19 = v69 & (unsigned int)-((_BYTE)v68 != D3DDDI_VSSLO_UNINITIALIZED);
  v20 = v19 + *(_DWORD *)(v10 + 3664);
  if ( !v20 )
    goto LABEL_23;
  v62 = D3DKMDT_VOT_HD15;
  LOBYTE(v69) = 0;
  Size = 20 * (v20 + 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  v65.m128i_i64[0] = (__int64)PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v58 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
    *(_QWORD *)(v58 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v58);
    goto LABEL_67;
  }
  memset(PoolWithTag, 0, Size);
  if ( v18 )
  {
    v60 = v20;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView(
                    (struct _LUID *)(v10 + 2672),
                    *(_DWORD *)(v4 + 156),
                    (__int64)v12);
    if ( (int)v7 < 0 )
    {
LABEL_66:
      ExFreePoolWithTag(v12, 0);
      goto LABEL_67;
    }
    v26 = v60;
  }
  else
  {
    v26 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3304;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3304), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v66, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_66;
  }
  v27 = *(__int64 **)(v10 + 3648);
  v28 = &v12[20 * v26];
  if ( !*(_DWORD *)(v10 + 3664) )
    goto LABEL_22;
  v29 = v68;
  v30 = 0;
  while ( *v27 != *(_QWORD *)(v10 + 3648) )
  {
    if ( *((_DWORD *)v27 + 124) != 1 || *((_BYTE *)v27 + 510) != 1 )
      goto LABEL_20;
    v61 = *((_DWORD *)v27 + 126);
    DmmGetVideoOutputTechnology(*(void *const *)(v10 + 3896), v61, &v62, 0LL);
    v28[16] = IsInternalVideoOutput(v62);
    v31 = *(_DWORD *)(v4 + 156);
    v32 = *(void **)(v10 + 3896);
    LOBYTE(v69) = 0;
    DmmIsPresentPathInClientVidPnTopology(v32, v31, v61, (unsigned __int8 *)&v69);
    if ( !(_BYTE)v69 )
    {
      if ( !*((_BYTE *)v27 + 944) )
        goto LABEL_20;
      v33 = *(_DWORD *)(v4 + 156);
      v34 = *(void **)(v10 + 3896);
      LOBYTE(v68) = 0;
      if ( DmmCanAddPresentPathToClientVidPn(v34, v33, v61, (unsigned __int8 *)&v68) < 0 || !(_BYTE)v68 )
        goto LABEL_20;
      v37 = 0;
      goto LABEL_27;
    }
    if ( v29 )
    {
      v37 = 1;
LABEL_27:
      *(_DWORD *)v28 = v37 | 0x20000000;
      *((_DWORD *)v28 + 1) = v61;
      *((_QWORD *)v28 + 1) = *(_QWORD *)(v10 + 2672);
      v28 += 20;
    }
LABEL_20:
    v27 = (__int64 *)*v27;
    if ( (unsigned int)++v30 >= *(_DWORD *)(v10 + 3664) )
      break;
  }
  UserBuffer = v64;
  v12 = (char *)v65.m128i_i64[0];
LABEL_22:
  DpiReleaseCoreSyncAccessSafe(v66, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_23:
  DxgkReleaseSessionModeChangeLock(v19, v17);
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v12;
  v5 = 8LL;
LABEL_24:
  v35 = Irp;
  Irp->IoStatus.Status = v7;
  v35->IoStatus.Information = v5;
  IofCompleteRequest(v35, 1);
  return (unsigned int)v7;
}
