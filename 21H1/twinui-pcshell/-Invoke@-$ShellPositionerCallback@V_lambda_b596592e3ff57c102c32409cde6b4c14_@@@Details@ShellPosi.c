/*
 * XREFs of ?Invoke@?$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPositionerHelpers@@UEAAJPEAUIBasicPositioner@@@Z @ 0x1803B15B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_b596592e3ff57c102c32409cde6b4c14_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, int *, __int64); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v2 + 32));
  v6 = v5(a2, *(_QWORD *)(a1 + 56), &v10, v2 + 32);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v10 )
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 24LL) |= 1u;
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
