/*
 * XREFs of ?GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1803B1880
 * Callers:
 *     ?GetVisualForWindow@MultitaskingViewDismissalAnimationCoordinator@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x18039CC90 (-GetVisualForWindow@MultitaskingViewDismissalAnimationCoordinator@@UEAAJPEAUHWND__@@PEAPEAUIDCom.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z @ 0x1803B0744 (--4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1803B23A0 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinato.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::GetVisualForWindow(
        MultitaskingViewAnimationCoordinatorBase *this,
        HWND a2,
        struct IDCompThumbnail **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = 0;
  *a3 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 10)
    && (v5 = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               *((_QWORD *)this + 10),
               *((unsigned int *)this + 17),
               &v9),
        *(_DWORD *)v5 == 1) )
  {
    MultitaskingViewAnimationCoordinatorBase::ThumbnailData::operator=((__int64 *)&v7, (__int64 *)(v5 + 16));
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7 + 1);
    *a3 = (struct IDCompThumbnail *)*((_QWORD *)&v7 + 1);
  }
  else
  {
    v3 = -2147319765;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)0x8002802BLL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v3;
}
