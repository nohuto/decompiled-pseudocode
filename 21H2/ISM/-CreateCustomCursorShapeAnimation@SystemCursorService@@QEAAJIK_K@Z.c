/*
 * XREFs of ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x18013F4C8
 * Callers:
 *     ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013C190 (-CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStu.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C214 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x1800491D8 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService@@@std@@QEAA-AV-$shared_ptr@VSys.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CustomShapeExists@SystemCursorService@@QEBA_N_K@Z @ 0x18013C4EC (-CustomShapeExists@SystemCursorService@@QEBA_N_K@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D210 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x18013D944 (-lock@-$weak_ptr@VSystemCursor@@@std@@QEBA-AV-$shared_ptr@VSystemCursor@@@2@XZ.c)
 *     _lambda_e899d24a1372ab43d53191ccbd314951_::_lambda_e899d24a1372ab43d53191ccbd314951_ @ 0x18013E514 (_lambda_e899d24a1372ab43d53191ccbd314951_--_lambda_e899d24a1372ab43d53191ccbd314951_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursorService::CreateCustomCursorShapeAnimation(
        SystemCursorService *this,
        int a2,
        int a3,
        __int64 a4)
{
  __int64 v6; // rdx
  unsigned int v7; // edi
  struct IAnimationDataProvider *AnimationDataProvider; // rax
  struct IAnimationDataProvider *v9; // rbx
  void (__fastcall *v10)(struct IAnimationDataProvider *, __int64 (__fastcall ***)()); // rsi
  __int64 v11; // rdi
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  SystemCursor *v15; // [rsp+40h] [rbp-61h] BYREF
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-59h]
  __int64 (__fastcall **v17)(); // [rsp+50h] [rbp-51h] BYREF
  __int128 v18; // [rsp+58h] [rbp-49h]
  int v19; // [rsp+68h] [rbp-39h]
  int v20; // [rsp+6Ch] [rbp-35h]
  __int64 v21; // [rsp+70h] [rbp-31h]
  __int128 v22; // [rsp+78h] [rbp-29h]
  __int64 (__fastcall ***v23)(); // [rsp+88h] [rbp-19h]
  __int64 v24; // [rsp+90h] [rbp-11h] BYREF
  std::_Ref_count_base *v25; // [rsp+98h] [rbp-9h]
  _BYTE v26[88]; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  int v28; // [rsp+110h] [rbp+6Fh] BYREF
  int v29; // [rsp+118h] [rbp+77h] BYREF
  __int64 v30; // [rsp+120h] [rbp+7Fh] BYREF

  v30 = a4;
  v29 = a3;
  v28 = a2;
  std::weak_ptr<SystemCursor>::lock((__int64)this + 168, &v15);
  if ( v15 && SystemCursor::ShapeExists(v15, a4) )
  {
    v6 = 182LL;
LABEL_6:
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_16;
  }
  if ( SystemCursorService::CustomShapeExists(this, a4) )
  {
    v6 = 185LL;
    goto LABEL_6;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v9 = AnimationDataProvider;
  if ( AnimationDataProvider )
    (*(void (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 8LL))(AnimationDataProvider);
  std::enable_shared_from_this<SystemCursorService>::shared_from_this((__int64)this + 8, &v24);
  v10 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 (__fastcall ***)()))(*(_QWORD *)v9 + 56LL);
  v11 = lambda_e899d24a1372ab43d53191ccbd314951_::_lambda_e899d24a1372ab43d53191ccbd314951_(
          (__int64)v26,
          &v24,
          &v28,
          &v29,
          &v30,
          &v15);
  v23 = 0LL;
  v17 = off_1801AD8D8;
  v18 = 0LL;
  v18 = *(_OWORD *)v11;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 8) = 0LL;
  v19 = *(_DWORD *)(v11 + 16);
  v20 = *(_DWORD *)(v11 + 20);
  v21 = *(_QWORD *)(v11 + 24);
  v22 = 0LL;
  v22 = *(_OWORD *)(v11 + 32);
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 40) = 0LL;
  v23 = &v17;
  v12 = *(std::_Ref_count_base **)(v11 + 40);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v13 = *(std::_Ref_count_base **)(v11 + 8);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v10(v9, &v17);
  v7 = 0;
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  (*(void (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_16:
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  return v7;
}
