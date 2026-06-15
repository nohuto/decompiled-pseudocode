/*
 * XREFs of ?AddRef@CProtectedOutputController@@UEAAKXZ @ 0x14001BDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProtectedOutputController::AddRef(CProtectedOutputController *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
}
