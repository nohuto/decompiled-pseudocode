/*
 * XREFs of ?HandleInPlaceCacheUpdateForLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z @ 0x180404A18
 * Callers:
 *     ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180404350 (-AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ScreenManager::HandleInPlaceCacheUpdateForLayoutChange(
        ScreenManager *this,
        struct IAppLayoutOperation *a2,
        bool *a3)
{
  __int64 v5; // r14
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF

  *a3 = 0;
  if ( *((_QWORD *)this + 40) )
  {
    v5 = *((_QWORD *)this + 39);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_11:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      return v7;
    }
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v8 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      v9 = 292LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      goto LABEL_11;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v5 + 8) + 200LL))(
           *(_QWORD *)(v5 + 8),
           v14,
           3LL)
      && (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 200LL))(v13, v14, 4LL) )
    {
      v10 = v13;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v5 + 8));
      v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v10 + 192LL))(
             v10,
             &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
             v5 + 8);
      v7 = v8;
      if ( v8 < 0 )
      {
        v9 = 300LL;
        goto LABEL_10;
      }
      *a3 = 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  return 0LL;
}
