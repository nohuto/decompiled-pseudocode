/*
 * XREFs of ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x1801B5A54
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18009639C (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800962BC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyBooleanPropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        unsigned __int8 a3)
{
  int v3; // edi
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned int v10; // ecx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  v4 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v7 = *(unsigned int *)(v5 + 56);
    v8 = *(_QWORD *)(v5 + 48);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 1080LL) + 48LL);
    if ( v8 )
      v10 = *(_DWORD *)(v8 + 68);
    else
      v10 = 0;
    v15[1] = v7;
    LODWORD(v14) = v3;
    v15[0] = v10;
    LOWORD(v13) = 1;
    v4 = CoreUICallSend(v9, v15, 2LL, 13LL, v13, &unk_1802CFB3B, v6, v14);
    if ( v4 == -2018375675 )
      v4 = 0;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v4, 0xF0u, 0LL);
  }
  return (unsigned int)v4;
}
