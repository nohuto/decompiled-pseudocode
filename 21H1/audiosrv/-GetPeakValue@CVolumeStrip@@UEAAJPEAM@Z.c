/*
 * XREFs of ?GetPeakValue@CVolumeStrip@@UEAAJPEAM@Z @ 0x1800C4040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetPeakValue(CVolumeStrip *this, float *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 32) + 72LL))(*((_QWORD *)this + 32), a2);
}
