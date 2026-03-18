/*
 * XREFs of ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x1802032F8
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180048504 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800483E8 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyColorPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct _D3DCOLORVALUE *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r11
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // ecx
  __int128 v10; // xmm0
  int v11; // eax
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-18h]

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
    v10 = *v5;
    v14[0] = v9;
    v14[1] = v6;
    v15 = v10;
    v11 = CoreUICallSend(v8, v14, 2LL, 15LL, 5, &unk_18032C437);
    v3 = v11;
    if ( v11 == -2018375675 )
    {
      return 0;
    }
    else if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1A1u);
    }
  }
  return v3;
}
