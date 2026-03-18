/*
 * XREFs of ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801B5DC8
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B64 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009639C (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800962BC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector4PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DVector4 *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-48h]
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v16; // [rsp+50h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v7 = *(unsigned int *)(v4 + 56);
    v8 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1080LL);
    v9 = *(_QWORD *)(v4 + 48);
    v16 = *v5;
    v10 = *(_QWORD *)(v8 + 48);
    if ( v9 )
      v11 = *(_DWORD *)(v9 + 68);
    else
      v11 = 0;
    v15[0] = v11;
    v15[1] = v7;
    LOWORD(v14) = 4;
    v3 = CoreUICallSend(v10, v15, 2LL, 13LL, v14, &unk_1802CFB4B, v6, &v16);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, 0x177u, 0LL);
  }
  return (unsigned int)v3;
}
