/*
 * XREFs of ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800A7EE0
 * Callers:
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180088E30 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x1800B6BF0 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801903EC (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180190BF0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180191078 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F1BC4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::`scalar deleting destructor'(CRectanglesShape *this, char a2)
{
  void *v4; // rcx
  void *v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  _QWORD *Value; // rdi
  int v11; // eax
  CThreadContext *v12; // rax
  __int64 v13; // rcx
  CThreadContext *v14; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_DWORD *)this + 10) = 0;
  v4 = (void *)*((_QWORD *)this + 2);
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v4 != v5 )
  {
    DefaultHeap::Free(v4);
    v5 = (void *)*((_QWORD *)this + 3);
    v11 = *((_DWORD *)this + 8);
    *((_QWORD *)this + 2) = v5;
    *((_DWORD *)this + 9) = v11;
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 8) = 0LL;
    v5 = (void *)*((_QWORD *)this + 3);
  }
  v7 = (void *)*((_QWORD *)this + 2);
  if ( v7 != v5 )
  {
    DefaultHeap::Free(v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (a2 & 1) == 0 )
    return this;
  if ( (a2 & 4) != 0 )
  {
    __global_delete(this, 0x48uLL);
    return this;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v12 = (CThreadContext *)operator new(0x150uLL);
    if ( !v12 || (v14 = CThreadContext::CThreadContext(v12), (Value = v14) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024882, 0x42u);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v14);
  }
  if ( *((_DWORD *)Value + 9) < *((_DWORD *)Value + 8) )
  {
    *(_QWORD *)this = Value[5];
    ++*((_DWORD *)Value + 9);
    Value[5] = this;
    return this;
  }
  DefaultHeap::Free(this);
  return this;
}
