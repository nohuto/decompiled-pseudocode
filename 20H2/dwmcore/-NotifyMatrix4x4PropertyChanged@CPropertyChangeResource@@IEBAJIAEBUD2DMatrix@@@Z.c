/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x180071168
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18007100C (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B9244 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007125C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DMatrix *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r10d
  int v8; // eax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-38h]
  __int128 v20; // [rsp+70h] [rbp-28h]
  __int128 v21; // [rsp+80h] [rbp-18h]

  v3 = 0;
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v8 = *(_DWORD *)(v4 + 64);
    if ( _bittest(&v8, v7) )
    {
      v10 = v5[1];
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1080LL);
      v12 = *(_QWORD *)(v6 + 48);
      v18 = *v5;
      v19 = v10;
      v13 = v5[3];
      v20 = v5[2];
      v21 = v13;
      if ( v12 )
        v14 = *(unsigned int *)(v12 + 68);
      else
        v14 = 0LL;
      v15 = *(_QWORD *)(v11 + 48);
      v17[0] = v14;
      v17[1] = *(unsigned int *)(v6 + 56);
      v3 = CoreUICallSend(v15, v17, 2LL, 13LL, 8, &unk_180288673);
      if ( v3 == -2018375675 )
        v3 = 0;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v3, 0x228u, 0LL);
    }
  }
  return (unsigned int)v3;
}
