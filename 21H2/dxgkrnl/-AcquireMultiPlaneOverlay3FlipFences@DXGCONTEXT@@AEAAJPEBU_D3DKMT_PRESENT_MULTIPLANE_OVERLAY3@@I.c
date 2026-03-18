/*
 * XREFs of ?AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@IPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGSYNCOBJECTLOCK@@PEAVDXGSYNCOBJECTMUTEX@@3@Z @ 0x1C01749CC
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01739B0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C004AB40 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        int a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4,
        struct DXGSYNCOBJECTLOCK *a5,
        struct DXGSYNCOBJECTMUTEX *a6,
        struct DXGSYNCOBJECTMUTEX *a7)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v7; // rbp
  int v8; // r15d
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v9; // rsi
  __int64 v10; // rbx
  char v11; // r8
  unsigned int v12; // r14d
  D3DKMT_MULTIPLANE_OVERLAY3 *v13; // rsi
  UINT LayerIndex; // r9d
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 Value; // rdx
  __int64 v21; // rcx
  int v23; // ecx
  struct DXGPROCESS *Current; // rax
  UINT v25; // ebx
  struct DXGPROCESS *v26; // r15
  char *v27; // r12
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rbp
  int v31; // ecx
  __int64 v32; // rbp
  __int64 v33; // rbp
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v35; // ecx
  struct DXGPROCESS *v36; // rax
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E v37; // ebx
  struct DXGPROCESS *v38; // r15
  char *v39; // r12
  unsigned int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rbp
  int v43; // ecx
  __int64 v44; // rbp
  __int64 v45; // rbp
  struct _VIDSCH_SYNC_OBJECT *v46; // rax
  __int64 v47; // rbx
  UINT v48; // [rsp+50h] [rbp-B8h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  _DWORD v54[16]; // [rsp+88h] [rbp-80h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2738LL) )
    return 0LL;
  if ( *((_BYTE *)a5 + 8) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, a5, 0LL, 0LL);
  v10 = *(_QWORD *)a5;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v10 + 632), 1u);
  *((_BYTE *)a5 + 8) = 1;
  v11 = 0;
  v12 = 0;
  if ( !v9->PresentPlaneCount )
    goto LABEL_11;
  while ( 1 )
  {
    v13 = v9->ppPresentPlanes[v12];
    LayerIndex = v13->LayerIndex;
    v15 = 1 << v13->LayerIndex;
    v48 = v13->LayerIndex;
    if ( (v8 & v15) != 0 )
    {
      v16 = (v8 & (v15 - 1) & 0x55555555) + (((v8 & (unsigned int)(v15 - 1)) >> 1) & 0x55555555);
      v17 = (((v16 & 0x33333333) + ((v16 >> 2) & 0x33333333)) & 0xF0F0F0F)
          + ((((v16 & 0x33333333) + ((v16 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
      v18 = (unsigned __int16)((unsigned __int8)v17 + BYTE1(v17)) + (((v17 & 0xFF00FF) + ((v17 >> 8) & 0xFF00FF)) >> 16);
    }
    else
    {
      v18 = -1;
    }
    v19 = v13[1].LayerIndex;
    v52 = v18 * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8);
    if ( !(_DWORD)v19 )
      goto LABEL_8;
    v23 = 0;
    if ( v12 )
    {
      while ( (_DWORD)v19 != v54[v23] )
      {
        if ( ++v23 >= v12 )
          goto LABEL_20;
      }
      WdLogSingleEntry2(2LL, v19, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Duplicate hFlipToFence (0x%I64x). FlipToFence must be different for every plane, returning 0x%I64x",
        v13[1].LayerIndex,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
LABEL_20:
    v54[v12] = v19;
    Current = DXGPROCESS::GetCurrent();
    v25 = v13[1].LayerIndex;
    v26 = Current;
    v27 = (char *)Current + 248;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v28 = (v25 >> 6) & 0xFFFFFF;
    if ( v28 < *((_DWORD *)v26 + 74) )
    {
      v29 = *((_QWORD *)v26 + 35);
      v30 = v28;
      v31 = *(_DWORD *)(v29 + 16LL * v28 + 8);
      if ( ((v25 >> 25) & 0x60) == (v31 & 0x60) && (v31 & 0x2000) == 0 && (v31 & 0x1F) != 0 )
      {
        v32 = 2 * v30;
        if ( (v31 & 0x1F) == 0xB )
        {
          v33 = *(_QWORD *)(v29 + 8 * v32);
          goto LABEL_27;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v33 = 0LL;
LABEL_27:
    ExReleasePushLockSharedEx(v27, 0LL);
    KeLeaveCriticalRegion();
    if ( !v33 )
    {
      WdLogSingleEntry2(2LL, v13[1].LayerIndex, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hFlipToFence (0x%I64x) not found, returning 0x%I64x",
        v13[1].LayerIndex,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    DXGAUTOMUTEX::Initialize(
      (struct DXGSYNCOBJECTMUTEX *)((char *)a6 + 16 * v12),
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(v33 + 32) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((struct DXGSYNCOBJECTMUTEX *)((char *)a6 + 16 * v12));
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(v33 + 32),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    v7 = a4;
    v11 = 1;
    LayerIndex = v48;
    *(_QWORD *)((char *)a4 + v52 + 808) = VidSchSyncObject;
    *(_QWORD *)((char *)a4 + v52 + 816) = *(_QWORD *)&v13[1].FlipInterval;
LABEL_8:
    Value = v13[1].InputFlags.Value;
    if ( !(_DWORD)Value )
      goto LABEL_9;
    if ( (v13->InputFlags.Value & 1) == 0 )
    {
      v47 = LayerIndex;
      WdLogSingleEntry2(2LL, LayerIndex, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hFlipAwayFence is not supported for disabling plane (0x%I64x), returning 0x%I64x",
        v47,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v35 = 0;
    if ( v12 )
    {
      while ( (_DWORD)Value != v54[v35 + 8] )
      {
        if ( ++v35 >= v12 )
          goto LABEL_34;
      }
      WdLogSingleEntry2(2LL, Value, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Duplicate hFlipAwayFence (0x%I64x). FlipAwayFence must be different for every plane, returning 0x%I64x",
        v13[1].InputFlags.Value,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
LABEL_34:
    v54[v12 + 8] = Value;
    v36 = DXGPROCESS::GetCurrent();
    v37 = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v13[1].InputFlags.Value;
    v38 = v36;
    v39 = (char *)v36 + 248;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v36 + 248));
    v40 = (*(unsigned int *)&v37 >> 6) & 0xFFFFFF;
    if ( v40 < *((_DWORD *)v38 + 74) )
    {
      v41 = *((_QWORD *)v38 + 35);
      v42 = v40;
      v43 = *(_DWORD *)(v41 + 16LL * v40 + 8);
      if ( ((*(unsigned int *)&v37 >> 25) & 0x60) == (v43 & 0x60) && (v43 & 0x2000) == 0 && (v43 & 0x1F) != 0 )
      {
        v44 = 2 * v42;
        if ( (v43 & 0x1F) == 0xB )
        {
          v45 = *(_QWORD *)(v41 + 8 * v44);
          goto LABEL_41;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v45 = 0LL;
LABEL_41:
    ExReleasePushLockSharedEx(v39, 0LL);
    KeLeaveCriticalRegion();
    if ( !v45 )
    {
      WdLogSingleEntry2(2LL, v13[1].InputFlags.Value, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hFlipFromFence (0x%I64x) not found, returning 0x%I64x",
        v13[1].InputFlags.Value,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    DXGAUTOMUTEX::Initialize(
      (struct DXGSYNCOBJECTMUTEX *)((char *)a7 + 16 * v12),
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(v45 + 32) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((struct DXGSYNCOBJECTMUTEX *)((char *)a7 + 16 * v12));
    v46 = DXGSYNCOBJECT::GetVidSchSyncObject(
            *(DXGSYNCOBJECT **)(v45 + 32),
            *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    v7 = a4;
    v11 = 1;
    *(_QWORD *)((char *)a4 + v52 + 824) = v46;
    *(_QWORD *)((char *)a4 + v52 + 832) = *(_QWORD *)&v13[1].AllocationCount;
LABEL_9:
    v9 = a2;
    if ( ++v12 >= a2->PresentPlaneCount )
      break;
    v8 = a3;
  }
  if ( v11 )
    return 0LL;
LABEL_11:
  if ( !*((_BYTE *)a5 + 8) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, a5, 0LL, 0LL);
  v21 = *(_QWORD *)a5;
  *((_BYTE *)a5 + 8) = 0;
  ExReleaseResourceLite(*(PERESOURCE *)(v21 + 632));
  KeLeaveCriticalRegion();
  return 0LL;
}
