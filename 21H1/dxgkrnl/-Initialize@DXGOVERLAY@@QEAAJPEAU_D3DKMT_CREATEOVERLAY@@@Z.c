/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0275DB8
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C024FBF4 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000F100 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C021141C (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C0214C4C (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _EX_RUNDOWN_REF *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  D3DKMT_HANDLE v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  struct _EX_RUNDOWN_REF *v40[2]; // [rsp+30h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v41; // [rsp+40h] [rbp-39h] BYREF

  v6 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v5 + 608) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v5 + 672) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v5 + 664) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v5 + 656) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v7 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v5 + 2680), this);
    *((_DWORD *)this + 8) = v7;
    if ( v7 == -1 )
    {
      v12 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v12 + 24) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      WdLogEvent5_WdLowResource(v12);
      return 3221225626LL;
    }
    hAllocation = a2->OverlayInfo.hAllocation;
    v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *(_DWORD *)(v15 + 232);
        if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v18);
      }
      ExAcquirePushLockSharedEx(v15 + 208, 0LL);
    }
    v19 = (hAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *(_DWORD *)(v15 + 256) )
    {
      v20 = *(_QWORD *)(v15 + 240);
      v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) != 0 )
      {
        v22 = v21 & 0x1F;
        if ( (_BYTE)v22 == 5 )
        {
          v24 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * (unsigned int)v19);
          goto LABEL_21;
        }
        v23 = WdLogNewEntry5_WdError(v22, 2LL * (unsigned int)v19);
        *(_QWORD *)(v23 + 24) = 267LL;
        WdLogEvent5_WdError(v23);
      }
    }
    v24 = 0LL;
LABEL_21:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v40, v24);
    ExReleasePushLockSharedEx(v15 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( !v40[0] )
      goto LABEL_31;
    v28 = *((_QWORD *)this + 2);
    v25 = *(_QWORD *)(v40[0][1].Count + 16);
    v29 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
    if ( *(_QWORD *)(v25 + 16) != v29 )
    {
      v30 = WdLogNewEntry5_WdError(v29, v25);
      v31 = -1073741811;
      *(_QWORD *)(v30 + 24) = *((_QWORD *)this + 2);
      *(struct _EX_RUNDOWN_REF **)(v30 + 32) = v40[0];
      *(_QWORD *)(v30 + 40) = -1073741811LL;
      WdLogEvent5_WdError(v30);
LABEL_33:
      v6 = v31;
      goto LABEL_34;
    }
    v26 = *(unsigned int *)(v40[0][6].Count + 4);
    if ( (v26 & 8) != 0 && (v40[0][9].Count & 0x800) != 0 )
    {
      memset(&v41, 0, sizeof(v41));
      v41.VidPnSourceId = a2->VidPnSourceId;
      v41.OverlayInfo.hAllocation = *(HANDLE *)(v40[0][6].Count + 16);
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 2680LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v33 + 640) + 8LL)
                                                                              + 224LL))(
        *(_QWORD *)(v33 + 648),
        *(_QWORD *)(v40[0][6].Count + 8),
        &v41.OverlayInfo.SegmentId,
        &v41.OverlayInfo.PhysicalAddress,
        0LL);
      v41.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v41.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      v41.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      v41.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
      v31 = ADAPTER_RENDER::DdiCreateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2680LL),
              &v41,
              v34);
      if ( v31 < 0 )
        goto LABEL_33;
      *((_QWORD *)this + 5) = v41.hOverlay;
      *((struct _EX_RUNDOWN_REF **)this + 6) = v40[0];
      v35 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
      *((_DWORD *)this + 6) = v35;
      if ( v35 )
      {
        a2->hOverlay = v35;
        *((_DWORD *)this + 7) = 1;
LABEL_34:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v40, v32);
        return v6;
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v32, v37);
      v31 = -1073741801;
      v38[3] = this;
      v38[4] = -1073741801LL;
    }
    else
    {
LABEL_31:
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v31 = -1073741811;
      v38[3] = this;
      v38[4] = a2->OverlayInfo.hAllocation;
      v38[5] = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v38);
    goto LABEL_33;
  }
  v39 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
  v39[3] = this;
  v39[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v39[5] = -1073741637LL;
  WdLogEvent5_WdError(v39);
  return 3221225659LL;
}
