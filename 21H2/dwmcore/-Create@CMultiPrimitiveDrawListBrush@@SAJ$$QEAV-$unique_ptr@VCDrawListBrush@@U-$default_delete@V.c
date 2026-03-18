/*
 * XREFs of ?Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@PEAPEAV1@@Z @ 0x180004D14
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004A9C (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCMultiPrimitiveDrawListBrush@@@Z @ 0x180004DF0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCMultiPrimitiveDrawListBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CMultiPrimitiveDrawListBrush::Create(
        struct CMultiPrimitiveDrawListBrush *a1,
        _OWORD *a2,
        _QWORD *a3)
{
  struct CObjectCache *ObjectCache; // r9
  unsigned int v7; // ebx
  char *v8; // rax
  int v9; // r10d
  __int64 v10; // rcx
  unsigned int v12; // ecx

  ObjectCache = CThreadContext::GetObjectCache(a1);
  v7 = 0;
  v8 = 0LL;
  v9 = *((_DWORD *)ObjectCache + 1);
  if ( v9 )
  {
    v8 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v8;
    *((_DWORD *)ObjectCache + 1) = v9 - 1;
  }
  if ( v8 || (v8 = (char *)DefaultHeap::Alloc(0x60uLL)) != 0LL )
  {
    *(_OWORD *)(v8 + 8) = *(_OWORD *)&_xmm;
    v8[52] = 0;
    v8[64] = 0;
    *(_QWORD *)v8 = &CMultiPrimitiveDrawListBrush::`vftable';
    *((_QWORD *)v8 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v10 = *(_QWORD *)a1;
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)v8 + 9) = v10;
    *((_OWORD *)v8 + 5) = *a2;
    *a3 = v8;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x1Fu, 0LL);
  }
  return v7;
}
