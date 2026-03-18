/*
 * XREFs of ??0EffectInput@@QEAA@AEBU0@@Z @ 0x18020223C
 * Callers:
 *     ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x180047A00 (-_Reallocate_exactly@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x180202094 (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAPEA.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x18004CED4 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 */

EffectInput *__fastcall EffectInput::EffectInput(EffectInput *this, const struct EffectInput *a2)
{
  char v4; // r8

  CDrawListBitmap::CDrawListBitmap(this, a2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  v4 = *((_BYTE *)a2 + 68);
  *((_BYTE *)this + 68) = v4;
  *((_BYTE *)this + 69) = *((_BYTE *)a2 + 69);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a2 + 72);
  if ( v4 )
  {
    *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a2 + 88);
    *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 104);
    *((_QWORD *)this + 15) = *((_QWORD *)a2 + 15);
  }
  return this;
}
