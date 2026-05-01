/*
 * XREFs of ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@AEAI@Z @ 0x180016598
 * Callers:
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x1800164FC (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@UG.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180016684 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetGameFromGameConfigStore(__int64 *a1, __int128 *a2, void **a3, _DWORD *a4)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  void *v10; // rax
  const struct std::nothrow_t *v11; // rdx
  void *v12; // rcx
  void *v13; // r8
  __int64 v14; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*a3 )
    *a4 = 0;
  v8 = *a1;
  v16 = *a2;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v8 + 24))(a1, &v16);
  if ( v9 == -2147024662 )
  {
    v10 = operator new[]((unsigned int)*a4, (const struct std::nothrow_t *)&std::nothrow);
    v12 = *a3;
    v13 = v10;
    *a3 = v10;
    if ( v12 )
    {
      operator delete(v12, v11);
      v13 = *a3;
    }
    if ( !v13 )
    {
      v9 = -2147024882;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)v9);
      return v9;
    }
    v14 = *a1;
    v16 = *a2;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, void *, _DWORD *))(v14 + 24))(a1, &v16, v13, a4);
  }
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_10;
  return v9;
}
