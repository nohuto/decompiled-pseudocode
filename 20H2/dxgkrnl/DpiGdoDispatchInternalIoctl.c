/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C011D760
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C011DCFC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011DFA0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011E21C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C011E5F4 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C011EE20 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011F004 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0120E00 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C014B154 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C015A928 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C0164860 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0172494 (DxgkPowerOnOffMonitor.c)
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
  int v19; // edi
  char *PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r13d
  __int64 *v26; // rdi
  char *v27; // r13
  char v28; // r12
  int v29; // esi
  unsigned int v30; // edx
  void *v31; // rcx
  unsigned int v32; // edx
  void *v33; // rcx
  PIRP v34; // rcx
  int v36; // eax
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  bool v42; // zf
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int CurrentProcessSessionId; // r12d
  int v47; // eax
  int v48; // eax
  __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // [rsp+30h] [rbp-38h]
  unsigned int v58; // [rsp+30h] [rbp-38h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v59; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v61; // [rsp+40h] [rbp-28h]
  __m128i v62; // [rsp+48h] [rbp-20h] BYREF
  __int64 v63; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v65; // [rsp+C0h] [rbp+58h] BYREF
  int v66; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v63 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  v7 = -1073741637LL;
  v61 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v50 = *Parameters;
    v51 = *(_QWORD *)(v10 + 24);
    LODWORD(v63) = -1;
    v62 = v50;
    v52 = DxgkPowerOnOffMonitor(
            v51,
            1,
            (unsigned int)&v63,
            (unsigned int)&v62,
            1,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v50, 8).m128i_i64[0]);
    v7 = v52;
    if ( v52 >= 0 )
      goto LABEL_24;
LABEL_70:
    v56 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v56 + 24) = v7;
    WdLogEvent5_WdError(v56);
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
        v48 = 0;
        if ( *(_BYTE *)(v10 + 1152) == 1 )
          v48 = 0x20000000;
        Parameters[2].m128i_i32[0] = v48;
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
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 3896) + 4400LL);
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
          LODWORD(v63) = 0;
          v65 = D3DDDI_VSSLO_UNINITIALIZED;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 >= 0 )
          {
            CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                         *(void **)(v10 + 3896),
                                                         *(_DWORD *)(v4 + 156),
                                                         (unsigned int *)&v63,
                                                         &v65);
            LOBYTE(v38) = 1;
            LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
            DpiReleaseCoreSyncAccessSafe(a1, v38);
            if ( (int)v7 < 0 )
            {
              v49 = WdLogNewEntry5_WdWarning(v40, v39, v41);
              *(_QWORD *)(v49 + 24) = *(unsigned int *)(v4 + 156);
              WdLogEvent5_WdWarning(v49);
            }
            else
            {
              v42 = v65 == D3DDDI_VSSLO_PROGRESSIVE;
              *UserBuffer = v63;
              *((_BYTE *)UserBuffer + 4) = v42;
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
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(
                                CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995,
                                a2);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v47 = *(_DWORD *)(v4 + 192);
      if ( v47 != -1 && v47 != CurrentProcessSessionId )
        goto LABEL_63;
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672)) < 0 )
      {
LABEL_64:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_46;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v7 = (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672));
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
LABEL_63:
        v53 = WdLogNewEntry5_WdWarning(v44, v43, v45);
        *(_QWORD *)(v53 + 24) = v7;
        WdLogEvent5_WdWarning(v53);
        goto LABEL_64;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->m128i_i32[1] = 1;
LABEL_46:
    LODWORD(v7) = 0;
    goto LABEL_24;
  }
  v66 = 0;
  v12 = 0LL;
  LOBYTE(v65) = 0;
  v13 = DxgkAcquireSessionModeChangeLock(v11);
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
    v54 = WdLogNewEntry5_WdError(0x80000000LL, v17);
    *(_QWORD *)(v54 + 24) = v7;
    WdLogEvent5_WdError(v54);
LABEL_67:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_24;
  }
  v18 = v65;
  v19 = ((_BYTE)v65 != D3DDDI_VSSLO_UNINITIALIZED ? v66 : 0) + *(_DWORD *)(v10 + 3664);
  if ( !v19 )
    goto LABEL_23;
  v59 = D3DKMDT_VOT_HD15;
  LOBYTE(v66) = 0;
  Size = (unsigned int)(20 * (v19 + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  v62.m128i_i64[0] = (__int64)PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v7) = -1073741801;
    v55 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
    *(_QWORD *)(v55 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v55);
    goto LABEL_67;
  }
  memset(PoolWithTag, 0, Size);
  if ( v18 )
  {
    v57 = v19;
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
    v25 = v57;
  }
  else
  {
    v25 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3304;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3304), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v63, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_66;
  }
  v26 = *(__int64 **)(v10 + 3648);
  v27 = &v12[20 * v25];
  if ( !*(_DWORD *)(v10 + 3664) )
    goto LABEL_22;
  v28 = v65;
  v29 = 0;
  while ( *v26 != *(_QWORD *)(v10 + 3648) )
  {
    if ( *((_DWORD *)v26 + 124) != 1 || *((_BYTE *)v26 + 510) != 1 )
      goto LABEL_20;
    v58 = *((_DWORD *)v26 + 126);
    DmmGetVideoOutputTechnology(*(void *const *)(v10 + 3896), v58, &v59, 0LL);
    v27[16] = IsInternalVideoOutput(v59);
    v30 = *(_DWORD *)(v4 + 156);
    v31 = *(void **)(v10 + 3896);
    LOBYTE(v66) = 0;
    DmmIsPresentPathInClientVidPnTopology(v31, v30, v58, (unsigned __int8 *)&v66);
    if ( !(_BYTE)v66 )
    {
      if ( !*((_BYTE *)v26 + 944) )
        goto LABEL_20;
      v32 = *(_DWORD *)(v4 + 156);
      v33 = *(void **)(v10 + 3896);
      LOBYTE(v65) = 0;
      if ( DmmCanAddPresentPathToClientVidPn(v33, v32, v58, (unsigned __int8 *)&v65) < 0 || !(_BYTE)v65 )
        goto LABEL_20;
      v36 = 0;
      goto LABEL_27;
    }
    if ( v28 )
    {
      v36 = 1;
LABEL_27:
      *(_DWORD *)v27 = v36 | 0x20000000;
      *((_DWORD *)v27 + 1) = v58;
      *((_QWORD *)v27 + 1) = *(_QWORD *)(v10 + 2672);
      v27 += 20;
    }
LABEL_20:
    v26 = (__int64 *)*v26;
    if ( (unsigned int)++v29 >= *(_DWORD *)(v10 + 3664) )
      break;
  }
  UserBuffer = v61;
  v12 = (char *)v62.m128i_i64[0];
LABEL_22:
  DpiReleaseCoreSyncAccessSafe(v63, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_23:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v12;
  v5 = 8LL;
LABEL_24:
  v34 = Irp;
  Irp->IoStatus.Status = v7;
  v34->IoStatus.Information = v5;
  IofCompleteRequest(v34, 1);
  return (unsigned int)v7;
}
