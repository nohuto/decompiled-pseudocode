/*
 * XREFs of ?get_Current@BrokeredViewTabConverterStatics@@UEAAJPEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802629A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterStatics::get_Current(
        BrokeredViewTabConverterStatics *this,
        struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(
         &GUID_59614133_bfb4_4906_90af_c44f15167f1a,
         0LL,
         4u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &ppv);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(LPVOID, void *, GUID *, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **))(*(_QWORD *)ppv + 96LL))(
           ppv,
           &unk_180535AC8,
           &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8,
           a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 155LL;
  }
  else
  {
    v5 = 154LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\brokeredviewtabconverter.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v4;
}
