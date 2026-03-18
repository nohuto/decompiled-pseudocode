/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C01B3730
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C01A455C (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01B3CC0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C01B4798 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C01B5D54 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C01E1BC4 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C01E5698 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
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
  int CurrentIntegerVSyncFromClientVidPnSource; // eax
  __int64 v12; // rdx
  bool v13; // zf
  char *v14; // rsi
  int v15; // eax
  int AllMonitorDevicesFromSessionView; // eax
  char v17; // r13
  int v18; // edi
  char *PoolWithTag; // rax
  unsigned int v20; // r13d
  __int64 *v21; // rdi
  char *v22; // r13
  char v23; // r12
  int v24; // esi
  unsigned int v25; // edx
  void *v26; // rcx
  unsigned int v27; // edx
  void *v28; // rcx
  PIRP v29; // rcx
  int v31; // eax
  int CurrentProcessSessionId; // r12d
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // [rsp+30h] [rbp-38h]
  unsigned int v45; // [rsp+30h] [rbp-38h]
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v46; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v48; // [rsp+40h] [rbp-28h]
  int v49[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v50; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v52; // [rsp+C0h] [rbp+58h] BYREF
  int v53; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v50 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  LODWORD(v7) = -1073741637;
  v48 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v38 = *Parameters;
    v39 = *(_QWORD *)(v10 + 24);
    LODWORD(v50) = -1;
    *(__m128i *)v49 = v38;
    v40 = DxgkPowerOnOffMonitor(
            v39,
            1,
            (int)&v50,
            (int)v49,
            1,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v38, 8).m128i_i64[0]);
    v7 = v40;
    if ( v40 >= 0 )
      goto LABEL_33;
    goto LABEL_74;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = Parameters->m128i_i64[0];
      Parameters[1].m128i_i32[0] = *(unsigned __int8 *)(v10 + 1157);
      Parameters[1].m128i_i64[1] = *(_QWORD *)(v10 + 152);
      Parameters[2].m128i_i32[0] = 0;
      if ( !*(_DWORD *)(v4 + 156) )
      {
        v35 = 0;
        if ( *(_BYTE *)(v10 + 1152) == 1 )
          v35 = 0x20000000;
        Parameters[2].m128i_i32[0] = v35;
      }
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_33;
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
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3896) + 404LL);
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 3896) + 4544LL);
          goto LABEL_33;
        }
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_33;
        if ( Length >= 8 && UserBuffer )
        {
          LOBYTE(a2) = 1;
          LODWORD(v50) = 0;
          v52 = D3DDDI_VSSLO_UNINITIALIZED;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, a2);
          if ( (int)v7 < 0 )
            goto LABEL_33;
          CurrentIntegerVSyncFromClientVidPnSource = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                                                       *(void **)(v10 + 3896),
                                                       *(_DWORD *)(v4 + 156),
                                                       (unsigned int *)&v50,
                                                       &v52);
          LOBYTE(v12) = 1;
          LODWORD(v7) = CurrentIntegerVSyncFromClientVidPnSource;
          DpiReleaseCoreSyncAccessSafe(a1, v12);
          if ( (int)v7 >= 0 )
          {
            v13 = v52 == D3DDDI_VSSLO_PROGRESSIVE;
            *UserBuffer = v50;
            *((_BYTE *)UserBuffer + 4) = v13;
            goto LABEL_33;
          }
          v36 = *(unsigned int *)(v4 + 156);
          v37 = 3LL;
LABEL_59:
          WdLogSingleEntry1(v37, v36);
          goto LABEL_33;
        }
      }
LABEL_62:
      LODWORD(v7) = -1073741789;
      goto LABEL_33;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_62;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v33 = *(_DWORD *)(v4 + 192);
      if ( v33 != -1 && v33 != CurrentProcessSessionId )
      {
        v41 = -1073741637LL;
LABEL_66:
        WdLogSingleEntry1(3LL, v41);
        goto LABEL_67;
      }
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672)) < 0 )
      {
LABEL_67:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_46;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v34 = DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672));
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
        v41 = v34;
        goto LABEL_66;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->m128i_i32[1] = 1;
LABEL_46:
    LODWORD(v7) = 0;
    goto LABEL_33;
  }
  v53 = 0;
  LOBYTE(v52) = 0;
  v14 = 0LL;
  v15 = DxgkAcquireSessionModeChangeLock(0);
  v7 = v15;
  if ( v15 < 0 )
  {
LABEL_74:
    v37 = 2LL;
    v36 = v7;
    goto LABEL_59;
  }
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView(
                                       (struct _LUID *)(v10 + 2672),
                                       *(_DWORD *)(v4 + 156),
                                       0LL);
  LODWORD(v7) = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v42 = AllMonitorDevicesFromSessionView;
    v43 = 2LL;
LABEL_69:
    WdLogSingleEntry1(v43, v42);
LABEL_72:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_33;
  }
  v17 = v52;
  v18 = ((_BYTE)v52 != D3DDDI_VSSLO_UNINITIALIZED ? v53 : 0) + *(_DWORD *)(v10 + 3664);
  if ( !v18 )
    goto LABEL_32;
  v46 = D3DKMDT_VOT_HD15;
  LOBYTE(v53) = 0;
  Size = (unsigned int)(20 * (v18 + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, Size, 0x74727044u);
  *(_QWORD *)v49 = PoolWithTag;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v42 = -1073741801LL;
    LODWORD(v7) = -1073741801;
    v43 = 6LL;
    goto LABEL_69;
  }
  memset(PoolWithTag, 0, Size);
  if ( v17 )
  {
    v44 = v18;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView(
                    (struct _LUID *)(v10 + 2672),
                    *(_DWORD *)(v4 + 156),
                    (__int64)v14);
    if ( (int)v7 < 0 )
    {
LABEL_71:
      ExFreePoolWithTag(v14, 0);
      goto LABEL_72;
    }
    v20 = v44;
  }
  else
  {
    v20 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3304;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3304), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v50, 0LL);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_71;
  }
  v21 = *(__int64 **)(v10 + 3648);
  v22 = &v14[20 * v20];
  if ( !*(_DWORD *)(v10 + 3664) )
    goto LABEL_31;
  v23 = v52;
  v24 = 0;
  while ( *v21 != *(_QWORD *)(v10 + 3648) )
  {
    if ( *((_DWORD *)v21 + 124) != 1 || *((_BYTE *)v21 + 510) != 1 )
      goto LABEL_29;
    v45 = *((_DWORD *)v21 + 126);
    DmmGetVideoOutputTechnology(*(void *const *)(v10 + 3896), v45, &v46, 0LL);
    v22[16] = IsInternalVideoOutput(v46);
    v25 = *(_DWORD *)(v4 + 156);
    v26 = *(void **)(v10 + 3896);
    LOBYTE(v53) = 0;
    DmmIsPresentPathInClientVidPnTopology(v26, v25, v45, (unsigned __int8 *)&v53);
    if ( !(_BYTE)v53 )
    {
      if ( !*((_BYTE *)v21 + 944) )
        goto LABEL_29;
      v27 = *(_DWORD *)(v4 + 156);
      v28 = *(void **)(v10 + 3896);
      LOBYTE(v52) = 0;
      if ( DmmCanAddPresentPathToClientVidPn(v28, v27, v45, (unsigned __int8 *)&v52) < 0 || !(_BYTE)v52 )
        goto LABEL_29;
      v31 = 0;
      goto LABEL_36;
    }
    if ( v23 )
    {
      v31 = 1;
LABEL_36:
      *(_DWORD *)v22 = v31 | 0x20000000;
      *((_DWORD *)v22 + 1) = v45;
      *((_QWORD *)v22 + 1) = *(_QWORD *)(v10 + 2672);
      v22 += 20;
    }
LABEL_29:
    v21 = (__int64 *)*v21;
    if ( (unsigned int)++v24 >= *(_DWORD *)(v10 + 3664) )
      break;
  }
  UserBuffer = v48;
  v14 = *(char **)v49;
LABEL_31:
  DpiReleaseCoreSyncAccessSafe(v50, 0LL);
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_32:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v14;
  v5 = 8LL;
LABEL_33:
  v29 = Irp;
  Irp->IoStatus.Status = v7;
  v29->IoStatus.Information = v5;
  IofCompleteRequest(v29, 1);
  return (unsigned int)v7;
}
