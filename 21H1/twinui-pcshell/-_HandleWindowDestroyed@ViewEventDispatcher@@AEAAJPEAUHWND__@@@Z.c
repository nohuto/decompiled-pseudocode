/*
 * XREFs of ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18028AFDC
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180282D60 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18004D014 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewWrapperInternal@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18027C108 (--$As@UIViewWrapperInternal@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ??$FindEx@VViewWrapperFinderByWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByWindow@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18027C2CC (--$FindEx@VViewWrapperFinderByWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInternal@@@WR.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x18028422C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_HandleWindowDestroyed(RTL_SRWLOCK *this, HWND a2)
{
  __int64 v5; // r8
  bool v6; // bl
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdx
  PVOID Ptr; // rcx
  HWND *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v13[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  HWND v16; // [rsp+88h] [rbp+20h] BYREF

  if ( CApplicationManagerUtility::IsValidWindow((CApplicationManagerUtility *)a2, a2) )
    return 0LL;
  v15 = 0LL;
  AcquireSRWLockExclusive(this + 35);
  v13[1] = this + 35;
  v12 = 0LL;
  v16 = a2;
  v6 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByWindow>(
              &this[44].Ptr,
              &v16,
              v5,
              v13) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( !v6 )
  {
    v9 = 0LL;
    Ptr = this[53].Ptr;
    if ( Ptr )
    {
      v11 = (HWND *)((char *)this[52].Ptr + 16);
      while ( *v11 != a2 )
      {
        ++v9;
        v11 += 3;
        if ( v9 >= (unsigned __int64)Ptr )
          goto LABEL_13;
      }
      CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        &this[52].Ptr,
        v9);
    }
    goto LABEL_13;
  }
  v7 = Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<IViewWrapperInternal>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[44].Ptr + v13[0],
         &v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
LABEL_13:
    if ( this != (RTL_SRWLOCK *)-280LL )
      ReleaseSRWLockExclusive(this + 35);
    if ( v15 )
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v15 + 800LL))(v15, a2);
    v8 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x867,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v7);
  if ( this != (RTL_SRWLOCK *)-280LL )
    ReleaseSRWLockExclusive(this + 35);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v8;
}
