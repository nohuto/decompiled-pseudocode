/*
 * XREFs of DpiFdoHandleTargetConnectionState @ 0x1C038A234
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001E234 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C020E8E8 (DpiFdoCreateChildDescriptor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 *     DpiFdoRemoveChildDescriptor @ 0x1C038B124 (DpiFdoRemoveChildDescriptor.c)
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03A4580 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03A4634 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03A46F0 (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleTargetConnectionState(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // edi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // edx
  _QWORD *ChildDescriptor; // rdx
  int v12; // r10d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v13; // r11d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int *PoolWithTag; // r12
  unsigned int v17; // edi
  _QWORD *v18; // rax
  _QWORD *v19; // r14
  int v20; // eax
  unsigned int v21; // edx
  int v22; // r9d
  int v23; // r10d
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-ACh] BYREF
  _DXGK_CHILD_CAPABILITIES v29; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v30[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A4h] [rbp-5Ch]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  _DWORD v38[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+F0h] [rbp-10h]
  unsigned int v42; // [rsp+F4h] [rbp-Ch]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  __int64 v45; // [rsp+100h] [rbp+0h]

  v30[0] = 30;
  v30[1] = 72;
  v3 = a2[2];
  v27 = 0;
  v32 = 0LL;
  v5 = 1;
  v28 = 1;
  v34 = HIBYTE(v3) & 0xF;
  v6 = a2[4];
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 5728);
  v36 = v6;
  v9 = *(_QWORD *)(a1 + 2672);
  v35 = v3 & 0xFFFFFF;
  v37 = v9;
  v29 = 0LL;
  v31 = 0LL;
  memset(&v30[2], 0, 24);
  v33 = 92;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, v8);
  v10 = a2[2] & 0xFFFFFF;
  v29.Type.Other.MustBeZero = a2[3];
  v29.Type.VideoOutput.MonitorOrientationAwareness = D3DKMDT_MOA_NONE;
  v29.Type.VideoOutput.SupportsSdtvModes = 0;
  v29.HpdAwareness = HpdAwarenessInterruptible;
  ChildDescriptor = DpiFdoGetChildDescriptor(a1, v10);
  if ( !ChildDescriptor )
  {
    v7 = -1073741810;
    v14 = -1073741810LL;
LABEL_3:
    v15 = 2LL;
LABEL_4:
    WdLogSingleEntry1(v15, v14);
LABEL_31:
    v25 = *(_QWORD *)(a1 + 5728);
    v40 = 0LL;
    v45 = *(_QWORD *)(a1 + 2672);
    v38[0] = 30;
    v38[1] = 72;
    v39 = 0LL;
    memset(&v38[2], 0, 24);
    v41 = 93;
    v42 = v5;
    v43 = v7;
    v44 = 0;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v38, v25);
    return (unsigned int)v7;
  }
  if ( (((v12 & 0xF000000) - 83886080) & 0xFEFFFFFF) != 0 )
  {
    if ( (v12 & 0xF000000) != 0x4000000 )
      return (unsigned int)v7;
    v28 = *(_DWORD *)(a1 + 3480);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v28, 0x74727044u);
    if ( !PoolWithTag )
    {
      v14 = -1073741801LL;
      v5 = 0x80000000;
      v7 = -1073741801;
      v15 = 6LL;
      goto LABEL_4;
    }
    v7 = DmmBuildDynamicVideoPresentTargetChildRelations(
           *(void **)(a1 + 3896),
           a2[2] & 0xFFFFFF,
           &v28,
           PoolWithTag,
           (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v27);
    if ( v7 >= 0 )
    {
      v17 = v28;
      while ( v17 )
      {
        v18 = DpiFdoGetChildDescriptor(a1, PoolWithTag[--v17]);
        v19 = v18;
        if ( v18[6] )
        {
          v20 = DpiPdoHandleChildConnectionChange(
                  *(_QWORD *)(a1 + 24),
                  *((_DWORD *)v18 + 6),
                  *((_DWORD *)v18 + 1),
                  0,
                  0,
                  0,
                  0,
                  0,
                  0LL,
                  (__int64)(a2 + 10));
          v7 = v20;
          if ( v20 < 0 )
          {
            v5 = 2;
            WdLogSingleEntry1(2LL, v20);
            goto LABEL_17;
          }
        }
        v7 = DmmDestroyDynamicVideoPresentTarget(
               *(void **)(a1 + 3896),
               *((_DWORD *)v19 + 6),
               (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v27);
        if ( v7 < 0 )
          break;
        DpiFdoRemoveChildDescriptor(a1, v19);
      }
    }
    v5 = v27;
LABEL_17:
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    if ( ChildDescriptor[6] )
    {
      v14 = -1073741811LL;
      v5 = 2;
      v7 = -1073741811;
      v15 = 2LL;
      goto LABEL_4;
    }
    if ( IsInternalVideoOutput(v13) )
    {
      v14 = -1073741811LL;
      v5 = 4;
      v7 = -1073741811;
      goto LABEL_3;
    }
    if ( DpiFdoGetChildDescriptor(a1, a2[4]) )
    {
      if ( v22 == 83886080 )
      {
        v14 = -1073741811LL;
        v5 = 3;
        v7 = -1073741811;
        goto LABEL_3;
      }
    }
    else
    {
      v7 = DpiFdoCreateChildDescriptor(a1, v21, 0, &v28, (__int128 *)&v29, 0);
      if ( v7 < 0 )
      {
        v5 = 0x80000000;
        goto LABEL_31;
      }
      v23 = a2[2];
      LOBYTE(v5) = 0;
      v21 = a2[4];
    }
    v24 = DmmCreateDynamicVideoPresentTarget(
            *(void **)(a1 + 3896),
            v21,
            v23 & 0xFFFFFF,
            &v29,
            v5,
            (enum _CONNECTION_CHANGE_FAILURE_REASON *)&v27);
    v5 = v27;
    v7 = v24;
  }
  if ( v7 < 0 )
    goto LABEL_31;
  return (unsigned int)v7;
}
