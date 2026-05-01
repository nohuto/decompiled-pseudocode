/*
 * XREFs of ?GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x180196140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180142F28 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetHostId(CWinRTApplicationView *this, unsigned __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25,
         &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 662LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v8 + 24LL))(v8, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 663LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
