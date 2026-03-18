/*
 * XREFs of _lambda_b48b3c6d6c3f7194206dbcda051fd9f4_::operator() @ 0x180050AB4
 * Callers:
 *     _lambda_b48b3c6d6c3f7194206dbcda051fd9f4_::_lambda_invoker_cdecl_ @ 0x180050AA0 (_lambda_b48b3c6d6c3f7194206dbcda051fd9f4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180050C90 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18006E940 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800A6DFC (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b48b3c6d6c3f7194206dbcda051fd9f4_::operator()(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned int i; // r15d
  __int64 v7; // rcx
  int DrawListPrimitive; // eax
  __int64 v9; // rcx
  unsigned int v10; // r15d
  char v12; // di
  __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int128 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h]
  int v24; // [rsp+48h] [rbp-18h]
  __int64 v25; // [rsp+4Ch] [rbp-14h]
  int v26; // [rsp+54h] [rbp-Ch]
  char v27; // [rsp+58h] [rbp-8h]

  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a2 + 8))(a2, 3LL) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a3 + 104) + 32LL);
    if ( v5 )
    {
      if ( *(_DWORD *)(a3 + 48) < *(_DWORD *)(a3 + 100) )
      {
        v24 = 0;
        v12 = 0;
        v25 = 0LL;
        v26 = 0;
        v23 = 0LL;
        v13 = *a2;
        v22 = 0LL;
        v27 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v13 + 8))(a2, 2LL) )
        {
          CDrawListBitmap::operator=(&v22, a2 + 7);
          v12 = v27;
        }
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *(unsigned int *)(a3 + 48));
        if ( (_QWORD)v22 )
          v15 = (_QWORD)v22 == *(_QWORD *)v14;
        else
          v15 = *((_QWORD *)&v22 + 1) == *(_QWORD *)(v14 + 8);
        if ( !v15 || v12 != *(_BYTE *)(v14 + 40) )
        {
          v16 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a3 + 104));
          v10 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1A4u, 0LL);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22 + 8);
            wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v22);
            return v10;
          }
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v22 + 8);
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v22);
      }
    }
  }
  *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = a2;
  for ( i = *(_DWORD *)(a3 + 48); i < *(_DWORD *)(a3 + 96); ++i )
  {
    v7 = *(_QWORD *)(a3 + 8LL * i + 56);
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 3LL) )
        break;
    }
  }
  if ( i == *(_DWORD *)(a3 + 96) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                          *(CBrushDrawListGenerator **)a3,
                          (struct CBrushDrawListGenerator::GenerateDrawListParameters *)a3);
    v10 = DrawListPrimitive;
    if ( DrawListPrimitive < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, DrawListPrimitive, 0x17Fu, 0LL);
      goto LABEL_11;
    }
  }
  else
  {
    v18 = *(_DWORD *)(a3 + 48);
    v19 = *(_QWORD *)(a3 + 8LL * i + 56);
    *(_DWORD *)(a3 + 48) = i;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64), __int64))(*(_QWORD *)v19 + 32LL))(
            v19,
            lambda_b48b3c6d6c3f7194206dbcda051fd9f4_::_lambda_invoker_cdecl_,
            a3);
    *(_QWORD *)(a3 + 8LL * i + 56) = v19;
    v10 = v20;
    *(_DWORD *)(a3 + 48) = v18;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1BEu, 0LL);
      goto LABEL_11;
    }
  }
  v10 = 0;
LABEL_11:
  *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = 0LL;
  return v10;
}
