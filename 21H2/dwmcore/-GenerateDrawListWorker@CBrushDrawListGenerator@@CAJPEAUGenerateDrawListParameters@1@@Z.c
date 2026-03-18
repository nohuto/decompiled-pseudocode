/*
 * XREFs of ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800ACBF4
 * Callers:
 *     _lambda_c497196b485e4bd0803a3588ab010e9b_::_lambda_invoker_cdecl_ @ 0x1800ACCA0 (_lambda_c497196b485e4bd0803a3588ab010e9b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListWorker(
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a1)
{
  unsigned int i; // ebp
  __int64 v3; // rcx
  CBrushDrawListGenerator *v4; // rcx
  int DrawListPrimitive; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp
  int v9; // edi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx

  for ( i = *((_DWORD *)a1 + 28); i < *((_DWORD *)a1 + 40); ++i )
  {
    v3 = *((_QWORD *)a1 + i + 15);
    if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 3LL) )
      break;
  }
  v4 = *(CBrushDrawListGenerator **)a1;
  if ( i == *((_DWORD *)a1 + 40) )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(v4, a1);
    v7 = DrawListPrimitive;
    if ( DrawListPrimitive < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, DrawListPrimitive, 0x17Fu);
      return v7;
    }
  }
  else
  {
    v9 = *((_DWORD *)a1 + 28);
    v10 = *((_QWORD *)a1 + i + 15);
    *((_DWORD *)a1 + 28) = i;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, struct CBrushDrawListGenerator::GenerateDrawListParameters *))(*(_QWORD *)v10 + 32LL))(
            v10,
            *(_QWORD *)v4,
            &lambda_c497196b485e4bd0803a3588ab010e9b_::_lambda_invoker_cdecl_,
            a1);
    *((_QWORD *)a1 + i + 15) = v10;
    v7 = v11;
    *((_DWORD *)a1 + 28) = v9;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1BFu);
      return v7;
    }
  }
  return 0;
}
