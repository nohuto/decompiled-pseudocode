/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180096088
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B64 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180095FB0 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009639C (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800BD030 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BD120 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800C6F58 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800962BC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector3 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 *v5; // r10
  int v6; // r11d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  _QWORD v17[3]; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v8 = *(_QWORD *)(v4 + 16);
    v9 = *(unsigned int *)(v4 + 56);
    v15 = *v5;
    v10 = *(_QWORD *)(v8 + 1080);
    v16 = *((_DWORD *)v5 + 2);
    v11 = *(_QWORD *)(v4 + 48);
    v12 = *(_QWORD *)(v10 + 48);
    if ( v11 )
      v13 = *(_DWORD *)(v11 + 68);
    else
      v13 = 0;
    v17[0] = v13;
    v17[1] = v9;
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int64 *))CoreUICallSend)(
           v12,
           v17,
           2LL,
           13LL,
           3,
           &unk_1802CFB45,
           v6,
           &v15);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0x14Au, 0LL);
  }
  return (unsigned int)v3;
}
