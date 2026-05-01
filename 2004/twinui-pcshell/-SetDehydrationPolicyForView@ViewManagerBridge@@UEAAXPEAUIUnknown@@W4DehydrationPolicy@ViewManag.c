/*
 * XREFs of ?SetDehydrationPolicyForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802C1F90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetDehydrationPolicyForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 **),
        int a3)
{
  int v4; // r8d
  unsigned int v5; // edi
  void (__fastcall *v6)(_QWORD, GUID *, __int64 **); // rbx
  __int64 v7; // rax
  const wchar_t *v8; // r8
  int v9; // edx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 145) )
  {
    if ( a3 )
    {
      v4 = a3 - 1;
      if ( !v4 )
      {
        v5 = 1;
        goto LABEL_8;
      }
      if ( v4 == 1 )
      {
        v5 = 2;
        goto LABEL_8;
      }
    }
    v5 = 0;
LABEL_8:
    v14 = 0LL;
    v6 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v6(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v14);
    v7 = *v14;
    v8 = L"DehydrationPolicy";
    v12 = L"DehydrationPolicy";
    v9 = 0;
    do
    {
      ++v8;
      ++v9;
    }
    while ( *v8 );
    v11 = v9 | 0x80000000;
    v10 = (*(__int64 (__fastcall **)(__int64 *, int *, _QWORD))(v7 + 720))(v14, &v11, v5);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
}
