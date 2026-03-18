/*
 * XREFs of ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B5C04
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009639C (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800962BC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // xmm1_8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-58h]
  _QWORD v16[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v7 = *(unsigned int *)(v4 + 56);
    v8 = *((_QWORD *)v5 + 2);
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1080LL);
    v10 = *(_QWORD *)(v4 + 48);
    v17 = *v5;
    v18 = v8;
    v11 = *(_QWORD *)(v9 + 48);
    if ( v10 )
      v12 = *(_DWORD *)(v10 + 68);
    else
      v12 = 0;
    v16[0] = v12;
    v16[1] = v7;
    LOWORD(v15) = 7;
    v3 = CoreUICallSend(v11, v16, 2LL, 13LL, v15, &unk_1802CFB5D, v6, &v17);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v3, 0x1FBu, 0LL);
  }
  return (unsigned int)v3;
}
