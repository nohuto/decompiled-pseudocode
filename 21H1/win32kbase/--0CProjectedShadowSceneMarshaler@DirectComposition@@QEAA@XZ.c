/*
 * XREFs of ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0004EF0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C008E340 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CProjectedShadowSceneMarshaler *__fastcall DirectComposition::CProjectedShadowSceneMarshaler::CProjectedShadowSceneMarshaler(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  DirectComposition::CProjectedShadowSceneMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 26) = 1065353216;
  *((_QWORD *)this + 14) = 1065353216LL;
  result = this;
  *((_DWORD *)this + 10) = 131;
  *((_DWORD *)this + 27) = 2139095039;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = -1082130432;
  return result;
}
