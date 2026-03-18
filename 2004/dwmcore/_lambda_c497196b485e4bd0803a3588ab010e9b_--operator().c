/*
 * XREFs of _lambda_c497196b485e4bd0803a3588ab010e9b_::operator() @ 0x1800E97C4
 * Callers:
 *     _lambda_c497196b485e4bd0803a3588ab010e9b_::_lambda_invoker_cdecl_ @ 0x1800E97B0 (_lambda_c497196b485e4bd0803a3588ab010e9b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18004C460 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004C610 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004F484 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800C1488 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ??9CDrawListBitmap@@QEBA_NAEBV0@@Z @ 0x1800CB178 (--9CDrawListBitmap@@QEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c497196b485e4bd0803a3588ab010e9b_::operator()(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int DrawListWorker; // edi
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+48h] [rbp-20h]
  __int64 v15; // [rsp+4Ch] [rbp-1Ch]
  int v16; // [rsp+54h] [rbp-14h]
  char v17; // [rsp+58h] [rbp-10h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a2 + 8))(a2, 3LL) )
    goto LABEL_10;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 104) + 32LL);
  if ( !v5 || *(_DWORD *)(a3 + 48) >= *(_DWORD *)(a3 + 100) )
    goto LABEL_10;
  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  v13 = 0LL;
  v17 = 0;
  v6 = *a2;
  v12 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v6 + 8))(a2, 2LL) )
    CDrawListBitmap::operator=((__int64)&v12, (__int64)(a2 + 7));
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *(unsigned int *)(a3 + 48));
  if ( !CDrawListBitmap::operator!=((__int64)&v12, v7)
    || (v8 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a3 + 104)), DrawListWorker = v8, v8 >= 0) )
  {
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v12);
LABEL_10:
    *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = a2;
    DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a3);
    *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 48) + 56) = 0LL;
    return DrawListWorker;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1A5u, 0LL);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v12);
  return DrawListWorker;
}
