/*
 * XREFs of ?RegisterForFilterChanges@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x18036A510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall VirtualDesktopThumbnailWindowFilter::RegisterForFilterChanges(
        VirtualDesktopThumbnailWindowFilter *this,
        struct IWeakReference *a2,
        void *a3)
{
  __int64 v5; // rdx
  int v6; // edi
  __int64 *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IWeakReference *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IWeakReference *))a2->lpVtbl->AddRef)(a2);
  v5 = *((_QWORD *)this + 9);
  v6 = 0;
  if ( v5 != *((_QWORD *)this + 11)
    || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 64,
               v5 + 1,
               a3),
        v6 >= 0) )
  {
    v7 = (__int64 *)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
    if ( v7 )
    {
      *v7 = 0LL;
      if ( v7 != (__int64 *)&v10 )
      {
        v10 = 0LL;
        *v7 = (__int64)a2;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v6;
}
