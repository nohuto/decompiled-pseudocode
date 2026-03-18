/*
 * XREFs of ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18008BF00
 * Callers:
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18001ACA8 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180065CF0 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008B360 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x18025A620 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18025A84C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18025CC90 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::`scalar deleting destructor'(
        CRectanglesShape *this,
        char a2,
        unsigned int a3)
{
  void *v5; // rcx
  void *v6; // rdx
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  _QWORD *Value; // rdi
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  DWORD v15; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_DWORD *)this + 10) = 0;
  v5 = (void *)*((_QWORD *)this + 2);
  v6 = (void *)*((_QWORD *)this + 3);
  if ( v5 != v6 )
  {
    operator delete(v5);
    v6 = (void *)*((_QWORD *)this + 3);
    v12 = *((_DWORD *)this + 8);
    *((_QWORD *)this + 2) = v6;
    *((_DWORD *)this + 9) = v12;
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 8) = 0LL;
    v6 = (void *)*((_QWORD *)this + 3);
  }
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 != v6 )
  {
    operator delete(v8);
    *((_QWORD *)this + 2) = 0LL;
  }
  v9 = *((_QWORD *)this + 1);
  if ( v9 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (a2 & 1) == 0 )
    return this;
  if ( (a2 & 4) != 0 )
  {
    CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x48, a3);
    return this;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v13 = operator new(0x118uLL);
    Value = v13;
    if ( !v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *v13 = 0LL;
    v13[1] = 0LL;
    v13[2] = 0LL;
    v15 = CThreadContext::s_dwTlsIndex;
    v13[3] = 0LL;
    v13[4] = 0LL;
    v13[5] = 0LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    v13[8] = 0LL;
    v13[9] = 0LL;
    v13[10] = 0LL;
    v13[11] = 0LL;
    v13[12] = 0LL;
    v13[13] = 0LL;
    v13[14] = 0LL;
    v13[15] = 0LL;
    v13[16] = 0LL;
    v13[17] = 0LL;
    v13[18] = 0LL;
    v13[19] = 0LL;
    v13[20] = 0LL;
    v13[21] = 0LL;
    v13[22] = 0LL;
    v13[23] = 0LL;
    v13[24] = 0LL;
    v13[25] = 0LL;
    v13[26] = 0LL;
    v13[27] = 0LL;
    v13[28] = 0LL;
    v13[29] = 0LL;
    v13[30] = 0LL;
    v13[31] = 0LL;
    v13[32] = 0LL;
    v13[33] = 0LL;
    v13[34] = 0LL;
    TlsSetValue(v15, v13);
  }
  if ( *((_DWORD *)Value + 3) < *((_DWORD *)Value + 2) )
  {
    *(_QWORD *)this = Value[2];
    ++*((_DWORD *)Value + 3);
    Value[2] = this;
    return this;
  }
  operator delete(this);
  return this;
}
