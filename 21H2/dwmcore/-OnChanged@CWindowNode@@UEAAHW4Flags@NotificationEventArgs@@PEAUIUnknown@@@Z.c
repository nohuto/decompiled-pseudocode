/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DDBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180013CA0 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D2C0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006EAC0 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B354 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009BC70 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18009D4D8 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009F678 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C4980 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x1800DDC50 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::OnChanged(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v5; // edi
  int (__fastcall **v7)(_QWORD *, GUID *, __int64 *); // rax
  int v8; // eax
  FastRegion::Internal::CRgnData **v9; // rax
  int v10; // esi
  int v11; // r14d
  __int64 v12; // r8
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v14; // rcx
  void *v15; // [rsp+20h] [rbp-29h] BYREF
  __int64 v16; // [rsp+28h] [rbp-21h] BYREF
  float v17[2]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-9h]
  _DWORD *v20; // [rsp+48h] [rbp-1h]
  __int64 v21; // [rsp+50h] [rbp+7h]
  int v22; // [rsp+58h] [rbp+Fh]
  _DWORD v23[4]; // [rsp+68h] [rbp+1Fh]
  _DWORD v24[4]; // [rsp+78h] [rbp+2Fh] BYREF

  v5 = 4;
  if ( a2 == 5 )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)a1);
  }
  else
  {
    v15 = 0LL;
    if ( a2 == 1
      && (*(_BYTE *)(a1 + 88) & 4) == 0
      && a3
      && *(_QWORD *)(a1 + 864)
      && (!*(_BYTE *)(a1 + 917)
       || (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(*(CCompositionSurfaceBitmap **)(a1 + 864)) != 1)
      && (int)CMILCOMBase::InternalQueryInterface(
                *(CMILCOMBase **)(a1 + 864),
                &GUID_00000000_0000_0000_c000_000000000046,
                &v15) >= 0
      && a3 == v15 )
    {
      v7 = (int (__fastcall **)(_QWORD *, GUID *, __int64 *))*a3;
      v16 = 0LL;
      if ( (*v7)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, &v16) >= 0 )
      {
        v8 = *(_DWORD *)(a1 + 684) - *(_DWORD *)(a1 + 676);
        v17[0] = (float)(*(_DWORD *)(a1 + 680) - *(_DWORD *)(a1 + 672));
        v17[1] = (float)v8;
        v9 = (FastRegion::Internal::CRgnData **)(*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v16 + 24LL))(
                                                  v16,
                                                  v17);
        if ( v9 )
        {
          v10 = *(_DWORD *)(a1 + 672) - *(_DWORD *)(a1 + 688);
          v11 = *(_DWORD *)(a1 + 676) - *(_DWORD *)(a1 + 692);
          FastRegion::Internal::CRgnData::BeginIterator(*v9, (struct FastRegion::CRegion::Iterator *)v18);
          while ( (unsigned __int64)v20 < v19 )
          {
            v12 = 2 * v22;
            v23[0] = v10 + *(_DWORD *)(v21 + 4 * v12);
            v23[1] = v11 + *v20;
            v23[2] = v10 + *(_DWORD *)(v21 + 4 * v12 + 4);
            v23[3] = v11 + v20[2];
            for ( i = 0LL; i < 4; ++i )
              *(float *)&v24[i] = (float)(int)v23[i];
            CVisual::AddAdditionalDirtyRect((CVisual *)a1, (__int64)v24);
            FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v18);
          }
          v5 = 0;
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
    }
    if ( !CWindowNode::ProcessReadyFlipExImages((CWindowNode *)a1) && v5 )
      CVisual::PropagateFlags(a1, v5);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v15);
  }
  return 0LL;
}
