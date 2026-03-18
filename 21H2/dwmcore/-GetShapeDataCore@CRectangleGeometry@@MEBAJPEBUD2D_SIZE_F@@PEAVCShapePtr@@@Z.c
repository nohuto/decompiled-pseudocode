/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800A6180
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800862A0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ??0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800866CC (--0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF6DC (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800E810C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F1BC4 (--0CThreadContext@@AEAA@XZ.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800F9440 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  CRoundedRectangleShape::FlattenedShapeSharedData *v3; // r14
  float *v4; // rdi
  unsigned int v6; // ebp
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  char v9; // dl
  float v10; // xmm8_4
  float v11; // xmm7_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  char v14; // al
  bool v15; // cl
  LPVOID Value; // rdi
  int v17; // ecx
  CRectanglesShape *v18; // rbx
  void *v19; // rcx
  __int64 v20; // rcx
  int Current; // eax
  struct CThreadContext *v23; // rcx
  int v24; // edx
  HANDLE ProcessHeap; // rax
  CRoundedRectangleShape::SharedData *v26; // rax
  CRoundedRectangleShape::FlattenedShapeSharedData *v27; // rax
  CRectanglesShape *v28; // rax
  __int64 v29; // rcx
  CRoundedRectangleShape::FlattenedShapeSharedData *v30; // rax
  CThreadContext *v31; // rax
  __int64 v32; // rcx
  CThreadContext *v33; // rax
  _OWORD v34[3]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-88h]
  struct CThreadContext *v36; // [rsp+68h] [rbp-80h] BYREF
  float v37; // [rsp+70h] [rbp-78h]
  float v38; // [rsp+74h] [rbp-74h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v3 = 0LL;
  v4 = (float *)((char *)this + 144);
  LODWORD(v35) = 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = *((_OWORD *)this + 10);
    v34[0] = *(_OWORD *)v4;
    v8 = *((_OWORD *)this + 11);
    v34[1] = v7;
    *(_QWORD *)&v7 = *((_QWORD *)this + 24);
    v4 = (float *)v34;
    v34[2] = v8;
    *(float *)&v8 = a2->width - *((float *)this + 38);
    v35 = v7;
    *((_QWORD *)&v34[0] + 1) = __PAIR64__(a2->height - *((float *)this + 39), v8);
  }
  v9 = *((_BYTE *)this + 196);
  v10 = *v4;
  v11 = v4[1];
  if ( v9 )
  {
    v12 = v10 + v4[2];
    v13 = v11 + v4[3];
  }
  else
  {
    v12 = v4[2];
    v13 = v4[3];
  }
  if ( v12 > v10 && v13 > v11 )
  {
    v14 = *((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0;
    if ( !v9 )
    {
      v15 = *((float *)this + 42) > 0.0 && *((float *)this + 43) > 0.0
         || *((float *)this + 46) > 0.0 && *((float *)this + 47) > 0.0
         || *((float *)this + 44) > 0.0 && *((float *)this + 45) > 0.0;
      v14 |= v15;
    }
    if ( !v14 )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v31 = (CThreadContext *)operator new(0x150uLL);
        if ( !v31 || (v33 = CThreadContext::CThreadContext(v31), (Value = v33) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v33);
      }
      v17 = *((_DWORD *)Value + 9);
      v18 = 0LL;
      if ( v17 )
      {
        v18 = (CRectanglesShape *)*((_QWORD *)Value + 5);
        *((_QWORD *)Value + 5) = *(_QWORD *)v18;
        *((_DWORD *)Value + 9) = v17 - 1;
      }
      if ( !v18 )
      {
        v18 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL);
        if ( !v18 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      *((_QWORD *)v18 + 1) = 0LL;
      *(_QWORD *)v18 = &CRectanglesShape::`vftable';
      *((_QWORD *)v18 + 2) = (char *)v18 + 48;
      *((_QWORD *)v18 + 3) = (char *)v18 + 48;
      *((_DWORD *)v18 + 8) = 1;
      *(_QWORD *)((char *)v18 + 36) = 1LL;
      TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>((char *)v18 + 48);
      *((_QWORD *)v18 + 8) = 0LL;
      v19 = (void *)*((_QWORD *)v18 + 2);
      *((_DWORD *)v18 + 10) = 0;
      if ( v19 != *((void **)v18 + 3) )
      {
        DefaultHeap::Free(v19);
        *((_QWORD *)v18 + 2) = *((_QWORD *)v18 + 3);
        *((_DWORD *)v18 + 9) = *((_DWORD *)v18 + 8);
      }
      v20 = *((_QWORD *)v18 + 8);
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        *((_QWORD *)v18 + 8) = 0LL;
      }
      v36 = (struct CThreadContext *)__PAIR64__(LODWORD(v11), LODWORD(v10));
      v37 = v12;
      v38 = v13;
      DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        (__int64)v18 + 16,
        &v36,
        1u);
      goto LABEL_25;
    }
    Current = CThreadContext::GetCurrent(&v36);
    if ( Current < 0 )
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    v23 = v36;
    v18 = 0LL;
    v24 = *((_DWORD *)v36 + 13);
    if ( v24 )
    {
      v18 = (CRectanglesShape *)*((_QWORD *)v36 + 7);
      *((_QWORD *)v36 + 7) = *(_QWORD *)v18;
      *((_DWORD *)v23 + 13) = v24 - 1;
    }
    if ( !v18 )
    {
      v18 = (CRectanglesShape *)DefaultHeap::Alloc(0x18uLL);
      if ( !v18 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    *((_QWORD *)v18 + 1) = 0LL;
    *(_QWORD *)v18 = &CRoundedRectangleShape::`vftable';
    if ( v4[12] > 0.0 )
    {
      v30 = (CRoundedRectangleShape::FlattenedShapeSharedData *)operator new(0x68uLL);
      if ( !v30 )
      {
LABEL_40:
        *((_QWORD *)v18 + 2) = v3;
        if ( v3 )
          (**(void (__fastcall ***)(CRoundedRectangleShape::FlattenedShapeSharedData *))v3)(v3);
        goto LABEL_25;
      }
      v27 = CRoundedRectangleShape::FlattenedShapeSharedData::FlattenedShapeSharedData(
              v30,
              (const struct CRoundedRectangleGeometryData *)v4);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v26 = (CRoundedRectangleShape::SharedData *)HeapAlloc(ProcessHeap, 0, 0x50uLL);
      if ( !v26 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v27 = (CRoundedRectangleShape::FlattenedShapeSharedData *)CRoundedRectangleShape::SharedData::SharedData(
                                                                  v26,
                                                                  (const struct CRoundedRectangleGeometryData *)v4);
    }
    v3 = v27;
    goto LABEL_40;
  }
  v28 = (CRectanglesShape *)CRectanglesShape::operator new((unsigned __int64)this);
  if ( !v28 || (v18 = CRectanglesShape::CRectanglesShape(v28)) == 0LL )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, -2147024882, 0x108u);
    return v6;
  }
LABEL_25:
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  *(_QWORD *)a3 = v18;
  *((_BYTE *)a3 + 8) = 1;
  return v6;
}
