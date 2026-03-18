/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C009B59C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0097BF0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ??0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D048C (--0CCursorVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D0568 (--0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CTextVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01D05E8 (--0CTextVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 20) = 1LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = &DirectComposition::CVisualMarshaler::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_DWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_DWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 360) = 0;
  return result;
}
