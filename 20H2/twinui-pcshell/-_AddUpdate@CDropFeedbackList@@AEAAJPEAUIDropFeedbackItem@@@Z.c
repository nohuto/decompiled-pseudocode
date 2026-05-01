/*
 * XREFs of ?_AddUpdate@CDropFeedbackList@@AEAAJPEAUIDropFeedbackItem@@@Z @ 0x180421D20
 * Callers:
 *     ?Close@CDropFeedbackList@@UEAAJK@Z @ 0x180421410 (-Close@CDropFeedbackList@@UEAAJK@Z.c)
 *     ?DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421590 (-DragFadeIn@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421640 (-DragFadeOut@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421710 (-Fade@CDropFeedbackList@@UEAAJKMW4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421B90 (-Slide@CDropFeedbackList@@UEAAJKW4DROP_FEEDBACK_TYPE@@PEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 *     ?Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z @ 0x180421C60 (-Zoom@CDropFeedbackList@@UEAAJKPEBUtagRECT@@W4DROP_FEEDBACK_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180155124 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CDropFeedbackList::_AddUpdate(CDropFeedbackList *this, struct IDropFeedbackItem *a2)
{
  unsigned __int64 v2; // r15
  int v5; // edi
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rbx
  void *v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rdx
  struct IDropFeedbackItem *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  v5 = -2147467259;
  v6 = 0LL;
  do
  {
    if ( v6 >= v2 )
      break;
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v6);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7) == 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v6);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
      if ( v9 == (*(unsigned int (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2) )
      {
        v10 = *((_QWORD *)this + 2);
        if ( *(struct IDropFeedbackItem **)(v10 + 8 * v6) != a2 )
        {
          v15 = a2;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
          v15 = *(struct IDropFeedbackItem **)(v10 + 8 * v6);
          *(_QWORD *)(v10 + 8 * v6) = a2;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        }
        v5 = 0;
      }
    }
    ++v6;
  }
  while ( v5 < 0 );
  if ( v5 < 0 )
  {
    v15 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v12 = *((_QWORD *)this + 3);
    v5 = 0;
    if ( v12 != *((_QWORD *)this + 5)
      || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)this + 16,
                 v12 + 1,
                 v11),
          v5 >= 0) )
    {
      v13 = (__int64 *)(*((_QWORD *)this + 2) + 8 * (*((_QWORD *)this + 3))++);
      if ( v13 )
      {
        *v13 = 0LL;
        if ( v13 != (__int64 *)&v15 )
        {
          v15 = 0LL;
          *v13 = (__int64)a2;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  }
  return (unsigned int)v5;
}
