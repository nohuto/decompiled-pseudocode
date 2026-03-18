/*
 * XREFs of ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x1800C0440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::GetPrimitivesCount(CAnimation *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
}
