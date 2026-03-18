/*
 * XREFs of ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x1801B31D8
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009FFAC (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18009FEC4 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyColorPropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+50h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v6 = *(unsigned int *)(v4 + 56);
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1080LL);
    v8 = *(_QWORD *)(v4 + 48);
    v14 = *v5;
    v9 = *(_QWORD *)(v7 + 48);
    if ( v8 )
      v10 = *(_DWORD *)(v8 + 68);
    else
      v10 = 0;
    v13[0] = v10;
    v13[1] = v6;
    v3 = CoreUICallSend(v9, v13, 2LL, 13LL, 5, &unk_1802CCE61);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0x1A1u, 0LL);
  }
  return (unsigned int)v3;
}
