/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18009FC6C
 * Callers:
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x18009FAA8 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009FFAC (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800AF0F4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800C3990 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C3A80 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800CE85C (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18009FEC4 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector3 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v6 = *(unsigned int *)(v4 + 56);
    v7 = *(_QWORD *)(v4 + 48);
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1080LL) + 48LL);
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 68);
    else
      v9 = 0;
    v11[0] = v9;
    v11[1] = v6;
    v3 = CoreUICallSend(v8, v11, 2LL, 13LL, 3, &unk_1802CCE55);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x14Au, 0LL);
  }
  return (unsigned int)v3;
}
