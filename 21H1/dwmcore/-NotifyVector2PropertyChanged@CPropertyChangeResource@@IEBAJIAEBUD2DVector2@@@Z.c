/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1800961F0
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B64 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800955B0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180096158 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009639C (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800BD030 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800962BC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector2 *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r11
  unsigned int v11; // ecx
  __int64 v12; // xmm0_8
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v8 = *(unsigned int *)(v5 + 56);
    v9 = *(_QWORD *)(v5 + 48);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 1080LL) + 48LL);
    if ( v9 )
      v11 = *(_DWORD *)(v9 + 68);
    else
      v11 = 0;
    v12 = *(_QWORD *)a3;
    v14[0] = v11;
    v14[1] = v8;
    v15 = v12;
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int64 *))CoreUICallSend)(
           v10,
           v14,
           2LL,
           13LL,
           2,
           &unk_1802CFB3F,
           v6,
           &v15);
    if ( v4 == -2018375675 )
      v4 = 0;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v4, 0x11Du, 0LL);
  }
  return (unsigned int)v4;
}
