/*
 * XREFs of ?IsDrawListCacheDirty@CBrush@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180045D60
 * Callers:
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000F1F0 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180045F60 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800462EC (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800469E8 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006EC40 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800B3F24 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBrush::IsDrawListCacheDirty(
        CBrush *this,
        struct CDrawListCache *a2,
        CVisual **a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  CVisual *v9; // rdi
  struct _LIST_ENTRY *v10; // r14
  struct _LIST_ENTRY *v11; // rbx
  char v12; // cl
  struct _LIST_ENTRY *Blink; // rax
  char v14; // bl
  FLOAT width; // xmm1_4
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  struct CVisual *CurrentVisual; // rax
  _DWORD v20[4]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+40h] [rbp-58h] BYREF

  if ( CContent::IsDrawListCacheDirty(this, a2, (struct CDrawingContext *)a3, a4, a5) )
    return 1;
  v9 = 0LL;
  if ( *((_BYTE *)a3 + 5920) )
  {
    if ( *((_BYTE *)a3 + 5921) )
      v9 = a3[413];
    else
      v9 = (CVisual *)*((_QWORD *)a3[741] + 7);
  }
  v10 = (struct _LIST_ENTRY *)a3[741];
  v11 = 0LL;
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v10->Flink[12].Blink)(v10) )
  {
    v11 = (struct _LIST_ENTRY *)((char *)v9 + 320);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v9);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        if ( i[2].Flink == v10 )
        {
          v11 = i - 18;
          break;
        }
      }
    }
  }
  v12 = *((_BYTE *)v9 + 264);
  if ( (v12 & 3) == 0 )
    return 0;
  Blink = v11[7].Blink;
  v14 = 1;
  if ( *((_QWORD *)a2 + 3) >= (unsigned __int64)Blink )
  {
    if ( (v12 & 1) != 0 )
    {
      width = a4->width;
      v20[0] = 0;
      v20[1] = 0;
      v21 = 0LL;
      v20[3] = LODWORD(a4->height);
      *(FLOAT *)&v20[2] = width;
      CDrawingContext::CalcWorldSpaceClippedBounds(a3, v20, &v21);
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(
                               (char *)a2 + 64,
                               &v21)
        || (*((_BYTE *)v9 + 616) & 1) != 0
        && ((*((_BYTE *)v9 + 94) & 8) == 0
         || *(_QWORD *)(*((_QWORD *)this + 2) + 456LL) - *((_QWORD *)a2 + 10) >= CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta) )
      {
        ++dword_18034932C;
        return v14;
      }
      return 0;
    }
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a3 + 3));
    if ( !CurrentVisual )
      return 0;
    do
    {
      if ( (**((_DWORD **)CurrentVisual + 28) & 0x200000) != 0 )
        break;
      CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 10);
    }
    while ( CurrentVisual );
    if ( !CurrentVisual || !*((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual) + 357) )
      return 0;
  }
  return v14;
}
