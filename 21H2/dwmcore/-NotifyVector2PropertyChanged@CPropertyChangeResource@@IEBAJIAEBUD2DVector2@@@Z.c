/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1800476E8
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800205B0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800460F4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180047FBC (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180048504 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800E11F0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800483E8 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector2 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v6 = *(unsigned int *)(v4 + 64);
    v7 = *(_QWORD *)(v4 + 48);
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1240LL) + 40LL);
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 76);
    else
      v9 = 0;
    v12[0] = v9;
    v12[1] = v6;
    v10 = CoreUICallSend(v8, v12, 2LL, 15LL, 2, &unk_18032C425);
    v3 = v10;
    if ( v10 == -2018375675 )
    {
      return 0;
    }
    else if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x11Du, 0LL);
    }
  }
  return v3;
}
