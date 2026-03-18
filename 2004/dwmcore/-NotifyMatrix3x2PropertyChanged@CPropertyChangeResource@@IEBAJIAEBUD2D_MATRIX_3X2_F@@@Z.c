/*
 * XREFs of ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B32B4
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009FFAC (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18009FEC4 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // xmm1_8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v6 = *(unsigned int *)(v4 + 56);
    v7 = *((_QWORD *)v5 + 2);
    v8 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1080LL);
    v9 = *(_QWORD *)(v4 + 48);
    v15 = *v5;
    v16 = v7;
    v10 = *(_QWORD *)(v8 + 48);
    if ( v9 )
      v11 = *(_DWORD *)(v9 + 68);
    else
      v11 = 0;
    v14[0] = v11;
    v14[1] = v6;
    v3 = CoreUICallSend(v10, v14, 2LL, 13LL, 7, &unk_1802CCE6D);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, 0x1FBu, 0LL);
  }
  return (unsigned int)v3;
}
