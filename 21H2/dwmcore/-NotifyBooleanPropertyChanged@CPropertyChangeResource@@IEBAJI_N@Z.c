/*
 * XREFs of ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x180203234
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180048504 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800483E8 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyBooleanPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v4 = *(unsigned int *)(v3 + 64);
    v5 = *(_QWORD *)(v3 + 48);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 1240LL) + 40LL);
    if ( v5 )
      v7 = *(_DWORD *)(v5 + 76);
    else
      v7 = 0;
    v11[1] = v4;
    v11[0] = v7;
    v8 = CoreUICallSend(v6, v11, 2LL, 15LL, 1, &unk_18032C421);
    v2 = v8;
    if ( v8 == -2018375675 )
    {
      return 0;
    }
    else if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0xF0u);
    }
  }
  return v2;
}
