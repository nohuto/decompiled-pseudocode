/*
 * XREFs of ??1CExpressionValue@@QEAA@XZ @ 0x180026DDC
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180024324 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800255B8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValue::~CExpressionValue(CExpressionValue *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
