/*
 * XREFs of _lambda_c497196b485e4bd0803a3588ab010e9b_::_lambda_invoker_cdecl_ @ 0x1800ACCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800ACBF4 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800AD0B8 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800EC17C (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c497196b485e4bd0803a3588ab010e9b_::_lambda_invoker_cdecl_(__int64 *a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rax
  char v6; // di
  __int64 v7; // rcx
  bool v8; // zf
  unsigned int DrawListWorker; // edi
  int v11; // eax
  __int64 v12; // rcx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+40h] [rbp-18h]

  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 8))(a1, 3LL) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 32LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(a2 + 112) < *(_DWORD *)(a2 + 164) )
      {
        v5 = *a1;
        v6 = 0;
        v13 = 0LL;
        v14 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v5 + 8))(a1, 2LL) )
        {
          CDrawListBitmap::operator=(&v13, a1 + 7);
          v6 = v14;
        }
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 16LL))(v4, *(unsigned int *)(a2 + 112));
        if ( (_QWORD)v13 )
          v8 = (_QWORD)v13 == *(_QWORD *)v7;
        else
          v8 = *((_QWORD *)&v13 + 1) == *(_QWORD *)(v7 + 8);
        if ( !v8 || v6 != *(_BYTE *)(v7 + 16) )
        {
          v11 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a2 + 168));
          DrawListWorker = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1A5u);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13 + 8);
            wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v13);
            return DrawListWorker;
          }
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13 + 8);
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v13);
      }
    }
  }
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 112) + 120) = a1;
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a2);
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 112) + 120) = 0LL;
  return DrawListWorker;
}
