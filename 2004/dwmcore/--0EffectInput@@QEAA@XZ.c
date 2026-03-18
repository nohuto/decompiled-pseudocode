/*
 * XREFs of ??0EffectInput@@QEAA@XZ @ 0x180049A28
 * Callers:
 *     ??0EffectStage@@QEAA@XZ @ 0x18004791C (--0EffectStage@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

EffectInput *__fastcall EffectInput::EffectInput(EffectInput *this)
{
  EffectInput *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 2) = 0LL;
  result = this;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 40) = 0;
  *(_OWORD *)((char *)this + 72) = 0LL;
  return result;
}
