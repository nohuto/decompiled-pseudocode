/*
 * XREFs of ?InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ @ 0x180395258
 * Callers:
 *     ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___::Run @ 0x1803953D0 (ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___--Run.c)
 *     ?ThumbnailSizeChanged@SwitchItemThumbnailElement@@UEAAXPEAX@Z @ 0x1803958D0 (-ThumbnailSizeChanged@SwitchItemThumbnailElement@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036C7C0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036C844 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

void __fastcall SwitchItemThumbnailElement::InvalidateThumbnailVisual(SwitchItemThumbnailElement *this)
{
  int v2; // eax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v7; // [rsp+40h] [rbp+10h] BYREF
  __int64 v8; // [rsp+48h] [rbp+18h] BYREF
  int v9; // [rsp+50h] [rbp+20h] BYREF
  int v10; // [rsp+54h] [rbp+24h]

  v7 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( *((_QWORD *)this + 10) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
           *((_QWORD *)this + 10),
           &GUID_201ffda2_74a1_4fc8_a4a6_a65a1636d3fe,
           &v7);
    if ( v2 >= 0 )
    {
      v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 40LL))(*((_QWORD *)this + 72));
      v2 = DwmpQueryWindowThumbnailSourceSize(*v4, 0LL, &v9);
      if ( v2 >= 0 )
      {
        v8 = *((_QWORD *)this + 30);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
        DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v5, &v8, (__int64)&GUID_NULL, 0LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 74);
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 80LL))(v7, &v9);
        DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v5);
        goto LABEL_8;
      }
      v3 = 345LL;
    }
    else
    {
      v3 = 344LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v2);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
