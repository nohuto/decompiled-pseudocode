/*
 * XREFs of ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x18045B380
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x18045C570 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByView@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18045A85C (--$FindEx@VCAppLayoutAnimationDataFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutAnima.c)
 *     ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180461AAC (--$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddOperationItem(
        CAppLayoutOperation *this,
        struct IUnknown *a2,
        struct IAppLayoutItem *a3,
        struct IAppLayoutItem *a4)
{
  int v4; // esi
  int v9; // r13d
  int v10; // r12d
  struct IUnknown *v11; // r8
  int v12; // ebx
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct IUnknown **); // rbx
  int v15; // esi
  struct IUnknown *v16; // rbx
  void *v17; // r8
  __int64 v18; // rdx
  struct IUnknown **v19; // rdx
  struct IUnknown *v21; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int128 *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int128 *v26; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, struct IUnknown **); // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT rcDst; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v30; // [rsp+90h] [rbp-70h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-30h]
  __m128i v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+E8h] [rbp-18h]
  RECT rcSrc; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT *p_rcDst; // [rsp+100h] [rbp+0h]
  struct tagRECT *v39; // [rsp+108h] [rbp+8h]
  __int128 v40; // [rsp+118h] [rbp+18h] BYREF
  __int64 v41; // [rsp+128h] [rbp+28h]
  __m128i si128; // [rsp+130h] [rbp+30h]
  int v43; // [rsp+140h] [rbp+40h]

  v4 = 0;
  v41 = 0LL;
  v43 = 0;
  v34 = 0LL;
  v36 = 0;
  v9 = 0;
  v10 = 0;
  v40 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v33 = 0LL;
  v35 = si128;
  v31 = 0LL;
  rcDst = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  if ( a3 )
  {
    v9 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int128 *))(*(_QWORD *)a3 + 64LL))(a3, &v40);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)a3 + 56LL))(a3, 0LL, &v31);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, __int128 *))(*(_QWORD *)a3 + 56LL))(a3, 1LL, &v32);
  }
  if ( a4 )
  {
    v10 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int128 *))(*(_QWORD *)a4 + 64LL))(a4, &v33);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 0LL, &rcDst);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 1LL, &v30);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &rcSrc);
    CopyRect(&rcDst, &rcSrc);
    CopyRect(&v30, &rcDst);
    DWORD2(v33) = 3;
  }
  v24 = 0LL;
  v21 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  v12 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByView>(
          (__int64 *)this + 11,
          &v21,
          v11,
          &v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  if ( v12 >= 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v23);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v27 = a2;
  v25 = &v33;
  LODWORD(v23) = v4;
  v26 = &v40;
  LODWORD(v24) = v10;
  *(_QWORD *)&rcSrc.left = &v31;
  LODWORD(v21) = v9;
  *(_QWORD *)&rcSrc.right = &v32;
  p_rcDst = &rcDst;
  v39 = &v30;
  v22 = 0LL;
  Microsoft::WRL::Details::Make<CAppLayoutOperationItem,IApplicationView * &,APPLICATION_VIEW_DATA * &,APPLICATION_VIEW_DATA * &,CAppLayoutOperationItem::CAppLayoutOperationItemConstructorRects &,int &,int &,enum APP_LAYOUT_ANIMATION_TYPE &>(
    (unsigned int)&v28,
    (unsigned int)&v27,
    (unsigned int)&v26,
    (unsigned int)&v25,
    (__int64)&rcSrc,
    (__int64)&v21,
    (__int64)&v24,
    (__int64)&v23);
  v14 = v28;
  if ( v28 )
  {
    v15 = (**v28)(v28, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v22);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **)))(*v14)[2])(v14);
    if ( v15 >= 0 )
    {
      v16 = v22;
      v21 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      v18 = *((_QWORD *)this + 16);
      v15 = 0;
      if ( v18 != *((_QWORD *)this + 18)
        || (v15 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)this + 120,
                    v18 + 1,
                    v17),
            v15 >= 0) )
      {
        v19 = (struct IUnknown **)(*((_QWORD *)this + 15) + 8 * (*((_QWORD *)this + 16))++);
        if ( v19 )
        {
          *v19 = 0LL;
          if ( v19 != &v21 )
          {
            *v19 = v16;
            v21 = 0LL;
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    }
  }
  else
  {
    v15 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  return (unsigned int)v15;
}
