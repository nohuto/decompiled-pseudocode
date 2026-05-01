/*
 * XREFs of ?ThumbnailSourceSizeChanged@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAX@Z @ 0x180390BB0
 * Callers:
 *     ?ThumbnailSourceSizeChanged@MultitaskingViewDismissalAnimationCoordinator@@UEAAXPEAX@Z @ 0x18037BA50 (-ThumbnailSourceSizeChanged@MultitaskingViewDismissalAnimationCoordinator@@UEAAXPEAX@Z.c)
 * Callees:
 *     CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND______CDefaultKeyCompare_HWND______CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_9e93575117fc73f27611926629c080cf___ @ 0x18038F2C8 (CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase--ThumbnailData_CDefaultHashPo.c)
 */

void __fastcall MultitaskingViewAnimationCoordinatorBase::ThumbnailSourceSizeChanged(
        MultitaskingViewAnimationCoordinatorBase *this,
        void *a2)
{
  bool v2; // zf
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7[3]; // [rsp+20h] [rbp-18h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_QWORD *)this + 10) == 0LL;
  v7[0] = &v8;
  v7[1] = (_QWORD *)((char *)this - 8);
  v4 = 1;
  if ( !v2 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= *((_DWORD *)this + 17) )
        break;
      v6 = *((_QWORD *)this + 10) + 32LL * v5;
      if ( *(_DWORD *)v6 == 1 )
        v4 = CSimpleHashTable_HWND_____MultitaskingViewAnimationCoordinatorBase::ThumbnailData_CDefaultHashPolicy_HWND______CDefaultKeyCompare_HWND______CDefaultResizePolicy_CDefaultRehashPolicy_::s_EnumAdaptor__lambda_9e93575117fc73f27611926629c080cf___(
               v7,
               (_QWORD *)(v6 + 8),
               (__int64 *)(v6 + 16));
      ++v5;
    }
    while ( v4 );
  }
}
