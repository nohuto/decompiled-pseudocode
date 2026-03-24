/*
 * XREFs of ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1801D5500
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1801D5898 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801D5908 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801D5EA4 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThreadWithoutDelta(
        CManipulation *this,
        const struct UpdateOnManipulationThreadWithoutDeltaArgs *a2)
{
  CManipulation *v2; // rdi
  unsigned int v3; // ebx
  unsigned int *v4; // r11
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // eax
  __int64 v9; // rcx

  v2 = (CManipulation *)((char *)this - 64);
  v3 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 64), (*((_BYTE *)a2 + 16) & 4) != 0);
  CManipulation::_ResetManipulationThreadDataIfNecessary(v5, *v4);
  *(_QWORD *)(v6 + 20) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(v6 + 28) = 0;
  *(_QWORD *)(v6 + 44) = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  *(_DWORD *)(v6 + 52) = 1065353216;
  if ( __PAIR64__(*(_DWORD *)(v6 + 176), *(_DWORD *)(v6 + 164)) != *(_QWORD *)v7
    || *(_DWORD *)(v6 + 180) != *(_DWORD *)(v7 + 8)
    || *(_DWORD *)(v6 + 184) != *(_DWORD *)(v7 + 12)
    || ((*(_BYTE *)(v7 + 16) ^ *(_BYTE *)(v6 + 188)) & 1) != 0
    || ((*(_BYTE *)(v7 + 16) ^ *(_BYTE *)(v6 + 188)) & 2) != 0 )
  {
    *(_DWORD *)(v6 + 160) = 0;
    *(_QWORD *)(v6 + 136) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v6 + 144) = 0;
    *(_QWORD *)(v6 + 148) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v6 + 156) = 0;
    *(_DWORD *)(v6 + 164) = *(_DWORD *)v7;
    *(_DWORD *)(v6 + 176) = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v6 + 180) = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v6 + 184) = *(_DWORD *)(v7 + 12);
    *(_BYTE *)(v6 + 188) ^= (*(_BYTE *)(v7 + 16) ^ *(_BYTE *)(v6 + 188)) & 1;
    *(_BYTE *)(v6 + 188) ^= (*(_BYTE *)(v7 + 16) ^ *(_BYTE *)(v6 + 188)) & 2;
    v8 = CManipulation::_SendUpdateToRenderThread(v2, 0, 0LL, 0LL);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xA3u, 0LL);
  }
  return v3;
}
