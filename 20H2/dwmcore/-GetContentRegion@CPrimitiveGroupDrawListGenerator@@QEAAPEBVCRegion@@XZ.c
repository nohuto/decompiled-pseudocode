/*
 * XREFs of ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180266940
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180009910 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801E29F0 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x180038124 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800A63AC (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1800B66E4 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800B6848 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

const struct CRegion *__fastcall CPrimitiveGroupDrawListGenerator::GetContentRegion(
        CPrimitiveGroupDrawListGenerator *this)
{
  _DWORD *v2; // rax
  CRegion *v3; // rcx
  CRegion *v4; // rcx
  unsigned int i; // edi
  __int64 v6; // r11
  void **v7; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-48h] BYREF
  __int128 *v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 15) )
  {
    v2 = DefaultHeap::Alloc(0x48uLL);
    if ( v2 )
    {
      *(_QWORD *)v2 = v2 + 2;
      v2[2] = 0;
    }
    v3 = (CRegion *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = v2;
    if ( v3 )
    {
      CRegion::`scalar deleting destructor'(v3, 1);
      v2 = (_DWORD *)*((_QWORD *)this + 15);
    }
    if ( v2 )
    {
      for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 2) + 8LL); ++i )
      {
        CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v9, i);
        if ( (*(_BYTE *)(v6 + 4) & 2) == 0 && *(_DWORD *)v6 && *(_DWORD *)(v6 + 40) < *((_DWORD *)this + 14) )
        {
          do
          {
            v7 = (void **)*((_QWORD *)this + 15);
            v11 = *v10;
            CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
              v7,
              (float *)&v11);
          }
          while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v9) );
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, 0LL, 0, -2147024882, 0x263u, 0LL);
      v4 = (CRegion *)*((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = 0LL;
      if ( v4 )
        CRegion::`scalar deleting destructor'(v4, 1);
    }
  }
  return (const struct CRegion *)*((_QWORD *)this + 15);
}
