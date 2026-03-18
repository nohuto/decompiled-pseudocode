/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180070E60
 * Callers:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180070DC8 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18007100C (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180072744 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B9244 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800C3610 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x180070F2C (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector2 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r11
  unsigned int v9; // ecx
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

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
    v3 = CoreUICallSend(v8, v11, 2LL, 13LL, 2, &unk_18028864F);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x11Du, 0LL);
  }
  return (unsigned int)v3;
}
