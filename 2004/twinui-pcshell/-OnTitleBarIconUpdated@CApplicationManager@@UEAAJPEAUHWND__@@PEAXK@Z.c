/*
 * XREFs of ?OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z @ 0x18014E960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180076CC0 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnTitleBarIconUpdated(
        CApplicationManager *this,
        __int64 a2,
        void *a3,
        unsigned int a4)
{
  CApplicationManager *v7; // rbx
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v9; // rbx
  __int64 (__fastcall *v10)(struct IApplicationFrameProxy *, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  struct IApplicationFrameProxy *v14[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v7 = (CApplicationManager *)((char *)this - 344);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd(v7, a2, v14);
  if ( FrameByHwnd >= 0 )
  {
    v16 = 0LL;
    v9 = v14[0];
    v10 = *(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v14[0] + 144LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v11 = v10(v9, &v16);
    FrameByHwnd = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v16 + 152LL))(v16, a3, a4);
      FrameByHwnd = v11;
      if ( v11 >= 0 )
      {
        FrameByHwnd = 0;
        goto LABEL_8;
      }
      v12 = 8391LL;
    }
    else
    {
      v12 = 8390LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_8:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  return (unsigned int)FrameByHwnd;
}
