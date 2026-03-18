/*
 * XREFs of ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x1801B1A44
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180185FEC (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800770E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180164308 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 */

void __fastcall CDesktopTree::GetIntersectingMonitorTargets(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r15
  unsigned __int8 (__fastcall ***v7)(_QWORD, __int128 *); // rcx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 5728);
  v5 = *(_QWORD *)(a1 + 5736);
  while ( v3 != v5 )
  {
    v7 = *(unsigned __int8 (__fastcall ****)(_QWORD, __int128 *))v3;
    v12 = 0LL;
    v14 = 0LL;
    if ( (**v7)(v7, &v14)
      && !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(a2)
      && !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v14)
      && a2[2] > (int)v14
      && SDWORD2(v14) > *a2
      && a2[3] > SDWORD1(v14)
      && SHIDWORD(v14) > a2[1] )
    {
      v8 = *(_QWORD *)v3 + *(int *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 4LL);
      v9 = v12;
      v12 = 0LL;
      if ( v9 )
      {
        v10 = v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v8 + 8))(
             v8 + 8,
             &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
             &v12) >= 0 )
      {
        v11 = (_QWORD *)a3[1];
        v13 = v12;
        if ( (_QWORD *)a3[2] == v11 )
        {
          std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(a3, v11, &v13);
        }
        else
        {
          *v11 = v12;
          a3[1] += 8LL;
        }
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
    v3 += 8LL;
  }
}
