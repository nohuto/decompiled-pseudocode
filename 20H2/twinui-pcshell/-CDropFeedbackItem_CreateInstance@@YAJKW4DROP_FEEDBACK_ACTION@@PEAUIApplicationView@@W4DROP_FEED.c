/*
 * XREFs of ?CDropFeedbackItem_CreateInstance@@YAJKW4DROP_FEEDBACK_ACTION@@PEAUIApplicationView@@W4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@3NW4DROP_FEEDBACK_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18042A818
 * Callers:
 *     ?Close@CDropFeedbackList@@UEAAJK@Z @ 0x180421410 (-Close@CDropFeedbackList@@UEAAJK@Z.c)
 *     ?DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421590 (-DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421640 (-DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421710 (-Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Register@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@@Z @ 0x1804218A0 (-Register@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@@Z.c)
 *     ?RegisterView@CDropFeedbackList@@UEAAJKPEAUIApplicationView@@PEBUtagRECT@@@Z @ 0x1804219B0 (-RegisterView@CDropFeedbackList@@UEAAJKPEAUIApplicationView@@PEBUtagRECT@@@Z.c)
 *     ?Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421B90 (-Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421C60 (-Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCDropFeedbackItem@@V1@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@AEAPEBU5@AEANAEAW4DROP_FEEDBACK_FLAGS@@@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackItem@@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationView@@AEAW4DROP_FEEDBACK_TYPE@@AEAPEBUtagRECT@@5AEANAEAW4DROP_FEEDBACK_FLAGS@@@Z @ 0x18042A2C8 (--$MakeAndInitialize@VCDropFeedbackItem@@V1@AEAKAEAW4DROP_FEEDBACK_ACTION@@AEAPEAUIApplicationVi.c)
 */

__int64 __fastcall CDropFeedbackItem_CreateInstance(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        _QWORD *a10)
{
  _QWORD *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v16; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+28h] BYREF
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  int v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v16 = a1;
  v10 = a10;
  a10 = 0LL;
  *v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a10);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CDropFeedbackItem,CDropFeedbackItem,unsigned long &,enum DROP_FEEDBACK_ACTION &,IApplicationView * &,enum DROP_FEEDBACK_TYPE &,tagRECT const * &,tagRECT const * &,double &,enum DROP_FEEDBACK_FLAGS &>(
          (__int64 *)&a10,
          &v16,
          &v17,
          &v18,
          &v19,
          &a5,
          &a6,
          &a7,
          &a8);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 804LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedbackitem.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a10)(
          a10,
          &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
          v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 805LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a10);
  return v12;
}
