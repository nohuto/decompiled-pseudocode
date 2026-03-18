/*
 * XREFs of ??1KeyframeSequence@@QEAA@XZ @ 0x1802222B4
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18006FA04 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 */

void __fastcall KeyframeSequence::~KeyframeSequence(KeyframeSequence *this)
{
  KeyframeSequence::RemoveAllKeyFrames(this);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 8);
}
