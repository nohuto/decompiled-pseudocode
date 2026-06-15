/*
 * XREFs of ?GetMeteringChannelCount@CVolumeStrip@@UEAAJPEAI@Z @ 0x1800C3480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::GetMeteringChannelCount(CVolumeStrip *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 32) + 80LL))(
           *((_QWORD *)this + 32),
           a2);
}
