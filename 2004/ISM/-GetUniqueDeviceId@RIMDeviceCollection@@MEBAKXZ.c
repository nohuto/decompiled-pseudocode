/*
 * XREFs of ?GetUniqueDeviceId@RIMDeviceCollection@@MEBAKXZ @ 0x18003B0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::GetUniqueDeviceId(RIMDeviceCollection *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
}
