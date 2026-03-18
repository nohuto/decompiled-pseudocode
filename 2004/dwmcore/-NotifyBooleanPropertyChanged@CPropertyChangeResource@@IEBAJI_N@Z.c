/*
 * XREFs of ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x1801B3104
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009FFAC (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18009FEC4 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyBooleanPropertyChanged(CPropertyChangeResource *this)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r11
  unsigned int v6; // ecx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v3 = *(unsigned int *)(v2 + 56);
    v4 = *(_QWORD *)(v2 + 48);
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1080LL) + 48LL);
    if ( v4 )
      v6 = *(_DWORD *)(v4 + 68);
    else
      v6 = 0;
    v9[1] = v3;
    v9[0] = v6;
    v1 = CoreUICallSend(v5, v9, 2LL, 13LL, 1, &unk_1802CCE4B);
    if ( v1 == -2018375675 )
      v1 = 0;
    if ( v1 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v1, 0xF0u, 0LL);
  }
  return (unsigned int)v1;
}
