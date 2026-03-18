/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C0276204
 * Callers:
 *     DxgkUpdateOverlay @ 0x1C0277C90 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C021C18C (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(struct _EX_RUNDOWN_REF *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall **v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v9; // rax
  ULONG_PTR Count; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  UINT PrivateDriverDataSize; // eax
  __int64 v21; // rdx
  PVOID v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 hAllocation; // rcx
  size_t v26; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v28; // r9
  int updated; // edi
  __int64 v30; // rdx
  struct _EX_RUNDOWN_REF *v31[2]; // [rsp+30h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v32; // [rsp+40h] [rbp-68h] BYREF

  v3 = (__int64)this;
  v31[1] = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 274LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL))
    || v8[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[84] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[83] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[82] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 275LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *(_DWORD *)(v3 + 32) == -1 )
    return 0LL;
  memset(&v32, 0, sizeof(v32));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL),
    (DXGALLOCATIONREFERENCE *)v31,
    a2->OverlayInfo.hAllocation);
  if ( !v31[0] )
    goto LABEL_28;
  v13 = *(_QWORD *)(v31[0][1].Count + 16);
  v14 = *(_QWORD *)(v3 + 16);
  v15 = *(_QWORD *)(v14 + 16);
  v16 = *(_QWORD *)(v15 + 16);
  if ( *(_QWORD *)(v13 + 16) != v16 )
  {
    v17 = WdLogNewEntry5_WdError(v15, v16);
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v3 + 16);
    *(struct _EX_RUNDOWN_REF **)(v17 + 32) = v31[0];
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v17 + 40) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v31, v18);
    return (unsigned int)v3;
  }
  Count = v31[0][6].Count;
  v12 = *(unsigned int *)(Count + 4);
  if ( (v12 & 8) == 0 || (v31[0][9].Count & 0x800) == 0 )
  {
LABEL_28:
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, Count, v13);
    v24[3] = *(_QWORD *)(v3 + 16);
    hAllocation = a2->OverlayInfo.hAllocation;
    v3 = -1073741811LL;
    goto LABEL_29;
  }
  v32.OverlayInfo.hAllocation = *(HANDLE *)(Count + 16);
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 2680LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v19 + 640) + 8LL)
                                                                          + 224LL))(
    *(_QWORD *)(v19 + 648),
    *(_QWORD *)(v31[0][6].Count + 8),
    &v32.OverlayInfo.SegmentId,
    &v32.OverlayInfo.PhysicalAddress,
    0LL);
  v32.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
  v32.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
  PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
  {
    v32.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
    v22 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v32.OverlayInfo.pPrivateDriverData = v22;
    if ( !v22 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v21, v23);
      v24[3] = v3;
      hAllocation = v32.OverlayInfo.PrivateDriverDataSize;
      v3 = -1073741801LL;
LABEL_29:
      v24[4] = hAllocation;
      v24[5] = v3;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_30;
    }
    v26 = v32.OverlayInfo.PrivateDriverDataSize;
    pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
    v28 = (ULONG64)pPrivateDriverData + v32.OverlayInfo.PrivateDriverDataSize;
    if ( v28 < (unsigned __int64)pPrivateDriverData || v28 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v22, pPrivateDriverData, v26);
  }
  else
  {
    a2->OverlayInfo.PrivateDriverDataSize = 0;
    a2->OverlayInfo.pPrivateDriverData = 0LL;
  }
  updated = ADAPTER_RENDER::DdiUpdateOverlay(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 16LL) + 2680LL),
              *(void **)(v3 + 40),
              &v32);
  if ( updated >= 0 )
    *(struct _EX_RUNDOWN_REF **)(v3 + 48) = v31[0];
  operator delete[](v32.OverlayInfo.pPrivateDriverData);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v31, v30);
  return (unsigned int)updated;
}
