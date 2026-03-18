/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x1C02C63B4
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0020060 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C00196A0 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C01657D8 (DpiPdoHandleChildConnectionChange.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C0181654 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C02C7234 (DpiFdoRemoveChildDescriptor.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02DFD3C (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02DFDFC (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02DFEC4 (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int *PoolWithTag; // r15
  __int64 v10; // rax
  int v11; // edx
  _QWORD *ChildDescriptor; // rdx
  __int64 v13; // rcx
  int v14; // r10d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v15; // r11d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // edi
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r9d
  int v30; // r10d
  __int64 v31; // rdx
  unsigned int v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-ACh] BYREF
  _DXGK_CHILD_CAPABILITIES v35; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v36[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A4h] [rbp-5Ch]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  _DWORD v44[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+F0h] [rbp-10h]
  unsigned int v48; // [rsp+F4h] [rbp-Ch]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  __int64 v51; // [rsp+100h] [rbp+0h]

  v36[0] = 30;
  v36[1] = 72;
  v3 = *(_DWORD *)(a2 + 8);
  v33 = 0;
  v38 = 0LL;
  v5 = 1;
  v34 = 1;
  v40 = HIBYTE(v3) & 0xF;
  v6 = *(_DWORD *)(a2 + 16);
  LODWORD(v7) = 0;
  v8 = *(_QWORD *)(a1 + 5936);
  PoolWithTag = 0LL;
  v42 = v6;
  v10 = *(_QWORD *)(a1 + 2672);
  v41 = v3 & 0xFFFFFF;
  v43 = v10;
  v35 = 0LL;
  v37 = 0LL;
  memset(&v36[2], 0, 24);
  v39 = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v36, v8);
  v11 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
  v35.Type.Other.MustBeZero = *(_DWORD *)(a2 + 12);
  v35.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v35.Type.VideoOutput.SupportsSdtvModes = 0;
  v35.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v11);
  if ( !ChildDescriptor )
  {
    LODWORD(v7) = -1073741810;
    v16 = WdLogNewEntry5_WdError(v13, 0LL);
    *(_QWORD *)(v16 + 24) = -1073741810LL;
LABEL_3:
    WdLogEvent5_WdError(v16);
LABEL_33:
    v31 = *(_QWORD *)(a1 + 5936);
    v46 = 0LL;
    v51 = *(_QWORD *)(a1 + 2672);
    v44[0] = 30;
    v44[1] = 72;
    v45 = 0LL;
    memset(&v44[2], 0, 24);
    v47 = 93;
    v48 = v5;
    v49 = v7;
    v50 = 0;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v44, v31);
    return (unsigned int)v7;
  }
  if ( (((v14 & 0xF000000) - 83886080) & 0xFEFFFFFF) != 0 )
  {
    if ( (v14 & 0xF000000) != 0x4000000 )
      return (unsigned int)v7;
    v34 = *(_DWORD *)(a1 + 3480);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v34, 0x74727044u);
    if ( !PoolWithTag )
    {
      v5 = 0x80000000;
      LODWORD(v7) = -1073741801;
      v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v21);
      goto LABEL_33;
    }
    LODWORD(v7) = DmmBuildDynamicVideoPresentTargetChildRelations(
                    *(void **)(a1 + 3896),
                    *(_DWORD *)(a2 + 8) & 0xFFFFFF,
                    &v34,
                    PoolWithTag,
                    (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
    if ( (int)v7 >= 0 )
    {
      v22 = v34;
      while ( v22 )
      {
        v23 = DpiFdoGetChildDescriptor(a1, PoolWithTag[--v22]);
        v24 = v23;
        if ( v23[6] )
        {
          v25 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((_DWORD *)v23 + 6),
                  *((_DWORD *)v23 + 1),
                  0,
                  0,
                  0,
                  0,
                  0,
                  (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(a2 + 24));
          v7 = v25;
          if ( v25 < 0 )
          {
            v5 = 2;
            v28 = WdLogNewEntry5_WdError(v27, v26);
            *(_QWORD *)(v28 + 24) = v7;
            WdLogEvent5_WdError(v28);
            goto LABEL_30;
          }
        }
        LODWORD(v7) = DmmDestroyDynamicVideoPresentTarget(
                        *(void **)(a1 + 3896),
                        *((_DWORD *)v24 + 6),
                        (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
        if ( (int)v7 < 0 )
          goto LABEL_29;
        DpiFdoRemoveChildDescriptor(a1, v24);
      }
    }
    goto LABEL_29;
  }
  if ( ChildDescriptor[6] )
  {
    v5 = 2;
LABEL_19:
    LODWORD(v7) = -1073741811;
    v16 = WdLogNewEntry5_WdError(v13, ChildDescriptor);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    goto LABEL_3;
  }
  if ( IsInternalVideoOutput(v15) )
  {
    v5 = 4;
    goto LABEL_19;
  }
  if ( DpiFdoGetChildDescriptor(a1, *(_DWORD *)(a2 + 16)) )
  {
    if ( v29 == 83886080 )
    {
      v5 = 3;
      goto LABEL_19;
    }
  }
  else
  {
    LODWORD(v7) = DpiFdoCreateChildDescriptor(a1, (__int64)ChildDescriptor, 0, &v34, (__int128 *)&v35, 0);
    if ( (int)v7 < 0 )
    {
      v5 = 0x80000000;
      goto LABEL_32;
    }
    v30 = *(_DWORD *)(a2 + 8);
    LOBYTE(v5) = 0;
    LODWORD(ChildDescriptor) = *(_DWORD *)(a2 + 16);
  }
  LODWORD(v7) = DmmCreateDynamicVideoPresentTarget(
                  *(void **)(a1 + 3896),
                  (unsigned int)ChildDescriptor,
                  v30 & 0xFFFFFF,
                  &v35,
                  v5,
                  (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v33);
LABEL_29:
  v5 = v33;
LABEL_30:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_32:
  if ( (int)v7 < 0 )
    goto LABEL_33;
  return (unsigned int)v7;
}
