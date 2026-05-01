/*
 * XREFs of ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1803D07C0
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180048290 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800A5F5C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x18017CFF0 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180186B34 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1803CB304 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1803D0674 (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     WindowRelativePositioning::_anonymous_namespace_::MoveBy @ 0x1803D0EC4 (WindowRelativePositioning--_anonymous_namespace_--MoveBy.c)
 */

// Hidden C++ exception states: #wind=139
struct tagRECT *__fastcall WindowRelativePositioning::GetAdjacentPosition(
        WindowRelativePositioning *this,
        __m128i *__return_ptr retstr,
        const struct tagRECT *a3,
        const struct tagSIZE *a4,
        const struct tagRECT *a5,
        __int64 a6,
        const unsigned __int16 *a7,
        struct tagRECT *a8)
{
  WindowRelativePositioning *v11; // r14
  int ScaleFactorForRect; // eax
  int v13; // ecx
  _BYTE *v14; // rsi
  __int64 v15; // rdi
  _BYTE *v16; // rdi
  __int64 v17; // rbx
  _BYTE *v18; // rdi
  _BYTE *v19; // rdi
  _BYTE *v20; // rdi
  _BYTE *v21; // rdi
  __int64 *v22; // r8
  __int64 v23; // rdi
  _BYTE *v24; // rdi
  _BYTE *v25; // rdi
  _BYTE *v26; // rdi
  __m128i v27; // xmm0
  __int128 v28; // xmm7
  __int64 (__fastcall *v29)(const unsigned __int16 *, __int64, __int64 *); // rbx
  int v30; // eax
  _BYTE *v31; // r12
  _BYTE *v32; // r14
  _BYTE *v33; // r15
  __int64 v34; // rbx
  int (__fastcall *v35)(__int64, GUID *, __int64 *); // r13
  _DWORD *v36; // r13
  _BYTE *v37; // rbx
  struct tagRECT *v38; // rax
  struct tagRECT v39; // xmm6
  _DWORD *v40; // rcx
  struct tagRECT *result; // rax
  __int128 v42; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v43; // [rsp+48h] [rbp-C0h]
  __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v48[2]; // [rsp+70h] [rbp-98h] BYREF
  int v49; // [rsp+80h] [rbp-88h]
  struct tagRECT *v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h] BYREF
  int v52; // [rsp+98h] [rbp-70h]
  __int128 v53; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE *v54; // [rsp+B0h] [rbp-58h]
  __int64 v55; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v57; // [rsp+C8h] [rbp-40h]
  struct tagRECT *v58; // [rsp+D0h] [rbp-38h]
  __int64 v59; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v61; // [rsp+E8h] [rbp-20h]
  __m128i v62; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v63; // [rsp+100h] [rbp-8h] BYREF

  v11 = this;
  v50 = (struct tagRECT *)this;
  v51 = a6;
  v58 = a8;
  ScaleFactorForRect = GetScaleFactorForRect(a8);
  v49 = 10 * ScaleFactorForRect / 100;
  v13 = retstr->m128i_i32[2] - retstr->m128i_i32[0];
  v48[0] = (unsigned int)(a4[1].cx + a4->cx - a3->left - v49);
  v62.m128i_i64[0] = (unsigned int)(v49 + v13 - a4->cx - a4[1].cx);
  LODWORD(v45) = 40 * ScaleFactorForRect / 100;
  HIDWORD(v45) = v45;
  LODWORD(v46) = 40 * ScaleFactorForRect / -100;
  HIDWORD(v46) = v45;
  *(_QWORD *)&v63 = __PAIR64__(v46, v45);
  LODWORD(v44) = v46;
  HIDWORD(v44) = v46;
  v42 = 0LL;
  v43 = 0LL;
  if ( (_BYTE)a5 )
  {
    std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, 0LL, v48);
    v14 = v43;
    v15 = *((_QWORD *)&v42 + 1);
    if ( v43 == *((_BYTE **)&v42 + 1) )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(
        (const void **)&v42,
        *((_BYTE **)&v42 + 1),
        &v62);
      v14 = v43;
      v16 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      **((_QWORD **)&v42 + 1) = v62.m128i_i64[0];
      v16 = (_BYTE *)(v15 + 8);
      *((_QWORD *)&v42 + 1) = v16;
    }
    if ( v14 == v16 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, v16, &v46);
      v17 = v46;
      v14 = v43;
      v18 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      v17 = v46;
      *(_QWORD *)v16 = v46;
      v18 = v16 + 8;
      *((_QWORD *)&v42 + 1) = v18;
    }
    if ( v14 == v18 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, v18, &v45);
      v14 = v43;
      v19 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      *(_QWORD *)v18 = v45;
      v19 = v18 + 8;
      *((_QWORD *)&v42 + 1) = v19;
    }
    if ( v14 == v19 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, v19, &v44);
      v14 = v43;
      v20 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      *(_QWORD *)v19 = v44;
      v20 = v19 + 8;
      *((_QWORD *)&v42 + 1) = v20;
    }
    if ( v14 != v20 )
    {
      *(_QWORD *)v20 = v63;
LABEL_16:
      v21 = v20 + 8;
      *((_QWORD *)&v42 + 1) = v21;
      goto LABEL_34;
    }
    v22 = (__int64 *)&v63;
  }
  else
  {
    std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, 0LL, &v62);
    v14 = v43;
    v23 = *((_QWORD *)&v42 + 1);
    if ( v43 == *((_BYTE **)&v42 + 1) )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>(
        (const void **)&v42,
        *((_BYTE **)&v42 + 1),
        v48);
      v14 = v43;
      v24 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      **((_QWORD **)&v42 + 1) = v48[0];
      v24 = (_BYTE *)(v23 + 8);
      *((_QWORD *)&v42 + 1) = v24;
    }
    if ( v14 == v24 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, v24, &v45);
      v17 = v45;
      v14 = v43;
      v25 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      v17 = v45;
      *(_QWORD *)v24 = v45;
      v25 = v24 + 8;
      *((_QWORD *)&v42 + 1) = v25;
    }
    if ( v14 == v25 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, v25, &v46);
      v14 = v43;
      v26 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      *(_QWORD *)v25 = v46;
      v26 = v25 + 8;
      *((_QWORD *)&v42 + 1) = v26;
    }
    if ( v14 == v26 )
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, v26, &v63);
      v14 = v43;
      v20 = (_BYTE *)*((_QWORD *)&v42 + 1);
    }
    else
    {
      *(_QWORD *)v26 = v63;
      v20 = v26 + 8;
      *((_QWORD *)&v42 + 1) = v20;
    }
    if ( v14 != v20 )
    {
      *(_QWORD *)v20 = v44;
      goto LABEL_16;
    }
    v22 = &v44;
  }
  std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)&v42, v20, v22);
  v21 = (_BYTE *)*((_QWORD *)&v42 + 1);
  v14 = v43;
LABEL_34:
  v27 = *retstr;
  v62 = v27;
  v62.m128i_i32[2] = _mm_cvtsi128_si32(v27) + a3->left;
  v62.m128i_i32[3] = a3->top + v27.m128i_i32[1];
  v28 = *(_OWORD *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                     (unsigned int)v48,
                     (unsigned int)&v62,
                     v17,
                     HIDWORD(v17),
                     (__int64)v58);
  v47 = 0LL;
  v29 = *(__int64 (__fastcall **)(const unsigned __int16 *, __int64, __int64 *))(*(_QWORD *)a7 + 40LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
  v30 = v29(a7, v51, &v47);
  v31 = (_BYTE *)v42;
  if ( v30 < 0 )
  {
LABEL_58:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
    if ( v31 )
    {
      std::_Deallocate<16,0>(v31, (const struct std::nothrow_t *)((v14 - v31) & 0xFFFFFFFFFFFFFFF8uLL));
      v42 = 0LL;
      v43 = 0LL;
    }
    *(_OWORD *)v11 = v28;
    return (struct tagRECT *)v11;
  }
  v53 = 0LL;
  v32 = 0LL;
  v54 = 0LL;
  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)&v51,
    v47);
  LODWORD(v55) = 0;
  v56 = 0LL;
  v57 = &v51;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v55);
  LODWORD(v59) = v52;
  v60 = 0LL;
  v61 = &v51;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v59);
  v33 = (_BYTE *)*((_QWORD *)&v53 + 1);
  while ( (_DWORD)v55 != (_DWORD)v59 || v57 != v61 )
  {
    v34 = v56;
    v48[0] = v56;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v48);
    v63 = 0LL;
    v44 = 0LL;
    v35 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v34 + 104LL);
    v44 = 0LL;
    if ( v35(v34, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v44) >= 0
      && (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v44 + 24LL))(v44, &v63) >= 0 )
    {
      if ( v32 == v33 )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>((const void **)&v53, v33, &v63);
        v32 = v54;
        v33 = (_BYTE *)*((_QWORD *)&v53 + 1);
      }
      else
      {
        *(_OWORD *)v33 = v63;
        v33 += 16;
        *((_QWORD *)&v53 + 1) = v33;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v48);
    LODWORD(v55) = v55 + 1;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v55);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v60);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
  v36 = v31;
  v37 = (_BYTE *)v53;
  if ( v31 == v21 )
  {
LABEL_55:
    if ( v37 )
    {
      std::_Deallocate<16,0>(v37, (const struct std::nothrow_t *)((v32 - v37) & 0xFFFFFFFFFFFFFFF0uLL));
      v53 = 0LL;
      v54 = 0LL;
    }
    v11 = (WindowRelativePositioning *)v50;
    goto LABEL_58;
  }
  while ( 1 )
  {
    v38 = (struct tagRECT *)WindowRelativePositioning::_anonymous_namespace_::MoveBy(
                              (unsigned int)&v51,
                              (unsigned int)&v62,
                              *v36,
                              HIDWORD(*(_QWORD *)v36),
                              (__int64)v58);
    v39 = *v38;
    v40 = v37;
    if ( v37 == v33 )
      break;
    while ( (int)abs32(*v40 - *(_QWORD *)&v38->left) >= v49
         || (int)abs32(v40[1] - HIDWORD(*(_QWORD *)&v38->left)) >= v49 )
    {
      v40 += 4;
      if ( v40 == (_DWORD *)v33 )
        goto LABEL_49;
    }
    v36 += 2;
    if ( v36 == (_DWORD *)v21 )
      goto LABEL_55;
  }
LABEL_49:
  if ( v37 )
  {
    std::_Deallocate<16,0>(v37, (const struct std::nothrow_t *)((v32 - v37) & 0xFFFFFFFFFFFFFFF0uLL));
    v53 = 0LL;
    v54 = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v47);
  if ( v31 )
  {
    std::_Deallocate<16,0>(v31, (const struct std::nothrow_t *)((v14 - v31) & 0xFFFFFFFFFFFFFFF8uLL));
    v42 = 0LL;
    v43 = 0LL;
  }
  result = v50;
  *v50 = v39;
  return result;
}
