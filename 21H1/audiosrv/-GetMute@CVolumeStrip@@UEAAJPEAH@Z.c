/*
 * XREFs of ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x180054A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMute(CVolumeStrip *this, int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 31) + 72LL))(*((_QWORD *)this + 31), a2);
}
