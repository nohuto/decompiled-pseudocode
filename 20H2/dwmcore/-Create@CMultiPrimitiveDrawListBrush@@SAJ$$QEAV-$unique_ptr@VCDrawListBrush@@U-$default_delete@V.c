/*
 * XREFs of ?Create@CMultiPrimitiveDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18009F788
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009F1E0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCMultiPrimitiveDrawListBrush@@@Z @ 0x1800611E0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCMultiPrimitiveDrawListBrush@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMultiPrimitiveDrawListBrush::Create(
        struct CMultiPrimitiveDrawListBrush *a1,
        _OWORD *a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  struct CObjectCache *ObjectCache; // rax
  __int64 v8; // rcx
  char *v9; // r9
  int v10; // r11d
  __int64 v12; // rax

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v9 = 0LL;
  v10 = *((_DWORD *)ObjectCache + 1);
  if ( v10 )
  {
    v9 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v9;
    *((_DWORD *)ObjectCache + 1) = v10 - 1;
  }
  if ( v9 || (v9 = (char *)DefaultHeap::Alloc(0x60uLL)) != 0LL )
  {
    *(_OWORD *)(v9 + 8) = _xmm;
    v9[52] = 0;
    v9[64] = 0;
    *(_QWORD *)v9 = &CMultiPrimitiveDrawListBrush::`vftable';
    *((_QWORD *)v9 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v12 = *(_QWORD *)a1;
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)v9 + 9) = v12;
    *((_OWORD *)v9 + 5) = *a2;
  }
  if ( v9 )
  {
    *a3 = v9;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Fu, 0LL);
  }
  return v6;
}
