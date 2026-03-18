/*
 * XREFs of ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800C5520
 * Callers:
 *     ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z @ 0x1800C4E70 (-NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CRectangleGeometry@@MEBAJI@Z @ 0x1800C4EB0 (-NotifyCurrentPropertyValues@CRectangleGeometry@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z @ 0x1800C50D0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z.c)
 *     ?NotifyCurrentPropertyValues@CViewBox@@UEBAJI@Z @ 0x180243260 (-NotifyCurrentPropertyValues@CViewBox@@UEBAJI@Z.c)
 * Callees:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180048504 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(
        CPropertyChangeResource *this,
        int a2,
        _QWORD *a3)
{
  unsigned int **v3; // rbx
  unsigned int v6; // edi
  unsigned int **v7; // rbp
  unsigned int *v8; // rsi
  bool *v9; // r14
  int v11; // eax
  __int64 v12; // rcx

  v3 = (unsigned int **)a3[1];
  v6 = 0;
  v7 = &v3[*a3];
  while ( v3 != v7 )
  {
    v8 = *v3;
    if ( _bittest(&a2, **v3) )
    {
      v9 = (bool *)this + *((_QWORD *)v8 + 1);
      if ( memcmp_0(v9, *((const void **)v8 + 6), *((_QWORD *)v8 + 2)) )
      {
        v11 = CPropertyChangeResource::NotifyPropertyChanged(
                this,
                (const struct AnimationHelper::AnimatedProperty *)v8,
                v9);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x264u);
          return v6;
        }
      }
    }
    ++v3;
  }
  return v6;
}
