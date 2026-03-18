/*
 * XREFs of ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180195040
 * Callers:
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180194F84 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016427C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x180195A54 (-erase@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetStroke@CSuperWetInkMa.c)
 */

void __fastcall CSuperWetInkManager::RemoveSourceLocal(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  __int64 v2; // rax
  char *v3; // rdi
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v7)(_QWORD, GUID *, __int64 *); // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v3 = (char *)this + 8;
  for ( i = *((_QWORD *)this + 1); i != v2 && *(struct CSuperWetSource **)i != a2; i += 80LL )
    ;
  if ( i != v2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 120LL))(*(_QWORD *)(i + 8));
    if ( v5 )
    {
      v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v5 + 8) + 4LL) + v5 + 8);
      v7 = *v6;
      v10 = 0LL;
      v8 = (*v7)(v6, &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37, &v10);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x65,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 248LL))(v10, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
    }
    std::vector<CSuperWetInkManager::SuperWetStroke>::erase(v3, &v10, i);
  }
}
